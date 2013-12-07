#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/devices/virtual/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/platform/msm_sdcc.1",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p14", // boot
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p30", // data
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/mmc/drivers/mmc_test",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    "/sys/devices/platform/gpio-keys.0/input/input5",
    "/sys/devices/platform/gpio-keys.0/input/input5/event5/",
    "/sys/devices/virtual/input*",

    // for adb
    "/sys/devices/virtual/tty/ptmx",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p22", // /system
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p23", // /cache
    "/sys/devices/virtual/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/bus/usb",

    // USB drive is in here
    "/sys/devices/platform/msm_hsusb_host*",

    // exfat requires fuse device
    "/sys/devices/virtual/misc/fuse",

    NULL
};
