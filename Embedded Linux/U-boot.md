***To load the binary using U-boot, Run the following commands in the U-boot shell:***

`````
fatload mmc 0:1 kernel_addr_r kernel.bin
fatload mmc 0:1 fdt_addr_r virt.dtb
booti kernel_addr_r - fdt_addr_r
bootz -----> if zImage
`````
***To tell U-boot to execute command above automatically?***
	To prepare the script
			*Note:*
			 - **When U-boot is built, A bunch of useful tools is built** one of them is ***mkimage***
	 - ***mkimage***: *This tool takes some image or data as an input, attaches a header to it and produces an image in format that U-boot is familiar with.*
	```
            **mkimage -T script -d boot.txt boot.scr**
   


for qemu emulation --> Vexpress-a9 (QEMU)



Start Qemu with the **Emulated SD** card

```shell
qemu-system-arm -M vexpress-a9 -m 128M -nographic \
-kernel u-boot/u-boot \
-sd sd.img
```
***Address in RAM where the Linux device tree will be loaded.***

```
fdtaddr**=**0x88000000
```

***Address in RAM where the Linux kernel image will be loaded.***

```
kerneladdr**=**0x82000000
```

***Command to reset the board (TODO).***

```
boardreset**=**echo “Resetting all images to factory defaults”
```

***Arguments for the Linux command line, this will be read by the bootz command.***


```
bootargs = console=ttyS0,115200n8 root=/dev/mmcblk0p1 rootfstype=ext4 rootwait
```

***Command to load the Linux device tree from MMC***

```
loadfdt**=**load mmc 0:1 ${fdtaddr} /boot/dev.dtb
```

***Command to load the Linux kernel image from MMC***

```
loadlinux**=**load mmc 0:1 ${kerneladdr} /boot/uimage
```

***Command to boot Linux.  Load the required images into RAM, then begin
 running the kernel.  This is the last command that U-Boot will run.***

```
bootlinux**=**run loadlinux; run loadfdt; bootz ${kerneladdr} – ${fdtaddr}
```



```
bootcmd**=**if run resetrequested; then run boardreset; fi; run bootlinux
```


**Instead of boot.scr ---> you can create file uEnv.txt save it in boot partition**


---
[Link to uEnv.txt file](path_to_uEnv.txt.md)

---
