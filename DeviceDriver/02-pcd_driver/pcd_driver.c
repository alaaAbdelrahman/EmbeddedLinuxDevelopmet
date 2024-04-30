//#include <errno.h>
//#include <stdio.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/kdev_t.h>
#include <linux/uaccess.h>
//#include <sys/types.h>


#define DEV_MEM_SIZE 512

/* Pseudo device's memory*/

char device_buffer[DEV_MEM_SIZE];

/*  varibel hold devic number */

/* The prototype functions for the character driver -- must come before the struct definition */
int pcd_open(struct inode *inode, struct file *filp){
    pr_info("Module opened with sucessful \n");
    
    return 0;

}
int pcd_release(struct inode *inode, struct file *filp){
        pr_info("Module released with sucessful \n");

return 0;
}
ssize_t pcd_read(struct file *filp, char __user *buff, size_t count, loff_t *f_pos){

    pr_info("Number of Bytes requested for read = %zu\n",count);
    pr_info("current file position = %lld\n",*f_pos);
    /* Adjust the count */
    if(((*f_pos)+ count) > DEV_MEM_SIZE){
        count = DEV_MEM_SIZE -(*f_pos);
    }

    /* copy to user*/
    if(copy_to_user(buff,device_buffer[(*f_pos)],count)){
        return -EFAULT;
    }

    /* update the current file postion*/

    (*f_pos) += count ;

    pr_info("Number of Bytes successfully read = %zu\n",count);
    pr_info("update file position = %lld\n",*f_pos);

    /* return the number of bytes*/
    return count;

return 0;
}
ssize_t pcd_write(struct file *filp, const char __user *buff, size_t count, loff_t *f_pos){
   pr_info("Number of Bytes requested for write = %zu\n",count);
    pr_info("current file position = %lld\n",*f_pos);

    /* Adjust the count */
    if( ((*f_pos)+ count)> DEV_MEM_SIZE){
        count = DEV_MEM_SIZE -(*f_pos);
    }

    if(!count){
        return -ENOMEM;
    }

    /* Copy from user */

    if(copy_from_user(device_buffer[(*f_pos)],buff,count)){
        return -EFAULT;
    }

    /* Update the current file position*/
    (*f_pos)+= count ;
   
return count;
}
loff_t pcd_lseek(struct file *filp, loff_t offset, int whence){
    loff_t temp;
    pr_info("lseek requested \n");

    switch(whence){

        case SEEK_SET:
        {
            if((offset > DEV_MEM_SIZE) || (offset < 0) )return -EINVAL;
            filp->f_pos = offset ;
            break;
        }
        case SEEK_CUR:
        {
            temp = filp->f_pos +offset ;
            if ((temp > DEV_MEM_SIZE) || (temp < 0)) return -EINVAL;
            filp->f_pos = temp;
            break;

        }
        case  SEEK_END:
        {
             temp = DEV_MEM_SIZE+offset ;
            if ((temp > DEV_MEM_SIZE) || (temp < 0)) return -EINVAL;
            filp->f_pos = temp;
            break;
        }
    }

return 0;
}

struct file_operations pcd_fops = {
    .open = pcd_open,
    .write = pcd_write,
    .read = pcd_read,
    .release = pcd_release,
    .llseek = pcd_lseek,
    .owner = THIS_MODULE
};

dev_t device_no;

/* cdev variable */
struct cdev pcd_cdev;

/* file operations of the driver */

struct file_operations pcd_fops;

/* declare class pointer*/

struct class * class_pcd;
struct device * dev_pcd;
static int __init pcd_driver_init (void)
{

    /**
     * @brief dynamically allocate device number through using
     *  alloc_chrdev_region(dev_t * deviceNumber, baseMinor, numberOfMinor, nameRelatedToThis Minor)
     * 
     */

       alloc_chrdev_region(&device_no, 0, 1, "pcd_devices" );

       pr_info("%s: major:minor = %d:%d \n",__func__,MAJOR(device_no),MINOR(device_no));

       /**
        * @brief initalize device with the file operations that will use
        * cdev_init(struc cdev * pcd_device , struct file_operations *pcd_fops)
        * 
        */
        cdev_init(&pcd_cdev , &pcd_fops);

        /**
         * @brief Register a device (cdev structure ) with VFS
         *        using cdev_add(struct cdev * pcd_cdev , dev_t device number , count) 
         */
         cdev_add(&pcd_cdev , device_no , 1) ;
         pcd_cdev.owner = THIS_MODULE;

          /**
           * @brief create device class under /sys/class/
           * class * create_class(owner,className)
           */
            class_pcd = class_create("pcd_class");

            /**
             * @brief populate the sysfs with device information
             * device *device_create(class*,device * parent,deviceNumber,*privateData,nameof subdirectory for device);
             */
            dev_pcd= device_create(class_pcd,NULL,device_no,NULL,"pcd");
   
            pr_info("Module init with sucessful \n"); 
   return 0;
}

/*Module's cleanup entry point */
static void __exit pcd_driver_clean(void)
{
    /** remove a device that was created with device create*/
    device_destroy(class_pcd,device_no);

     /*  destroy a struct class structure*/
     class_destroy(class_pcd);
   /* remove cdev regitration from the kerenl VFS*/
   cdev_del(&pcd_cdev);

   /* unregister a range of device numbers*/
   unregister_chrdev_region(device_no,1);

  pr_info("Good bye world\n");
}

module_init(pcd_driver_init);
module_exit(pcd_driver_clean);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alaa");
MODULE_DESCRIPTION("pesudo device driver ");
