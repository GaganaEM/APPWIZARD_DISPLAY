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
File        : ID_SCREEN_ENGHRS_POPUP.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_ENGHRS_POPUP.h"

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
/*********************************************************************
*
*       _aCreate
*/
static APPW_CREATE_ITEM _aCreate[] = {
  { WM_OBJECT_WINDOW_Create,
    ID_SCREEN_ENGHRS_POPUP, 0,
    { { { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_MULTIEDIT_Create,
    ID_MULTIEDIT_00, ID_SCREEN_ENGHRS_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      300, 280, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_ENGHRS_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 64, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      172, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_ENGHRS_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 214, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 63, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      43, 39, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_ENGHRS_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 41, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      47, 22, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_03, ID_SCREEN_ENGHRS_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 92, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 218, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      8, 22, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_04, ID_SCREEN_ENGHRS_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 102, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      70, 22, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ENGINE_ECU_HRS, ID_SCREEN_ENGHRS_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 44, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 60, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      164, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_MULTIEDIT_00,        APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_MULTIEDIT_00,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_MULTIEDIT_00,        APPW_SET_PROP_RADIUS,       { ARG_V(15) } },
  { ID_MULTIEDIT_00,        APPW_SET_PROP_BORDER,       { ARG_V(5) } },
  { ID_MULTIEDIT_00,        APPW_SET_PROP_FRAME,        { ARG_V(5) } },
  { ID_TEXT_00,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_CYAN) } },
  { ID_TEXT_00,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_00,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_24) } },
  { ID_TEXT_00,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_01,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_01,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_01,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_21) } },
  { ID_TEXT_01,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_02,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_RED) } },
  { ID_TEXT_02,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_02,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_EXIT) } },
  { ID_TEXT_02,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_03,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_03,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_03,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_03,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_04,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_04,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_04,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_1) } },
  { ID_TEXT_04,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_ENGINE_ECU_HRS, APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_ENGINE_ECU_HRS, APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_ENGINE_ECU_HRS, APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_ENGINE_ECU_HRS, APPW_SET_PROP_COLOR2,       { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_ENGINE_ECU_HRS, APPW_SET_PROP_DECMODE,      { ARG_V(8),
                                                          ARG_V(1),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_ENGINE_ECU_HRS, APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_HRMETER,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ENGINE_ECU_HRS, APPW_JOB_SETVALUE,       ID_SCREEN_ENGHRS_POPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENGINE_ECU_HRS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
};

/*********************************************************************
*
*       Public data
*
**********************************************************************
*/
/*********************************************************************
*
*       ID_SCREEN_ENGHRS_POPUP_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_ENGHRS_POPUP_RootInfo = {
  ID_SCREEN_ENGHRS_POPUP,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_ENGHRS_POPUP,
  0
};

/*************************** End of file ****************************/
