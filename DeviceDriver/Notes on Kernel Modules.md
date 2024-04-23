
![[KernelVsUserSpace.excalidraw.png]]
kernel space code runs on The CPU, ==The operation mode of CPU will be in Privileged mode==.that means
the kernel level code can access **many of the restricted resources of the system**such as: 
 - memory 
 - peripherals
 - processor instructions 
 - Control settings of the processor
 -
***user  space***---> CPU will be in ==Non-Privileged mode or in restricted mode==. User Space application **can't restricted resources** 

==**user space means non kernel code**==  
![[LinuxLayer.excalidraw.png]]
if user space program wants any services to use the restricted resources----> It can request to ==***the kernel level code***== using ==system calls==

***System call handlers***: are kernel level codes, which run in privileged mode to fulfill the user space request

- Linux supports **dynamic insertion and removal of code from the kernel while the
   system is up and running**. The code what we add and remove at run time is called
   a ==***kernel module**==---> ***LKM***:  ==*Linux kernel module*==
- ***LKM is loaded into the Linux kernel:** 
		- you can start using new features  and functionalities exposed by the kernel module ==without even restarting the device.== 
		- extends ==the functionality of the kernel by introducing new features to the kernel ==such as security, device drivers, file system drivers, system calls etc. (modular  approach )
***Advantage  of  LKM*** allows your embedded Linux systems to:
-  have ==only minimal base kernel image==(less runtime storage) and *optional device drivers  and other features are supplied on demand* via ***module insertion***

***LKMs have two types:***
• ***Static(y)***
     ➢ When you build a Linux kernel, **you can make your module statically linked to the kernel image** ==(module becomes part of the final Linux kernel image )==. 
     ➢ This method ==**increases the size**== of the final Linux kernel image. 
     ➢ The module is **‘built-in’** into the Linux kernel image, you ***can not ‘unload’ the                   module. It occupies the memory permanently during run time***
     
***• Dynamic(m)***
	➢  Modules are *==NOT built into==* the final kernel image
	➢ Modules are **compiled and linked**separately to produce ***.ko files.***
	➢You can ==***dynamically load and unload these modules ***==from the kernel using user space programs such as ==insmod==, ==modprobe ==, ==rmmod.==


---

***Linux Kernel Module:*** looks as normal c program but has different things but ***we write kernel module according to a some rules because the kernel module is going to run in the kernel space***

***Linux Kernel Module Syntax***

![[LKM_syntax.excalidraw.png]]
---



---
***Header***
Every kernel module should to include this header file <==linux/module.h==>
***Linux header file :***
it has got a definition of various a macros, which we are going to use a while writing a kernel module
***why must include this header??**
-->write a kernel module that is going to be executed in kernel
space--->you should be using kernel headers

***DON'T***
include any user-space library headers like C std library header files.
• No user space library is linked to the kernel module

***Where the Kernel header file locate ?***
 kernel headers live in   
```
 linux_source_base/include/linux/
```



---
***Code***
```
/*Module's init entry point */
static int __init helloworld_init(void)
{
   pr_info("Hello world\n");
   return 0;
}

/*Module's cleanup entry point */
static void __exit helloworld_cleanup(void)
{
  pr_info("Good bye world\n");
}


```

***Module initialization function***
 -  Prototype
```
				static init __init fun_name(void);
```
- Must return a value:
		- 0 for success
		- nonzero for failure 
		- based on that value the kernel load on success on not load on failue 
- This is an **entry point** to your module ( like main). 
	- In case of static modules This function will get called **during boot time**
     -  In the case of dynamic modules, this function will get called during
          ***module insertion***
-  There should be **one module initialization entry point in the module** 
- Operation
	 - Initialization of devices
	 - Initialization of device private data structures
     - Requesting memory dynamically for various kernel data structures
		and services
	- Request for allocation of major-minor numbers
    -  Device file creation
---


***Explain usage of static keyword***
![[ExplainStatic.excalidraw.png]]


---

---


***Module clean-up function***
-  Prototype
```
     void fun_name(void);
```
-  This is an entry point when the module is **removed**
- Since you can not remove static modules--->clean-up function will get called
   only in the case of **dynamic modules**when it is removed using user space
   command such as **rmmod**
- If you write a module that will always be statically linked with the kernel, then 
	- ***there is no  need to implement this function.***
     -  Even if your static module has a clean-up function, the kernel build system
         will remove it during the build process ==if there is an __exit marker.==
- Operation 
         - Free memory which are requested in init function
         - De-init the devices or leave the device in the proper state
---
***Function Attributes***
![[function_attributes.excalidraw.png]]

***__init***
- ==__init and __exit makes sense only for static modules (built-in modules)==

