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
File        : SEGGER_CRC_MSB.c
Purpose     : Generic emLib CRC API using the MSB-first notation of
              arbitrary polynomials (up to a degree of 32).
Revision    : $Rev: 12203 $
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
*       SEGGER_CRC_CalcBitByBit_MSB()
*
*  Function description
*    Provides a bitwise implementation of CRC calculations over a
*    given range of memory using arbitrary polynomials in MSB-first
*    notation. Calculates the CRC for each bit in each byte of
*    data.
*
*  Parameters
*    pData:      Pointer to the source buffer which holds the data for
*                which to calculate the CRC checksum.
*    NumBytes:   Number of bytes to include in the calculation. May be
*                zero.
*    Crc:        Initial value for incremental calculation of the CRC.
*                May be zero.
*    Poly:       MSB-first notation of the polynomial to use in this
*                calculation. Must not exceed a polynomial degree of
*                32. For example, MSB-first notations of common
*                polynomials are:
*                32-bit: 0x04C11DB7,
*                16-bit: 0x1021,
*                8-bit:  0x09.
*    SizeOfPoly: Size of the polynomial to use for calculation of the
*                CRC. Must contain the correct size of Poly.
*
*  Return value
*    Resulting CRC checksum.
*/
U32 SEGGER_CRC_CalcBitByBit_MSB(const U8 *pData, U32 NumBytes, U32 Crc, U32 Poly, U8 SizeOfPoly) {
  U8  i;
  U8  Data;
  U32 BitMask;
  U32 CrcMask;
  U32 h;

  if (NumBytes) {
    //
    // Set masks for significant and relevant bits of the polynomial in use.
    //
    i       = SizeOfPoly - 1;
    BitMask = 1uL << i;
    CrcMask = 0;
    do {
      CrcMask |= 1uL << i;
    } while (i--);
    //
    // Calculate CRC checksum.
    //
    do {                         // Perform calculation for each byte of data at pData.
      i    = 0x80;
      Data = *pData;
      pData++;
      do {                       // Perform calculation for each bit of the current byte of data.
        h = Crc & BitMask;
        if (Data & i) {
          if (h) {
            h = 0;
          } else {
            h = 1;
          };
        }
        Crc <<= 1uL;
        if (h) {
          Crc ^= Poly;
        }
      } while (i >>= 1uL);
      Crc &= CrcMask;            // Clear non-relevant bits (that do not add to the result).
    } while (--NumBytes);
  }
  return Crc;
}

/*********************************************************************
*
*       SEGGER_CRC_Calc_MSB()
*
*  Function description
*    Provides a table-driven implementation of CRC calculations over a
*    given range of memory using arbitrary polynomials in MSB-first
*    notation. Dynamically creates a 16-entry-table for the given
*    polynomial, which is then used to calculate the CRC for each
*    nibble in each byte of data.
*
*  Parameters
*    pData:      Pointer to the source buffer which holds the data for
*                which to calculate the CRC checksum.
*    NumBytes:   Number of bytes to include in the calculation. May be
*                zero.
*    Crc:        Initial value for incremental calculation of the CRC.
*                May be zero.
*    Poly:       MSB-first notation of the polynomial to use in this
*                calculation. Must not exceed a polynomial degree of
*                32, but must be 4 bits in size minimum. For example,
*                MSB-first notations of common polynomials are:
*                32-bit: 0x04C11DB7,
*                16-bit: 0x1021,
*                8-bit:  0x09.
*    SizeOfPoly: Size of the polynomial to use for calculation of the
*                CRC. Must contain the correct size of Poly (at
*                least 4).
*
*  Return value
*    Resulting CRC checksum.
*/
U32 SEGGER_CRC_Calc_MSB(const U8 *pData, U32 NumBytes, U32 Crc, U32 Poly, U8 SizeOfPoly) {
  U8  i;
  U8  Index;
  U32 BitMask;
  U32 CrcMask;
  U32 Value;
  U32 aCRC[16];

  if (NumBytes) {
    //
    // Set masks for significant and relevant bits of the polynomial in use.
    //
    i       = SizeOfPoly - 1;
    BitMask = 1uL << i;
    CrcMask = 0;
    do {
      CrcMask |= 1uL << i;
    } while (i--);
    //
    // Populate the table.
    //
    Index = 15;
    do {                                                   // Calculate CRC checksums for each possible bit-combination of a nibble.
      i     = 4;
      Value = Index << (SizeOfPoly - 4);
      do {                                                 // Perform calculation for each bit of the current nibble.
        if (Value & BitMask) {
          Value = (Value << 1uL) ^ Poly;
        } else {
          Value = (Value << 1uL);
        }
      } while (--i);
      aCRC[Index] = Value & CrcMask;
    } while (Index--);
    //
    // Calculate CRC checksum.
    //
    do {                                                    // Perform calculation for each byte of data at pData.
      Value = (Crc >> (SizeOfPoly - 4)) ^ (*pData >> 4uL);  // Calculate table index for first nibble.
      Crc   = aCRC[Value & 0x0F] ^ (Crc << 4uL);            // Use table entry.
      Value = (Crc >> (SizeOfPoly - 4)) ^ (*pData);         // Calculate table index for second nibble.
      Crc   = aCRC[Value & 0x0F] ^ (Crc << 4uL);            // Use table entry.
      pData++;
    } while (--NumBytes);
    Crc &= CrcMask;                                         // Clear non-relevant bits (that do not add to the result).
  }
  return Crc;
}

/****** End Of File *************************************************/
