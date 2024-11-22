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
File        : ID_SCREEN_MAIN2_DAY.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_MAIN2_DAY.h"

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
    ID_SCREEN_MAIN2_DAY, 0,
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
    ID_IMAGE_BK, ID_SCREEN_MAIN2_DAY,
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
    ID_IMAGE_ECT, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 130, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      38, 38, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_FUEL, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 530, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 140, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 35, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_COT, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      38, 38, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_EOT, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 560, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      38, 38, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_TOP, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 150, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 140, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      38, 38, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON01, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 11, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON02, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 77, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON03, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 143, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON04, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 209, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON05, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 275, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON06, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 341, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON07, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 407, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON08, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 472, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON09, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 538, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON10, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 605, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON11, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 671, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON12, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 737, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON16, ID_SCREEN_MAIN2_DAY,
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
    ID_TEXT_REV, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 10, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 450, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_GEAR, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      52, 52, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_ROTARY_Create,
    ID_ROTARY_TOP, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 121, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 88, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      185, 185, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_ROTARY_Create,
    ID_ROTARY_FUEL, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 491, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 88, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      185, 185, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_ROTARY_Create,
    ID_ROTARY_ECT, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 97, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 277, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      185, 185, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_ROTARY_Create,
    ID_ROTARY_EOT, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 517, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 277, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      185, 185, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_ROTARY_Create,
    ID_ROTARY_COT, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 300, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 185, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 200, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_CHECKTRANS, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 740, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 400, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      52, 52, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_TOP, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 165, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 230, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ECT2, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 140, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COT, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 358, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      90, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FUEL, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 540, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 230, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_EOT, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 560, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 427, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_SLIDER_Create,
    ID_SLIDER_EOP, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 50, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
      },
      46, 151, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_SLIDER_Create,
    ID_SLIDER_BATT_VOL, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 740, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
      },
      46, 151, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_EOP, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, -3, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 272, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      69, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_BATT_VOL, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 695, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 272, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      69, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_RPM, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 330, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 438, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      130, 28, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_OVRSPD, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 325, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 255, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      150, 60, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ID_NOT_SET, ID_SCREEN_MAIN2_DAY,
    { { { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 395, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      230, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_BK,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDAY_SCREEN_2),
                                                       ARG_V(422652), } },
  { ID_IMAGE_ECT,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acECT_DAY),
                                                       ARG_V(540), } },
  { ID_IMAGE_FUEL,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acFUEL_DAY),
                                                       ARG_V(480), } },
  { ID_IMAGE_COT,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acTOT_DAY),
                                                       ARG_V(688), } },
  { ID_IMAGE_EOT,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acEOT_DAY),
                                                       ARG_V(572), } },
  { ID_IMAGE_TOP,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acTOP_DAY),
                                                       ARG_V(628), } },
  { ID_IMAGE_ICON01,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON01,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acAIRFILTCLOG_GREY),
                                                       ARG_V(727), } },
  { ID_IMAGE_ICON02,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON02,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acEOP_GREY),
                                                       ARG_V(743), } },
  { ID_IMAGE_ICON03,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON03,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acECT_GREY),
                                                       ARG_V(764), } },
  { ID_IMAGE_ICON04,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON04,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acEOT_GREY),
                                                       ARG_V(784), } },
  { ID_IMAGE_ICON05,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON05,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acECL_GREY),
                                                       ARG_V(708), } },
  { ID_IMAGE_ICON06,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON06,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acFUEL_GREY),
                                                       ARG_V(680), } },
  { ID_IMAGE_ICON07,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON07,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSEATBELT_GREY),
                                                       ARG_V(769), } },
  { ID_IMAGE_ICON08,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON08,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acTOP_GREY),
                                                       ARG_V(826), } },
  { ID_IMAGE_ICON09,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON09,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acTOT_GREY),
                                                       ARG_V(900), } },
  { ID_IMAGE_ICON10,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON10,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acTOFC_GBG),
                                                       ARG_V(920), } },
  { ID_IMAGE_ICON11,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON11,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acEOFC_GREY),
                                                       ARG_V(832), } },
  { ID_IMAGE_ICON12,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON12,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acHOL_GREY),
                                                       ARG_V(599), } },
  { ID_IMAGE_ICON16,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON16,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                       ARG_V(568), } },
  { ID_TEXT_REV,         APPW_SET_PROP_COLOR,        { ARG_V(0xff7f7f7f) } },
  { ID_TEXT_REV,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_REV,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_IMAGE_GEAR,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_GEAR,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                       ARG_V(568), } },
  { ID_ROTARY_TOP,       APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL),
                                                       ARG_VP(0, acNeedle80x15), } },
  { ID_ROTARY_TOP,       APPW_SET_PROP_POS,          { ARG_V(32) } },
  { ID_ROTARY_TOP,       APPW_SET_PROP_ROTATE,       { ARG_V(0) } },
  { ID_ROTARY_TOP,       APPW_SET_PROP_OFFSET,       { ARG_V(2105) } },
  { ID_ROTARY_TOP,       APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                       ARG_V(3600) } },
  { ID_ROTARY_FUEL,      APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL),
                                                       ARG_VP(0, acNeedle80x15), } },
  { ID_ROTARY_FUEL,      APPW_SET_PROP_POS,          { ARG_V(32) } },
  { ID_ROTARY_FUEL,      APPW_SET_PROP_ROTATE,       { ARG_V(0) } },
  { ID_ROTARY_FUEL,      APPW_SET_PROP_OFFSET,       { ARG_V(2414) } },
  { ID_ROTARY_FUEL,      APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                       ARG_V(3600) } },
  { ID_ROTARY_ECT,       APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL),
                                                       ARG_VP(0, acNeedle80x15), } },
  { ID_ROTARY_ECT,       APPW_SET_PROP_POS,          { ARG_V(32) } },
  { ID_ROTARY_ECT,       APPW_SET_PROP_ROTATE,       { ARG_V(0) } },
  { ID_ROTARY_ECT,       APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                       ARG_V(3600) } },
  { ID_ROTARY_ECT,       APPW_SET_PROP_OFFSET,       { ARG_V(2120) } },
  { ID_ROTARY_EOT,       APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL),
                                                       ARG_VP(0, acNeedle80x15), } },
  { ID_ROTARY_EOT,       APPW_SET_PROP_POS,          { ARG_V(32) } },
  { ID_ROTARY_EOT,       APPW_SET_PROP_ROTATE,       { ARG_V(0) } },
  { ID_ROTARY_EOT,       APPW_SET_PROP_OFFSET,       { ARG_V(2413) } },
  { ID_ROTARY_EOT,       APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                       ARG_V(3600) } },
  { ID_ROTARY_COT,       APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL),
                                                       ARG_VP(0, acNeedle80x15), } },
  { ID_ROTARY_COT,       APPW_SET_PROP_POS,          { ARG_V(32) } },
  { ID_ROTARY_COT,       APPW_SET_PROP_ROTATE,       { ARG_V(0) } },
  { ID_ROTARY_COT,       APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                       ARG_V(3600) } },
  { ID_ROTARY_COT,       APPW_SET_PROP_OFFSET,       { ARG_V(2404) } },
  { ID_IMAGE_CHECKTRANS, APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_CHECKTRANS, APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                       ARG_V(568), } },
  { ID_TEXT_TOP,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_TOP,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_TOP,         APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_TOP,         APPW_SET_PROP_COLOR2,       { ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_TOP,         APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                       ARG_V(1),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_TOP,         APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_16_Bold_EXT_AA4) } },
  { ID_TEXT_ECT2,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_ECT2,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_ECT2,        APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(1) } },
  { ID_TEXT_ECT2,        APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_16_Bold_EXT_AA4) } },
  { ID_TEXT_COT,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COT,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_COT,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(1) } },
  { ID_TEXT_COT,         APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_COT,         APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_COT,         APPW_SET_PROP_COLOR2,       { ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_FUEL,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FUEL,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_FUEL,        APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(1) } },
  { ID_TEXT_FUEL,        APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_16_Bold_EXT_AA4) } },
  { ID_TEXT_FUEL,        APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_FUEL,        APPW_SET_PROP_COLOR2,       { ARG_V(GUI_INVALID_COLOR) } },
  { ID_TEXT_EOT,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_EOT,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_EOT,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(1) } },
  { ID_TEXT_EOT,         APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_16_Bold_EXT_AA4) } },
  { ID_SLIDER_EOP,       APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                       ARG_V(100) } },
  { ID_SLIDER_EOP,       APPW_SET_PROP_VERTICAL,     { ARG_V(0) } },
  { ID_SLIDER_EOP,       APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL),
                                                       ARG_VP(0, acSCREEN2_COVER), } },
  { ID_SLIDER_EOP,       APPW_SET_PROP_COLORS,       { ARG_V(0x00ffffff),
                                                       ARG_V(0x00ffffff),
                                                       ARG_V(GUI_INVALID_COLOR) } },
  { ID_SLIDER_EOP,       APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_SLIDER_BATT_VOL,  APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                       ARG_V(360) } },
  { ID_SLIDER_BATT_VOL,  APPW_SET_PROP_VERTICAL,     { ARG_V(0) } },
  { ID_SLIDER_BATT_VOL,  APPW_SET_PROP_SBITMAPS,     { ARG_VP(0, NULL),
                                                       ARG_VP(0, acSCREEN2_COVER), } },
  { ID_SLIDER_BATT_VOL,  APPW_SET_PROP_COLORS,       { ARG_V(GUI_INVALID_COLOR),
                                                       ARG_V(GUI_INVALID_COLOR),
                                                       ARG_V(GUI_INVALID_COLOR) } },
  { ID_SLIDER_BATT_VOL,  APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_TEXT_EOP,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_EOP,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_EOP,         APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                       ARG_V(1),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_EOP,         APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_BATT_VOL,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_BATT_VOL,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_BATT_VOL,    APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                       ARG_V(1),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_BATT_VOL,    APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_RPM,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_RPM,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_RPM,         APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_30_Normal_EXT_AA4) } },
  { ID_TEXT_RPM,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_RPM,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_RPM,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(0),
                                                       ARG_V(1) } },
  { ID_IMAGE_OVRSPD,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_OVRSPD,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                       ARG_V(568), } },
  { ID_IMAGE_ID_NOT_SET, APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ID_NOT_SET, APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                       ARG_V(568), } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON01 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON01 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON01 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON02 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON02 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON02 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON03 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON03 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON03 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON04 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON04 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON04 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON05 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON05 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON05 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON06 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON06 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON06 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON07 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON07 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON07 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON08 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON08 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON08 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON09 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON09 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON09 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON10 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON10 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON10 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON11 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON11 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_20[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON11 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_21[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON12 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_22[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON12 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_23[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON12 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_24[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON16 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_25[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON16 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_26[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON16 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_27[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 125 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_28[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 122 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_29[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 123 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2a[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 124 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2b[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 126 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2c[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 127 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2d[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 128 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2e[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 129 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2f[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 130 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_30[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 131 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_31[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 132 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_32[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 133 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_33[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON18 }, { APPW_IS_VAL, 134 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_34[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON17 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_35[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON17 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_36[] = {
  { { { APPW_IS_VAR, ID_VAR_REVCOL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_37[] = {
  { { { APPW_IS_VAR, ID_VAR_REVCOL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_38[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_39[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3a[] = {
  { { { APPW_IS_VAR, ID_VAR_CHANGE_LUM }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3b[] = {
  { { { APPW_IS_VAR, ID_VAR_CHANGE_LUM }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3c[] = {
  { { { APPW_IS_VAR, ID_VAR_NAVIPOPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3d[] = {
  { { { APPW_IS_VAR, ID_VAR_NAVIPOPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3e[] = {
  { { { APPW_IS_VAR, ID_VAR_CHECKTRANS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3f[] = {
  { { { APPW_IS_VAR, ID_VAR_CHECKTRANS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4a[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_TOP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4b[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_TOP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4c[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_ECT }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4d[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_ECT }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4e[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_COT }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4f[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_COT }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_50[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_EOT }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_51[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_EOT }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_52[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_FUEL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_53[] = {
  { { { APPW_IS_VAR, ID_VAR_ICON_FUEL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_54[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_55[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_56[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_57[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_58[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 27 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_59[] = {
  { { { APPW_IS_VAR, ID_VAR_WARN_OVRSPD }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_5a[] = {
  { { { APPW_IS_VAR, ID_VAR_WARN_OVRSPD }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_5b[] = {
  { { { APPW_IS_VAR, ID_VAR_ID_NOT_SET }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_5c[] = {
  { { { APPW_IS_VAR, ID_VAR_ID_NOT_SET }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
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
static const APPW_COND _Condition_0d = { "A", _aComparison_0d, GUI_COUNTOF(_aComparison_0d) };
static const APPW_COND _Condition_0e = { "A", _aComparison_0e, GUI_COUNTOF(_aComparison_0e) };
static const APPW_COND _Condition_0f = { "A", _aComparison_0f, GUI_COUNTOF(_aComparison_0f) };
static const APPW_COND _Condition_10 = { "A", _aComparison_10, GUI_COUNTOF(_aComparison_10) };
static const APPW_COND _Condition_11 = { "A", _aComparison_11, GUI_COUNTOF(_aComparison_11) };
static const APPW_COND _Condition_12 = { "A", _aComparison_12, GUI_COUNTOF(_aComparison_12) };
static const APPW_COND _Condition_13 = { "A", _aComparison_13, GUI_COUNTOF(_aComparison_13) };
static const APPW_COND _Condition_14 = { "A", _aComparison_14, GUI_COUNTOF(_aComparison_14) };
static const APPW_COND _Condition_15 = { "A", _aComparison_15, GUI_COUNTOF(_aComparison_15) };
static const APPW_COND _Condition_16 = { "A", _aComparison_16, GUI_COUNTOF(_aComparison_16) };
static const APPW_COND _Condition_17 = { "A", _aComparison_17, GUI_COUNTOF(_aComparison_17) };
static const APPW_COND _Condition_18 = { "A", _aComparison_18, GUI_COUNTOF(_aComparison_18) };
static const APPW_COND _Condition_19 = { "A", _aComparison_19, GUI_COUNTOF(_aComparison_19) };
static const APPW_COND _Condition_1a = { "A", _aComparison_1a, GUI_COUNTOF(_aComparison_1a) };
static const APPW_COND _Condition_1b = { "A", _aComparison_1b, GUI_COUNTOF(_aComparison_1b) };
static const APPW_COND _Condition_1c = { "A", _aComparison_1c, GUI_COUNTOF(_aComparison_1c) };
static const APPW_COND _Condition_1d = { "A", _aComparison_1d, GUI_COUNTOF(_aComparison_1d) };
static const APPW_COND _Condition_1e = { "A", _aComparison_1e, GUI_COUNTOF(_aComparison_1e) };
static const APPW_COND _Condition_1f = { "A", _aComparison_1f, GUI_COUNTOF(_aComparison_1f) };
static const APPW_COND _Condition_20 = { "A", _aComparison_20, GUI_COUNTOF(_aComparison_20) };
static const APPW_COND _Condition_21 = { "A", _aComparison_21, GUI_COUNTOF(_aComparison_21) };
static const APPW_COND _Condition_22 = { "A", _aComparison_22, GUI_COUNTOF(_aComparison_22) };
static const APPW_COND _Condition_23 = { "A", _aComparison_23, GUI_COUNTOF(_aComparison_23) };
static const APPW_COND _Condition_24 = { "A", _aComparison_24, GUI_COUNTOF(_aComparison_24) };
static const APPW_COND _Condition_25 = { "A", _aComparison_25, GUI_COUNTOF(_aComparison_25) };
static const APPW_COND _Condition_26 = { "A", _aComparison_26, GUI_COUNTOF(_aComparison_26) };
static const APPW_COND _Condition_27 = { "A", _aComparison_27, GUI_COUNTOF(_aComparison_27) };
static const APPW_COND _Condition_28 = { "A", _aComparison_28, GUI_COUNTOF(_aComparison_28) };
static const APPW_COND _Condition_29 = { "A", _aComparison_29, GUI_COUNTOF(_aComparison_29) };
static const APPW_COND _Condition_2a = { "A", _aComparison_2a, GUI_COUNTOF(_aComparison_2a) };
static const APPW_COND _Condition_2b = { "A", _aComparison_2b, GUI_COUNTOF(_aComparison_2b) };
static const APPW_COND _Condition_2c = { "A", _aComparison_2c, GUI_COUNTOF(_aComparison_2c) };
static const APPW_COND _Condition_2d = { "A", _aComparison_2d, GUI_COUNTOF(_aComparison_2d) };
static const APPW_COND _Condition_2e = { "A", _aComparison_2e, GUI_COUNTOF(_aComparison_2e) };
static const APPW_COND _Condition_2f = { "A", _aComparison_2f, GUI_COUNTOF(_aComparison_2f) };
static const APPW_COND _Condition_30 = { "A", _aComparison_30, GUI_COUNTOF(_aComparison_30) };
static const APPW_COND _Condition_31 = { "A", _aComparison_31, GUI_COUNTOF(_aComparison_31) };
static const APPW_COND _Condition_32 = { "A", _aComparison_32, GUI_COUNTOF(_aComparison_32) };
static const APPW_COND _Condition_33 = { "A", _aComparison_33, GUI_COUNTOF(_aComparison_33) };
static const APPW_COND _Condition_34 = { "A", _aComparison_34, GUI_COUNTOF(_aComparison_34) };
static const APPW_COND _Condition_35 = { "A", _aComparison_35, GUI_COUNTOF(_aComparison_35) };
static const APPW_COND _Condition_36 = { "A", _aComparison_36, GUI_COUNTOF(_aComparison_36) };
static const APPW_COND _Condition_37 = { "A", _aComparison_37, GUI_COUNTOF(_aComparison_37) };
static const APPW_COND _Condition_38 = { "A", _aComparison_38, GUI_COUNTOF(_aComparison_38) };
static const APPW_COND _Condition_39 = { "A", _aComparison_39, GUI_COUNTOF(_aComparison_39) };
static const APPW_COND _Condition_3a = { "A", _aComparison_3a, GUI_COUNTOF(_aComparison_3a) };
static const APPW_COND _Condition_3b = { "A", _aComparison_3b, GUI_COUNTOF(_aComparison_3b) };
static const APPW_COND _Condition_3c = { "A", _aComparison_3c, GUI_COUNTOF(_aComparison_3c) };
static const APPW_COND _Condition_3d = { "A", _aComparison_3d, GUI_COUNTOF(_aComparison_3d) };
static const APPW_COND _Condition_3e = { "A", _aComparison_3e, GUI_COUNTOF(_aComparison_3e) };
static const APPW_COND _Condition_3f = { "A", _aComparison_3f, GUI_COUNTOF(_aComparison_3f) };
static const APPW_COND _Condition_4a = { "A", _aComparison_4a, GUI_COUNTOF(_aComparison_4a) };
static const APPW_COND _Condition_4b = { "A", _aComparison_4b, GUI_COUNTOF(_aComparison_4b) };
static const APPW_COND _Condition_4c = { "A", _aComparison_4c, GUI_COUNTOF(_aComparison_4c) };
static const APPW_COND _Condition_4d = { "A", _aComparison_4d, GUI_COUNTOF(_aComparison_4d) };
static const APPW_COND _Condition_4e = { "A", _aComparison_4e, GUI_COUNTOF(_aComparison_4e) };
static const APPW_COND _Condition_4f = { "A", _aComparison_4f, GUI_COUNTOF(_aComparison_4f) };
static const APPW_COND _Condition_50 = { "A", _aComparison_50, GUI_COUNTOF(_aComparison_50) };
static const APPW_COND _Condition_51 = { "A", _aComparison_51, GUI_COUNTOF(_aComparison_51) };
static const APPW_COND _Condition_52 = { "A", _aComparison_52, GUI_COUNTOF(_aComparison_52) };
static const APPW_COND _Condition_53 = { "A", _aComparison_53, GUI_COUNTOF(_aComparison_53) };
static const APPW_COND _Condition_54 = { "A", _aComparison_54, GUI_COUNTOF(_aComparison_54) };
static const APPW_COND _Condition_55 = { "A", _aComparison_55, GUI_COUNTOF(_aComparison_55) };
static const APPW_COND _Condition_56 = { "A", _aComparison_56, GUI_COUNTOF(_aComparison_56) };
static const APPW_COND _Condition_57 = { "A", _aComparison_57, GUI_COUNTOF(_aComparison_57) };
static const APPW_COND _Condition_58 = { "A", _aComparison_58, GUI_COUNTOF(_aComparison_58) };
static const APPW_COND _Condition_59 = { "A", _aComparison_59, GUI_COUNTOF(_aComparison_59) };
static const APPW_COND _Condition_5a = { "A", _aComparison_5a, GUI_COUNTOF(_aComparison_5a) };
static const APPW_COND _Condition_5b = { "A", _aComparison_5b, GUI_COUNTOF(_aComparison_5b) };
static const APPW_COND _Condition_5c = { "A", _aComparison_5c, GUI_COUNTOF(_aComparison_5c) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_ICON01,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON01,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON01__APPW_JOB_SETBITMAP,
    { ARG_V(4103),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_00
  },
  { ID_VAR_ICON01,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON01,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON01__APPW_JOB_SETBITMAP_0,
    { ARG_V(4103),
      ARG_VP(0, acAIRFILTCLOG_GREY),
      ARG_V(727),
    }, 1, &_Condition_01
  },
  { ID_VAR_ICON01,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON01,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON01__APPW_JOB_SETBITMAP_1,
    { ARG_V(4103),
      ARG_VP(0, acAIRFILTCLOG_WHITE),
      ARG_V(883),
    }, 1, &_Condition_02
  },
  { ID_VAR_ICON02,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON02,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON02__APPW_JOB_SETBITMAP,
    { ARG_V(4104),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_03
  },
  { ID_VAR_ICON02,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON02,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON02__APPW_JOB_SETBITMAP_0,
    { ARG_V(4104),
      ARG_VP(0, acEOP_GREY),
      ARG_V(743),
    }, 1, &_Condition_04
  },
  { ID_VAR_ICON02,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON02,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON02__APPW_JOB_SETBITMAP_1,
    { ARG_V(4104),
      ARG_VP(0, acEOP_WHITE),
      ARG_V(988),
    }, 1, &_Condition_05
  },
  { ID_VAR_ICON03,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON03,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON03__APPW_JOB_SETBITMAP,
    { ARG_V(4105),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_06
  },
  { ID_VAR_ICON03,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON03,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON03__APPW_JOB_SETBITMAP_0,
    { ARG_V(4105),
      ARG_VP(0, acECT_GREY),
      ARG_V(764),
    }, 1, &_Condition_07
  },
  { ID_VAR_ICON03,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON03,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON03__APPW_JOB_SETBITMAP_1,
    { ARG_V(4105),
      ARG_VP(0, acECT_WHITE),
      ARG_V(893),
    }, 1, &_Condition_08
  },
  { ID_VAR_ICON04,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON04,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON04__APPW_JOB_SETBITMAP,
    { ARG_V(4106),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_09
  },
  { ID_VAR_ICON04,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON04,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON04__APPW_JOB_SETBITMAP_0,
    { ARG_V(4106),
      ARG_VP(0, acEOT_GREY),
      ARG_V(784),
    }, 1, &_Condition_0a
  },
  { ID_VAR_ICON04,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON04,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON04__APPW_JOB_SETBITMAP_1,
    { ARG_V(4106),
      ARG_VP(0, acEOT_WHITE),
      ARG_V(926),
    }, 1, &_Condition_0b
  },
  { ID_VAR_ICON05,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON05,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON05__APPW_JOB_SETBITMAP,
    { ARG_V(4107),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_0c
  },
  { ID_VAR_ICON05,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON05,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON05__APPW_JOB_SETBITMAP_0,
    { ARG_V(4107),
      ARG_VP(0, acECL_GREY),
      ARG_V(708),
    }, 1, &_Condition_0d
  },
  { ID_VAR_ICON05,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON05,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON05__APPW_JOB_SETBITMAP_1,
    { ARG_V(4107),
      ARG_VP(0, acECL_WHITE),
      ARG_V(895),
    }, 1, &_Condition_0e
  },
  { ID_VAR_ICON06,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON06,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON06__APPW_JOB_SETBITMAP,
    { ARG_V(4108),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_0f
  },
  { ID_VAR_ICON06,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON06,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON06__APPW_JOB_SETBITMAP_0,
    { ARG_V(4108),
      ARG_VP(0, acFUEL_GREY),
      ARG_V(680),
    }, 1, &_Condition_10
  },
  { ID_VAR_ICON06,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON06,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON06__APPW_JOB_SETBITMAP_1,
    { ARG_V(4108),
      ARG_VP(0, acFUEL_WHITE),
      ARG_V(805),
    }, 1, &_Condition_11
  },
  { ID_VAR_ICON07,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON07,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON07__APPW_JOB_SETBITMAP,
    { ARG_V(4109),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_12
  },
  { ID_VAR_ICON07,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON07,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON07__APPW_JOB_SETBITMAP_0,
    { ARG_V(4109),
      ARG_VP(0, acSEATBELT_GREY),
      ARG_V(769),
    }, 1, &_Condition_13
  },
  { ID_VAR_ICON07,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON07,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON07__APPW_JOB_SETBITMAP_1,
    { ARG_V(4109),
      ARG_VP(0, acSEATBELT_WHITE),
      ARG_V(885),
    }, 1, &_Condition_14
  },
  { ID_VAR_ICON08,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON08,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON08__APPW_JOB_SETBITMAP,
    { ARG_V(4110),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_15
  },
  { ID_VAR_ICON08,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON08,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON08__APPW_JOB_SETBITMAP_0,
    { ARG_V(4110),
      ARG_VP(0, acTOP_GREY),
      ARG_V(826),
    }, 1, &_Condition_16
  },
  { ID_VAR_ICON08,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON08,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON08__APPW_JOB_SETBITMAP_1,
    { ARG_V(4110),
      ARG_VP(0, acTOP_WHITE),
      ARG_V(936),
    }, 1, &_Condition_17
  },
  { ID_VAR_ICON09,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON09,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON09__APPW_JOB_SETBITMAP,
    { ARG_V(4111),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_18
  },
  { ID_VAR_ICON09,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON09,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON09__APPW_JOB_SETBITMAP_0,
    { ARG_V(4111),
      ARG_VP(0, acTOT_GREY),
      ARG_V(900),
    }, 1, &_Condition_19
  },
  { ID_VAR_ICON09,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON09,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON09__APPW_JOB_SETBITMAP_1,
    { ARG_V(4111),
      ARG_VP(0, acTOT_WHITE),
      ARG_V(1032),
    }, 1, &_Condition_1a
  },
  { ID_VAR_ICON10,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON10,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON10__APPW_JOB_SETBITMAP,
    { ARG_V(4112),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_1b
  },
  { ID_VAR_ICON10,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON10,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON10__APPW_JOB_SETBITMAP_0,
    { ARG_V(4112),
      ARG_VP(0, acTOFC_GBG),
      ARG_V(920),
    }, 1, &_Condition_1c
  },
  { ID_VAR_ICON10,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON10,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON10__APPW_JOB_SETBITMAP_1,
    { ARG_V(4112),
      ARG_VP(0, acTOFC_RWR),
      ARG_V(1132),
    }, 1, &_Condition_1d
  },
  { ID_VAR_ICON11,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON11,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON11__APPW_JOB_SETBITMAP,
    { ARG_V(4113),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_1e
  },
  { ID_VAR_ICON11,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON11,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON11__APPW_JOB_SETBITMAP_0,
    { ARG_V(4113),
      ARG_VP(0, acEOFC_GREY),
      ARG_V(832),
    }, 1, &_Condition_1f
  },
  { ID_VAR_ICON11,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON11,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON11__APPW_JOB_SETBITMAP_1,
    { ARG_V(4113),
      ARG_VP(0, acEOFC_WHITE),
      ARG_V(923),
    }, 1, &_Condition_20
  },
  { ID_VAR_ICON12,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON12,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON12__APPW_JOB_SETBITMAP,
    { ARG_V(4114),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_21
  },
  { ID_VAR_ICON12,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON12,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON12__APPW_JOB_SETBITMAP_0,
    { ARG_V(4114),
      ARG_VP(0, acHOL_GREY),
      ARG_V(599),
    }, 1, &_Condition_22
  },
  { ID_VAR_ICON12,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON12,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON12__APPW_JOB_SETBITMAP_1,
    { ARG_V(4114),
      ARG_VP(0, acHOL_WHITE),
      ARG_V(748),
    }, 1, &_Condition_23
  },
  { ID_VAR_ICON16,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON16,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP,
    { ARG_V(4118),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_24
  },
  { ID_VAR_ICON16,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON16,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP_0,
    { ARG_V(4118),
      ARG_VP(0, acrecall),
      ARG_V(4790),
    }, 1, &_Condition_25
  },
  { ID_VAR_ICON16,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON16,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP,
    { ARG_V(4118),
      ARG_VP(0, achide),
      ARG_V(4436),
    }, 1, &_Condition_26
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_0,
    { ARG_V(4120),
      ARG_VP(0, acN_52X52),
      ARG_V(672),
    }, 1, &_Condition_27
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_1,
    { ARG_V(4120),
      ARG_VP(0, acR_52X52),
      ARG_V(728),
    }, 1, &_Condition_28
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_2,
    { ARG_V(4120),
      ARG_VP(0, acR2_52X52),
      ARG_V(1229),
    }, 1, &_Condition_29
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_3,
    { ARG_V(4120),
      ARG_VP(0, acR1_52X52),
      ARG_V(973),
    }, 1, &_Condition_2a
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_4,
    { ARG_V(4120),
      ARG_VP(0, acG1_52X52),
      ARG_V(655),
    }, 1, &_Condition_2b
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_5,
    { ARG_V(4120),
      ARG_VP(0, acG2_52X52),
      ARG_V(931),
    }, 1, &_Condition_2c
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_6,
    { ARG_V(4120),
      ARG_VP(0, acG3_52X52),
      ARG_V(1051),
    }, 1, &_Condition_2d
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_7,
    { ARG_V(4120),
      ARG_VP(0, acG4_52X52),
      ARG_V(852),
    }, 1, &_Condition_2e
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_8,
    { ARG_V(4120),
      ARG_VP(0, acG5_52X52),
      ARG_V(863),
    }, 1, &_Condition_2f
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_9,
    { ARG_V(4120),
      ARG_VP(0, acG6_52X52),
      ARG_V(1123),
    }, 1, &_Condition_30
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_10,
    { ARG_V(4120),
      ARG_VP(0, acG7_52X52),
      ARG_V(844),
    }, 1, &_Condition_31
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_11,
    { ARG_V(4120),
      ARG_VP(0, acG8_52X52),
      ARG_V(1176),
    }, 1, &_Condition_32
  },
  { ID_VAR_ICON18,       WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_GEAR,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_GEAR__APPW_JOB_SETBITMAP_12,
    { ARG_V(4120),
      ARG_VP(0, acG9_52X52),
      ARG_V(1106),
    }, 1, &_Condition_33
  },
  { ID_VAR_ICON17,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REV,         APPW_JOB_SETTEXT,        ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REV__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_SPACE),
    }, 65536, &_Condition_34
  },
  { ID_VAR_ICON17,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REV,         APPW_JOB_SETTEXT,        ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REV__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_REV),
    }, 65536, &_Condition_35
  },
  { ID_VAR_REVCOL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REV,         APPW_JOB_SETCOLOR,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REV__APPW_JOB_SETCOLOR,
    { ARG_V(0xff7f7f7f),
    }, 65536, &_Condition_36
  },
  { ID_VAR_REVCOL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_REV,         APPW_JOB_SETCOLOR,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_REV__APPW_JOB_SETCOLOR_0,
    { ARG_V(0xffed1c24),
    }, 65536, &_Condition_37
  },
  { ID_VAR_POPUP,        WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_MODALMESSAGE,   ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_38
  },
  { ID_VAR_POPUP,        WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_CLOSESCREEN,    ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_39
  },
  { ID_VAR_CHANGE_LUM,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_MODALMESSAGE,   ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_5,
    { ARG_V(ID_SCREEN_INTENSITY),
    }, 0, &_Condition_3a
  },
  { ID_VAR_CHANGE_LUM,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_CLOSESCREEN,    ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_6,
    { ARG_V(ID_SCREEN_INTENSITY),
    }, 0, &_Condition_3b
  },
  { ID_VAR_NAVIPOPUP,    WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_MODALMESSAGE,   ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_7,
    { ARG_V(ID_SCREEN_NAVIPOPUP),
    }, 0, &_Condition_3c
  },
  { ID_VAR_NAVIPOPUP,    WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_CLOSESCREEN,    ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_8,
    { ARG_V(ID_SCREEN_NAVIPOPUP),
    }, 0, &_Condition_3d
  },
  { ID_VAR_CHECKTRANS,   WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_CHECKTRANS, APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_CHECKTRANS__APPW_JOB_SETBITMAP,
    { ARG_V(4123),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_3e
  },
  { ID_VAR_CHECKTRANS,   WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_CHECKTRANS, APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_CHECKTRANS__APPW_JOB_SETBITMAP_0,
    { ARG_V(4123),
      ARG_VP(0, acCHECKTRANS52X52),
      ARG_V(2237),
    }, 1, &_Condition_3f
  },
  { ID_VAR_TXT_TOP,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_TOP,         APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TOP__APPW_JOB_SETVALUE,
    { ARG_V(4391),
    }, 65537, NULL
  },
  { ID_VAR_TXT_COT,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COT,         APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BOT__APPW_JOB_SETVALUE,
    { ARG_V(4392),
    }, 65537, NULL
  },
  { ID_VAR_TXT_ECT2,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ECT2,        APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TOT__APPW_JOB_SETVALUE,
    { ARG_V(4390),
    }, 65537, NULL
  },
  { ID_VAR_TXT_EOT,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_EOT,         APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_EOT__APPW_JOB_SETVALUE,
    { ARG_V(4393),
    }, 65537, NULL
  },
  { ID_VAR_TXT_RPM,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_RPM,         APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TOP,          WM_NOTIFICATION_VALUE_CHANGED,    ID_ROTARY_TOP,       APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_ROTARY_TOP__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_ECT2,         WM_NOTIFICATION_VALUE_CHANGED,    ID_ROTARY_ECT,       APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_ROTARY_TOT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_ROTARY_COT,       APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_ROTARY_COT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FUEL,         WM_NOTIFICATION_VALUE_CHANGED,    ID_ROTARY_FUEL,      APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_ROTARY_VOLT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_EOT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_ROTARY_EOT,       APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_ROTARY_EOT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_ICON_TOP,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_TOP,        APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_TOP__APPW_JOB_SETBITMAP,
    { ARG_V(4408),
      ARG_VP(0, acTOP_DAY),
      ARG_V(628),
    }, 1, &_Condition_4a
  },
  { ID_VAR_ICON_TOP,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_TOP,        APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_TOP__APPW_JOB_SETBITMAP_0,
    { ARG_V(4408),
      ARG_VP(0, acTOP_RED_DAY),
      ARG_V(557),
    }, 1, &_Condition_4b
  },
  { ID_VAR_ICON_ECT,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ECT,        APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ECT__APPW_JOB_SETBITMAP,
    { ARG_V(4405),
      ARG_VP(0, acECT_DAY),
      ARG_V(540),
    }, 1, &_Condition_4c
  },
  { ID_VAR_ICON_ECT,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ECT,        APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ECT__APPW_JOB_SETBITMAP_0,
    { ARG_V(4405),
      ARG_VP(0, acECT_RED_DAY),
      ARG_V(504),
    }, 1, &_Condition_4d
  },
  { ID_VAR_ICON_COT,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_COT,        APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_COT__APPW_JOB_SETBITMAP,
    { ARG_V(4410),
      ARG_VP(0, acTOT_DAY),
      ARG_V(688),
    }, 1, &_Condition_4e
  },
  { ID_VAR_ICON_COT,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_COT,        APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_COT__APPW_JOB_SETBITMAP_0,
    { ARG_V(4410),
      ARG_VP(0, acTOT_RED_DAY),
      ARG_V(658),
    }, 1, &_Condition_4f
  },
  { ID_VAR_ICON_EOT,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_EOT,        APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_EOT__APPW_JOB_SETBITMAP,
    { ARG_V(4411),
      ARG_VP(0, acEOT_DAY),
      ARG_V(572),
    }, 1, &_Condition_50
  },
  { ID_VAR_ICON_EOT,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_EOT,        APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_EOT__APPW_JOB_SETBITMAP_0,
    { ARG_V(4411),
      ARG_VP(0, acEOT_RED_DAY),
      ARG_V(517),
    }, 1, &_Condition_51
  },
  { ID_VAR_ICON_FUEL,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_FUEL,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_FUEL__APPW_JOB_SETBITMAP,
    { ARG_V(4406),
      ARG_VP(0, acFUEL_DAY),
      ARG_V(480),
    }, 1, &_Condition_52
  },
  { ID_VAR_ICON_FUEL,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_FUEL,       APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_FUEL__APPW_JOB_SETBITMAP_0,
    { ARG_V(4406),
      ARG_VP(0, acFUEL_RED_DAY),
      ARG_V(466),
    }, 1, &_Condition_53
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_MAIN_DAY),
    }, 0, &_Condition_54
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_RAWVALUE_ANALOG),
    }, 0, &_Condition_55
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_RAWVALUE_IO),
    }, 0, &_Condition_56
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_PASSWORD),
    }, 0, &_Condition_57
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED_4,
    { ARG_V(ID_SCREEN_MAIN2_NIGHT),
    }, 0, &_Condition_58
  },
  { ID_VAR_WARN_OVRSPD,  WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_OVRSPD,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_OVRSPD__APPW_JOB_SETBITMAP,
    { ARG_V(4460),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_59
  },
  { ID_VAR_WARN_OVRSPD,  WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_OVRSPD,     APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_OVRSPD__APPW_JOB_SETBITMAP_0,
    { ARG_V(4460),
      ARG_VP(0, acOVRSPD1),
      ARG_V(2150),
    }, 1, &_Condition_5a
  },
  { ID_VAR_ID_NOT_SET,   WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ID_NOT_SET, APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ID_NOT_SET__APPW_JOB_SETBITMAP,
    { ARG_V(4453),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_5b
  },
  { ID_VAR_ID_NOT_SET,   WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ID_NOT_SET, APPW_JOB_SETBITMAP,      ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ID_NOT_SET__APPW_JOB_SETBITMAP_0,
    { ARG_V(4453),
      ARG_VP(0, acIDNOTSET),
      ARG_V(1553),
    }, 1, &_Condition_5c
  },
  { ID_VAR_TXT_EOP,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_EOP,         APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_EOP__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_VOL,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_BATT_VOL,    APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BATT_VOL__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_FUEL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FUEL,        APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FUEL__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_EOP,      WM_NOTIFICATION_VALUE_CHANGED,    ID_SLIDER_EOP,       APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_SLIDER_EOP__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_VOL,      WM_NOTIFICATION_VALUE_CHANGED,    ID_SLIDER_BATT_VOL,  APPW_JOB_SETVALUE,       ID_SCREEN_MAIN2_DAY__WM_NOTIFICATION_VALUE_CHANGED__ID_SLIDER_BATT_VOL__APPW_JOB_SETVALUE,
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
*       ID_SCREEN_MAIN2_DAY_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_MAIN2_DAY_RootInfo = {
  ID_SCREEN_MAIN2_DAY,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_MAIN2_DAY,
  0
};

/*************************** End of file ****************************/
