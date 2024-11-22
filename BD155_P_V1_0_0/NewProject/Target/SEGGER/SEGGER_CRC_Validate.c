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
File        : SEGGER_CRC_Validate.c
Purpose     : emLib CRC validation API.
Revision    : $Rev: 6050 $
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "SEGGER_CRC.h"
#include <stdio.h>

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
// None.

/*********************************************************************
*
*       Local functions
*
**********************************************************************
*/

/*********************************************************************
*
*       _Reverse()
*
*  Function description
*    Converts up to 32 bits of data from LSB-first notation to 
*    MSB-first notation and vice versa. Primary use is to convert 
*    given polynomials, but may be used for other purposes as well, 
*    e.g. conversion of CRC checksums or conversion of raw data prior 
*    to calculation of the CRC.
*
*  Parameters
*    Data:    Up to 32 bits of data in LSB-first notation or 
*             MSB-first notation that shall be converted into
*             the other notation respectively.
*    NumBits: Size of Data in bits. Must not exceed 32, but may be
*             zero.
*
*  Return value
*    If Data is in LSB-first notation:  MSB-first notation of Data.
*    If Data is in MSB-first notation:  LSB-first notation of Data.
*/
static U32 _Reverse(U32 Data, U8 NumBits) {
  U8  Index;
  U32 DataOut;

  DataOut = 0;
  for (Index = 1; Index <= NumBits; Index++) {
    if (Data & 1uL) {
      DataOut |= 1 << (NumBits - Index);
    }
    Data >>= 1;
  }
  return DataOut;
}

