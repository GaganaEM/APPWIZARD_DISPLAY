/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2009  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : LCDConf.c
Purpose     : Display controller configuration (single layer)
---------------------------END-OF-HEADER------------------------------
*/

#include "GUI.h"
#include "GUIDRV_Lin.h"
#include "LCDConf.h"

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "fsl_gpio.h"
#include "fsl_elcdif.h"

/*********************************************************************
*
*       LCD configuration
*
**********************************************************************
*/
#define LCD_BITS_PER_PIXEL 32
#define LCD_BYTES_PER_PIXEL (LCD_BITS_PER_PIXEL / 8)

#if LCD_BITS_PER_PIXEL == 16
  #define DISPLAY_DRIVER      GUIDRV_LIN_16
  #define COLOR_CONVERSION    GUICC_M565
  #define PIXEL_FORMAT        kELCDIF_PixelFormatRGB565
  #define LCD_DATA_BUS_WIDTH  kELCDIF_DataBus16Bit
#else
  #define DISPLAY_DRIVER      GUIDRV_LIN_32
  #define COLOR_CONVERSION    GUICC_M8888I
  #define PIXEL_FORMAT        kELCDIF_PixelFormatXRGB8888
  #define LCD_DATA_BUS_WIDTH  kELCDIF_DataBus16Bit
#endif

/*********************************************************************
*
*       Layer configuration (to be modified)
*
**********************************************************************
*/
#define XSIZE_PHYS 480
#define YSIZE_PHYS 272

//
// Buffers / VScreens
//
#define NUM_BUFFERS  2 // Number of multiple buffers to be used (at least 1 buffer)
#define NUM_VSCREENS 1 // Number of virtual  screens to be used (at least 1 screen)

//
// Define number of layers for this configuration file. Must be equal or less than in GUIConf.h!
//
#undef  GUI_NUM_LAYERS
#define GUI_NUM_LAYERS 1

/*********************************************************************
*
*       Configuration checking
*
**********************************************************************
*/
#ifndef   VRAM_ADDR
  #define VRAM_ADDR (U32)(&_aVRAM0[0])
#endif
#ifndef   XSIZE_PHYS
  #error Physical X size of display is not defined!
#endif
#ifndef   YSIZE_PHYS
  #error Physical Y size of display is not defined!
#endif
#ifndef   COLOR_CONVERSION
  #error Color conversion not defined!
#endif
#ifndef   DISPLAY_DRIVER
  #error No display driver defined!
#endif

#define LCD_HSW        41
#define LCD_HFP        4
#define LCD_HBP        8
#define LCD_VSW        10
#define LCD_VFP        4
#define LCD_VBP        2
#define LCD_POL_FLAGS  (kELCDIF_DataEnableActiveHigh | kELCDIF_VsyncActiveLow | kELCDIF_HsyncActiveLow | kELCDIF_DriveDataOnRisingClkEdge)

//
// LCD related GPIOs
//
#define LCD_DISP_GPIO GPIO1
#define LCD_DISP_GPIO_PIN 2  // Reset
#define LCD_BL_GPIO GPIO2
#define LCD_BL_GPIO_PIN 31   // Backlight

U32 _aVRAM0[XSIZE_PHYS * YSIZE_PHYS * NUM_BUFFERS * NUM_VSCREENS * LCD_BYTES_PER_PIXEL] __attribute__ ((section (".GUI_RAM")));

static volatile int               _PendingBuffer = -1;

//
// Clock config
//
const clock_arm_pll_config_t armPllConfig = {.loopDivider = 100U};
const clock_sys_pll_config_t sysPllConfig = {.loopDivider = 1U};
const clock_usb_pll_config_t usb1PllConfig = {.loopDivider = 0U};

