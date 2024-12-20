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
File        : EFS_Intern.h
Purpose     : Internal EFS File System Layer header
-------------------------- END-OF-HEADER -----------------------------
*/
#ifndef EFS_INTERN_H               // Avoid recursive and multiple inclusion
#define EFS_INTERN_H

/*********************************************************************
*
*       #include Section
*
**********************************************************************
*/
#include "FS_Int.h"
#include "EFS.h"

#if defined(__cplusplus)
extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       Defines, fixed
*
**********************************************************************
*/
#define EFS_VERSION                   0x300
#define EFS_SIGNATURE                 0x00534645UL      // "EFS"

#define SIZEOF_EFS_TABLE_ENTRY        32
#define EFS_FIRST_CLUSTER             2

/*********************************************************************
*
*       EFS_SECTOR_...
*/
#define EFS_SECTOR_INFO               0    // Info sector
#define EFS_SECTOR_STATUS             1    // Status sector
#define EFS_SECTOR_ALLOC_TABLE        2    // Start sector of allocation map

/*********************************************************************
*
*       DIR_ENTRY_OFF_...
*
*  Purpose
*    Defines the position of the individual elements in a directory entry
*/
#define DIR_ENTRY_OFF_OFFNEXT         0x00
#define DIR_ENTRY_OFF_ISVALID         0x01
#define DIR_ENTRY_OFF_ATTRIB          0x02
#define DIR_ENTRY_OFF_NAMELEN         0x03
#define DIR_ENTRY_OFF_FIRSTCLUSTER    0x04
#define DIR_ENTRY_OFF_SIZELO          0x08
#define DIR_ENTRY_OFF_SIZEHI          0x0C
#define DIR_ENTRY_OFF_TIMESTAMP       0x10
#define DIR_ENTRY_OFF_NAME            0x14

#define DIR_ENTRY_FIXED_SIZE          0x14          // For total size of entry, add len of file name

/*********************************************************************
*
*       INFO_OFF_...
*
*  Purpose
*    Defines the position of the individual elements in the info sector.
*/
#define INFO_OFF_SIGNATURE            0x0
#define INFO_OFF_VERSION              0x4
#define INFO_OFF_LD_BPS               0x6           // ld Bytes per sector
#define INFO_OFF_NUM_SECTORS          0x8
#define INFO_OFF_NUM_CLUSTERS         0xc
#define INFO_OFF_FIRST_DATA_SECTOR    0x10
#define INFO_OFF_LD_SPC               0x14          // ld Sectors per cluster

/*********************************************************************
*
*       STATUS_OFF_...
*
*  Purpose
*    Defines the position of the individual elements in the status sector.
*/
#define STATUS_OFF_SIGNATURE          0x00
#define STATUS_OFF_NUM_FREE_CLUSTERS  0x10
#define STATUS_OFF_NEXT_FREE_CLUSTER  0x20

/*********************************************************************
*
*       File and directory attributes
*/
#define FS_EFS_ATTR_READ_ONLY         FS_ATTR_READ_ONLY
#define FS_EFS_ATTR_HIDDEN            FS_ATTR_HIDDEN
#define FS_EFS_ATTR_SYSTEM            FS_ATTR_SYSTEM
#define FS_EFS_ATTR_ARCHIVE           FS_ATTR_ARCHIVE
#define FS_EFS_ATTR_DIRECTORY         FS_ATTR_DIRECTORY
#define FS_EFS_ATTR_MASK              (FS_EFS_ATTR_READ_ONLY | FS_EFS_ATTR_HIDDEN | FS_EFS_ATTR_SYSTEM | FS_EFS_ATTR_ARCHIVE | FS_EFS_ATTR_DIRECTORY)

/*********************************************************************
*
*       Other defines
*/
#define FS_EFS_DENTRY_SIZE              0x20
#define DIR_MAX_SIZE                    0x7FFFFFFFUL
#define NUM_FREE_CLUSTERS_INVALID       0xFFFFFFFFUL
#define STATUS_SECTOR_SIGNATURE         "EFS status\0\0\0\0\0\0"
#define SIZEOF_STATUS_SECTOR_SIGNATURE  16
#define FS_EFS_MAX_NUM_CLUSTERS_DIR     1000
#define EFS_END_OF_CHAIN                0x0FFFFFFFuL