/*********************************************************************
*
*       _CompareMixedNotation()
*
*  Function description
*    Validates the table-driven implementation of CRC calculations
*    using the MSB-first notation of arbitrary polynomials. Uses
*    SEGGER_CRC_CalcBitByBit to validate the implementation of
*    SEGGER_CRC_Calc_MSB. To allow for this comparison,
*    SEGGER_CRC_CalcBitByBit is called once for each byte of data
*    using reversed parameters (i.e. reversed data, reversed CRC,
*    and the polynomial's LSB-first notation, which is calculated 
*    at runtime).
*
*  Parameters
*    pData:      Pointer to the source buffer which holds the data for
*                which to calculate the CRC checksum.
*    NumBytes:   Number of bytes to include in the calculation. May be
*                zero.
*    Crc:        Initial value for incremental calculation of the CRC.
*                May be zero.
*    Poly:       MSB-first notation of the polynomial to use in this
*                validation. Its LSB-first notation is computed at
*                runtime. Must not exceed a polynomial degree of 32,
*                but must be 4 bits in size minimum. For example, 
*                MSB-first notations of common polynomials are:
*                32-bit: 0x04C11DB7,
*                16-bit: 0x1021,
*                8-bit:  0x07.
*    SizeOfPoly: Size of the polynomial to use for calculation of the 
*                CRC checksum. Must contain the correct size of Poly.
*
*  Return value
*    == SEGGER_CRC_VALIDATE_SUCCESS:              Validation completed 
*                                                 successfully.
*    == SEGGER_CRC_VALIDATE_ERROR_ARBITRARY_MSB:  Failed to validate the 
*                                                 table-driven implementation
*                                                 using the MSB-first notation
*                                                 of arbitrary polynomials.
*/
static I8 _CompareMixedNotation(const U8 *pData, U32 NumBytes, U32 Crc, U32 Poly, U8 SizeOfPoly) {
  const U8  *pStart;
        U8   DataRev;
        U32  PolyRev;
        U32  CrcRev;
        U32  NumBytesLeft;
  
  //
  // Init variables.
  //
  pStart       = pData;                                        // Save pData before it is incremented.
  NumBytesLeft = NumBytes;
  PolyRev      = _Reverse(Poly, SizeOfPoly);
  CrcRev       = _Reverse(Crc, SizeOfPoly);                    // Calculate incremental Crc in reference calculation, too.
  //
  // Calculate reference in units of 1 byte.
  //
  while (NumBytesLeft--) {                                     // Perform calculation of LSB CRC for each byte at pData.
    DataRev = (U8)_Reverse(*pData, 8);                         // Convert current byte of data for calculation of LSB CRC.
    CrcRev  = SEGGER_CRC_CalcBitByBit(&DataRev, 1, CrcRev, PolyRev);  // Calculate for current byte of data.
    pData++;
  }
  CrcRev = _Reverse(CrcRev, SizeOfPoly);                       // Convert result for comparison.
  //
  // Calculate result and compare to reference.
  //
  if (CrcRev != SEGGER_CRC_Calc_MSB(pStart, NumBytes, Crc, Poly, SizeOfPoly)) {
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY_MSB;
  }
  return SEGGER_CRC_VALIDATE_SUCCESS;
}

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_CRC_Validate()
*
*  Function description
*    Validates the implementation of the emLib CRC API. Returns upon 
*    the first error encountered, omitting any further validation 
*    steps. Performs the validation using the following polynomials: 
*    0xEDB88320, 0x04C11DB7, 0x82F63B78, 0x1EDC6F41, 0x8408, 0x1021, 
*    0x48, and 0x09.
*
*  Return value
*    == SEGGER_CRC_VALIDATE_SUCCESS:             Validation completed
*                                                successfully.
*    == SEGGER_CRC_VALIDATE_ERROR_ARBITRARY:     Failed to validate the
*                                                table-driven implementation
*                                                using the LSB-first notation
*                                                of arbitrary polynomials.
*    == SEGGER_CRC_VALIDATE_ERROR_SPECIFIC:      Failed to validate the
*                                                table-driven implementation
*                                                using the LSB-first notation
*                                                of a specified polynomial.
*    == SEGGER_CRC_VALIDATE_ERROR_BITWISE:       Failed to validate the
*                                                bit-by-bit implementation using
*                                                the LSB-first notation of
*                                                arbitrary polynomials.
*    == SEGGER_CRC_VALIDATE_ERROR_ARBITRARY_MSB: Failed to validate the 
*                                                table-driven implementation
*                                                using the MSB-first notation
*                                                of arbitrary polynomials.
*    == SEGGER_CRC_VALIDATE_ERROR_SPECIFIC_MSB:  Failed to validate the
*                                                table-driven implementation using
*                                                the MSB-first notation of a 
*                                                specified polynomial.
*    == SEGGER_CRC_VALIDATE_ERROR_BITWISE_MSB:   Failed to validate the bit-by-bit
*                                                implementation using the MSB-first
*                                                notation of arbitrary polynomials.
*/
I8 SEGGER_CRC_Validate() {
  //
  // Declaration of test data (configurable).
  //
  const U8  aData[256] = {
    0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5, 0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76,
    0xCA, 0x82, 0xC9, 0x7D, 0xFA, 0x59, 0x47, 0xF0, 0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72, 0xC0,
    0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC, 0x34, 0xA5, 0xE5, 0xF1, 0x71, 0xD8, 0x31, 0x15,
    0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05, 0x9A, 0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75,
    0x09, 0x83, 0x2C, 0x1A, 0x1B, 0x6E, 0x5A, 0xA0, 0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F, 0x84,
    0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B, 0x6A, 0xCB, 0xBE, 0x39, 0x4A, 0x4C, 0x58, 0xCF,
    0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33, 0x85, 0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8,
    0x51, 0xA3, 0x40, 0x8F, 0x92, 0x9D, 0x38, 0xF5, 0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3, 0xD2,
    0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17, 0xC4, 0xA7, 0x7E, 0x3D, 0x64, 0x5D, 0x19, 0x73,
    0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90, 0x88, 0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB,
    0xE0, 0x32, 0x3A, 0x0A, 0x49, 0x06, 0x24, 0x5C, 0xC2, 0xD3, 0xAC, 0x62, 0x91, 0x95, 0xE4, 0x79,
    0xE7, 0xC8, 0x37, 0x6D, 0x8D, 0xD5, 0x4E, 0xA9, 0x6C, 0x56, 0xF4, 0xEA, 0x65, 0x7A, 0xAE, 0x08,
    0xBA, 0x78, 0x25, 0x2E, 0x1C, 0xA6, 0xB4, 0xC6, 0xE8, 0xDD, 0x74, 0x1F, 0x4B, 0xBD, 0x8B, 0x8A,
    0x70, 0x3E, 0xB5, 0x66, 0x48, 0x03, 0xF6, 0x0E, 0x61, 0x35, 0x57, 0xB9, 0x86, 0xC1, 0x1D, 0x9E,
    0xE1, 0xF8, 0x98, 0x11, 0x69, 0xD9, 0x8E, 0x94, 0x9B, 0x1E, 0x87, 0xE9, 0xCE, 0x55, 0x28, 0xDF,
    0x8C, 0xA1, 0x89, 0x0D, 0xBF, 0xE6, 0x42, 0x68, 0x41, 0x99, 0x2D, 0x0F, 0xB0, 0x54, 0xBB, 0x16
  };
  const U32 InitialCrc = 0x1A2B3C4D;  
  const U32 NumBytes   = sizeof(aData) / sizeof(aData[0]);
  
  //
  // Declaration of test data (non-configurable).
  //
  const U8  aVector[9]   = { 
    0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39  // Hexadecimal representation of the standard test pattern "123456789".
  };  

  //
  // Validate the reference implemenation, i.e. the bitwise implementation for arbitrary polynomials in LSB-first notation.
  //
  if        (SEGGER_CRC_CalcBitByBit(aVector, 9, 0x0, _Reverse(0x1021, 16)) != SEGGER_CRC_RESULT_KERMIT) {  // CRC-16-CCITT ("Kermit")
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE;
  } else if (SEGGER_CRC_CalcBitByBit(aVector, 9, 0x0, _Reverse(0x8005, 16)) != SEGGER_CRC_RESULT_ARC) {     // CRC-16-IBM ("ARC")
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE;
  } else if (SEGGER_CRC_CalcBitByBit(aVector, 9, 0x0, _Reverse(  0x39, 8))  != SEGGER_CRC_RESULT_DARC) {    // CRC-8-DARC
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE;
  } else if (SEGGER_CRC_CalcBitByBit(aVector, 9, 0x0, _Reverse(  0x03, 6))  != SEGGER_CRC_RESULT_ITU6) {    // CRC-6-ITU
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE;
  } else if (SEGGER_CRC_CalcBitByBit(aVector, 9, 0x0, _Reverse(  0x15, 5))  != SEGGER_CRC_RESULT_ITU5) {    // CRC-5-ITU
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE;
  } else if (SEGGER_CRC_CalcBitByBit(aVector, 9, 0x0, _Reverse(   0x3, 4))  != SEGGER_CRC_RESULT_ITU4) {    // CRC-4-ITU
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE;
  //
  // Perform validation of the remaining API for the polynomials 0xEDB88320 / 0x04C11DB7.
  //
  } else if (SEGGER_CRC_CalcBitByBit(aData, NumBytes, InitialCrc, 0xEDB88320) != SEGGER_CRC_Calc(aData, NumBytes, InitialCrc, 0xEDB88320)) {                  // table-driven implementation for arbitrary polynomials in LSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY;
  } else if (SEGGER_CRC_Calc_EDB88320(aData, NumBytes, InitialCrc) != SEGGER_CRC_Calc(aData, NumBytes, InitialCrc, 0xEDB88320)) {                             // table-driven implementation for a specified polynomial in LSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_SPECIFIC;
  } else if (_CompareMixedNotation(aData, NumBytes, InitialCrc, 0x04C11DB7, 32)) {                                                                            // table-driven implementation for arbitrary polynomials in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY_MSB;  
  } else if (SEGGER_CRC_Calc_04C11DB7(aData, NumBytes, InitialCrc) != SEGGER_CRC_Calc_MSB(aData, NumBytes, InitialCrc, 0x04C11DB7, 32)) {                     // table-driven implementation for a specified polynomial in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_SPECIFIC_MSB;
  } else if (SEGGER_CRC_Calc_MSB(aData, NumBytes, InitialCrc, 0x04C11DB7, 32) != SEGGER_CRC_CalcBitByBit_MSB(aData, NumBytes, InitialCrc, 0x04C11DB7, 32)) {  // bitwise implementation for arbitrary polynomials in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE_MSB;
  //
  // Perform validation of the remaining API for the polynomials 0x82F63B78 / 0x1EDC6F41.
  //
  } else if (SEGGER_CRC_CalcBitByBit(aData, NumBytes, InitialCrc, 0x82F63B78) != SEGGER_CRC_Calc(aData, NumBytes, InitialCrc, 0x82F63B78)) {                  // table-driven implementation for arbitrary polynomials in LSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY;
  } else if (SEGGER_CRC_Calc_82F63B78(aData, NumBytes, InitialCrc) != SEGGER_CRC_Calc(aData, NumBytes, InitialCrc, 0x82F63B78)) {                             // table-driven implementation for a specified polynomial in LSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_SPECIFIC;
  } else if (_CompareMixedNotation(aData, NumBytes, InitialCrc, 0x1EDC6F41, 32)) {                                                                            // table-driven implementation for arbitrary polynomials in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY_MSB;
  } else if (SEGGER_CRC_Calc_1EDC6F41(aData, NumBytes, InitialCrc) != SEGGER_CRC_Calc_MSB(aData, NumBytes, InitialCrc, 0x1EDC6F41, 32)) {                     // table-driven implementation for a specified polynomial in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_SPECIFIC_MSB;
  } else if (SEGGER_CRC_Calc_MSB(aData, NumBytes, InitialCrc, 0x1EDC6F41, 32) != SEGGER_CRC_CalcBitByBit_MSB(aData, NumBytes, InitialCrc, 0x1EDC6F41, 32)) {  // bitwise implementation for arbitrary polynomials in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE_MSB;
  //
  // Perform validation of the remaining API for the polynomials 0x8408 / 0x1021.
  //
  } else if (SEGGER_CRC_CalcBitByBit(aData, NumBytes, InitialCrc, 0x8408) != SEGGER_CRC_Calc(aData, NumBytes, InitialCrc, 0x8408)) {                            // table-driven implementation for arbitrary polynomials in LSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY;
  } else if (SEGGER_CRC_Calc_8408(aData, NumBytes, (U16)InitialCrc) != SEGGER_CRC_Calc(aData, NumBytes, (U16)InitialCrc, 0x8408)) {                             // table-driven implementation for a specified polynomial in LSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_SPECIFIC;
  } else if (_CompareMixedNotation(aData, NumBytes, (U16)InitialCrc, 0x1021, 16)) {                                                                             // table-driven implementation for arbitrary polynomials in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY_MSB;
  } else if (SEGGER_CRC_Calc_1021(aData, NumBytes, (U16)InitialCrc) != SEGGER_CRC_Calc_MSB(aData, NumBytes, (U16)InitialCrc, 0x1021, 16)) {                     // table-driven implementation for a specified polynomial in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_SPECIFIC_MSB;
  } else if (SEGGER_CRC_Calc_MSB(aData, NumBytes, (U16)InitialCrc, 0x1021, 16) != SEGGER_CRC_CalcBitByBit_MSB(aData, NumBytes, (U16)InitialCrc, 0x1021, 16)) {  // bitwise implementation for arbitrary polynomials in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE_MSB;
  //
  // Perform validation of the remaining API for 0x48 / 0x09.
  //
  } else if (SEGGER_CRC_CalcBitByBit(aData, NumBytes, InitialCrc, 0x48) != SEGGER_CRC_Calc(aData, NumBytes, InitialCrc, 0x48)) {                                          // table-driven implementation for arbitrary polynomials in LSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY;
  } else if (SEGGER_CRC_Calc_48(aData, NumBytes, (U8)InitialCrc) != SEGGER_CRC_Calc(aData, NumBytes, (U8)InitialCrc, 0x48)) {                                             // table-driven implementation for a specified polynomial in LSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_SPECIFIC;
  } else if (_CompareMixedNotation(aData, NumBytes, (U8)(InitialCrc & 0x7F), 0x09, 7)) {                                                                                  // table-driven implementation for arbitrary polynomials in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_ARBITRARY_MSB;
  } else if (SEGGER_CRC_Calc_09(aData, NumBytes, (U8)(InitialCrc & 0x7F)) != SEGGER_CRC_Calc_MSB(aData, NumBytes, (U8)(InitialCrc & 0x7F), 0x09, 7)) {                    // table-driven implementation for a specified polynomial in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_SPECIFIC_MSB;
  } else if (SEGGER_CRC_Calc_MSB(aData, NumBytes, (U8)(InitialCrc & 0x7F), 0x09, 7) != SEGGER_CRC_CalcBitByBit_MSB(aData, NumBytes, (U8)(InitialCrc & 0x7F), 0x09, 7)) {  // bitwise implementation for arbitrary polynomials in MSB-first notation
    return SEGGER_CRC_VALIDATE_ERROR_BITWISE_MSB;
  //
  // Signal success in case we arrive here.
  //
  } else {
    return SEGGER_CRC_VALIDATE_SUCCESS;
  }
}

/****** End Of File *************************************************/
