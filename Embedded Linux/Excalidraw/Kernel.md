Keywords such as 
mainline--> branch that actively developed 
stable --> not developed now 
long-term --> stable for long time 

*Kernel does three jobs:*
		- manage resources 
		- interface with hardware 
		- provide **API** that provide useful level of abstraction to user space 
*Kernel build generates two files in top level directory*
- **vmlinux**: is the kernel as ELF binary
- **system.map**:  contains the symbol table in a human readable form.
---
***Most bootloaders cannot handle ==ELF code== directly***
*==vmlinux== convert to one of that:*
	-**Image**: vmlinux converted to ==raw binary format ==
	-**zImage**: compressed ==Image==
	 -**uImage**: zImage + u-boot header 

***Booting QEMU**
Assuming that you have already installed qemu-system-arm, you can launch with the
kernel and the .dtb file for the ARM Versatile PB, as follows:

```
$ QEMU_AUDIO_DRV=none \
qemu-system-arm -m 256M -nographic -M versatilepb -kernel zImage \
-append "console=ttyAMA0,115200" -dtb versatile-pb.dtb
```
Note that setting QEMU_AUDIO_DRV to none is just to suppress error messages from QEMU
about missing configurations for the audio drivers,	 

***Kernel panic***  ==when the kernel encounters an unrecoverable error.== 
		-*Kernel print message on the console  and then halt*
---
---
busybox init 
rcs 




		
		
		

	 



