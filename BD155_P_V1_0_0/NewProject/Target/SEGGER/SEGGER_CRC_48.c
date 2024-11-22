/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co KG                  *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*       (c) 2015  SEGGER Microcontroller GmbH & Co KG                *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
*       emLIB * Library collection                                   *
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
*       emLIB version: Internal                                      *
*                                                                    *
*       Current version number will be inserted here                 *
*       when shipment is built.                                      *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File        : SEGGER_CRC_48.c
Purpose     : Specific emLib CRC API for the 7-bit polynomial
              0x48 (LSB-first notation).
Revision    : $Rev: 6050 $
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "SEGGER_CRC.h"

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

/*********************************************************************
*
*       Table for the 7-bit polynomial 0x48
*
*  Calculated using the following code:
*
*  static U8   _aCRC_48[256];
*  static void _CRC_Calc_Table_48(void) {
*    U8  i;
*    U16 Index;
*    U16 Value;
*
*    Index = 255;
*    do {
*      i     = 8;
*      Value = Index;
*      do {
*        if (Value & 1uL) {
*          Value = (Value >> 1uL) ^ 0x48;
*        } else {
*          Value >>= 1uL;
*        }
*      } while (--i);
*      _aCRC_48[Index] = (U8)Value;
*    } while (--Index);
*    Index = 0;
*    do {
*      printf("0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X,\n", _aCRC_48[Index],     _aCRC_48[Index + 1], _aCRC_48[Index +  2], _aCRC_48[Index +  3], _aCRC_48[Index +  4], _aCRC_48[Index +  5], _aCRC_48[Index +  6], _aCRC_48[Index +  7]);
*      printf("0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X,\n", _aCRC_48[Index + 8], _aCRC_48[Index + 9], _aCRC_48[Index + 10], _aCRC_48[Index + 11], _aCRC_48[Index + 12], _aCRC_48[Index + 13], _aCRC_48[Index + 14], _aCRC_48[Index + 15]);
*      Index += 16;
*    } while (Index < 256);
*  }
*/
static const U8 _aCRC_48[256] = {
  0x00, 0x41, 0x13, 0x52, 0x26, 0x67, 0x35, 0x74,
  0x4C, 0x0D, 0x5F, 0x1E, 0x6A, 0x2B, 0x79, 0x38,
  0x09, 0x48, 0x1A, 0x5B, 0x2F, 0x6E, 0x3C, 0x7D,
  0x45, 0x04, 0x56, 0x17, 0x63, 0x22, 0x70, 0x31,
  0x12, 0x53, 0x01, 0x40, 0x34, 0x75, 0x27, 0x66,
  0x5E, 0x1F, 0x4D, 0x0C, 0x78, 0x39, 0x6B, 0x2A,
  0x1B, 0x5A, 0x08, 0x49, 0x3D, 0x7C, 0x2E, 0x6F,
  0x57, 0x16, 0x44, 0x05, 0x71, 0x30, 0x62, 0x23,
  0x24, 0x65, 0x37, 0x76, 0x02, 0x43, 0x11, 0x50,
  0x68, 0x29, 0x7B, 0x3A, 0x4E, 0x0F, 0x5D, 0x1C,
  0x2D, 0x6C, 0x3E, 0x7F, 0x0B, 0x4A, 0x18, 0x59,
  0x61, 0x20, 0x72, 0x33, 0x47, 0x06, 0x54, 0x15,
  0x36, 0x77, 0x25, 0x64, 0x10, 0x51, 0x03, 0x42,
  0x7A, 0x3B, 0x69, 0x28, 0x5C, 0x1D, 0x4F, 0x0E,
  0x3F, 0x7E, 0x2C, 0x6D, 0x19, 0x58, 0x0A, 0x4B,
  0x73, 0x32, 0x60, 0x21, 0x55, 0x14, 0x46, 0x07,
  0x48, 0x09, 0x5B, 0x1A, 0x6E, 0x2F, 0x7D, 0x3C,
  0x04, 0x45, 0x17, 0x56, 0x22, 0x63, 0x31, 0x70,
  0x41, 0x00, 0x52, 0x13, 0x67, 0x26, 0x74, 0x35,
  0x0D, 0x4C, 0x1E, 0x5F, 0x2B, 0x6A, 0x38, 0x79,
  0x5A, 0x1B, 0x49, 0x08, 0x7C, 0x3D, 0x6F, 0x2E,
  0x16, 0x57, 0x05, 0x44, 0x30, 0x71, 0x23, 0x62,
  0x53, 0x12, 0x40, 0x01, 0x75, 0x34, 0x66, 0x27,
  0x1F, 0x5E, 0x0C, 0x4D, 0x39, 0x78, 0x2A, 0x6B,
  0x6C, 0x2D, 0x7F, 0x3E, 0x4A, 0x0B, 0x59, 0x18,
  0x20, 0x61, 0x33, 0x72, 0x06, 0x47, 0x15, 0x54,
  0x65, 0x24, 0x76, 0x37, 0x43, 0x02, 0x50, 0x11,
  0x29, 0x68, 0x3A, 0x7B, 0x0F, 0x4E, 0x1C, 0x5D,
  0x7E, 0x3F, 0x6D, 0x2C, 0x58, 0x19, 0x4B, 0x0A,
  0x32, 0x73, 0x21, 0x60, 0x14, 0x55, 0x07, 0x46,
  0x77, 0x36, 0x64, 0x25, 0x51, 0x10, 0x42, 0x03,
  0x3B, 0x7A, 0x28, 0x69, 0x1D, 0x5C, 0x0E, 0x4F
};

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_CRC_Calc_48()
*
*  Function description
*    Computes the CRC checksum over the given range of memory
*    using a static table for the polynomial 0x48.
*
*  Parameters
*    pData:    Pointer to the source buffer which holds the data for
*              which to calculate the CRC checksum.
*    NumBytes: Number of bytes to include in the calculation. May be
*              zero.
*    Crc:      Initial value for incremental calculation of the CRC.
*              May be zero.
*
*  Return value
*    Resulting CRC checksum.
*/
U8 SEGGER_CRC_Calc_48(const U8 *pData, U32 NumBytes, U8 Crc) {
  if (NumBytes) {
    do {
      Crc = _aCRC_48[(Crc & 0xFF) ^ *pData];
      pData++;
    } while (--NumBytes);
  }
  return Crc & 0x7F;
}

/****** End Of File *************************************************/