- Is a macro which will be translated into ==compiler directive==, which instructs the
	compiler to put the code in---> ==.init section== of the final ELF of linux kernel image.
-  .init section will be ==freed from the memory== by **the kernel** during ==boot time== once all the
	 *initialization functions get executed.*
	 

> [!Explain for that behavior:]
> 	- Since the built-in driver cannot be unloaded, its init function will not be called again
>       until the next reboot, that’s why there is no need to keep references to its init function


> [!using __init macro]
>  is a technique, when used with a function, the kernel will free the
> code memory of that function after its execution.

> [!__initdata with variables ]
> >
> >that will be dropped after the initialization. __initdata, which works similarly to __init but for init variables rather than functions.

> [!__exit macro with a clean-up function]
> the kernel build system will exclude those functions during the build
> process itself.

***How kernel build System deal With function attributes***
![[Sections.excalidraw.png]]

---


***Module entry points registration***
```
module_init(init_func)
module_exit(exit_func)
```
- These are ==the macros== used to **register** your module’s init function and clean-up
	function with the kernel.
-  macro defined in linux/module.h

> [!Behaviour]
> module_init() will add its parameter to the init entry point database of the kernel
> module_exit() will add its parameter to exit entry point database of the kernel
> 
> 


***Module Description***
![[moduleDescription.excalidraw]]

---
***Building a kernel module***
- *Kernel module can be built in 2 ways:*
     - Statically linked against the kernel image
    -  Dynamically loadable.

**Dynamically loadable**
![[Dynamicmoduleexcalidraw]]



***Out of tree***:  *means outside of the Linux kernel source tree.*
-  module separately build and link it against the running kernel
-  loading an out of tree kernel module, kernel throws a warning message 
**in tree modules:** *are already part of the Linux kernel are called* 
			(approved by the kernel developers and maintainers )

***Building a kernel module(out of tree)***

 - Modules are built using =="kbuild"==which is the build system used by the
	Linux kernel
-  Modules must use "kbuild" to stay compatible with changes in the build
	infrastructure and to pick up the right flags to GCC
 - To build external modules, ==you must have a prebuilt kernel source available
			that contains the configuration and header files used in the build==
-  This ensures that as the developer changes the kernel configuration, his
	custom driver is automatically rebuilt with the correct kernel configuration

> [!Thumb rule: ]
> “Have a precompiled Linux kernel source tree on your machine and
> build your module against that “

> [! There are two ways to obtain a prebuilt kernel version]
>• Download kernel from your distributor and build it by yourself
> • Install the Linux-headers- of the target Linux kernel

***The command to build an external module is:***
```
make -C <path to linux kernel tree> M=<path to your module> [target]
```

![[Kbuild.excalidraw.png]]you have to trigger the top level makefile of the Linux kernel source tree,
To trigger top level makefile of the Linux kernel source tree, we use -C switch with the make.
hen you execute make -C, so make first enters into the Linux kernel source tree and it executes a top level make file.---->***That's how kernel build system triggers.***

When the make invokes top level make file:
  - all the compiler switches,
  - the dependency lists, 
  - version string, 
  - everything will be utilized to build your kernel module.
  - have to direct the top level makefile to your local makefile, or a local folder where you have kept your Out of tree module source. by using the variable M.
		  *==M is equal to you have to give path  to your module source.==*


**This is a command syntax in short make -C kernel directory and M=path to the
local module, and then you have to mention targets.**

```
make -C $KDIR M=$PWD [Targets]
```

> [!-C $KDIR:]
>The directory where the kernel  source is located. "make" will actually
> change to the specified directory when executing and will change back when
> finished
```
> if on host machine kernel header directory will be in 
>       /lib/modules/${uname -r}/build
```



> [!M=$PWD:]
> Informs kbuild that an external module is being built. The value
> given to "M" is the absolute path of the directory where the external module
> (kbuild file) is located

> [!Targets]
>  
> - modules :The default target for external modules. It has the same functionality
> 		as if no target was specified.
> - modules_install: Install the external module(s). The default location is
> ```
> 	/lib/modules/<kernel_release>/extra/, but a prefix may be added with
> 	INSTALL_MOD_PATH
> ```
>       ====
> - clean : Remove all generated files in the module directory only.
> -  help:List the available targets for external modules

---

***Creating a local Makefile***

In the local makefile you should define a kbuild variable like below
```
obj-<X> := <module_name>.o
```
Here obj-<X> is kbuild variable and ‘X’ takes one of the below values;
    - X = n , Do not compile the module
    - X = y, Compile the module and link with kernel image
    - X = m , Compile as dynamically loadable kernel module

```
obj-m := main.o
```
The kbuild system will build main.o from main.c and after linking, will result in the
kernel module ==***main.ko.***==


