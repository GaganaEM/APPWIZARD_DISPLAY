/*********************************************************************
*               (c) SEGGER Microcontroller GmbH & Co. KG             *
*                        The Embedded Experts                        *
*                           www.segger.com                           *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File    : SEGGER_snprintf_HTML.c
Purpose : Formatter hook for SEGGER_snprintf() handling the following
          formatter extensions:
            - m: Write string, converting characters having special
                 significance in HTML into their HTML entity representation.
Revision: $Rev: 6175 $
*/

#include "SEGGER.h"

/*********************************************************************
*
*       defines, configurable
*
**********************************************************************
*/

#ifndef ENT_QUOT
  #define ENT_QUOT 0
#endif

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

static SEGGER_PRINTF_FORMATTER _Formatter_m;

/*********************************************************************
*
*       Local functions
*
**********************************************************************
*/

/*********************************************************************
*
*       _PrintString
*
*  Function description
*    Helper function to print strings.
*/
static void _PrintString(SEGGER_BUFFER_DESC* pBufferDesc, SEGGER_SNPRINTF_CONTEXT* pContext, const SEGGER_PRINTF_API* pApi, const char* sText) {
  while (*sText) {
    pApi->pfStoreChar(pBufferDesc, pContext, *sText);
    sText++;
  }
}

/*********************************************************************
*
*       _PrintHTMLSpecialChars()
*
*  Function description
*    Stores a string with converted special characters into the string buffer.
*    These characters are converted:
*    & (ampersand)    => &amp;
*    " (double quote) => &quot;
*    ' (single quote) => &#039; (if ENT_QUOT is defined to 1)
*    < (less than)    => &lt;
*    > (greater than) => &gt;
*
*  Parameters
*    pBufferDesc: Output buffer descriptor.
*    pContext   : Management context. Can be NULL.
*    pApi       : Pointer to a SEGGER_PRINTF_API structure.
*    pParamList : Pointer to a variable arguments list to take the value from.
*    Flags      : Flags Byte, see SEGGER_PRINTF_FLAG_* definitions.
*    Width      : Overall width of the resulting string.
*    Precision  : Number of digits after decimal point of the value to store.
*/
static void _PrintHTMLSpecialChars(SEGGER_BUFFER_DESC* pBufferDesc, SEGGER_SNPRINTF_CONTEXT* pContext, const SEGGER_PRINTF_API* pApi, va_list* pParamList, char Flags, int Width, int Precision) {
  const char* sInput;
  SEGGER_USE_PARA(Flags);
  SEGGER_USE_PARA(Width);
  SEGGER_USE_PARA(Precision);

  sInput = va_arg(*pParamList, const char*);  // The input string.
  while (*sInput) {
    switch (*sInput) {
    case '&':
      _PrintString(pBufferDesc, pContext, pApi, "&amp;");
      break;
    case '"':
      _PrintString(pBufferDesc, pContext, pApi, "&quot;");
      break;
#if ENT_QUOT
    case '\'':
      _PrintString(pBufferDesc, pContext, pApi, "&#039;");
      break;
#endif
    case '<':
      _PrintString(pBufferDesc, pContext, pApi, "&lt;");
      break;
    case '>':
      _PrintString(pBufferDesc, pContext, pApi, "&gt;");
      break;
    default:
      pApi->pfStoreChar(pBufferDesc, pContext, *sInput);
    }
    sInput++;
  };
}

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_PRINTF_AddHTMLFormatter()
*
*  Function description
*    Adds formatter m to the SEGGER_snprintf() formatter.
*/
void SEGGER_PRINTF_AddHTMLFormatter(void) {
  SEGGER_PRINTF_AddFormatter(&_Formatter_m, &_PrintHTMLSpecialChars, 'm');
}

/*************************** End of file ****************************/
