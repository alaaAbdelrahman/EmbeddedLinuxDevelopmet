
### Using TFTP for Booting

1. **Keep Boot Images on SD Card**: Store boot images like SPL, U-Boot, and uEnv.txt on the SD card.

2. **Host Boot Images**: Store other boot images like Kernel, dtb, and initramfs on the Linux host PC at the location `/srv/tftp`. Configure this through `/etc/default/tftpd-hpa`.

3. **Boot Sequence**: Initially, boot the board via SD card up to U-Boot.

4. **TFTP Transfer**: U-Boot reads the `uEnv.txt` file and executes TFTP commands to fetch and place various boot images from the TFTP server on the DDR memory at a specific address.

5. **Boot from DDR Memory**: Instruct U-Boot to boot from the location where the boot images are placed in DDR memory.

### TFTP Commands

You can use the following command to transfer files between the board and the host using TFTP:

```bash
tftp -r remote_file_name -g server_ip
```

**Use Case**
TFTP boot is a very handy way of booting when you need to recompile your kernel repeatedly.

