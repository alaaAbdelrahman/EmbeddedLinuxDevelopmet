package in buildroot has two files:
   -  ==* .mk file*==: describing how to build the package 
   - *==Config.in file==* describing the configuration options for this package
- 


**How buildroot works:
Buildroot is
- basically ==a set of Makefiles== that download, configure, and compile software with the correct options. 
- It also includes patches for various software packages - mainly the ones involved in the cross-compilation toolchain (`gcc`, `binutils` and `uClibc`).
- there is one Makefile per software package ---> extension **==.mk==**
- Makefiles are split into many different parts.

     - The `toolchain/` directory contains the Makefiles and associated files for all software related to the cross-compilation toolchain: `binutils`, `gcc`, `gdb`, `kernel-headers` and `uClibc`.
	- The `arch/` directory contains the definitions for all the processor architectures that are supported by Buildroot.
	- The `package/` directory contains the Makefiles and associated files for all user-space tools and libraries that Buildroot can compile and add to the target root filesystem. There is one sub-directory per package.
	- The `linux/` directory contains the Makefiles and associated files for the Linux kernel.
	- The `boot/` directory contains the Makefiles and associated files for the bootloaders supported by Buildroot.
	- The `system/` directory contains support for system integration, e.g. the target filesystem skeleton and the selection of an init system.
	- The `fs/` directory contains the Makefiles and associated files for software related to the generation of the target root filesystem image.
	
	- Each directory contains at least 2 files:

		- `something.mk` is the Makefile that downloads, configures, compiles and installs the package `something`.
		- `Config.in` is a part of the configuration tool description file. It describes the options related to the package.
	-Config.in` files contain entries for almost anything configurable in Buildroot.
	
```
config BR2_PACKAGE_LIBFOO
        bool "libfoo"
        depends on BR2_PACKAGE_LIBBAZ
        select BR2_PACKAGE_LIBBAR
        help
          This is a comment that explains what libfoo is. The help text
          should be wrapped.

          http://foosoftware.org/libfoo/



```