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
File        : ID_SCREEN_INVALID_PASSWORD.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_INVALID_PASSWORD.h"

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
    ID_SCREEN_INVALID_PASSWORD, 0,
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
    ID_IMAGE_00, ID_SCREEN_INVALID_PASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 235, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 190, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      334, 66, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_INVALID_PASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 249, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 206, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      301, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01, ID_SCREEN_INVALID_PASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 362, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 48, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 75, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acInvalid_Password),
                                                              ARG_V(3864), } },
  { ID_TEXT_00,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_00,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_00,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_INVALID_PASSWORD) } },
  { ID_TEXT_00,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_IMAGE_01,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acPassword_Unlock75x75),
                                                              ARG_V(27323), } },
};

/*********************************************************************
*
*       Public data
*
**********************************************************************
*/
/*********************************************************************
*
*       ID_SCREEN_INVALID_PASSWORD_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_INVALID_PASSWORD_RootInfo = {
  ID_SCREEN_INVALID_PASSWORD,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  NULL,  0,
  cbID_SCREEN_INVALID_PASSWORD,
  0
};

/*************************** End of file ****************************/
