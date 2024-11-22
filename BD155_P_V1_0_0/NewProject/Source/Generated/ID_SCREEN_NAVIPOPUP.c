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
File        : ID_SCREEN_NAVIPOPUP.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_NAVIPOPUP.h"

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
    ID_SCREEN_NAVIPOPUP, 0,
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
    ID_IMAGE_01, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      91, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 709, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      91, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_00, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 14, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 145, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_HOME, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 11, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 14, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      61, 58, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_LEFT, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 14, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_RIGHT, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 731, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_PLUS, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 731, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 145, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_MINUS, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 731, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 265, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ERROR, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 736, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 34, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DAYLIGHT, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 201, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      85, 18, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_HOME, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 14, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 73, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 18, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_Next, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 730, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 448, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 16, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_Previous, ID_SCREEN_NAVIPOPUP,
    { { { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 448, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 16, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_01,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlackGrey91x480Right),
                                                       ARG_V(7676), } },
  { ID_IMAGE_02,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlackGrey91x480Left),
                                                       ARG_V(2524), } },
  { ID_IMAGE_00,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDayNight),
                                                       ARG_V(4175), } },
  { ID_IMAGE_HOME,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_HOME,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acHome_transparent),
                                                       ARG_V(13629), } },
  { ID_IMAGE_LEFT,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_LEFT,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acLeft),
                                                       ARG_V(19863), } },
  { ID_IMAGE_RIGHT,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_RIGHT,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acright1),
                                                       ARG_V(19421), } },
  { ID_IMAGE_PLUS,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_PLUS,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acPlus),
                                                       ARG_V(21018), } },
  { ID_IMAGE_MINUS,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_MINUS,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acMinus),
                                                       ARG_V(20315), } },
  { ID_IMAGE_ERROR,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ERROR,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                       ARG_V(568), } },
  { ID_TEXT_DAYLIGHT,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DAYLIGHT,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_DAYLIGHT,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DAYNIGHT) } },
  { ID_TEXT_DAYLIGHT,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_HOME,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_HOME,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_HOME,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_HOME,        APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_HOME) } },
  { ID_TEXT_Next,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_Next,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_Next,        APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_NEXT) } },
  { ID_TEXT_Next,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_Previous,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_Previous,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_Previous,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_PREVIOUS) } },
  { ID_TEXT_Previous,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON16 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON16 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON16 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
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
  { ID_VAR_ICON16,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ERROR,      APPW_JOB_SETBITMAP,      ID_SCREEN_NAVIPOPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ERROR__APPW_JOB_SETBITMAP,
    { ARG_V(4118),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_00
  },
  { ID_VAR_ICON16,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ERROR,      APPW_JOB_SETBITMAP,      ID_SCREEN_NAVIPOPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ERROR__APPW_JOB_SETBITMAP_0,
    { ARG_V(4118),
      ARG_VP(0, acrecall),
      ARG_V(4790),
    }, 1, &_Condition_01
  },
  { ID_VAR_ICON16,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ERROR,      APPW_JOB_SETBITMAP,      ID_SCREEN_NAVIPOPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ERROR__APPW_JOB_SETBITMAP_1,
    { ARG_V(4118),
      ARG_VP(0, achide),
      ARG_V(4436),
    }, 1, &_Condition_02
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
*       ID_SCREEN_NAVIPOPUP_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_NAVIPOPUP_RootInfo = {
  ID_SCREEN_NAVIPOPUP,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_NAVIPOPUP,
  0
};

/*************************** End of file ****************************/