static U32 _aBufferAddress[NUM_BUFFERS] = {
  VRAM_ADDR,
  #if (NUM_BUFFERS > 1)
    VRAM_ADDR + XSIZE_PHYS * YSIZE_PHYS * LCD_BYTES_PER_PIXEL,
  #endif
  #if (NUM_BUFFERS > 2)
    VRAM_ADDR + XSIZE_PHYS * YSIZE_PHYS * LCD_BYTES_PER_PIXEL * 2
  #endif
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

/*********************************************************************
*
*       _InitPins
*/
static void _InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);                       // iomuxc clock (iomuxc_clk_enable): 0x03u
  
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_00_LCD_CLK, 0U);        // GPIO_B0_00 is configured as LCD_CLK
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_01_LCD_ENABLE, 0U);     // GPIO_B0_01 is configured as LCD_ENABLE
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_02_LCD_HSYNC, 0U);      // GPIO_B0_02 is configured as LCD_HSYNC
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_03_LCD_VSYNC, 0U);      // GPIO_B0_03 is configured as LCD_VSYNC
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_04_LCD_DATA00, 0U);     // GPIO_B0_04 is configured as LCD_DATA00
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_05_LCD_DATA01, 0U);     // GPIO_B0_05 is configured as LCD_DATA01
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_06_LCD_DATA02, 0U);     // GPIO_B0_06 is configured as LCD_DATA02
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_07_LCD_DATA03, 0U);     // GPIO_B0_07 is configured as LCD_DATA03
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_08_LCD_DATA04, 0U);     // GPIO_B0_08 is configured as LCD_DATA04
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_09_LCD_DATA05, 0U);     // GPIO_B0_09 is configured as LCD_DATA05
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_10_LCD_DATA06, 0U);     // GPIO_B0_10 is configured as LCD_DATA06
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_11_LCD_DATA07, 0U);     // GPIO_B0_11 is configured as LCD_DATA07
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_12_LCD_DATA08, 0U);     // GPIO_B0_12 is configured as LCD_DATA08
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_13_LCD_DATA09, 0U);     // GPIO_B0_13 is configured as LCD_DATA09
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_14_LCD_DATA10, 0U);     // GPIO_B0_14 is configured as LCD_DATA10
  IOMUXC_SetPinMux(IOMUXC_GPIO_B0_15_LCD_DATA11, 0U);     // GPIO_B0_15 is configured as LCD_DATA11
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_00_LCD_DATA12, 0U);     // GPIO_B1_00 is configured as LCD_DATA12
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_01_LCD_DATA13, 0U);     // GPIO_B1_01 is configured as LCD_DATA13
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_02_LCD_DATA14, 0U);     // GPIO_B1_02 is configured as LCD_DATA14
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_03_LCD_DATA15, 0U);     // GPIO_B1_03 is configured as LCD_DATA15

  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_00_LCD_CLK,       0x01B0B0u);  // GPIO_B0_00 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_01_LCD_ENABLE,    0x01B0B0u);  // GPIO_B0_01 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_02_LCD_HSYNC,     0x01B0B0u);  // GPIO_B0_02 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_03_LCD_VSYNC,     0x01B0B0u);  // GPIO_B0_03 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_04_LCD_DATA00,    0x01B0B0u);  // GPIO_B0_04 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_05_LCD_DATA01,    0x01B0B0u);  // GPIO_B0_05 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_06_LCD_DATA02,    0x01B0B0u);  // GPIO_B0_06 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_07_LCD_DATA03,    0x01B0B0u);  // GPIO_B0_07 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_08_LCD_DATA04,    0x01B0B0u);  // GPIO_B0_08 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_09_LCD_DATA05,    0x01B0B0u);  // GPIO_B0_09 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_10_LCD_DATA06,    0x01B0B0u);  // GPIO_B0_10 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_11_LCD_DATA07,    0x01B0B0u);  // GPIO_B0_11 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_12_LCD_DATA08,    0x01B0B0u);  // GPIO_B0_12 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_13_LCD_DATA09,    0x01B0B0u);  // GPIO_B0_13 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_14_LCD_DATA10,    0x01B0B0u);  // GPIO_B0_14 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B0_15_LCD_DATA11,    0x01B0B0u);  // GPIO_B0_15 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_00_LCD_DATA12,    0x01B0B0u);  // GPIO_B1_00 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_01_LCD_DATA13,    0x01B0B0u);  // GPIO_B1_01 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_02_LCD_DATA14,    0x01B0B0u);  // GPIO_B1_02 PAD functional properties
  IOMUXC_SetPinConfig(IOMUXC_GPIO_B1_03_LCD_DATA15,    0x01B0B0u);  // GPIO_B1_03 PAD functional properties
}

