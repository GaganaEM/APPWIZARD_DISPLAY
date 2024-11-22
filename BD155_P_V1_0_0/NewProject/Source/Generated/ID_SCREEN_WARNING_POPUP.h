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
File        : ID_SCREEN_WARNING_POPUP.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_WARNING_POPUP_H
#define ID_SCREEN_WARNING_POPUP_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_BOX_00       (GUI_ID_USER + 7)
#define ID_MULTIEDIT_00 (GUI_ID_USER + 1)
#define ID_IMAGE_00     (GUI_ID_USER + 3)
#define ID_TEXT_00      (GUI_ID_USER + 4)
#define ID_TEXT_01      (GUI_ID_USER + 5)
#define ID_TEXT_WARN    (GUI_ID_USER + 2)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_RESTORE_DEFAULTS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_WARN__APPW_JOB_SETTEXT  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RESTORE_DEFAULTS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_WARN__APPW_JOB_SETTEXT_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_WARNING_POPUP(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_WARNING_POPUP_H

/*************************** End of file ****************************/
