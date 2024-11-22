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
File        : NAND_Private.h
Purpose     : Private header file for the NAND flash driver.
-------------------------- END-OF-HEADER -----------------------------
*/

#ifndef NAND_PRIVATE_H               // Avoid recursive and multiple inclusion
#define NAND_PRIVATE_H

#if defined(__cplusplus)
extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       Public types
*
**********************************************************************
*/

/*********************************************************************
*
*       FS_NAND_TEST_HOOK_NOTIFICATION
*/
typedef void (FS_NAND_TEST_HOOK_NOTIFICATION)(U8 Unit);

/*********************************************************************
*
*       FS_NAND_TEST_HOOK_DATA_READ_BEGIN
*/
typedef void (FS_NAND_TEST_HOOK_DATA_READ_BEGIN)(U8 Unit, U32 PageIndex, void * pData, unsigned * pOff, unsigned * pNumBytes);

/*********************************************************************
*
*       FS_NAND_TEST_HOOK_DATA_READ_END
*/
typedef void (FS_NAND_TEST_HOOK_DATA_READ_END)(U8 Unit, U32 PageIndex, void * pData, unsigned Off, unsigned NumBytes, int * pResult);

/*********************************************************************
*
*       FS_NAND_TEST_HOOK_DATA_READ_EX_BEGIN
*/
typedef void (FS_NAND_TEST_HOOK_DATA_READ_EX_BEGIN)(U8 Unit, U32 PageIndex, void * pData, unsigned * pOff, unsigned * pNumBytes, void * pSpare, unsigned * OffSpare, unsigned * NumBytesSpare);

/*********************************************************************
*
*       FS_NAND_TEST_HOOK_DATA_READ_EX_END
*/
typedef void (FS_NAND_TEST_HOOK_DATA_READ_EX_END)(U8 Unit, U32 PageIndex, void * pData, unsigned Off, unsigned NumBytes, void * pSpare, unsigned OffSpare, unsigned NumBytesSpare, int * pResult);

/*********************************************************************
*
*       FS_NAND_TEST_HOOK_DATA_WRITE_EX_BEGIN
*/
typedef void (FS_NAND_TEST_HOOK_DATA_WRITE_EX_BEGIN)(U8 Unit, U32 PageIndex, const void ** pData, unsigned * pOff, unsigned * pNumBytes, const void ** pSpare, unsigned * pOffSpare, unsigned * pNumBytesSpare);

/*********************************************************************
*
*       FS_NAND_TEST_HOOK_DATA_WRITE_EX_END
*/
typedef void (FS_NAND_TEST_HOOK_DATA_WRITE_EX_END)(U8 Unit, U32 PageIndex, const void * pData, unsigned Off, unsigned NumBytes, const void * pSpare, unsigned OffSpare, unsigned NumBytesSpare, int * pResult);

/*********************************************************************
*
*       FS_NAND_TEST_HOOK_BLOCK_ERASE
*/
typedef void (FS_NAND_TEST_HOOK_BLOCK_ERASE)(U8 Unit, U32 PageIndex, int * pResult);

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       Functions to access ONFI parameters.
*/
int  FS__NAND_IsONFISupported    (U8 Unit, const FS_NAND_HW_TYPE * pHWType);
int  FS__NAND_ReadONFIPara       (U8 Unit, const FS_NAND_HW_TYPE * pHWType, void * pPara);

/*********************************************************************
*
*       Functions to register a test hook.
*/
void FS__NAND_SetTestHookFailSafe            (FS_NAND_TEST_HOOK_NOTIFICATION        * pfTestHook);
void FS__NAND_UNI_SetTestHookFailSafe        (FS_NAND_TEST_HOOK_NOTIFICATION        * pfTestHook);
void FS__NAND_UNI_SetTestHookDataReadBegin   (FS_NAND_TEST_HOOK_DATA_READ_BEGIN     * pfTestHook);
void FS__NAND_UNI_SetTestHookDataReadEnd     (FS_NAND_TEST_HOOK_DATA_READ_END       * pfTestHook);
void FS__NAND_UNI_SetTestHookDataReadExBegin (FS_NAND_TEST_HOOK_DATA_READ_EX_BEGIN  * pfTestHook);
void FS__NAND_UNI_SetTestHookDataReadExEnd   (FS_NAND_TEST_HOOK_DATA_READ_EX_END    * pfTestHook);
void FS__NAND_UNI_SetTestHookDataWriteExBegin(FS_NAND_TEST_HOOK_DATA_WRITE_EX_BEGIN * pfTestHook);
void FS__NAND_UNI_SetTestHookDataWriteExEnd  (FS_NAND_TEST_HOOK_DATA_WRITE_EX_END   * pfTestHook);
void FS__NAND_UNI_SetTestHookBlockErase      (FS_NAND_TEST_HOOK_BLOCK_ERASE         * pfTestHook);

/*********************************************************************
*
*       Functions to validate the implementation.
*/
int  FS_NAND_Validate            (void);
int  FS_NAND_ECC_SW_1Bit_Validate(void);

#if defined(__cplusplus)
}                /* Make sure we have C-declarations in C++ programs */
#endif

#endif // NAND_PRIVATE_H

/*************************** End of file ****************************/
