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
File        : ID_SCREEN_KEYPAD.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_KEYPAD.h"

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
    ID_SCREEN_KEYPAD, 0,
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
    ID_IMAGE_08, ID_SCREEN_KEYPAD,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      800, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_KEYPAD_CURSOR, ID_SCREEN_KEYPAD,
    { { { DISPOSE_MODE_REL_PARENT, 132, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 154, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      32, 6, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_CHARACTERS, ID_SCREEN_KEYPAD,
    { { { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 51, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      390, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_WARNING, ID_SCREEN_KEYPAD,
    { { { DISPOSE_MODE_REL_PARENT, 277, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 366, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      245, 44, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_08,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_08,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acKeypad_Page),
                                                          ARG_V(88524), } },
  { ID_IMAGE_KEYPAD_CURSOR, APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_KEYPAD_CURSOR, APPW_SET_PROP_SBITMAP,      { ARG_VP(0, accursor_block_32x6),
                                                          ARG_V(141), } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_EDIT) } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_CHARACTERS,     APPW_SET_PROP_LENGTH,       { ARG_V(10) } },
  { ID_TEXT_WARNING,        APPW_SET_PROP_COLOR,        { ARG_V(0xffaa0000) } },
  { ID_TEXT_WARNING,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_WARNING,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_WARNING,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_WARNING,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_SELECTED_CHARACTER }, { APPW_IS_VAL, 250 } }, APPW__CompareIsLess },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_KEYPAD_WARNING }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_02 = { "A", _aComparison_02, GUI_COUNTOF(_aComparison_02) };
static const APPW_COND _Condition_03 = { "A", _aComparison_03, GUI_COUNTOF(_aComparison_03) };
static const APPW_COND _Condition_04 = { "A", _aComparison_04, GUI_COUNTOF(_aComparison_04) };
static const APPW_COND _Condition_05 = { "A", _aComparison_05, GUI_COUNTOF(_aComparison_05) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_KEYPAD_X,        WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_KEYPAD_CURSOR, APPW_JOB_SETX0,          ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_KEYPAD_CURSOR__APPW_JOB_SETX0,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_KEYPAD_Y,        WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_KEYPAD_CURSOR, APPW_JOB_SETY0,          ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_KEYPAD_CURSOR__APPW_JOB_SETY0,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SELECTED_CHARACTER, WM_NOTIFICATION_VALUE_CHANGED,    ID_EDIT_CHARACTERS,     APPW_JOB_SETTEXT,        ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED__ID_EDIT_CHARACTERS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_EDIT),
    }, 65536, &_Condition_02
  },
  { ID_VAR_DISPSCREEN,      WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_SWAPSCREEN,     ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_IDENTIFICATION),
    }, 0, &_Condition_03
  },
  { ID_VAR_DISPSCREEN,      WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_SWAPSCREEN,     ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_SERVICE_REMINDER),
    }, 0, &_Condition_04
  },
  { ID_VAR_KEYPAD_WARNING,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_WARNING,        APPW_JOB_SETTEXT,        ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_WARNING__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_KEYPAD_WARNING),
    }, 65536, &_Condition_05
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
*       ID_SCREEN_KEYPAD_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_KEYPAD_RootInfo = {
  ID_SCREEN_KEYPAD,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_KEYPAD,
  0
};

/*************************** End of file ****************************/