/*********************************************************************
*
*       _BootClockRUN
*/
static void _BootClockRUN(void) {
  //
  // Boot ROM did initialize the XTAL, here we only sets external XTAL OSC freq
  //
  CLOCK_SetXtalFreq(24000000U);
  CLOCK_SetRtcXtalFreq(32768U);
  CLOCK_SetMux(kCLOCK_PeriphClk2Mux, 0x1);                                  // Set PERIPH_CLK2 MUX to OSC
  CLOCK_SetMux(kCLOCK_PeriphMux, 0x1);                                      // Set PERIPH_CLK MUX to PERIPH_CLK2
  DCDC->REG3 = (DCDC->REG3 & (~DCDC_REG3_TRG_MASK)) | DCDC_REG3_TRG(0x12);
  CLOCK_InitArmPll(&armPllConfig);                                          // Configure ARM PLL to 1200M
  CLOCK_InitSysPll(&sysPllConfig);                                          // Configure SYS PLL to 528M
  CLOCK_InitUsb1Pll(&usb1PllConfig);                                        // Configure USB1 PLL to 480M
  CLOCK_SetDiv(kCLOCK_ArmDiv, 0x1);                                         // Set ARM PODF to 1, divide by 2
  CLOCK_SetDiv(kCLOCK_AhbDiv, 0x0);                                         // Set AHB PODF to 0, divide by 1
  CLOCK_SetDiv(kCLOCK_IpgDiv, 0x3);                                         // Set IPG PODF to 3, divede by 4
  CLOCK_SetMux(kCLOCK_PrePeriphMux, 0x3);                                   // Set PRE_PERIPH_CLK to PLL1, 1200M
  CLOCK_SetMux(kCLOCK_PeriphMux, 0x0);                                      // Set PERIPH_CLK MUX to PRE_PERIPH_CLK
  //_BootClockGate();
  CLOCK_DeinitAudioPll();
  //CLOCK_DeinitVideoPll();
  CLOCK_DeinitEnetPll();
  CLOCK_DeinitUsb2Pll();
  SystemCoreClockUpdate();
}

/*********************************************************************
*
*       _LCDOnOff
*/
static void _LCDOnOff(int OnOff) {
  gpio_pin_config_t config = {
    kGPIO_DigitalOutput, 0, 0,
  };    
  //
  // Backlight
  //
  config.outputLogic = OnOff;
  GPIO_PinInit(LCD_BL_GPIO, LCD_BL_GPIO_PIN, &config);
}

/*********************************************************************
*
*       _InitPixelClock
*/
static void _InitPixelClock(void) {
    clock_video_pll_config_t config = {
        .loopDivider = 31, .postDivider = 8, .numerator = 0, .denominator = 0,
    };
    CLOCK_InitVideoPll(&config);
    CLOCK_SetMux(kCLOCK_LcdifPreMux, 2);
    CLOCK_SetDiv(kCLOCK_LcdifPreDiv, 4);
    CLOCK_SetDiv(kCLOCK_LcdifDiv, 1);
}

/*********************************************************************
*
*       _InitController
*
* Purpose:
*   Should initialize the display controller
*/
static void _InitController(void) {
  const elcdif_rgb_mode_config_t LCDConfig = {
    .panelWidth = XSIZE_PHYS,
    .panelHeight = YSIZE_PHYS,
    .hsw = LCD_HSW,
    .hfp = LCD_HFP,
    .hbp = LCD_HBP,
    .vsw = LCD_VSW,
    .vfp = LCD_VFP,
    .vbp = LCD_VBP,
    .polarityFlags = LCD_POL_FLAGS,
    .bufferAddr = VRAM_ADDR,
    .pixelFormat = PIXEL_FORMAT,
    .dataBus = LCD_DATA_BUS_WIDTH,
  };
  gpio_pin_config_t GPIOConfig = {
    kGPIO_DigitalOutput, 0, 0,
  };
  int i = 0x100U;
  
  _InitPins();
  _BootClockRUN();
  _InitPixelClock();
  //
  // Reset the LCD
  //
  GPIO_PinInit(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, &GPIOConfig);
  GPIO_WritePinOutput(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, 0);
  while (i--) {}
  GPIO_WritePinOutput(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, 1);
  //
  // Init LCD controller
  //
  ELCDIF_RgbModeInit(LCDIF, &LCDConfig);
  //
  // Enable VSYNC interrupt
  //    
  EnableIRQ(LCDIF_IRQn);
  ELCDIF_EnableInterrupts(LCDIF, kELCDIF_CurFrameDoneInterruptEnable);
  NVIC_EnableIRQ(LCDIF_IRQn);
  ELCDIF_RgbModeStart(LCDIF);
}

