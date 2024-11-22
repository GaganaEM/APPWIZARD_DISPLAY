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
File        : ID_SCREEN_SHFTWSCLKSETTING.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_SHFTWSCLKSETTING.h"

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
    ID_SCREEN_SHFTWSCLKSETTING, 0,
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
    ID_IMAGE_00, ID_SCREEN_SHFTWSCLKSETTING,
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
    ID_IMAGE_01, ID_SCREEN_SHFTWSCLKSETTING,
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
    ID_IMAGE_02, ID_SCREEN_SHFTWSCLKSETTING,
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
    ID_IMAGE_03, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 728, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 728, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      166, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 368, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      95, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 468, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      142, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_00, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 170, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 93, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 170, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 298, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 170, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 190, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 170, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 201, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_02, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 170, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 170, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 104, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_11, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 177, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_12, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_13, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 177, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_14, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_15, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 177, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 289, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_16, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 289, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_17, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 225, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      20, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_18, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 471, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      20, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_19, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 225, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      20, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_20, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 471, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      20, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_21, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 225, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 289, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      20, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_22, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 471, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 289, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      20, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_23, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_24, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_25, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 289, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_26, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 496, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_27, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 496, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_28, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 496, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 289, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_29, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 300, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_30, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 300, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_31, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 300, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 289, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_32, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 546, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_33, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 546, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_34, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 546, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 289, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S1STRT_1HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 181, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 120, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S1STRT_2MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 120, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S1STRT_3MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 321, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 120, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S1STOP_1HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 427, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 120, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S1STOP_2MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 497, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 120, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S1STOP_3MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 567, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 120, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_07, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_08, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 256, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 326, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_10, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 432, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_11, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 502, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_12, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 572, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S2STRT_1HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 181, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 215, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S2STRT_2MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 215, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S2STRT_3MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 321, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 215, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S2STOP_1HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 427, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 215, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S2STOP_2MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 497, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 215, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S2STOP_3MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 568, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 215, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_13, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_14, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 256, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_15, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 326, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_16, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 432, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_17, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 502, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_18, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 573, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S3STRT_1HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 181, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 310, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S3STRT_2MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 310, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S3STRT_3MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 321, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 310, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S3STOP_1HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 427, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 310, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S3STOP_2MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 497, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 310, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_S3STOP_3MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 568, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 310, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_19, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 315, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_20, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 256, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 315, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_21, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 326, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 315, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_22, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 432, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 315, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_23, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 502, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 315, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_24, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 573, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 315, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_C1, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 238, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_C2, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 484, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_C3, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 238, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_C4, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 484, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_C5, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 238, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 315, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_C6, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 484, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 315, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S1STRT_HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 188, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 127, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S1STRT_MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 258, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 127, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S1STRT_MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 328, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 127, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S1STOP_HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 434, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 127, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S1STOP_MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 504, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 127, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S1STOP_MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 574, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 127, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S2STRT_HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 188, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S2STRT_MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 258, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S2STRT_MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 328, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S2STOP_HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 434, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S2STOP_MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 504, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S2STOP_MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 575, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S3STRT_HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 188, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S3STRT_MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 258, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S3STRT_MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 328, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S3STOP_HH, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 434, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S3STOP_MM, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 504, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_S3STOP_MER, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 575, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      41, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01_Copy, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SAVE_STATUS, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 327, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 397, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      145, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_SAVE, ID_SCREEN_SHFTWSCLKSETTING,
    { { { DISPOSE_MODE_REL_PARENT, 728, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
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
  { ID_IMAGE_01,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_Yellow_72x90),
                                                              ARG_V(5915), } },
  { ID_IMAGE_02,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUP_arrow_Yellow_72x90),
                                                              ARG_V(5682), } },
  { ID_IMAGE_03,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUp_arrow_blue_72x90),
                                                              ARG_V(6980), } },
  { ID_IMAGE_04,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_blue_72x90),
                                                              ARG_V(7593), } },
  { ID_TEXT_00,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_00,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_00,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_90) } },
  { ID_TEXT_00,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_01,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_01,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_01,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_146) } },
  { ID_TEXT_01,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_02,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_02,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_02,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_4) } },
  { ID_TEXT_02,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_BOX_00,                  APPW_SET_PROP_COLOR,        { ARG_V(0xffd1d1d1) } },
  { ID_BOX_00,                  APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_BOX_01,                  APPW_SET_PROP_COLOR,        { ARG_V(0xffd1d1d1) } },
  { ID_BOX_01,                  APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_BOX_02,                  APPW_SET_PROP_COLOR,        { ARG_V(0xffd1d1d1) } },
  { ID_BOX_02,                  APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_TEXT_11,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_11,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_11,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_11,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_11,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_160) } },
  { ID_TEXT_11,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_12,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_12,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_12,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_12,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_12,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_160) } },
  { ID_TEXT_12,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_13,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_13,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_13,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_13,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_13,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_160) } },
  { ID_TEXT_13,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_14,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_14,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_14,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_14,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_14,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_160) } },
  { ID_TEXT_14,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_15,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_15,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_15,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_15,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_15,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_160) } },
  { ID_TEXT_15,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_16,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_16,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_16,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_16,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_16,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_160) } },
  { ID_TEXT_16,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_17,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_17,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_17,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_17,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_17,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DIGIT1) } },
  { ID_TEXT_17,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_18,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_18,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_18,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_18,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_18,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DIGIT1) } },
  { ID_TEXT_18,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_19,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_19,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_19,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_19,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_19,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DIGIT2) } },
  { ID_TEXT_19,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_20,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_20,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_20,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_20,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_20,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DIGIT2) } },
  { ID_TEXT_20,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_21,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_21,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_21,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_21,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_21,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DIGIT3) } },
  { ID_TEXT_21,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_22,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_22,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_22,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_22,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_22,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DIGIT3) } },
  { ID_TEXT_22,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_23,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_23,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_23,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_23,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_23,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_156) } },
  { ID_TEXT_23,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_24,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_24,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_24,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_24,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_24,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_156) } },
  { ID_TEXT_24,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_25,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_25,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_25,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_25,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_25,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_156) } },
  { ID_TEXT_25,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_26,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_26,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_26,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_26,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_26,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_157) } },
  { ID_TEXT_26,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_27,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_27,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_27,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_27,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_27,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_157) } },
  { ID_TEXT_27,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_28,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_28,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_28,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_28,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_28,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_157) } },
  { ID_TEXT_28,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_29,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_29,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_29,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_29,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_29,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_29) } },
  { ID_TEXT_29,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_30,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_30,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_30,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_30,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_30,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_29) } },
  { ID_TEXT_30,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_31,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_31,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_31,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_31,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_31,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_29) } },
  { ID_TEXT_31,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_32,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_32,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_32,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_32,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_32,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_29) } },
  { ID_TEXT_32,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_33,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_33,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_33,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_33,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_33,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_29) } },
  { ID_TEXT_33,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_34,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff005500) } },
  { ID_TEXT_34,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_34,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_34,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_34,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_29) } },
  { ID_TEXT_34,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_IMAGE_S1STRT_1HH,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S1STRT_1HH,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_421x45),
                                                              ARG_V(264), } },
  { ID_IMAGE_S1STRT_2MM,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S1STRT_2MM,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S1STRT_3MER,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S1STRT_3MER,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S1STOP_1HH,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S1STOP_1HH,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S1STOP_2MM,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S1STOP_2MM,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S1STOP_3MER,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S1STOP_3MER,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_07,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_07,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_08,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_08,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_09,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_10,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_10,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_11,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_11,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_12,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_12,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_S2STRT_1HH,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S2STRT_1HH,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S2STRT_2MM,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S2STRT_2MM,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S2STRT_3MER,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S2STRT_3MER,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S2STOP_1HH,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S2STOP_1HH,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S2STOP_2MM,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S2STOP_2MM,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S2STOP_3MER,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S2STOP_3MER,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_13,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_13,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_14,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_14,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_15,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_15,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_16,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_16,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_17,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_17,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_18,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_18,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_S3STRT_1HH,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S3STRT_1HH,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S3STRT_2MM,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S3STRT_2MM,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S3STRT_3MER,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S3STRT_3MER,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S3STOP_1HH,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S3STOP_1HH,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S3STOP_2MM,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S3STOP_2MM,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_S3STOP_3MER,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_S3STOP_3MER,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                              ARG_V(4730), } },
  { ID_IMAGE_19,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_19,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_20,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_20,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_21,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_21,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_22,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_22,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_23,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_23,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_IMAGE_24,                APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_24,                APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                              ARG_V(185), } },
  { ID_TEXT_C1,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_C1,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_C1,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_C1,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_C1,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_C1,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_C2,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_C2,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_C2,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_C2,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_C2,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_C2,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_C3,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_C3,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_C3,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_C3,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_C3,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_C3,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_C4,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_C4,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_C4,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_C4,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_C4,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_C4,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_C5,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_C5,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_C5,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_C5,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_C5,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_C5,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_C6,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_C6,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_C6,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_C6,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_C6,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_C6,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_S1STRT_HH,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S1STRT_HH,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STRT_HH,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STRT_HH,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STRT_HH,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S1STRT_HH,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STRT_MM,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S1STRT_MM,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STRT_MM,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STRT_MM,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STRT_MM,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S1STRT_MM,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STRT_MER,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S1STRT_MER,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STRT_MER,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STRT_MER,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STRT_MER,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S1STRT_MER,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_AM) } },
  { ID_TEXT_S1STOP_HH,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S1STOP_HH,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STOP_HH,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STOP_HH,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STOP_HH,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S1STOP_HH,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STOP_MM,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S1STOP_MM,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STOP_MM,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STOP_MM,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STOP_MM,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S1STOP_MM,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STOP_MER,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S1STOP_MER,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S1STOP_MER,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STOP_MER,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S1STOP_MER,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S1STOP_MER,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_PM) } },
  { ID_TEXT_S2STRT_HH,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S2STRT_HH,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STRT_HH,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STRT_HH,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STRT_HH,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S2STRT_HH,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STRT_MM,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S2STRT_MM,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STRT_MM,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STRT_MM,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STRT_MM,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S2STRT_MM,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STRT_MER,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S2STRT_MER,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STRT_MER,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STRT_MER,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STRT_MER,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S2STRT_MER,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_PM) } },
  { ID_TEXT_S2STOP_HH,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S2STOP_HH,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STOP_HH,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STOP_HH,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STOP_HH,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S2STOP_HH,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STOP_MM,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S2STOP_MM,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STOP_MM,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STOP_MM,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STOP_MM,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S2STOP_MM,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STOP_MER,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S2STOP_MER,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S2STOP_MER,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STOP_MER,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S2STOP_MER,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S2STOP_MER,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_PM) } },
  { ID_TEXT_S3STRT_HH,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S3STRT_HH,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STRT_HH,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STRT_HH,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STRT_HH,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S3STRT_HH,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STRT_MM,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S3STRT_MM,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STRT_MM,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STRT_MM,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STRT_MM,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S3STRT_MM,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STRT_MER,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S3STRT_MER,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STRT_MER,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STRT_MER,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STRT_MER,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S3STRT_MER,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_PM) } },
  { ID_TEXT_S3STOP_HH,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S3STOP_HH,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STOP_HH,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STOP_HH,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STOP_HH,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S3STOP_HH,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STOP_MM,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S3STOP_MM,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STOP_MM,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STOP_MM,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STOP_MM,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S3STOP_MM,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                              ARG_V(0),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STOP_MER,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_S3STOP_MER,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_S3STOP_MER,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STOP_MER,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_S3STOP_MER,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_S3STOP_MER,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_AM) } },
  { ID_IMAGE_01_Copy,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01_Copy,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acRestore_defaults_symbol),
                                                              ARG_V(11063), } },
  { ID_TEXT_SAVE_STATUS,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_SAVE_STATUS,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                              ARG_V(0),
                                                              ARG_V(0) } },
  { ID_TEXT_SAVE_STATUS,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SAVE_STATUS,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SAVE_STATUS,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_IMAGE_SAVE,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_SAVE,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsave_icon),
                                                              ARG_V(3609), } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_13[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_15[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 10 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_17[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 11 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_19[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 12 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_1b[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 13 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_1d[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 14 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_1f[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_20[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 15 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_21[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_22[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 16 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_23[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_24[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_CNTR }, { APPW_IS_VAL, 17 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_27[] = {
  { { { APPW_IS_VAR, ID_VAR_S1STRT_MER }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_28[] = {
  { { { APPW_IS_VAR, ID_VAR_S1STRT_MER }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2b[] = {
  { { { APPW_IS_VAR, ID_VAR_S1STOP_MER }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2c[] = {
  { { { APPW_IS_VAR, ID_VAR_S1STOP_MER }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2f[] = {
  { { { APPW_IS_VAR, ID_VAR_S2STRT_MER }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_30[] = {
  { { { APPW_IS_VAR, ID_VAR_S2STRT_MER }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_33[] = {
  { { { APPW_IS_VAR, ID_VAR_S2STOP_MER }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_34[] = {
  { { { APPW_IS_VAR, ID_VAR_S2STOP_MER }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_37[] = {
  { { { APPW_IS_VAR, ID_VAR_S3STRT_MER }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_38[] = {
  { { { APPW_IS_VAR, ID_VAR_S3STRT_MER }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3b[] = {
  { { { APPW_IS_VAR, ID_VAR_S3STOP_MER }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3c[] = {
  { { { APPW_IS_VAR, ID_VAR_S3STOP_MER }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3d[] = {
  { { { APPW_IS_VAR, ID_VAR_SAVE_STATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3e[] = {
  { { { APPW_IS_VAR, ID_VAR_SAVE_STATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3f[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_ERR_STATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_40[] = {
  { { { APPW_IS_VAR, ID_VAR_SWCS_ERR_STATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
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
static const APPW_COND _Condition_27 = { "A", _aComparison_27, GUI_COUNTOF(_aComparison_27) };
static const APPW_COND _Condition_28 = { "A", _aComparison_28, GUI_COUNTOF(_aComparison_28) };
static const APPW_COND _Condition_2b = { "A", _aComparison_2b, GUI_COUNTOF(_aComparison_2b) };
static const APPW_COND _Condition_2c = { "A", _aComparison_2c, GUI_COUNTOF(_aComparison_2c) };
static const APPW_COND _Condition_2f = { "A", _aComparison_2f, GUI_COUNTOF(_aComparison_2f) };
static const APPW_COND _Condition_30 = { "A", _aComparison_30, GUI_COUNTOF(_aComparison_30) };
static const APPW_COND _Condition_33 = { "A", _aComparison_33, GUI_COUNTOF(_aComparison_33) };
static const APPW_COND _Condition_34 = { "A", _aComparison_34, GUI_COUNTOF(_aComparison_34) };
static const APPW_COND _Condition_37 = { "A", _aComparison_37, GUI_COUNTOF(_aComparison_37) };
static const APPW_COND _Condition_38 = { "A", _aComparison_38, GUI_COUNTOF(_aComparison_38) };
static const APPW_COND _Condition_3b = { "A", _aComparison_3b, GUI_COUNTOF(_aComparison_3b) };
static const APPW_COND _Condition_3c = { "A", _aComparison_3c, GUI_COUNTOF(_aComparison_3c) };
static const APPW_COND _Condition_3d = { "A", _aComparison_3d, GUI_COUNTOF(_aComparison_3d) };
static const APPW_COND _Condition_3e = { "A", _aComparison_3e, GUI_COUNTOF(_aComparison_3e) };
static const APPW_COND _Condition_3f = { "A", _aComparison_3f, GUI_COUNTOF(_aComparison_3f) };
static const APPW_COND _Condition_40 = { "A", _aComparison_40, GUI_COUNTOF(_aComparison_40) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,          WM_NOTIFICATION_VALUE_CHANGED,    0,                          APPW_JOB_SWAPSCREEN,     ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_MAINMENU),
    }, 0, &_Condition_00
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STRT_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STRT_1MIN__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_01
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STRT_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STRT_1MIN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_02
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STRT_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STRT_2SEC__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_03
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STRT_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STRT_2SEC__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_04
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STRT_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STRT_3MER__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_05
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STRT_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STRT_3MER__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_06
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STOP_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STOP_1MIN__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_07
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STOP_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STOP_1MIN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_08
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STOP_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STOP_2SEC__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_09
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STOP_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STOP_2SEC__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_0a
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STOP_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STOP_3MER__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_0b
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S1STOP_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S1STOP_3MER__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_0c
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STRT_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STRT_1MIN__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_0d
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STRT_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STRT_1MIN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_0e
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STRT_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STRT_2SEC__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_0f
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STRT_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STRT_2SEC__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_10
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STRT_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STRT_3MER__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_11
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STRT_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STRT_3MER__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_12
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STOP_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STOP_1MIN__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_13
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STOP_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STOP_1MIN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_14
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STOP_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STOP_2SEC__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_15
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STOP_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STOP_2SEC__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_16
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STOP_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STOP_3MER__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_17
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S2STOP_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S2STOP_3MER__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_18
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STRT_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STRT_1MIN__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_19
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STRT_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STRT_1MIN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_1a
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STRT_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STRT_2SEC__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_1b
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STRT_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STRT_2SEC__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_1c
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STRT_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STRT_3MER__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_1d
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STRT_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STRT_3MER__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_1e
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STOP_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STOP_1MIN__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_1f
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STOP_1HH,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STOP_1MIN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_20
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STOP_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STOP_2SEC__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_21
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STOP_2MM,        APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STOP_2SEC__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_22
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STOP_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STOP_3MER__APPW_JOB_SETBITMAP,
    { ARG_V(4422),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_23
  },
  { ID_VAR_SWCS_CNTR,           WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_S3STOP_3MER,       APPW_JOB_SETBITMAP,      ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_S3STOP_3MER__APPW_JOB_SETBITMAP_0,
    { ARG_V(4422),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_24
  },
  { ID_VAR_S1STRT_HH,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S1STRT_HH,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S1STRT_MIN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S1STRT_MM,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S1STRT_MM,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S1STRT_SEC__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S1STRT_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S1STRT_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S1STRT_MER__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_27
  },
  { ID_VAR_S1STRT_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S1STRT_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S1STRT_MER__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_28
  },
  { ID_VAR_S1STOP_HH,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S1STOP_HH,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S1STOP_MIN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S1STOP_MM,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S1STOP_MM,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S1STOP_SEC__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S1STOP_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S1STOP_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S1STOP_MER__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_2b
  },
  { ID_VAR_S1STOP_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S1STOP_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S1STOP_MER__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_2c
  },
  { ID_VAR_S2STRT_HH,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S2STRT_HH,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S2STRT_MIN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S2STRT_MM,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S2STRT_MM,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S2STRT_SEC__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S2STRT_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S2STRT_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S2STRT_MER__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_2f
  },
  { ID_VAR_S2STRT_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S2STRT_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S2STRT_MER__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_30
  },
  { ID_VAR_S2STOP_HH,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S2STOP_HH,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S2STOP_MIN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S2STOP_MM,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S2STOP_MM,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S2STOP_SEC__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S2STOP_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S2STOP_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S2STOP_MER__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_33
  },
  { ID_VAR_S2STOP_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S2STOP_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S2STOP_MER__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_34
  },
  { ID_VAR_S3STRT_HH,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S3STRT_HH,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S3STRT_MIN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S3STRT_MM,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S3STRT_MM,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S3STRT_SEC__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S3STRT_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S3STRT_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S3STRT_MER__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_37
  },
  { ID_VAR_S3STRT_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S3STRT_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S3STRT_MER__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_38
  },
  { ID_VAR_S3STOP_HH,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S3STOP_HH,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S3STOP_MIN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S3STOP_MM,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S3STOP_MM,          APPW_JOB_SETVALUE,       ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S3STOP_SEC__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_S3STOP_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S3STOP_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S3STOP_MER__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_3b
  },
  { ID_VAR_S3STOP_MER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_S3STOP_MER,         APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_S3STOP_MER__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_3c
  },
  { ID_VAR_SAVE_STATUS,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SAVE_STATUS,        APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_SPACE),
    }, 65536, &_Condition_3d
  },
  { ID_VAR_SAVE_STATUS,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SAVE_STATUS,        APPW_JOB_SETTEXT,        ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_158),
    }, 65536, &_Condition_3e
  },
  { ID_VAR_SWCS_ERR_STATUS,     WM_NOTIFICATION_VALUE_CHANGED,    0,                          APPW_JOB_MODALMESSAGE,   ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_SWCS_ERROR),
    }, 0, &_Condition_3f
  },
  { ID_VAR_SWCS_ERR_STATUS,     WM_NOTIFICATION_VALUE_CHANGED,    0,                          APPW_JOB_CLOSESCREEN,    ID_SCREEN_SHFTWSCLKSETTING__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_SWCS_ERROR),
    }, 0, &_Condition_40
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
*       ID_SCREEN_SHFTWSCLKSETTING_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_SHFTWSCLKSETTING_RootInfo = {
  ID_SCREEN_SHFTWSCLKSETTING,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_SHFTWSCLKSETTING,
  0
};

/*************************** End of file ****************************/
