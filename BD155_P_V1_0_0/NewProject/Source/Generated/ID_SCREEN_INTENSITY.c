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
File        : ID_SCREEN_INTENSITY.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_INTENSITY.h"

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
    ID_SCREEN_INTENSITY, 0,
    { { { DISPOSE_MODE_REL_PARENT, 405, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 200, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 152, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 212, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_00, ID_SCREEN_INTENSITY,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 68, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_SLIDER_Create,
    ID_SLIDER_INTENSITY, ID_SCREEN_INTENSITY,
    { { { DISPOSE_MODE_REL_PARENT, 79, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 29, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      141, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_INTENSEPER, ID_SCREEN_INTENSITY,
    { { { DISPOSE_MODE_REL_PARENT, 2, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 21, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBRIGHTNESS_CONTROL_1),
                                                       ARG_V(3262), } },
  { ID_SLIDER_INTENSITY, APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, acCover_Brightness), } },
  { ID_SLIDER_INTENSITY, APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                       ARG_V(100) } },
  { ID_SLIDER_INTENSITY, APPW_SET_PROP_COLORS,       { ARG_V(GUI_INVALID_COLOR),
                                                       ARG_V(GUI_INVALID_COLOR),
                                                       ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_INTENSEPER,  APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_INTENSEPER,  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_INTENSEPER,  APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(1) } },
  { ID_TEXT_INTENSEPER,  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_MODE }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_MODE }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_02 = { "A", _aComparison_02, GUI_COUNTOF(_aComparison_02) };
static const APPW_COND _Condition_03 = { "A", _aComparison_03, GUI_COUNTOF(_aComparison_03) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_INTENSITY_PER, WM_NOTIFICATION_VALUE_CHANGED,    ID_SLIDER_INTENSITY, APPW_JOB_SETVALUE,       ID_SCREEN_INTENSITY__WM_NOTIFICATION_VALUE_CHANGED__ID_SLIDER_INTENSITY__APPW_JOB_SETVALUE,
    { ARG_V(4151),
    }, 65537, NULL
  },
  { ID_VAR_INTENSITY_PER, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_INTENSEPER,  APPW_JOB_SETVALUE,       ID_SCREEN_INTENSITY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_INTENSEPER__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MODE,         WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_00,         APPW_JOB_SETBITMAP,      ID_SCREEN_INTENSITY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_00__APPW_JOB_SETBITMAP,
    { ARG_V(4154),
      ARG_VP(0, acBRIGHTNESS_CONTROL_1),
      ARG_V(3262),
    }, 1, &_Condition_02
  },
  { ID_VAR_MODE,         WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_00,         APPW_JOB_SETBITMAP,      ID_SCREEN_INTENSITY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_00__APPW_JOB_SETBITMAP_0,
    { ARG_V(4154),
      ARG_VP(0, acNIGHT_BRIGHTNESS),
      ARG_V(3708),
    }, 1, &_Condition_03
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
*       ID_SCREEN_INTENSITY_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_INTENSITY_RootInfo = {
  ID_SCREEN_INTENSITY,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_INTENSITY,
  0
};

/*************************** End of file ****************************/
