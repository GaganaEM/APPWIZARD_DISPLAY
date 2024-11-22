/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*       (c) 2003 - 2016  SEGGER Microcontroller GmbH & Co. KG        *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : PIDConf.c
Purpose     : Touch screen controller configuration
---------------------------END-OF-HEADER------------------------------
*/

#include "RTOS.h"
#include "GUI.h"
#include "PIDConf.h"
#include "fsl_lpi2c.h"
#include "fsl_ft5406_rt.h"
#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "fsl_gpio.h"
//#include "clock_config.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define LPI2C_CLOCK_SOURCE_SELECT (0U)
#define LPI2C_CLOCK_SOURCE_DIVIDER (5U)
#define BOARD_TOUCH_I2C LPI2C1
#define BOARD_TOUCH_I2C_BAUDRATE 100000U
#define BOARD_TOUCH_I2C_CLOCK_FREQ ((CLOCK_GetFreq(kCLOCK_Usb1PllClk) / 8) / (LPI2C_CLOCK_SOURCE_DIVIDER + 1U))

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
static OS_STACKPTR int StackPID[128];  // Task stacks
static OS_TASK         TCBPID;         // Task control blocks

static U8 _IsInitialized;
static int _LayerIndex;

static ft5406_rt_handle_t touchHandle;

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
/*********************************************************************
*
*       _InitI2C1Pins
*/
static void _InitI2C1Pins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);          /* iomuxc clock (iomuxc_clk_enable): 0x03u */
  //
  // Clock setting for LPI2C
  //
  CLOCK_SetMux(kCLOCK_Lpi2cMux, LPI2C_CLOCK_SOURCE_SELECT);
  CLOCK_SetDiv(kCLOCK_Lpi2cDiv, LPI2C_CLOCK_SOURCE_DIVIDER);

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_00_LPI2C1_SCL,        /* GPIO_AD_B1_00 is configured as LPI2C1_SCL */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_AD_B1_00 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_01_LPI2C1_SDA,        /* GPIO_AD_B1_01 is configured as LPI2C1_SDA */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_AD_B1_01 */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B1_01_LPI2C1_SDA,        /* GPIO_AD_B1_01 PAD functional properties : */
      0xD8B0u);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Enabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 22K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B1_06_LPI2C3_SDA,        /* GPIO_AD_B1_06 PAD functional properties : */
      0xD8B0u);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Enabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 22K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */
}

/*********************************************************************
*
*       _TouchTask
*/
static void _TouchTask(void) {
  while (1) {
    PID_X_Exec();
    OS_Delay(25);
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       PID_X_Exec
*/
void PID_X_Exec(void) {
  touch_event_t        TouchEvent;
  static GUI_PID_STATE StatePID;
  static int           IsTouched;
  int                  xPos;
  int                  yPos;

  if (kStatus_Success != FT5406_RT_GetSingleTouch(&touchHandle, &TouchEvent, &xPos, &yPos)) {
    return;
  } else {
    if ((TouchEvent != kTouch_Reserved) && (TouchEvent == kTouch_Contact)) {
      StatePID.x = yPos;
      StatePID.y = xPos;
      StatePID.Pressed = ((TouchEvent == kTouch_Down) || (TouchEvent == kTouch_Contact)) ? 1 : 0;
      StatePID.Layer = _LayerIndex;
      GUI_TOUCH_StoreStateEx(&StatePID);
      IsTouched = 1;
    } else if (IsTouched && (TouchEvent == kTouch_Up)) {
      IsTouched = 0;
      StatePID.Pressed = 0;
      GUI_TOUCH_StoreStateEx(&StatePID);
    }
  }
}

/*********************************************************************
*
*       PID_X_SetLayerIndex
*/
void PID_X_SetLayerIndex(int LayerIndex) {
  _LayerIndex = LayerIndex;
}

/*********************************************************************
*
*       PID_X_Init
*/
void PID_X_Init(void) {
  lpi2c_master_config_t masterConfig = {0};

  if (_IsInitialized == 0) {
    
    _InitI2C1Pins();
    /*
    * masterConfig.debugEnable = false;
    * masterConfig.ignoreAck = false;
    * masterConfig.pinConfig = kLPI2C_2PinOpenDrain;
    * masterConfig.baudRate_Hz = 100000U;
    * masterConfig.busIdleTimeout_ns = 0;
    * masterConfig.pinLowTimeout_ns = 0;
    * masterConfig.sdaGlitchFilterWidth_ns = 0;
    * masterConfig.sclGlitchFilterWidth_ns = 0;
    */
    LPI2C_MasterGetDefaultConfig(&masterConfig);

    /* Change the default baudrate configuration */
    masterConfig.baudRate_Hz = BOARD_TOUCH_I2C_BAUDRATE;

    /* Initialize the LPI2C master peripheral */
    LPI2C_MasterInit(BOARD_TOUCH_I2C, &masterConfig, BOARD_TOUCH_I2C_CLOCK_FREQ);

    /* Initialize the touch handle. */
    FT5406_RT_Denit(&touchHandle);
    FT5406_RT_Init(&touchHandle, BOARD_TOUCH_I2C);
    GUI_X_Delay(300);
    OS_CREATETASK(&TCBPID, "_TouchTask", _TouchTask, 101, StackPID);
    _IsInitialized = 1;
  }
}

/*************************** End of file ****************************/
