## to_load_image 

> [!steps to boot Linux image ]
> 1- load the ==Linux kernel image== to the DDR memory form mmc 
> ```
> cmd  dev n:p  address     image 
> load mmc 0:1 kernal_addr_r uImage
> ```
> 2- load the dtb image to the DDR memory from mmc
> ```
> cmd  dev n:p  address     image 
> load mmc 0:1 fdt_addr_r nameOfBoard.dtb
> ```
> 3- send information that the kernel need to successfully boot such as:
> ```
> 			   - console to send the debug message 
> 
> 
> 				console = name of console, buadRate
> 				 console= ttyo0,115200
> ```
> 
> 			     - root file system location to mounted by kerenl 
> ```
> 				     root=location    permission
> 				     root=/dev/mmcblk0p2  rw 
> ```
> 4- boot from memory command 
> ```
> 	bootm kernel_addr_r - fdt_addr_r
> ```


## ***to automate all steps above we create***

---

***uEnv.txt***
```
myserver=setenv serverip      ......
myaddr = setenv ipaddr         .......
loadKernel=load mmc 0:1 kernal_addr_r uImage
 loadDtb=load mmc 0:1 fdt_addr_r  .dtb
bootSys =bootm kernel_addr_r - fdt_addr_r

bootargs= console= tty??,baudrate root=locationOfFileSytem permission
bootcmd="commands"
bootcmd="echo "hello from uEnv.txt automation", run loadKerenl, run loadDtb, run bootSys
```
---
