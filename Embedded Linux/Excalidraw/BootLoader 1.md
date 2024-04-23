 **B**ootloader has two main tasks :
		1-  *Initialize* the system to a basic level 
		 2-  Load kernel 
		 
When power on or reset the system:==minimal state== only Resources operational at the beginning are :
			1- single cpu core 
			2- some on chip static memory 
			
details of the interface between the bootloader and kernel  ==Architecture specific==  in each case Bootloader:
   1- pass a pointer to a structure containing information about the hardware configuration
   2- It has to pass a pointer to the kernel command line
   
**Boot Sequence** become ==multi-stage procedure== and details are very specific to each SoC
  

**==Phases of Boot Sequence==**
1- Phase one: ROM code 
        **ROM code[[#^67914c]]**:
           1- the code that runs immediately after a reset or power-on has to be stored on-chip in the SoC;
           2- it's loaded into the chip when it's manufactured 
           3- is proprietary and cannot be replaced by an open source equivalent.
          4- is capable of loading small chunk of code from one of several programmed           location into the SRAM In SoCs where the SRAM is not large enough to load a
              full bootloader like U-Boot, there has to be an **intermediate loader** called ==the secondary program loader, or SPL.==
             *==at the end The SPL is present in SRAM==*
         

---
2- *Phase two*: ==Secondary program loader== 
	  1- set up memory controller and other essential parts of       the system 
	   2- Functionality of the SPL is limited by 
		  ==the size of  the SRAM==
	  3- SPL has file system drivers built in , it can read file             names such as u-boot
	
**At the end of the second phase, the TPL is present in DRAM, and the SPL can make a jump to that area


![[bootloader.excalidraw]]

3- *Phase Three* TPL
	*There is Full Bootloader such as u-Boot there is a simple command line interface that lets you perform ==maintenance task ==*: Loading and Booting kernel images into flash Storage

*==Embedded bootloaders usually disappear from memory once the kernel is running, and perform no further part in the operation of the system.==*


---

**U-Boot**
- search for configuration in **config directory**
- make file board configuration **==make config_file==*
- pass to make Cross_compile=Compiler of your toolchain





	