/*********************************************************************
*
*       Public data
*
**********************************************************************
*/
extern U8 EFS_SupportStatusSector;

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       EFS_Misc
*/
int  FS_EFS_AllocClusterBlock       (FS_VOLUME * pVolume, U32 FirstCluster, U32 NumClusters, FS_SB * pSB);
U32  FS_EFS_ClusterId2SectorNo      (const FS_EFS_INFO * pEFSInfo, U32 ClusterId);
U32  FS_EFS_FindFreeCluster         (FS_VOLUME * pVolume, FS_SB * pSB, U32 FirstCluster);
void FS_EFS_LinkCluster             (FS_VOLUME * pVolume, FS_SB * pSB, U32 LastCluster, U32 NewCluster);
int  FS_EFS_MarkClusterEOC          (FS_VOLUME * pVolume, FS_SB * pSB, U32 Cluster);
U32  FS_EFS_WalkCluster             (FS_VOLUME * pVolume, FS_SB * pSB, U32 StartCluster, U32 NumClusters);
U32  FS_EFS_WalkClusterEx           (FS_VOLUME * pVolume, FS_SB * pSB, U32 Cluster, U32 * pNumClusters);
U32  FS_EFS_AllocCluster            (FS_VOLUME * pVolume, FS_SB * pSB, U32 LastCluster);
U32  FS_EFS_ReadEFSEntry            (FS_VOLUME * pVolume, FS_SB * pSB, U32 ClusterId);
U32  FS_EFS_FindLastCluster         (FS_VOLUME * pVolume, FS_SB * pSB, U32 ClusterId, U32 * pNumClusters);
U32  FS_EFS_FreeClusterChain        (FS_VOLUME * pVolume, FS_SB * pSB, U32 ClusterId, U32 NumClusters);
U16  FS_EFS_GetNumAdjClustersInChain(FS_VOLUME * pVolume, FS_SB * pSB, U32 CurCluster);
U32  FS_EFS_GotoCluster             (const FS_FILE * pFile, FS_SB * pSBEfs);
#if FS_EFS_SUPPORT_DIRENTRY_BUFFERS
  U8 * FS_EFS_AllocDirEntryBuffer   (void);
  void FS_EFS_FreeDirEntryBuffer    (const void * pBuffer);
#endif
#if FS_EFS_SUPPORT_STATUS_SECTOR
  int FS_EFS_IsStatusSectorValid    (const U8 * pBuffer);
#endif

/*********************************************************************
*
*       EFS_Open
*/
int  FS_EFS_CreateDirEntry       (FS_FILE   * pDirFile, FS_SB * pSB, const char * pFileName, U32 TimeStamp, U32 Size, U32 ClusterId, U8 Attrib);
int  FS_EFS_FindEmptyDirEntry    (FS_FILE   * pDirFile, FS_SB * pSB,            unsigned * pEntryLen);
int  FS_EFS_FindPath             (FS_VOLUME * pVolume,  FS_SB * pSB, const char *pFullName, const char ** ppFileName, FS_FILE *pDirFile);
int  FS_EFS_ReadDirEntryInfo     (FS_FILE   * pDirFile, FS_SB * pSB, U32 * pFirstCluster, U32 * pFileSize, U8 * pAttributes, U32 * pTimeStamp);
int  FS_EFS_MarkDirEntryAsInvalid(FS_FILE   * pDirFile, FS_SB * pSB);
int  FS_EFS_OpenDirFile          (FS_FILE   * pDirFile, FS_VOLUME * pVolume,   U32 DirStart);
int  FS_EFS_ReadDirEntry         (FS_FILE   * pDirFile, FS_SB * pSB, U8 * pBuffer, unsigned NumBytes);
int  FS_EFS_ReadDirEntryKP       (FS_FILE   * pDirFile, FS_SB * pSB, U8 * pBuffer, unsigned NumBytes);
int  FS_EFS_WriteDirEntry        (FS_FILE   * pDirFile, FS_SB * pSB, const char * pFileName, unsigned EntryLen, U32 TimeDate, U32 Size, U32 ClusterId, U8 Attrib);
int  FS_EFS_FindDirEntry         (FS_FILE   * pDirFile, FS_SB * pSB, const char *pEntryName, int NameLen);
int  FS_EFS_DeleteFileOrDir      (FS_FILE   * pDirFile, FS_SB * pSB);

/*********************************************************************
*
*       EFS_Read
*/
U32  FS_EFS_ReadData  (FS_FILE * pFile, U8 * pData, U32 NumBytesReq, FS_SB * pSB, FS_SB * pSBCrypt, U8 Type);
int  FS_EFS_ReadSector(U32 SectorNo, U32 FilePos, const FS_FILE_OBJ * pFileObj, FS_SB * pSBData, FS_SB * pSBCrypt, U8 Type);

/*********************************************************************
*
*       EFS_Write
*/
int  FS_EFS_GotoClusterAllocIfReq(FS_FILE *pFile, FS_SB * pSBEfs);
U32  FS_EFS_WriteData            (FS_FILE * pFile, const U8 * pData, U32 NumBytes2Write, FS_SB * pSB, FS_SB * pSBCrypt, char * pDirUpdateRequired, U8 Type);
int  FS_EFS_WriteSector          (U32 SectorNo, U32 FilePos, U32 NumBytesToWrite, U32 FileSize, U8 WriteToJournal, FS_FILE_OBJ * pFileObj, FS_SB * pSBData, FS_SB * pSBCrypt, U8 Type);
int  FS_EFS_UpdateDirEntry       (const FS_FILE * pFile, FS_SB * pSB);

#if defined(__cplusplus)
}                /* Make sure we have C-declarations in C++ programs */
#endif

#endif // EFS_INTERN_H

/*************************** End of file ****************************/
