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
File        : ID_SCREEN_SERVICE_REMINDER.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_SERVICE_REMINDER.h"

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
    ID_SCREEN_SERVICE_REMINDER, 0,
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
    ID_IMAGE_00, ID_SCREEN_SERVICE_REMINDER,
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
    ID_IMAGE_06, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_07, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_03, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_BLOCK1, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 84, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 149, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      632, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_BLOCK2, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 84, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      632, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_BLOCK3, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 84, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 241, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      632, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_BLOCK4, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 84, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      632, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_BLOCK5, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 84, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 333, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      632, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_INTERVAL1, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 149, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      101, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_INTERVAL2, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      101, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_INTERVAL3, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 241, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      101, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_INTERVAL4, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      101, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_INTERVAL5, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 333, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      101, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_NEXT1, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 465, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 149, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      78, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_NEXT2, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 465, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      78, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_NEXT3, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 465, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 241, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      78, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_NEXT4, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 465, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      78, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_NEXT5, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 465, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 333, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      78, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_REMAINING1, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 550, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 149, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_REMAINING2, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 550, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_REMAINING3, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 550, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 241, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_REMAINING4, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 550, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_REMAINING5, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 550, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 333, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_TOTALENGINEHOURS, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 419, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      101, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_11, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 247, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      305, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 94, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 149, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      236, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 94, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      236, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 94, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 241, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      236, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_03, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 94, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      236, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_04, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 94, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 333, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      236, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_05, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 293, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 382, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      215, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 348, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      103, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_07, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 465, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 107, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      78, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_08, ID_SCREEN_SERVICE_REMINDER,
    { { { DISPOSE_MODE_REL_PARENT, 550, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 107, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 33, 0, 0, 0, 0
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
  { ID_IMAGE_00,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                              ARG_V(191986), } },
  { ID_IMAGE_06,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_06,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUp_arrow_blue_72x90),
                                                              ARG_V(6980), } },
  { ID_IMAGE_07,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_07,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_blue_72x90),
                                                              ARG_V(7593), } },
  { ID_IMAGE_01,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acedit_symbol),
                                                              ARG_V(6794), } },
  { ID_IMAGE_02,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acoff_symbol_72x90),
                                                              ARG_V(8661), } },
  { ID_IMAGE_03,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acReset_symbol_72x90),
                                                              ARG_V(8383), } },
  { ID_IMAGE_BLOCK1,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_BLOCK1,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLOCK_632X33),
                                                              ARG_V(5460), } },
  { ID_IMAGE_BLOCK2,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_BLOCK2,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
                                                              ARG_V(5630), } },
  { ID_IMAGE_BLOCK3,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_BLOCK3,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
                                                              ARG_V(5630), } },
  { ID_IMAGE_BLOCK4,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_BLOCK4,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
                                                              ARG_V(5630), } },
  { ID_IMAGE_BLOCK5,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_BLOCK5,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
                                                              ARG_V(5630), } },
  { ID_TEXT_INTERVAL1,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_INTERVAL1,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL1,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL1,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL1,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL1,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_INTERVAL2,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_INTERVAL2,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL2,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL2,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL2,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL2,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_INTERVAL3,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_INTERVAL3,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL3,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL3,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL3,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL3,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_INTERVAL4,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_INTERVAL4,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL4,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL4,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL4,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL4,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_INTERVAL5,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_INTERVAL5,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL5,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL5,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_INTERVAL5,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_INTERVAL5,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_NEXT1,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_NEXT1,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT1,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT1,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT1,              APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT1,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_NEXT2,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_NEXT2,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT2,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT2,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT2,              APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT2,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_NEXT3,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_NEXT3,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT3,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT3,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT3,              APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT3,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_NEXT4,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_NEXT4,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT4,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT4,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT4,              APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT4,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_NEXT5,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_NEXT5,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT5,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT5,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_NEXT5,              APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_NEXT5,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_REMAINING1,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_REMAINING1,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING1,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING1,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING1,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING1,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_REMAINING2,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_REMAINING2,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING2,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING2,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING2,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING2,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_REMAINING3,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_REMAINING3,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING3,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING3,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING3,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING3,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_REMAINING4,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_REMAINING4,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING4,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING4,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING4,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING4,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_REMAINING5,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_REMAINING5,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING5,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING5,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_REMAINING5,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_REMAINING5,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_TOTALENGINEHOURS,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_TOTALENGINEHOURS,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_TOTALENGINEHOURS,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_TOTALENGINEHOURS,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_TOTALENGINEHOURS,   APPW_SET_PROP_DECMODE,      { ARG_V(8),
                                                              ARG_V(1),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_TOTALENGINEHOURS,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_11,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_11,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_11,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_11,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_11,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_136) } },
  { ID_TEXT_11,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_00,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_00,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_00,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_134) } },
  { ID_TEXT_00,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_01,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_01,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_01,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_135) } },
  { ID_TEXT_01,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_02,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_02,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_02,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_137) } },
  { ID_TEXT_02,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_03,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_03,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_03,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_138) } },
  { ID_TEXT_03,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_04,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_04,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_04,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_139) } },
  { ID_TEXT_04,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_05,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_05,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_05,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_140) } },
  { ID_TEXT_05,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_06,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_06,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_141) } },
  { ID_TEXT_06,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_07,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_07,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_07,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_142) } },
  { ID_TEXT_07,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_08,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_08,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_08,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_143) } },
  { ID_TEXT_08,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
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

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_1d[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 28 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_00 = { "A", _aComparison_00, GUI_COUNTOF(_aComparison_00) };
static const APPW_COND _Condition_01 = { "A", _aComparison_01, GUI_COUNTOF(_aComparison_01) };
static const APPW_COND _Condition_02 = { "A", _aComparison_02, GUI_COUNTOF(_aComparison_02) };
static const APPW_COND _Condition_03 = { "A", _aComparison_03, GUI_COUNTOF(_aComparison_03) };
static const APPW_COND _Condition_04 = { "A", _aComparison_04, GUI_COUNTOF(_aComparison_04) };
static const APPW_COND _Condition_05 = { "A", _aComparison_05, GUI_COUNTOF(_aComparison_05) };
static const APPW_COND _Condition_06 = { "A", _aComparison_06, GUI_COUNTOF(_aComparison_06) };
static const APPW_COND _Condition_07 = { "A", _aComparison_07, GUI_COUNTOF(_aComparison_07) };
static const APPW_COND _Condition_08 = { "A", _aComparison_08, GUI_COUNTOF(_aComparison_08) };
static const APPW_COND _Condition_09 = { "A", _aComparison_09, GUI_COUNTOF(_aComparison_09) };
static const APPW_COND _Condition_0a = { "A", _aComparison_0a, GUI_COUNTOF(_aComparison_0a) };
static const APPW_COND _Condition_0b = { "A", _aComparison_0b, GUI_COUNTOF(_aComparison_0b) };
static const APPW_COND _Condition_0c = { "A", _aComparison_0c, GUI_COUNTOF(_aComparison_0c) };
static const APPW_COND _Condition_1d = { "A", _aComparison_1d, GUI_COUNTOF(_aComparison_1d) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,          WM_NOTIFICATION_VALUE_CHANGED,    0,                          APPW_JOB_SWAPSCREEN,     ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_UTILITIES),
    }, 0, &_Condition_00
  },
  { ID_VAR_POPUP,               WM_NOTIFICATION_VALUE_CHANGED,    0,                          APPW_JOB_MODALMESSAGE,   ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_01
  },
  { ID_VAR_POPUP,               WM_NOTIFICATION_VALUE_CHANGED,    0,                          APPW_JOB_CLOSESCREEN,    ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_02
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK1,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK1__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33),
      ARG_V(5460),
    }, 1, &_Condition_03
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK1,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK1__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
      ARG_V(5630),
    }, 1, &_Condition_04
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK2,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK2__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33),
      ARG_V(5460),
    }, 1, &_Condition_05
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK2,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK2__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
      ARG_V(5630),
    }, 1, &_Condition_06
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK3,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK3__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33),
      ARG_V(5460),
    }, 1, &_Condition_07
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK3,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK3__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
      ARG_V(5630),
    }, 1, &_Condition_08
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK4,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK4__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33),
      ARG_V(5460),
    }, 1, &_Condition_09
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK4,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK4__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
      ARG_V(5630),
    }, 1, &_Condition_0a
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK5,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK5__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33),
      ARG_V(5460),
    }, 1, &_Condition_0b
  },
  { ID_VAR_BLOCK_SELECTED,      WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_BLOCK5,            APPW_JOB_SETBITMAP,      ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_BLOCK5__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acBLOCK_632X33_TRANSPARENT),
      ARG_V(5630),
    }, 1, &_Condition_0c
  },
  { ID_VAR_CHANGE_ENGOIL_INTERVAL, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_INTERVAL1,          APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_INTERVAL1__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CHANGE_ENGOIL_NEXT,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_NEXT1,              APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_NEXT1__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CHANGE_ENGOIL_REMAINING, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REMAINING1,         APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REMAINING1__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CHANGE_AIRFILTER_INTERVAL, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_INTERVAL2,          APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_INTERVAL2__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CHANGE_AIRFILTER_NEXT, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_NEXT2,              APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_NEXT2__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CHANGE_AIRFILTER_REMAINING, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REMAINING2,         APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REMAINING2__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CHANGE_HYDOIL_INTERVAL, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_INTERVAL3,          APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_INTERVAL3__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CHANGE_HYDOIL_NEXT,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_NEXT3,              APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_NEXT3__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CHANGE_HYDOIL_REMAINING, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REMAINING3,         APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REMAINING3__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SERVICE_ENGINE_INTERVAL, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_INTERVAL4,          APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_INTERVAL4__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SERVICE_ENGINE_NEXT, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_NEXT4,              APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_NEXT4__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SERVICE_ENGINE_REMAINING, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REMAINING4,         APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REMAINING4__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SERVICE_MACHINE_INTERVAL, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_INTERVAL5,          APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_INTERVAL5__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SERVICE_MACHINE_NEXT, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_NEXT5,              APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_NEXT5__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SERVICE_MACHINE_REMAINING, WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REMAINING5,         APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REMAINING5__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TOTAL_ENGINE_HRS,    WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_TOTALENGINEHOURS,   APPW_JOB_SETVALUE,       ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TOTALENGINEHOURS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DISPSCREEN,          WM_NOTIFICATION_VALUE_CHANGED,    0,                          APPW_JOB_SWAPSCREEN,     ID_SCREEN_SERVICE_REMAINDER__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_KEYPAD),
    }, 0, &_Condition_1d
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
*       ID_SCREEN_SERVICE_REMINDER_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_SERVICE_REMINDER_RootInfo = {
  ID_SCREEN_SERVICE_REMINDER,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_SERVICE_REMINDER,
  0
};

/*************************** End of file ****************************/
