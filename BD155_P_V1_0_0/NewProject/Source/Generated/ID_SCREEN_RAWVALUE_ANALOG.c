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
File        : ID_SCREEN_RAWVALUE_ANALOG.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_RAWVALUE_ANALOG.h"

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
    ID_SCREEN_RAWVALUE_ANALOG, 0,
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
    ID_IMAGE_00, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      800, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI1RAW, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 60, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI2RAW, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI3RAW, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 140, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI1_TYPE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 130, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 60, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      85, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI2_TYPE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI3_TYPE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 125, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 140, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DI1, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 110, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 177, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DI2, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 110, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 216, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DI3, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 110, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 255, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DI4, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 110, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 295, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DI5, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 110, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 334, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_FREQUENCY, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 45, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 373, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DIGITAL_OUTPUT, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 97, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 411, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_BATT, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 90, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 450, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_COT, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 300, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 50, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_TOP, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 300, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 90, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_FUEL, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 170, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_EOP, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 300, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 130, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_ECT, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 210, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_BOOST_PRES, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_EOT, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 290, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_ENGSPD, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 300, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 370, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VAL_FIP, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 317, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 330, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_HOUR, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 304, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 450, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MINUTE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 340, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 450, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SECONDS, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 375, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 450, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MERIDIAN, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 405, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 450, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DAY, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 304, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI1_S_RAW, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 467, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI2_S_RAW, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 467, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 110, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI3_S_RAW, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 467, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 148, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI4_S_RAW, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 467, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI1_S_TYPE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 580, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI2_S_TYPE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 580, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 110, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI3_S_TYPE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 580, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 148, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AI4_S_TYPE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 580, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AIN1_S_VALUE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 693, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AIN2_S_VALUE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 693, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 110, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AIN3_S_VALUE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 693, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 148, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_AIN4_S_VALUE, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 693, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ICON16, ID_SCREEN_RAWVALUE_ANALOG,
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
    ID_TEXT_colon, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 334, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 448, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_colon1, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 369, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 448, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_UIN, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 3, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_OVRSPD, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 325, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 221, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      150, 60, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MONTH, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 340, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_YEAR, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 375, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_colon_Copy, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 334, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 408, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_colon1_Copy, ID_SCREEN_RAWVALUE_ANALOG,
    { { { DISPOSE_MODE_REL_PARENT, 369, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 408, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      10, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,               APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,               APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acTROUBLE_SHOOTING),
                                                             ARG_V(66311), } },
  { ID_TEXT_AI1RAW,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI1RAW,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI1RAW,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI1RAW,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI1RAW,            APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI1RAW,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI2RAW,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI2RAW,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI2RAW,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI2RAW,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI2RAW,            APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI2RAW,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI3RAW,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI3RAW,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI3RAW,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI3RAW,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI3RAW,            APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI3RAW,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI1_TYPE,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI1_TYPE,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI1_TYPE,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI1_TYPE,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI1_TYPE,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI1_TYPE,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI2_TYPE,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI2_TYPE,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI2_TYPE,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI2_TYPE,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI2_TYPE,          APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                             ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI2_TYPE,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI3_TYPE,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI3_TYPE,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI3_TYPE,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI3_TYPE,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI3_TYPE,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI3_TYPE,          APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                             ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI1,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DI1,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI1,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI1,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI1,               APPW_SET_PROP_DECMODE,      { ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI1,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_DI2,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DI2,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI2,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI2,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI2,               APPW_SET_PROP_DECMODE,      { ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI2,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_DI3,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DI3,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI3,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI3,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI3,               APPW_SET_PROP_DECMODE,      { ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI3,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_DI4,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DI4,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI4,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI4,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI4,               APPW_SET_PROP_DECMODE,      { ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI4,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_DI5,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DI5,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI5,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI5,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DI5,               APPW_SET_PROP_DECMODE,      { ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DI5,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_FREQUENCY,     APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_FREQUENCY,     APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_FREQUENCY,     APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_FREQUENCY,     APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_FREQUENCY,     APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_VAL_FREQUENCY,     APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_DIGITAL_OUTPUT,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DIGITAL_OUTPUT,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DIGITAL_OUTPUT,    APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DIGITAL_OUTPUT,    APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DIGITAL_OUTPUT,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_DIGITAL_OUTPUT,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_OFF) } },
  { ID_TEXT_VAL_BATT,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_BATT,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_BATT,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_BATT,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_BATT,          APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                             ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_BATT,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_COT,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_COT,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_COT,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_COT,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_COT,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_COT,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_TOP,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_TOP,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_TOP,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_TOP,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_TOP,           APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                             ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_TOP,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_FUEL,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_FUEL,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_FUEL,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_FUEL,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_FUEL,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_VAL_FUEL,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_EOP,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_EOP,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_EOP,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_EOP,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_EOP,           APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                             ARG_V(1),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_EOP,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_ECT,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_ECT,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_ECT,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_ECT,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_ECT,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_VAL_ECT,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_BOOST_PRES,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_BOOST_PRES,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_BOOST_PRES,    APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_BOOST_PRES,    APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_BOOST_PRES,    APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_VAL_BOOST_PRES,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_EOT,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_EOT,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_EOT,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_EOT,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_EOT,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_EOT,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_ENGSPD,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_ENGSPD,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_ENGSPD,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_ENGSPD,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_ENGSPD,        APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_VAL_ENGSPD,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_VAL_FIP,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_VAL_FIP,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_FIP,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_FIP,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VAL_FIP,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_VAL_FIP,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_HOUR,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_HOUR,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_HOUR,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_HOUR,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_HOUR,              APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_HOUR,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_MINUTE,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_MINUTE,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_MINUTE,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MINUTE,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MINUTE,            APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_MINUTE,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_SECONDS,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_SECONDS,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_SECONDS,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SECONDS,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SECONDS,           APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_SECONDS,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_MERIDIAN,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_MERIDIAN,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_MERIDIAN,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MERIDIAN,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MERIDIAN,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_MERIDIAN,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_AM) } },
  { ID_TEXT_DAY,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DAY,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DAY,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DAY,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DAY,               APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_DAY,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_AI1_S_RAW,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI1_S_RAW,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI1_S_RAW,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI1_S_RAW,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI1_S_RAW,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI1_S_RAW,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI2_S_RAW,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI2_S_RAW,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI2_S_RAW,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI2_S_RAW,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI2_S_RAW,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI2_S_RAW,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI3_S_RAW,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI3_S_RAW,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI3_S_RAW,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI3_S_RAW,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI3_S_RAW,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI3_S_RAW,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI4_S_RAW,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI4_S_RAW,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI4_S_RAW,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI4_S_RAW,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI4_S_RAW,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI4_S_RAW,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI1_S_TYPE,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI1_S_TYPE,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI1_S_TYPE,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI1_S_TYPE,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI1_S_TYPE,        APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI1_S_TYPE,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI2_S_TYPE,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI2_S_TYPE,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI2_S_TYPE,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI2_S_TYPE,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI2_S_TYPE,        APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI2_S_TYPE,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI3_S_TYPE,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI3_S_TYPE,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI3_S_TYPE,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI3_S_TYPE,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI3_S_TYPE,        APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI3_S_TYPE,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AI4_S_TYPE,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AI4_S_TYPE,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI4_S_TYPE,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI4_S_TYPE,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AI4_S_TYPE,        APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AI4_S_TYPE,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AIN1_S_VALUE,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AIN1_S_VALUE,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AIN1_S_VALUE,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AIN1_S_VALUE,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AIN1_S_VALUE,      APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_AIN1_S_VALUE,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AIN2_S_VALUE,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AIN2_S_VALUE,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AIN2_S_VALUE,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AIN2_S_VALUE,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AIN2_S_VALUE,      APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_AIN2_S_VALUE,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AIN3_S_VALUE,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AIN3_S_VALUE,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AIN3_S_VALUE,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AIN3_S_VALUE,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AIN3_S_VALUE,      APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_AIN3_S_VALUE,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_AIN4_S_VALUE,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_AIN4_S_VALUE,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_AIN4_S_VALUE,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_AIN4_S_VALUE,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_AIN4_S_VALUE,      APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(1) } },
  { ID_TEXT_AIN4_S_VALUE,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_IMAGE_ICON16,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ICON16,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                             ARG_V(568), } },
  { ID_TEXT_colon,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_colon,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_colon,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_colon,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_colon,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_colon,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_colon1,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_colon1,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_colon1,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_colon1,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_colon1,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_colon1,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_UIN,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_UIN,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_UIN,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_UIN,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_UIN,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_UIN,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_UIN1) } },
  { ID_IMAGE_OVRSPD,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_OVRSPD,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                             ARG_V(568), } },
  { ID_TEXT_MONTH,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_MONTH,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_MONTH,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MONTH,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MONTH,             APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_MONTH,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_YEAR,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_YEAR,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_YEAR,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_YEAR,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_YEAR,              APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                             ARG_V(0),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_YEAR,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_colon_Copy,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_colon_Copy,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_colon_Copy,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_colon_Copy,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_colon_Copy,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_colon_Copy,        APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_colon1_Copy,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_colon1_Copy,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                             ARG_V(0),
                                                             ARG_V(0) } },
  { ID_TEXT_colon1_Copy,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_colon1_Copy,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_colon1_Copy,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_colon1_Copy,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
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

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_NAVIPOPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_NAVIPOPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_CHANGE_LUM }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_CHANGE_LUM }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15[] = {
  { { { APPW_IS_VAR, ID_VAR_DIGITAL_OUTPUT }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16[] = {
  { { { APPW_IS_VAR, ID_VAR_DIGITAL_OUTPUT }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 27 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2a[] = {
  { { { APPW_IS_VAR, ID_VAR_MEREDIAN }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2b[] = {
  { { { APPW_IS_VAR, ID_VAR_MEREDIAN }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_39[] = {
  { { { APPW_IS_VAR, ID_VAR_UIN }, { APPW_IS_VAL, 250 } }, APPW__CompareIsLess },
};

static APPW_COND_COMP _aComparison_3a[] = {
  { { { APPW_IS_VAR, ID_VAR_WARN_OVRSPD }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_3b[] = {
  { { { APPW_IS_VAR, ID_VAR_WARN_OVRSPD }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
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
static const APPW_COND _Condition_15 = { "A", _aComparison_15, GUI_COUNTOF(_aComparison_15) };
static const APPW_COND _Condition_16 = { "A", _aComparison_16, GUI_COUNTOF(_aComparison_16) };
static const APPW_COND _Condition_18 = { "A", _aComparison_18, GUI_COUNTOF(_aComparison_18) };
static const APPW_COND _Condition_19 = { "A", _aComparison_19, GUI_COUNTOF(_aComparison_19) };
static const APPW_COND _Condition_1a = { "A", _aComparison_1a, GUI_COUNTOF(_aComparison_1a) };
static const APPW_COND _Condition_1b = { "A", _aComparison_1b, GUI_COUNTOF(_aComparison_1b) };
static const APPW_COND _Condition_1c = { "A", _aComparison_1c, GUI_COUNTOF(_aComparison_1c) };
static const APPW_COND _Condition_1d = { "A", _aComparison_1d, GUI_COUNTOF(_aComparison_1d) };
static const APPW_COND _Condition_2a = { "A", _aComparison_2a, GUI_COUNTOF(_aComparison_2a) };
static const APPW_COND _Condition_2b = { "A", _aComparison_2b, GUI_COUNTOF(_aComparison_2b) };
static const APPW_COND _Condition_39 = { "A", _aComparison_39, GUI_COUNTOF(_aComparison_39) };
static const APPW_COND _Condition_3a = { "A", _aComparison_3a, GUI_COUNTOF(_aComparison_3a) };
static const APPW_COND _Condition_3b = { "A", _aComparison_3b, GUI_COUNTOF(_aComparison_3b) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_ICON16,             WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON16,           APPW_JOB_SETBITMAP,      ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP,
    { ARG_V(4118),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_00
  },
  { ID_VAR_ICON16,             WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON16,           APPW_JOB_SETBITMAP,      ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP_0,
    { ARG_V(4118),
      ARG_VP(0, acrecall),
      ARG_V(4790),
    }, 1, &_Condition_01
  },
  { ID_VAR_ICON16,             WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ICON16,           APPW_JOB_SETBITMAP,      ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP_1,
    { ARG_V(4118),
      ARG_VP(0, achide),
      ARG_V(4436),
    }, 1, &_Condition_02
  },
  { ID_VAR_POPUP,              WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_MODALMESSAGE,   ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_03
  },
  { ID_VAR_POPUP,              WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_CLOSESCREEN,    ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_04
  },
  { ID_VAR_NAVIPOPUP,          WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_MODALMESSAGE,   ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_7,
    { ARG_V(ID_SCREEN_NAVIPOPUP),
    }, 0, &_Condition_05
  },
  { ID_VAR_NAVIPOPUP,          WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_CLOSESCREEN,    ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_8,
    { ARG_V(ID_SCREEN_NAVIPOPUP),
    }, 0, &_Condition_06
  },
  { ID_VAR_CHANGE_LUM,         WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_MODALMESSAGE,   ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_9,
    { ARG_V(ID_SCREEN_INTENSITY),
    }, 0, &_Condition_07
  },
  { ID_VAR_CHANGE_LUM,         WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_CLOSESCREEN,    ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_10,
    { ARG_V(ID_SCREEN_INTENSITY),
    }, 0, &_Condition_08
  },
  { ID_VAR_AI1RAW,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI1RAW,            APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI1RAW__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI2RAW,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI2RAW,            APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI2RAW__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI3RAW,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI3RAW,            APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI3RAW__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI1_TYPE,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI1_TYPE,          APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI1_TYPE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI2_TYPE,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI2_TYPE,          APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI2_TYPE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI3_TYPE,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI3_TYPE,          APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI3_TYPE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DI1,                WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DI1,               APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI1_ECL__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DI2,                WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DI2,               APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI2_PARK_OR_TR_OL_FIL_CLOG__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DI3,                WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DI3,               APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI3__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DI4,                WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DI4,               APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI4_SEAT_BELT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DI5,                WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DI5,               APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI5__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FREQ1,              WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_FREQUENCY,     APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FREQUENCY__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DIGITAL_OUTPUT,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DIGITAL_OUTPUT,    APPW_JOB_SETTEXT,        ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DIGITAL_OUTPUT__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ON),
    }, 65536, &_Condition_15
  },
  { ID_VAR_DIGITAL_OUTPUT,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DIGITAL_OUTPUT,    APPW_JOB_SETTEXT,        ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DIGITAL_OUTPUT__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_OFF),
    }, 65536, &_Condition_16
  },
  { ID_VAR_TXT_VOL,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_BATT,          APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_BATT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_DISPSCREEN,         WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_SWAPSCREEN,     ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_5,
    { ARG_V(ID_SCREEN_MAIN_DAY),
    }, 0, &_Condition_18
  },
  { ID_VAR_DISPSCREEN,         WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_SWAPSCREEN,     ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_MAIN2_DAY),
    }, 0, &_Condition_19
  },
  { ID_VAR_DISPSCREEN,         WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_SWAPSCREEN,     ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_RAWVALUE_IO),
    }, 0, &_Condition_1a
  },
  { ID_VAR_DISPSCREEN,         WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_SWAPSCREEN,     ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_PASSWORD),
    }, 0, &_Condition_1b
  },
  { ID_VAR_DISPSCREEN,         WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_SWAPSCREEN,     ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_6,
    { ARG_V(ID_SCREEN_MAIN_NIGHT),
    }, 0, &_Condition_1c
  },
  { ID_VAR_DISPSCREEN,         WM_NOTIFICATION_VALUE_CHANGED,    0,                         APPW_JOB_SWAPSCREEN,     ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_4,
    { ARG_V(ID_SCREEN_MAIN2_NIGHT),
    }, 0, &_Condition_1d
  },
  { ID_VAR_TXT_COT,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_COT,           APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_COT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_TOP,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_TOP,           APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_TOP__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_FUEL,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_FUEL,          APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_FUEL__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_EOP,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_EOP,           APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_EOP__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_ECT,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_ECT,           APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_ECT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_BOOST_PRESS,    WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_BOOST_PRES,    APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_BOOST_PRES__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_EOT,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_EOT,           APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_EOT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_RPM,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_ENGSPD,        APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_ENGSPD__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_FIP_RACK_POS,   WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VAL_FIP,           APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_FIP__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_HOUR,               WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_HOUR,              APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MINUTE,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MINUTE,            APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MINUTE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SEC,                WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SECONDS,           APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SECONDS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MEREDIAN,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MERIDIAN,          APPW_JOB_SETTEXT,        ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_2a
  },
  { ID_VAR_MEREDIAN,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MERIDIAN,          APPW_JOB_SETTEXT,        ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_2b
  },
  { ID_VAR_TXT_ECU_BATT,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DAY,               APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_ECU_BATT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI1_S_RAW,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI1_S_RAW,         APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI1_S_RAW__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI2_S_RAW,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI2_S_RAW,         APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI2_S_RAW__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI3_S_RAW,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI3_S_RAW,         APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI3_S_RAW__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI4_S_RAW,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI4_S_RAW,         APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI4_S_RAW__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI1_S_TYPE,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI1_S_TYPE,        APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI1_S_TYPE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI2_S_TYPE,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI2_S_TYPE,        APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI2_S_TYPE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI3_S_TYPE,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI3_S_TYPE,        APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI3_S_TYPE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_AI4_S_TYPE,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AI4_S_TYPE,        APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI4_S_TYPE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_AIN1_S_VALUE,   WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AIN1_S_VALUE,      APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_HOL__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_AIN2_S_VALUE,   WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AIN2_S_VALUE,      APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_HOT__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_AIN3_S_VALUE,   WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AIN3_S_VALUE,      APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AIN3_S_VALUE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TXT_AIN4_S_VALUE,   WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_AIN4_S_VALUE,      APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AIN4_S_VALUE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_UIN,                WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_UIN,               APPW_JOB_SETTEXT,        ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_UIN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_UIN1),
    }, 65536, &_Condition_39
  },
  { ID_VAR_WARN_OVRSPD,        WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_OVRSPD,           APPW_JOB_SETBITMAP,      ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_01__APPW_JOB_SETBITMAP,
    { ARG_V(4460),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_3a
  },
  { ID_VAR_WARN_OVRSPD,        WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_OVRSPD,           APPW_JOB_SETBITMAP,      ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_OVRSPD__APPW_JOB_SETBITMAP,
    { ARG_V(4460),
      ARG_VP(0, acOVRSPD2),
      ARG_V(2029),
    }, 1, &_Condition_3b
  },
  { ID_VAR_DAY,                WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DAY,               APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MONTH,              WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MONTH,             APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_YEAR,               WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_YEAR,              APPW_JOB_SETVALUE,       ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE,
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
*       ID_SCREEN_RAWVALUE_ANALOG_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_RAWVALUE_ANALOG_RootInfo = {
  ID_SCREEN_RAWVALUE_ANALOG,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_RAWVALUE_ANALOG,
  0
};

/*************************** End of file ****************************/
