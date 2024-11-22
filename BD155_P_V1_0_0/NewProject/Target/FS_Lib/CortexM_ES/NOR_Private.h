/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*       (c) 2003 - 2016  SEGGER Microcontroller GmbH & Co. KG        *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
*       emFile * File system for embedded applications               *
*                                                                    *
*                                                                    *
*       Please note:                                                 *
*                                                                    *
*       Knowledge of this file may under no circumstances            *
*       be used to write a similar product for in-house use.         *
*                                                                    *
*       Thank you for your fairness !                                *
*                                                                    *
**********************************************************************
*                                                                    *
*       emFile version: Internal                                     *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : NOR_Private.h
Purpose     : Private header file for the NOR flash driver
-------------------------- END-OF-HEADER -----------------------------
*/

#ifndef NOR_PRIVATE_H                 // Avoid recursive and multiple inclusion
#define NOR_PRIVATE_H

#include "SEGGER.h"

#if defined(__cplusplus)
extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       Defines, configurable
*
**********************************************************************
*/
#ifndef   FS_NOR_LINE_SIZE
  #define FS_NOR_LINE_SIZE         4   // Size of a flash line. 4 for most external, bigger for some MCUs. LPC requires 16 !
#endif

#ifndef   FS_NOR_CAN_REWRITE
  #if FS_NOR_LINE_SIZE > 4
    #define FS_NOR_CAN_REWRITE     0   // Most flash chips can rewrite the same data, as long as 0-bits remain
  #else
    #define FS_NOR_CAN_REWRITE     1
  #endif
#endif

#ifndef   FS_NOR_FAR                  // Used for 8/16-bit CPUs only
  #define FS_NOR_FAR
#endif

#ifndef   FS_NOR_DI
  #define FS_NOR_DI()
#endif

#ifndef   FS_NOR_EI
  #define FS_NOR_EI()
#endif

#ifndef   FS_NOR_DELAY
  #define FS_NOR_DELAY()
#endif

/*********************************************************************
*
*       Public types (internal use)
*
**********************************************************************
*/

/*********************************************************************
*
*       FS_NOR_PROGRAM_HW
*/
typedef struct FS_NOR_PROGRAM_HW {
  int  (*pfRead)         (U8 Unit, void * pDest, U32 SrcAddr, U32 NumBytes);
  int  (*pfEraseSector)  (U8 Unit, U32 BaseAddr, U32 SectorAddr);
  char (*pfWrite)        (U8 Unit, U32 BaseAddr, U32 SectorAddr, U32 DestAddr, const U16 FS_NOR_FAR * pSrc0, int NumItems);
} FS_NOR_PROGRAM_HW;

/*********************************************************************
*
*       FS_NOR_TEST_HOOK_NOTIFICATION
*/
typedef void (FS_NOR_TEST_HOOK_NOTIFICATION)(U8 Unit);

/*********************************************************************
*
*       FS_NOR_TEST_HOOK_DATA_READ_BEGIN
*/
typedef void (FS_NOR_TEST_HOOK_DATA_READ_BEGIN)(U8 Unit, void * pData, U32 * pOff, U32 * pNumBytes);

/*********************************************************************
*
*       FS_NOR_TEST_HOOK_DATA_READ_END
*/
typedef void (FS_NOR_TEST_HOOK_DATA_READ_END)(U8 Unit, void * pData, U32 Off, U32 NumBytes, int * pResult);

/*********************************************************************
*
*       FS_NOR_TEST_HOOK_DATA_WRITE_BEGIN
*/
typedef void (FS_NOR_TEST_HOOK_DATA_WRITE_BEGIN)(U8 Unit, const void ** pData, U32 * pOff, U32 * pNumBytes);

/*********************************************************************
*
*       FS_NOR_TEST_HOOK_DATA_WRITE_END
*/
typedef void (FS_NOR_TEST_HOOK_DATA_WRITE_END)(U8 Unit, const void * pData, U32 Off, U32 NumBytes, int * pResult);

/*********************************************************************
*
*       FS_NOR_TEST_HOOK_SECTOR_ERASE
*/
typedef void (FS_NOR_TEST_HOOK_SECTOR_ERASE)(U8 Unit, U32 PhySectorIndex, int * pResult);

