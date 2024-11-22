/*********************************************************************
*                     SEGGER Microcontroller GmbH                    *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2024  SEGGER Microcontroller GmbH                *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : ID_SCREEN_ENGFUELRATE_POPUP.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_ENGFUELRATE_POPUP_H
#define ID_SCREEN_ENGFUELRATE_POPUP_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_MULTIEDIT_00          (GUI_ID_USER + 9)
#define ID_TEXT_00               (GUI_ID_USER + 3)
#define ID_TEXT_ENGINE_FUEL_RATE (GUI_ID_USER + 4)
#define ID_TEXT_01               (GUI_ID_USER + 5)
#define ID_TEXT_02               (GUI_ID_USER + 6)
#define ID_TEXT_03               (GUI_ID_USER + 7)
#define ID_TEXT_04               (GUI_ID_USER + 8)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_ENGFUELRATE_POPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENGINE_FUEL_RATE__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_ENGFUELRATE_POPUP(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_ENGFUELRATE_POPUP_H

/*************************** End of file ****************************/
