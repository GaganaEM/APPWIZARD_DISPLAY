/*********************************************************************
*                   (c) SEGGER Microcontroller GmbH                  *
*                        The Embedded Experts                        *
*                           www.segger.com                           *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File    : FS_ConfigMMC_CardMode_iMXRT1052_NXP_MIMXRT1050_EVK.c
Purpose : Configuration file for SD card.
*/

#include "FS.h"
#include "FS_MMC_CM_HW_iMXRT1052_NXP_MIMXRT1050_EVK.h"

/*********************************************************************
*
*       Defines, configurable
*
*       This section is the only section which requires changes
*       for typical embedded systems using the NOR flash driver with a single device.
*
**********************************************************************
*/
#define ALLOC_SIZE          0x2000        // Size of memory dedicated to the file system. This value should be fine tuned according for your system.

/*********************************************************************
*
*       Static data
*
*       This section does not require modifications in most systems.
*
**********************************************************************
*/

/*********************************************************************
*
*       Memory pool used for semi-dynamic allocation.
*/
#ifdef __ICCARM__
  #pragma location="FS_RAM"
  static __no_init U32 _aMemBlock[ALLOC_SIZE / 4];
#endif
#ifdef __CC_ARM
  static U32 _aMemBlock[ALLOC_SIZE / 4] __attribute__ ((section ("FS_RAM"), zero_init));
#endif
#ifdef __SES_ARM
  static U32 _aMemBlock[ALLOC_SIZE / 4] __attribute__ ((section ("FS_RAM")));
#endif
#if (!defined(__ICCARM__) && !defined(__CC_ARM) && !defined(__SES_ARM))
  static U32 _aMemBlock[ALLOC_SIZE / 4];
#endif

/*********************************************************************
*
*       Public code
*
*       This section does not require modifications in most systems.
*
**********************************************************************
*/

/*********************************************************************
*
*       FS_X_AddDevices
*
*  Function description
*    This function is called by the FS during FS_Init().
*    It is supposed to add all devices, using primarily FS_AddDevice().
*
*  Note
*    (1) Other API functions may NOT be called, since this function is called
*        during initialization. The devices are not yet ready at this point.
*/
void FS_X_AddDevices(void) {
  //
  // Give file system memory to work with.
  //
  FS_AssignMemory(&_aMemBlock[0], sizeof(_aMemBlock));
  //
  // Configure the size of the logical sector and activate the file buffering.
  //
  FS_SetFileWriteMode(FS_WRITEMODE_FAST);
#if FS_SUPPORT_FILE_BUFFER
  FS_ConfigFileBufferDefault(512, FS_FILE_BUFFER_WRITE);
#endif
  //
  // Add and configure the SD/MMC driver for the SD card. Volume name "mmc:0:"
  //
  FS_AddDevice(&FS_MMC_CardMode_Driver);
  FS_MMC_CM_Allow4bitMode(0, 1);
  FS_MMC_CM_AllowHighSpeedMode(0, 1);
  FS_MMC_CM_SetHWType(0, &FS_MMC_CM_HW_iMXRT1052_NXP_MIMXRT1050_EVK);
  //
  // Add and configure the SD/MMC driver for the eMMC device. Volume name "mmc:1:"
  //
  FS_AddDevice(&FS_MMC_CardMode_Driver);
  FS_MMC_CM_Allow4bitMode(1, 1);
  FS_MMC_CM_AllowHighSpeedMode(1, 1);
  FS_MMC_CM_SetHWType(1, &FS_MMC_CM_HW_iMXRT1052_NXP_MIMXRT1050_EVK);
}

/*********************************************************************
*
*       FS_X_GetTimeDate
*
*  Function description
*    Current time and date in a format suitable for the file system.
*
*    Bit 0-4:   2-second count (0-29)
*    Bit 5-10:  Minutes (0-59)
*    Bit 11-15: Hours (0-23)
*    Bit 16-20: Day of month (1-31)
*    Bit 21-24: Month of year (1-12)
*    Bit 25-31: Count of years from 1980 (0-127)
*/
U32 FS_X_GetTimeDate(void) {
  U32 r;
  U16 Sec, Min, Hour;
  U16 Day, Month, Year;

  Sec   = 0;        // 0 based.  Valid range: 0..59
  Min   = 0;        // 0 based.  Valid range: 0..59
  Hour  = 0;        // 0 based.  Valid range: 0..23
  Day   = 1;        // 1 based.    Means that 1 is 1. Valid range is 1..31 (depending on month)
  Month = 1;        // 1 based.    Means that January is 1. Valid range is 1..12.
  Year  = 0;        // 1980 based. Means that 2007 would be 27.
  r   = Sec / 2 + (Min << 5) + (Hour  << 11);
  r  |= (U32)(Day + (Month << 5) + (Year  << 9)) << 16;
  return r;
}

/*************************** End of file ****************************/
