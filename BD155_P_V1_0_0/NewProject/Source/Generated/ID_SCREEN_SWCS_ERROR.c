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
File        : ID_SCREEN_SWCS_ERROR.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_SWCS_ERROR.h"

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
    ID_SCREEN_SWCS_ERROR, 0,
    { { { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 165, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 165, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_00, ID_SCREEN_SWCS_ERROR,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      300, 150, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_00, ID_SCREEN_SWCS_ERROR,
    { { { DISPOSE_MODE_REL_PARENT, 122, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 12, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_SWCS_ERROR,
    { { { DISPOSE_MODE_REL_PARENT, 47, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 75, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      206, 58, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_EDIT_00,           APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_00,           APPW_SET_PROP_BKCOLORS,     { ARG_V(0xff7575af),
                                                        ARG_V(GUI_INVALID_COLOR),
                                                        ARG_V(GUI_BLACK) } },
  { ID_EDIT_00,           APPW_SET_PROP_COLOR,        { ARG_V(0xff0000c3) } },
  { ID_EDIT_00,           APPW_SET_PROP_LENGTH,       { ARG_V(30) } },
  { ID_EDIT_00,           APPW_SET_PROP_BORDER,       { ARG_V(5) } },
  { ID_EDIT_00,           APPW_SET_PROP_RADIUS,       { ARG_V(15) } },
  { ID_EDIT_00,           APPW_SET_PROP_FRAME,        { ARG_V(5) } },
  { ID_IMAGE_00,          APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,          APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acError_red),
                                                        ARG_V(586), } },
  { ID_TEXT_00,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_00,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_TOP),
                                                        ARG_V(0),
                                                        ARG_V(0) } },
  { ID_TEXT_00,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,           APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_165) } },
  { ID_TEXT_00,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_00,           APPW_SET_PROP_WRAP,         { ARG_V(0) } },
};

/*********************************************************************
*
*       Public data
*
**********************************************************************
*/
/*********************************************************************
*
*       ID_SCREEN_SWCS_ERROR_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_SWCS_ERROR_RootInfo = {
  ID_SCREEN_SWCS_ERROR,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  NULL,  0,
  cbID_SCREEN_SWCS_ERROR,
  0
};

/*************************** End of file ****************************/
