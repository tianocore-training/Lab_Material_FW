
For Ubuntu 20.04 Nasm 2.14 is the default
Edk2 requires Nasm 2.15. or greater.  To install Nasm 2.15.05 follow these instructions:  https://www.linuxfromscratch.org/blfs/view/cvs/general/nasm.html

Package Information
Download (HTTP): https://www.nasm.us/pub/nasm/releasebuilds/2.15.05/nasm-2.15.05.tar.xz

Download MD5 sum: 1c9802446d7341c41c21eb98c7859064

Download size: 976 KB

Estimated disk space required: 40 MB

Estimated build time: 0.2 SBU

untar 
then in directory of untar
$ ./configure --prefix=/usr
$ make

$ sudo make install