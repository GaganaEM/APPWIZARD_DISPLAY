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
File        : ID_SCREEN_RAW_CAN_DATA.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_RAW_CAN_DATA.h"

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
    ID_SCREEN_RAW_CAN_DATA, 0,
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
    ID_IMAGE_03, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      800, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_00, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 217, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 9, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      295, 44, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 1, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_05, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 599, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 599, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 576, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 418, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_06, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 576, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 69, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 349, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_05, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 25, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 145, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      153, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_07, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 630, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 275, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      146, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_08, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 663, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 305, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      77, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_09, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 630, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 400, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      146, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_10, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 663, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 430, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      73, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_21, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 592, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 3, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      207, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_22, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 611, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      170, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DAY, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 582, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 29, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MONTH, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 652, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 29, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_YEAR, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 722, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 29, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_02, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 627, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 33, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      25, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_12, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 697, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 33, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      25, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_HOUR, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 592, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 97, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      48, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MINUTE, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 665, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 97, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      48, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SECONDS, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 738, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 97, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      48, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_14, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 640, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      25, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_15, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 713, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      25, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_02, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 244, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 314, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_04, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 244, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 198, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 314, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 146, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_05, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 264, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 416, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 318, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 7, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_03, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 268, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 166, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      197, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_11, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 260, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 375, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_04, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 264, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 213, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      57, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_17, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 278, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      29, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_16, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 263, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 245, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      57, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_18, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 320, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 213, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      28, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_20, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 319, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 278, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      28, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_19, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 320, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 245, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      28, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COPYMESG, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 349, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 213, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_READMESG, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 349, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 245, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_IDMESG, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 349, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 278, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      133, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_LOGFILESIZE, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 349, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 422, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      106, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_00, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 504, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 221, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_23, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 25, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 175, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      153, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_GAUGE_Create,
    ID_LOGGINGTIMER_VALUE, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 489, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      87, 81, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_TIMER30SEC, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 517, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 118, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      31, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_01, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 516, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 141, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      39, 23, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_24, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 282, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 69, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      181, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_RECORDSTATUS, ID_SCREEN_RAW_CAN_DATA,
    { { { DISPOSE_MODE_REL_PARENT, 295, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 116, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      155, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_03,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                          ARG_V(191986), } },
  { ID_EDIT_00,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_YELLOW),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_00,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_00,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_00,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_00,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_00,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_65) } },
  { ID_EDIT_00,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_00,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_EDIT_00,             APPW_SET_PROP_LENGTH,       { ARG_V(17) } },
  { ID_IMAGE_01,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqrgreqbckd200x80),
                                                          ARG_V(3863), } },
  { ID_IMAGE_05,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_05,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqrgreqbckd200x80),
                                                          ARG_V(3863), } },
  { ID_IMAGE_04,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqrgreqbckd200x80),
                                                          ARG_V(3863), } },
  { ID_BOX_01,              APPW_SET_PROP_COLOR,        { ARG_V(0xffb3b3b3) } },
  { ID_BOX_01,              APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_BOX_06,              APPW_SET_PROP_COLOR,        { ARG_V(0xffb3b3b3) } },
  { ID_BOX_06,              APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_EDIT_05,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_05,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_05,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_05,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_05,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_05,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_66) } },
  { ID_EDIT_05,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_05,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_05,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_07,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_07,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_07,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_07,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_07,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_07,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_51) } },
  { ID_EDIT_07,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_07,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_07,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_08,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_08,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_08,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_08,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_08,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_08,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_52) } },
  { ID_EDIT_08,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_08,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_08,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_09,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_09,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_09,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_09,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_09,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_09,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_53) } },
  { ID_EDIT_09,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_09,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_09,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_10,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_10,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_10,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_10,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_10,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_10,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_54) } },
  { ID_EDIT_10,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_10,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_10,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_21,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_21,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_21,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_21,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_21,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_21,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_55) } },
  { ID_EDIT_21,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_21,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_21,             APPW_SET_PROP_LENGTH,       { ARG_V(16) } },
  { ID_EDIT_22,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_22,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_22,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_22,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_22,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_22,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_56) } },
  { ID_EDIT_22,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_22,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_22,             APPW_SET_PROP_LENGTH,       { ARG_V(16) } },
  { ID_TEXT_DAY,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DAY,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DAY,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DAY,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DAY,            APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DAY,            APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_MONTH,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MONTH,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_MONTH,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MONTH,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MONTH,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_MONTH,          APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_YEAR,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_YEAR,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_YEAR,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_YEAR,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_YEAR,           APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_YEAR,           APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_EDIT_02,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_02,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_02,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_02,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_02,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_02,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_SLASH) } },
  { ID_EDIT_02,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_02,             APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_18_Bold_EXT_AA4) } },
  { ID_EDIT_12,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_12,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_12,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_12,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_12,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_12,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_SLASH) } },
  { ID_EDIT_12,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_12,             APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_18_Bold_EXT_AA4) } },
  { ID_TEXT_HOUR,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_HOUR,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_HOUR,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_HOUR,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_HOUR,           APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_HOUR,           APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_TEXT_MINUTE,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MINUTE,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_MINUTE,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MINUTE,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MINUTE,         APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_MINUTE,         APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_TEXT_SECONDS,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SECONDS,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SECONDS,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SECONDS,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SECONDS,        APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SECONDS,        APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_EDIT_14,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_14,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_14,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_14,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_14,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_14,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_14,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_14,             APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_18_Bold_EXT_AA4) } },
  { ID_EDIT_15,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_15,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_15,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_15,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_15,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_15,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_15,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_15,             APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_18_Bold_EXT_AA4) } },
  { ID_BOX_02,              APPW_SET_PROP_COLOR,        { ARG_V(0xffd0d0d0) } },
  { ID_BOX_02,              APPW_SET_PROP_RADIUS,       { ARG_V(20) } },
  { ID_BOX_04,              APPW_SET_PROP_COLOR,        { ARG_V(0xffd0d0d0) } },
  { ID_BOX_04,              APPW_SET_PROP_RADIUS,       { ARG_V(20) } },
  { ID_BOX_05,              APPW_SET_PROP_COLOR,        { ARG_V(0xffd0d0d0) } },
  { ID_BOX_05,              APPW_SET_PROP_RADIUS,       { ARG_V(20) } },
  { ID_EDIT_03,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_YELLOW),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_03,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_03,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_03,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_03,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_03,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_63) } },
  { ID_EDIT_03,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_03,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_03,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_11,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_YELLOW),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_11,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_11,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_11,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_11,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_11,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_no_of_rec) } },
  { ID_EDIT_11,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_11,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_11,             APPW_SET_PROP_LENGTH,       { ARG_V(20) } },
  { ID_EDIT_04,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_04,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_04,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_04,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_04,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_04,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_59) } },
  { ID_EDIT_04,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_04,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_17,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_17,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_17,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_17,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_17,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_17,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_61) } },
  { ID_EDIT_17,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_17,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_16,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_16,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_16,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_16,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_16,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_16,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_60) } },
  { ID_EDIT_16,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_16,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_18,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_18,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_18,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_18,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_18,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_18,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_18,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_18,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_20,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_20,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_20,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_20,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_20,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_20,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_20,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_20,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_19,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_19,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_19,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_19,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_19,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_19,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_19,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_19,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_COPYMESG,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COPYMESG,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COPYMESG,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COPYMESG,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COPYMESG,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_COPYMESG,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_IDLE) } },
  { ID_TEXT_READMESG,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_READMESG,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_READMESG,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_READMESG,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_READMESG,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_READMESG,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_IDLE) } },
  { ID_TEXT_IDMESG,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_IDMESG,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_IDMESG,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_IDMESG,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_IDMESG,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_IDMESG,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_IDLE) } },
  { ID_TEXT_LOGFILESIZE,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_LOGFILESIZE,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_LOGFILESIZE,    APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_LOGFILESIZE,    APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_LOGFILESIZE,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_LOGFILESIZE,    APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_IMAGE_00,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acpendrive_35x90),
                                                          ARG_V(2360), } },
  { ID_EDIT_23,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_23,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_23,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_23,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_23,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_23,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_67) } },
  { ID_EDIT_23,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_23,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_23,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_ALIGNBITMAP,  { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                          ARG_V(3600) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_SPAN,         { ARG_V(0),
                                                          ARG_V(30) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_RADIUS,       { ARG_V(34) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(0xff00007f),
                                                          ARG_V(GUI_INVALID_COLOR) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_VALUES,       { ARG_V(10),
                                                          ARG_V(10) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_ROUNDEDVAL,   { ARG_V(0) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_ROUNDEDEND,   { ARG_V(0) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_VALUE,        { ARG_V(30) } },
  { ID_LOGGINGTIMER_VALUE,  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x0000aaff) } },
  { ID_TEXT_TIMER30SEC,     APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_TIMER30SEC,     APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_TIMER30SEC,     APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_TIMER30SEC,     APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_TIMER30SEC,     APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_TIMER30SEC,     APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_01,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_01,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_01,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_01,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_01,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_01,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_68) } },
  { ID_EDIT_01,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_01,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_24,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_YELLOW),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_24,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_24,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_24,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_24,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_24,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_62) } },
  { ID_EDIT_24,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_24,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_24,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_TEXT_RECORDSTATUS,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_RECORDSTATUS,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_RECORDSTATUS,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_RECORDSTATUS,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_RECORDSTATUS,   APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_IDLE) } },
  { ID_TEXT_RECORDSTATUS,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
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

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_RECSTATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_RECSTATUS }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_RECSTATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_RECSTATUS }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_COPYSTATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_COPYSTATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_COPYSTATUS }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_READSTATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_IDSTATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17[] = {
  { { { APPW_IS_VAR, ID_VAR_SDCARD_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18[] = {
  { { { APPW_IS_VAR, ID_VAR_SDCARD_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_00 = { "A", _aComparison_00, GUI_COUNTOF(_aComparison_00) };
static const APPW_COND _Condition_01 = { "A", _aComparison_01, GUI_COUNTOF(_aComparison_01) };
static const APPW_COND _Condition_02 = { "A", _aComparison_02, GUI_COUNTOF(_aComparison_02) };
static const APPW_COND _Condition_04 = { "A", _aComparison_04, GUI_COUNTOF(_aComparison_04) };
static const APPW_COND _Condition_05 = { "A", _aComparison_05, GUI_COUNTOF(_aComparison_05) };
static const APPW_COND _Condition_06 = { "A", _aComparison_06, GUI_COUNTOF(_aComparison_06) };
static const APPW_COND _Condition_07 = { "A", _aComparison_07, GUI_COUNTOF(_aComparison_07) };
static const APPW_COND _Condition_08 = { "A", _aComparison_08, GUI_COUNTOF(_aComparison_08) };
static const APPW_COND _Condition_09 = { "A", _aComparison_09, GUI_COUNTOF(_aComparison_09) };
static const APPW_COND _Condition_0a = { "A", _aComparison_0a, GUI_COUNTOF(_aComparison_0a) };
static const APPW_COND _Condition_0b = { "A", _aComparison_0b, GUI_COUNTOF(_aComparison_0b) };
static const APPW_COND _Condition_0c = { "A", _aComparison_0c, GUI_COUNTOF(_aComparison_0c) };
static const APPW_COND _Condition_15 = { "A", _aComparison_15, GUI_COUNTOF(_aComparison_15) };
static const APPW_COND _Condition_16 = { "A", _aComparison_16, GUI_COUNTOF(_aComparison_16) };
static const APPW_COND _Condition_17 = { "A", _aComparison_17, GUI_COUNTOF(_aComparison_17) };
static const APPW_COND _Condition_18 = { "A", _aComparison_18, GUI_COUNTOF(_aComparison_18) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,      WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_SWAPSCREEN,     ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_UTILITIES),
    }, 0, &_Condition_00
  },
  { ID_VAR_POPUP,           WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_MODALMESSAGE,   ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_01
  },
  { ID_VAR_POPUP,           WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_CLOSESCREEN,    ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_02
  },
  { ID_VAR_30SECTIMER,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_TIMER30SEC,     APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TIMER30SEC__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_RECSTATUS,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_RECORDSTATUS,   APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_RECORDSTATUS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_RECORDING),
    }, 65536, &_Condition_04
  },
  { ID_VAR_RECSTATUS,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_RECORDSTATUS,   APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_RECORDSTATUS__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_COMPLETE),
    }, 65536, &_Condition_05
  },
  { ID_VAR_RECSTATUS,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_RECORDSTATUS,   APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_RECORDSTATUS__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IDLE),
    }, 65536, &_Condition_06
  },
  { ID_VAR_RECSTATUS,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_RECORDSTATUS,   APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_RECORDSTATUS__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_RTEXT_STORING),
    }, 65536, &_Condition_07
  },
  { ID_VAR_COPYSTATUS,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COPYMESG,       APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_IDLE),
    }, 65536, &_Condition_08
  },
  { ID_VAR_COPYSTATUS,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COPYMESG,       APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_COPYING),
    }, 65536, &_Condition_09
  },
  { ID_VAR_COPYSTATUS,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COPYMESG,       APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_COMPLETE),
    }, 65536, &_Condition_0a
  },
  { ID_VAR_READSTATUS,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_READMESG,       APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_READMESG__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_IDLE),
    }, 65536, &_Condition_0b
  },
  { ID_VAR_IDSTATUS,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_IDMESG,         APPW_JOB_SETTEXT,        ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_IDMESG__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_IDLE),
    }, 65536, &_Condition_0c
  },
  { ID_VAR_DAY,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DAY,            APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MONTH,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MONTH,          APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_YEAR,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_YEAR,           APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_HOUR,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_HOUR,           APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MINUTE,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MINUTE,         APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MINUTE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SEC,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SECONDS,        APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SECONDS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_LOGSIZE,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_LOGFILESIZE,    APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_LOGFILESIZE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_30SECTIMER,      WM_NOTIFICATION_VALUE_CHANGED,    ID_LOGGINGTIMER_VALUE,  APPW_JOB_SETVALUE,       ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_LOGGINGTIMER_VALUE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_PENDRIVE_POPUP,  WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_MODALMESSAGE,   ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_PENDRIVE_DETECT_POPUP),
    }, 0, &_Condition_15
  },
  { ID_VAR_PENDRIVE_POPUP,  WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_CLOSESCREEN,    ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_PENDRIVE_DETECT_POPUP),
    }, 0, &_Condition_16
  },
  { ID_VAR_SDCARD_POPUP,    WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_MODALMESSAGE,   ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_4,
    { ARG_V(ID_SCREEN_SDCARD_DETECT),
    }, 0, &_Condition_17
  },
  { ID_VAR_SDCARD_POPUP,    WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_CLOSESCREEN,    ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_5,
    { ARG_V(ID_SCREEN_SDCARD_DETECT),
    }, 0, &_Condition_18
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
*       ID_SCREEN_RAW_CAN_DATA_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_RAW_CAN_DATA_RootInfo = {
  ID_SCREEN_RAW_CAN_DATA,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_RAW_CAN_DATA,
  0
};

/*************************** End of file ****************************/
