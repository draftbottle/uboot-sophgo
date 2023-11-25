/* this file should be generated by mkcvipart.py,please do not modify this file manually*/

#ifndef CVIPART_H
#define CVIPART_H
#define CONFIG_ENV_IS_IN_MMC
#define CONFIG_ENV_SECT_SIZE  0x40000
#define CONFIG_SYS_MMC_ENV_DEV 0
#define CONFIG_SYS_MMC_ENV_PART 0
#define PART_LAYOUT    "blkdevparts=mmcblk0:8192K(BOOT),512K(MISC),128K(ENV),70656K(ROOTFS),40960K(SYSTEM),15240K(CFG),3145728K(DATA);mmcblk0boot0:1M(fip),1M(fip_bak);"
#define ROOTFS_DEV "/dev/mmcblk0p4"
#define CONFIG_ENV_OFFSET 0x880000
#define CONFIG_ENV_SIZE 0x20000
#define PARTS_OFFSET \
"BOOT_PART_OFFSET=0x0\0" \
"BOOT_PART_SIZE=0x4000\0" \
"MISC_PART_OFFSET=0x4000\0" \
"MISC_PART_SIZE=0x400\0" \
"ENV_PART_OFFSET=0x4400\0" \
"ENV_PART_SIZE=0x100\0" \
"ROOTFS_PART_OFFSET=0x4500\0" \
"ROOTFS_PART_SIZE=0x22800\0" \
"SYSTEM_PART_OFFSET=0x26d00\0" \
"SYSTEM_PART_SIZE=0x14000\0" \
"CFG_PART_OFFSET=0x3ad00\0" \
"CFG_PART_SIZE=0x7710\0" \
"DATA_PART_OFFSET=0x42410\0" \
"DATA_PART_SIZE=0x600000\0"
#define SPL_BOOT_PART_OFFSET 0x0
#endif