/*********************************************************************
*
*       FS_NOR_BM_PSH_INFO
*/
typedef struct FS_NOR_BM_PSH_INFO {
  U8 NumBytes;
  U8 OffEraseCnt;
  U8 OffEraseSignature;
} FS_NOR_BM_PSH_INFO;

/*********************************************************************
*
*       FS_NOR_BM_LSH_INFO
*/
typedef struct FS_NOR_BM_LSH_INFO {
  U8 NumBytes;
} FS_NOR_BM_LSH_INFO;

/*********************************************************************
*
*       FS_NOR_LSH_INFO
*/
typedef struct FS_NOR_LSH_INFO {
  U8 NumBytes;
} FS_NOR_LSH_INFO;

/*********************************************************************
*
*       Public data
*
**********************************************************************
*/

/*********************************************************************
*
*       HW layers for CFI compliant NOR devices
*/
extern const FS_NOR_PROGRAM_HW FS_NOR_Program_Intel_1x16;
extern const FS_NOR_PROGRAM_HW FS_NOR_Program_AMD_1x16;
extern const FS_NOR_PROGRAM_HW FS_NOR_Program_IntelFast_1x16;
extern const FS_NOR_PROGRAM_HW FS_NOR_Program_AMDFast_1x16;
extern const FS_NOR_PROGRAM_HW FS_NOR_Program_Intel_2x16;
extern const FS_NOR_PROGRAM_HW FS_NOR_Program_AMD_2x16;

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       Functions to read the CFI information from the NOR flash device.
*/
void FS_NOR_CFI_ReadCFI_1x16(U8 Unit, U32 BaseAddr, U32 Off, U8 * pData, unsigned NumItems);
void FS_NOR_CFI_ReadCFI_2x16(U8 Unit, U32 BaseAddr, U32 Off, U8 * pData, unsigned NumItems);

/*********************************************************************
*
*       Functions to register a test hook.
*/
void FS__NOR_SetTestHookFailSafe         (FS_NOR_TEST_HOOK_NOTIFICATION     * pfTestHook);
void FS__NOR_SetTestHookDataReadBegin    (FS_NOR_TEST_HOOK_DATA_READ_BEGIN  * pfTestHook);
void FS__NOR_SetTestHookDataReadEnd      (FS_NOR_TEST_HOOK_DATA_READ_END    * pfTestHook);
void FS__NOR_SetTestHookDataWriteBegin   (FS_NOR_TEST_HOOK_DATA_WRITE_BEGIN * pfTestHook);
void FS__NOR_SetTestHookDataWriteEnd     (FS_NOR_TEST_HOOK_DATA_WRITE_END   * pfTestHook);
void FS__NOR_SetTestHookSectorErase      (FS_NOR_TEST_HOOK_SECTOR_ERASE     * pfTestHook);
void FS__NOR_BM_SetTestHookFailSafe      (FS_NOR_TEST_HOOK_NOTIFICATION     * pfTestHook);
void FS__NOR_BM_SetTestHookDataReadBegin (FS_NOR_TEST_HOOK_DATA_READ_BEGIN  * pfTestHook);
void FS__NOR_BM_SetTestHookDataReadEnd   (FS_NOR_TEST_HOOK_DATA_READ_END    * pfTestHook);
void FS__NOR_BM_SetTestHookDataWriteBegin(FS_NOR_TEST_HOOK_DATA_WRITE_BEGIN * pfTestHook);
void FS__NOR_BM_SetTestHookDataWriteEnd  (FS_NOR_TEST_HOOK_DATA_WRITE_END   * pfTestHook);
void FS__NOR_BM_SetTestHookSectorErase   (FS_NOR_TEST_HOOK_SECTOR_ERASE     * pfTestHook);
void FS__NOR_PHY_SFDP_SetTestHookFailSafe(FS_NOR_TEST_HOOK_NOTIFICATION     * pfTestHook);

/*********************************************************************
*
*       Functions that return information about the driver.
*/
void FS__NOR_GetLSHInfo   (U8 Unit, FS_NOR_LSH_INFO * pLSHInfo);
void FS__NOR_BM_GetPSHInfo(FS_NOR_BM_PSH_INFO * pPSHInfo);
void FS__NOR_BM_GetLSHInfo(FS_NOR_BM_LSH_INFO * pLSHInfo);

#if defined(__cplusplus)
}                /* Make sure we have C-declarations in C++ programs */
#endif

#endif // NOR_PRIVATE_H

/*************************** End of file ****************************/
