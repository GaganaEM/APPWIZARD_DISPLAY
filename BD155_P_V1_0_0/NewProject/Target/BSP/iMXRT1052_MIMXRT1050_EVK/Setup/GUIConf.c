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
----------------------------------------------------------------------
File        : GUIConf.c
Purpose     : Display controller initialization
---------------------------END-OF-HEADER------------------------------
*/
#include "GUI.h"
#include "PIDConf.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
//
// Define the available number of bytes available for the GUI
//
#define GUI_NUMBYTES  (1024 * 1024 * 12)

#if   (defined __ICCARM__)  // IAR
  static __no_init U32 aMemory[GUI_NUMBYTES / 4] @ "GUI_RAM";
#elif (defined __SES_ARM)   // SES
  static U32 aMemory[GUI_NUMBYTES / 4] __attribute__ ((section (".GUI_RAM")));
#else
  static U32 aMemory[GUI_NUMBYTES / 4];
#endif

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       GUI_X_Config
*
* Purpose:
*   Called during the initialization process in order to set up the
*   available memory for the GUI.
*/
void GUI_X_Config(void) {
  //
  // Assign memory to emWin
  //
  GUI_ALLOC_AssignMemory(aMemory, GUI_NUMBYTES);
  GUI_PID_SetInitFunc(PID_X_Init);
}

/*************************** End of file ****************************/
