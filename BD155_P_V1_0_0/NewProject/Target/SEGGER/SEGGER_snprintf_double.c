/*********************************************************************
*               (c) SEGGER Microcontroller GmbH & Co. KG             *
*                        The Embedded Experts                        *
*                           www.segger.com                           *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File    : SEGGER_snprintf_double.c
Purpose : Formatter hook for SEGGER_snprintf() handling double values.
Revision: $Rev: 6177 $
*/

#include <stdlib.h>
#include <stdarg.h>
#include "SEGGER.h"

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

static SEGGER_PRINTF_FORMATTER _Formatter_f;

/*********************************************************************
*
*       Local functions
*
**********************************************************************
*/

/*********************************************************************
*
*       _PrintDouble
*
*  Function description
*    Stores a double value into the string buffer.
*    Precision is limited to 9 digits for integer and fractional part.
*
*  Parameters
*    pBufferDesc: Output buffer descriptor.
*    pContext   : Management context. Can be NULL.
*    pApi       : Pointer to a SEGGER_PRINTF_API structure.
*    pParamList : Pointer to a variable arguments list to take the value from.
*    Flags      : Flags Byte, see SEGGER_PRINTF_FLAG_* definitions.
*    Width      : Overall width of the resulting string.
*    Precision  : Number of digits after decimal point (defaults to 6)
*                 of the value to store.
*/
static void _PrintDouble(SEGGER_BUFFER_DESC* pBufferDesc, SEGGER_SNPRINTF_CONTEXT* pContext, const SEGGER_PRINTF_API* pApi, va_list* pParamList, char Flags, int Width, int Precision) {
  U64 Exponent;
  U64 Fraction;
  U64 Sign;
  int Stored;
  double v;
  double s;
  char *c;
  I32 n;

  v = va_arg(*pParamList, double);
  Stored = 0;
  if (Precision < 0) {
    Precision = 6; // Default
  } else if (Precision > 9) {
    Precision = 9; // Limit
  }
  Sign     = (*(U64*)&v >> 63) & U64_C(0x0000000000000001);
  Exponent = (*(U64*)&v >> 52) & U64_C(0x00000000000007FF);
  Fraction = (*(U64*)&v >>  0) & U64_C(0x000FFFFFFFFFFFFF);
  if (!(Flags & SEGGER_PRINTF_FLAG_ADJLEFT)) {
    Width -= Precision + 1; // Reduce width by the length of the decimal point and fraction
  }

  if (Exponent == 0) {
    if (Fraction == 0) {
      //
      // Zero
      //
      Stored += pApi->pfPrintUnsigned(pBufferDesc, pContext, 0, 10, Flags, -1, Flags & SEGGER_PRINTF_FLAG_ADJLEFT ? 0 : Width);
      pApi->pfStoreChar(pBufferDesc, pContext, '.');
      Stored++;
      Stored += pApi->pfPrintUnsigned(pBufferDesc, pContext, 0, 10, SEGGER_PRINTF_FLAG_ZEROPAD, -1, Precision);
      goto Done;
    }
  } else if (Exponent == 0x7FF) {
    if (Fraction == 0) {
      //
      // +/-Infinite
      //
      if (Sign) {
        pApi->pfStoreChar(pBufferDesc, pContext, '-');
        Stored++;
      }
      for (c = "Infinite"; *c != 0; c++) {
        pApi->pfStoreChar(pBufferDesc, pContext, *c);
        Stored++;
      }
      goto Done;
    } else {
      //
      // NaN
      //
      for (c = "NaN"; *c != 0; c++) {
        pApi->pfStoreChar(pBufferDesc, pContext, *c);
        Stored++;
      }
      if (Fraction & ((U64)1 << 51)) {
        pApi->pfStoreChar(pBufferDesc, pContext, 's');
      } else {
        pApi->pfStoreChar(pBufferDesc, pContext, 'q');
      }
      Stored++;
      goto Done;
    }
  }
  //
  // Handle sign
  //
  if (Sign) {
    v = -v;
  }
  //
  // Integral part
  //
  s = 1;
  for (n = 0; n < Precision; n++) {
    s *= 10;
  }
  v += 0.5 / s; // round to last digit of fractional part
  n = (U32)v;
  if (Sign) {
    Stored += pApi->pfPrintInt(pBufferDesc, pContext, -n, 10, Flags, Flags & SEGGER_PRINTF_FLAG_ADJLEFT ? 0 : Width, -1);
  } else {
    Stored += pApi->pfPrintInt(pBufferDesc, pContext,  n, 10, Flags, Flags & SEGGER_PRINTF_FLAG_ADJLEFT ? 0 : Width, -1);
  }
  //
  // Fractional part
  //
  if (Precision > 0 || (Flags & SEGGER_PRINTF_FLAG_PRECEED)) {
    pApi->pfStoreChar(pBufferDesc, pContext, '.');
    Stored++;
  }
  if (Precision > 0) {
    n = (U32)((v - n) * s);
    Stored += pApi->pfPrintUnsigned(pBufferDesc, pContext, n, 10, SEGGER_PRINTF_FLAG_ZEROPAD, -1, Precision);
  }
Done:
  //
  // Right padding
  //
  if (Flags & SEGGER_PRINTF_FLAG_ADJLEFT) {
    while (Stored < Width) {
      pApi->pfStoreChar(pBufferDesc, pContext, ' ');
      Stored++;
    }
  }
}

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_PRINTF_AddDoubleFormatter
*
*  Function description
*    Adds the double formatter to the SEGGER_snprintf() formatter.
*/
void SEGGER_PRINTF_AddDoubleFormatter() {
  SEGGER_PRINTF_AddFormatter(&_Formatter_f, &_PrintDouble, 'f');
}

/*************************** End of file ****************************/
