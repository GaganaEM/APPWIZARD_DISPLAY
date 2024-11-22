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
File        : SEGGER_CRC.c
Purpose     : Generic emLib CRC API using the LSB-first notation of 
              arbitrary polynomials (up to a degree of 32).
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
// None. Code is fully reentrant.

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_CRC_CalcBitByBit()
*
*  Function description
*    Provides a bitwise implementation of CRC calculations over a 
*    given range of memory using arbitrary polynomials in LSB-first 
*    notation. Calculates the CRC for each bit in each byte of 
*    data.
*
*  Parameters
*    pData:    Pointer to the source buffer which holds the data for
*              which to calculate the CRC checksum.
*    NumBytes: Number of bytes to include in the calculation. May be
*              zero.
*    Crc:      Initial value for incremental calculation of the CRC.
*              May be zero.
*    Poly:     LSB-first notation of the polynomial to use in this 
*              calculation. Must not exceed a polynomial degree of
*              32, but may be zero. For example, LSB-first notations
*              of common polynomials are:
*              32-bit: 0xEDB88320,
*              16-bit: 0x8408,
*              8-bit:  0xE0.
*
*  Return value
*    Resulting CRC checksum.
*/
U32 SEGGER_CRC_CalcBitByBit(const U8 *pData, U32 NumBytes, U32 Crc, U32 Poly) {
  U8 i;
  U8 Data;

  if (NumBytes) {
    //
    // Calculate CRC checksum.
    //
    do {                              // Perform calculation for each byte of data at pData.
      i    = 8;
      Data = *pData;
      pData++;
      do {                            // Perform calculation for each bit of the current byte of data.
        if ((Crc ^ (Data >> (8uL - i))) & 1uL) {
          Crc = (Crc >> 1uL) ^ Poly;
        } else {
          Crc = (Crc >> 1uL);
        }
      } while (--i);
    } while (--NumBytes);
  }
  return Crc;
}

/*********************************************************************
*
*       SEGGER_CRC_Calc()
*
*  Function description
*    Provides a table-driven implementation of CRC calculations over a 
*    given range of memory using arbitrary polynomials in LSB-first 
*    notation. Dynamically creates a 16-entry-table for the given 
*    polynomial, which is then used to calculate the CRC for each nibble 
*    in each byte of data.
*
*  Parameters
*    pData:    Pointer to the source buffer which holds the data for
*              which to calculate the CRC checksum.
*    NumBytes: Number of bytes to include in the calculation. May be
*              zero.
*    Crc:      Initial value for incremental calculation of the CRC.
*              May be zero.
*    Poly:     LSB-first notation of the polynomial to use in this 
*              calculation. Must not exceed a polynomial degree of
*              32, but may be zero. For example, LSB-first notations
*              of common polynomials are:
*              32-bit: 0xEDB88320,
*              16-bit: 0x8408,
*              8-bit:  0xE0.
*
*  Return value
*    Resulting CRC checksum.
*/
U32 SEGGER_CRC_Calc(const U8 *pData, U32 NumBytes, U32 Crc, U32 Poly) {
  U8  i;
  U8  Index;
  U32 Value;
  U32 aCRC[16];

  if (NumBytes) {
    //
    // Populate the table.
    //
    Index   = 15;
    do {                                      // Calculate CRC checksums for each possible bit-combination of a nibble.
      i     = 4;
      Value = Index;
      do {                                    // Perform calculation for each bit of the current nibble.
        if (Value & 1uL) {
          Value = (Value >> 1uL) ^ Poly;
        } else {
          Value = (Value >> 1uL);
        }
      } while (--i);
      aCRC[Index] = Value;
    } while (Index--);
    //
    // Calculate CRC checksum.
    //
    do {                                      // Perform calculation for each byte of data at pData.
      Crc ^= *pData;                          // Xor current byte of data into Crc.
      pData++;
      Crc  = aCRC[Crc & 0xF] ^ (Crc >> 4uL);  // Use Crc as table index.
      Crc  = aCRC[Crc & 0xF] ^ (Crc >> 4uL);  // Use Crc as table index.
    } while (--NumBytes);
  }
  return Crc;
}

/****** End Of File *************************************************/
