#!/bin/sh

# 0. Clean up
rm -rf ../kernel_image
rm -rf ../m7wlj_boot_repacked.img

# 1. compile kernel
cd ../../
make m7wlj_defconfig
make -j4

# 2. copy kernel
mkdir ./nuc/kernel_image
mkdir ./nuc/kernel_image/modules

find . -path "./nuc" -prune -o -iname "*.ko" -type f -print | xargs -i cp {} ./nuc/kernel_image/modules 
cp ./arch/arm/boot/zImage ./nuc/kernel_image

