#!/bin/bash
# Repacks kernel and ramdisk into a bootimg

# 1.repack ramdisk
./repack_ramdisk ../ramdisk/m7wlj_kk_boot/ramdisk
cp ../ramdisk/m7wlj_kk_boot/new-ramdisk.cpio.gz ../ramdisk/new-ramdisk.cpio.gz

# 2.repack zImage and modules


# 3.repack boot.img
./mkbootimg --kernel ../kernel_image/zImage --ramdisk ../ramdisk/new-ramdisk.cpio.gz --cmdline 'console=ttyHSL0,115200,n8 androidboot.hardware=m7wlj user_debug=31' --board M7WLJ --base 0x80600000 --pagesize 2048 --ramdiskaddr 0x81E00000 --output ../m7wlj_boot_repacked.img