/*********************************************************************
*
*       _ClearCache
*/
static void _ClearCache(U32 v) {
  GUI_USE_PARA(v);
  SCB_CleanInvalidateDCache();
}

/*********************************************************************
*
*       LCDIF_IRQHandler
*/
void LCDIF_IRQHandler(void);
void LCDIF_IRQHandler(void) {
  U32 InterruptStatus;
  //
  // Get and clear interrupt status
  //
  InterruptStatus = ELCDIF_GetInterruptStatus(LCDIF);
  ELCDIF_ClearInterruptStatus(LCDIF, InterruptStatus);
  //
  // If frame is done and pending buffer is not -1 confirm buffer
  //
  if (InterruptStatus & kELCDIF_CurFrameDone) {
    if (_PendingBuffer >= 0) {
      GUI_MULTIBUF_Confirm(_PendingBuffer);
      _PendingBuffer = -1;
    }
  }
#if defined __CORTEX_M && (__CORTEX_M == 4U)
    __DSB();
#endif
}

/*********************************************************************
*
*       _SwitchBuffer
*/
static void _SwitchBuffer(int Index) {
  U32 Addr;
  //
  // Calculate address of buffer to be used  as visible frame buffer
  //
  Addr = _aBufferAddress[Index];
  //
  // Reload configuration
  //
  ELCDIF_SetNextBufferAddr(LCDIF, Addr);
  //
  // Tell emWin that buffer is used
  //
  _PendingBuffer = Index;
  while (_PendingBuffer >= 0) {
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
*       LCD_X_Config
*
* Purpose:
*   Called during the initialization process in order to set up the
*   display driver configuration.
*   
*/
void LCD_X_Config(void) {

#if (NUM_BUFFERS > 1)
  GUI_MULTIBUF_Config(NUM_BUFFERS);
#endif
  //
  // Set display driver and color conversion for 1st layer
  //
  GUI_DEVICE_CreateAndLink(DISPLAY_DRIVER, COLOR_CONVERSION, 0, 0);
  //
  // Display driver configuration
  //
  if (LCD_GetSwapXY()) {
    LCD_SetSizeEx (0, YSIZE_PHYS, XSIZE_PHYS);
    LCD_SetVSizeEx(0, YSIZE_PHYS, XSIZE_PHYS);
  } else {
    LCD_SetSizeEx (0, XSIZE_PHYS, YSIZE_PHYS);
    LCD_SetVSizeEx(0, XSIZE_PHYS, YSIZE_PHYS);
  }
  LCD_SetVRAMAddrEx(0, (void *)_aBufferAddress[0]);
  //
  // Set user palette data (only required if no fixed palette is used)
  //
  #if defined(PALETTE)
    LCD_SetLUTEx(0, PALETTE);
  #endif
  GUI_DCACHE_SetClearCacheHook(_ClearCache);
}

/*********************************************************************
*
*       LCD_X_DisplayDriver
*
* Purpose:
*   This function is called by the display driver for several purposes.
*   To support the according task the routine needs to be adapted to
*   the display controller. Please note that the commands marked with
*   'optional' are not cogently required and should only be adapted if 
*   the display controller supports these features.
*
* Parameter:
*   LayerIndex - Index of layer to be configured
*   Cmd        - Please refer to the details in the switch statement below
*   pData      - Pointer to a LCD_X_DATA structure
*
* Return Value:
*   < -1 - Error
*     -1 - Command not handled
*      0 - Ok
*/
int LCD_X_DisplayDriver(unsigned LayerIndex, unsigned Cmd, void * pData) {
  int r;

  GUI_USE_PARA(LayerIndex);
  switch (Cmd) {
  //
  // Required
  //
  case LCD_X_INITCONTROLLER: {
    //
    // Called during the initialization process in order to set up the
    // display controller and put it into operation. If the display
    // controller is not initialized by any external routine this needs
    // to be adapted by the customer...
    //
    _InitController();
    return 0;
  }
  case LCD_X_SHOWBUFFER: {
    LCD_X_SHOWBUFFER_INFO * pInfo;

    pInfo = (LCD_X_SHOWBUFFER_INFO *)pData;
    _SwitchBuffer(pInfo->Index);
    return 0;
  }
  case LCD_X_ON: {
    _LCDOnOff(1);
    return 0;
  }
  case LCD_X_OFF: {
    _LCDOnOff(0);
    return 0;
  }
  default:
    r = -1;
  }
  return r;
}

/*************************** End of file ****************************/
