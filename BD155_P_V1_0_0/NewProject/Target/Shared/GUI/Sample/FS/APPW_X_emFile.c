/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2004  SEGGER Microcontroller Systeme GmbH        *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

***** emWin - Graphical user interface for embedded applications *****
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with a license and should not be re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : APPW_X_emFile.c
Purpose     : emFile file system access
---------------------------END-OF-HEADER------------------------------
*/

#if !defined(WIN32) && !defined(APP_WIZARD)

#include "FS.h"
#include "AppWizard.h"

#include <string.h>

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
/*********************************************************************
*
*       _Open
*/
static void * _Open(const char * pFilename) {
  FS_FILE * pFile;
  
  pFile = FS_FOpen(pFilename, "r");
  return (void *)pFile;
}

/*********************************************************************
*
*       _Seek
*/
static int _Seek(const void * p, U32 Off) {
  FS_FILE * pFile;
  
  pFile  = (FS_FILE *)p;
  return FS_SetFilePos(pFile, Off, FS_FILE_BEGIN);
}

/*********************************************************************
*
*       _Read
*/
static U32 _Read(const void * p, void * pData, U32 NumBytes) {
  FS_FILE * pFile;
  U32 NumBytesRead;

  pFile  = (FS_FILE *)p;
  NumBytesRead = FS_Read(pFile, pData, NumBytes);
  return NumBytesRead;
}

/*********************************************************************
*
*       _Close
*/
static void _Close(const void * p) {
  FS_FILE * pFile;

  pFile = (FS_FILE *)p;
  FS_FClose(pFile);
}

/*********************************************************************
*
*       _Size
*/
static U32 _Size(const void * p) {
  FS_FILE * pFile;
  U32 FileSize;

  pFile = (FS_FILE *)p;
  FileSize = FS_GetFileSize((const FS_FILE *)pFile);
  return FileSize;
}

/*********************************************************************
*
*       _FileAccess
*/
static APPW_X_FILEACCESS _FileAccess = {
  _Open,
  _Seek,
  _Read,
  _Close,
  _Size,
};

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       APPW_X_FS_Init
*/
void APPW_X_FS_Init(void) {
  FS_Init();
  FS_FAT_SupportLFN();
  APPW_SetFileAccess(&_FileAccess);
}

#endif

/*************************** End of file ****************************/
