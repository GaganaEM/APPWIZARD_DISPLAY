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
File        : ID_SCREEN_SYSTEM_SETUP_DATA.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_SYSTEM_SETUP_DATA.h"

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
    ID_SCREEN_SYSTEM_SETUP_DATA, 0,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_00, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      800, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_MULTIEDIT_Create,
    ID_MULTIEDIT_00, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 329, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 64, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      225, 54, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_MULTIEDIT_Create,
    ID_MULTIEDIT_01, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 367, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      550, 100, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ADJUSTHRS, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 438, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 71, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      65, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ENGINE_ECU_HRS, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 455, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 416, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      107, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DISPLAYHRS, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 180, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 416, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      108, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DISPHRS, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 158, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 378, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      219, 22, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ENGHRS, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 437, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 378, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      201, 22, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_10, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 245, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      309, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 109, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 77, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      220, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 490, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 78, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      37, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 295, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      37, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_03, ID_SCREEN_SYSTEM_SETUP_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 570, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      37, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,                 APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,                 APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                               ARG_V(191986), } },
  { ID_MULTIEDIT_00,             APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                               ARG_V(GUI_INVALID_COLOR),
                                                               ARG_V(GUI_BLACK) } },
  { ID_MULTIEDIT_00,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_MULTIEDIT_00,             APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_MULTIEDIT_00,             APPW_SET_PROP_BORDER,       { ARG_V(3) } },
  { ID_MULTIEDIT_00,             APPW_SET_PROP_FRAME,        { ARG_V(3) } },
  { ID_MULTIEDIT_01,             APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                               ARG_V(GUI_INVALID_COLOR),
                                                               ARG_V(GUI_BLACK) } },
  { ID_MULTIEDIT_01,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_MULTIEDIT_01,             APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_MULTIEDIT_01,             APPW_SET_PROP_BORDER,       { ARG_V(3) } },
  { ID_MULTIEDIT_01,             APPW_SET_PROP_FRAME,        { ARG_V(3) } },
  { ID_TEXT_ADJUSTHRS,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_ADJUSTHRS,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_ADJUSTHRS,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_ADJUSTHRS,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_ADJUSTHRS,           APPW_SET_PROP_DECMODE,      { ARG_V(1),
                                                               ARG_V(0),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_ADJUSTHRS,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_ENGINE_ECU_HRS,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_ENGINE_ECU_HRS,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_ENGINE_ECU_HRS,      APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_ENGINE_ECU_HRS,      APPW_SET_PROP_COLOR2,       { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_ENGINE_ECU_HRS,      APPW_SET_PROP_DECMODE,      { ARG_V(8),
                                                               ARG_V(1),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_ENGINE_ECU_HRS,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_DISPLAYHRS,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DISPLAYHRS,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_DISPLAYHRS,          APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_DISPLAYHRS,          APPW_SET_PROP_COLOR2,       { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_DISPLAYHRS,          APPW_SET_PROP_DECMODE,      { ARG_V(8),
                                                               ARG_V(1),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_DISPLAYHRS,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_DISPHRS,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DISPHRS,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_DISPHRS,             APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_DISPHRS,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_23) } },
  { ID_TEXT_DISPHRS,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DISPHRS,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_ENGHRS,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_ENGHRS,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_ENGHRS,              APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_ENGHRS,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_24) } },
  { ID_TEXT_ENGHRS,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_ENGHRS,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,                  APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_10,                  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_10,                  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,                  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,                  APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_18) } },
  { ID_TEXT_10,                  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_00,                  APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_00,                  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_00,                  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                  APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_19) } },
  { ID_TEXT_00,                  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_01,                  APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_01,                  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_01,                  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,                  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,                  APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_21) } },
  { ID_TEXT_01,                  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_02,                  APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_02,                  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_02,                  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,                  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,                  APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_21) } },
  { ID_TEXT_02,                  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_03,                  APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_03,                  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                               ARG_V(0),
                                                               ARG_V(0) } },
  { ID_TEXT_03,                  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,                  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,                  APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_21) } },
  { ID_TEXT_03,                  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_00 = { "A", _aComparison_00, GUI_COUNTOF(_aComparison_00) };
static const APPW_COND _Condition_01 = { "A", _aComparison_01, GUI_COUNTOF(_aComparison_01) };
static const APPW_COND _Condition_02 = { "A", _aComparison_02, GUI_COUNTOF(_aComparison_02) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,           WM_NOTIFICATION_VALUE_CHANGED,    0,                           APPW_JOB_SWAPSCREEN,     ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_UTILITIES),
    }, 0, &_Condition_00
  },
  { ID_VAR_POPUP,                WM_NOTIFICATION_VALUE_CHANGED,    0,                           APPW_JOB_MODALMESSAGE,   ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_01
  },
  { ID_VAR_POPUP,                WM_NOTIFICATION_VALUE_CHANGED,    0,                           APPW_JOB_CLOSESCREEN,    ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_02
  },
  { ID_VAR_HRMETER,              WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ENGINE_ECU_HRS,      APPW_JOB_SETVALUE,       ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENGINE_ECU_HRS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DISPLAY_HRS,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DISPLAYHRS,          APPW_JOB_SETVALUE,       ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DISPLAYHRS__APPW_JOB_SETVALUE,
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
*       ID_SCREEN_SYSTEM_SETUP_DATA_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_SYSTEM_SETUP_DATA_RootInfo = {
  ID_SCREEN_SYSTEM_SETUP_DATA,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_SYSTEM_SETUP_DATA,
  0
};

/*************************** End of file ****************************/
