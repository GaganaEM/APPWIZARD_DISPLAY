/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*       (c) 1995 - 2017 SEGGER Microcontroller GmbH & Co. KG         *
*                                                                    *
*       Internet: segger.com  Support: support_embos@segger.com      *
*                                                                    *
**********************************************************************
*                                                                    *
*       embOS * Real time operating system for microcontrollers      *
*                                                                    *
*       Please note:                                                 *
*                                                                    *
*       Knowledge of this file may under no circumstances            *
*       be used to write a similar product or a real-time            *
*       operating system for in-house use.                           *
*                                                                    *
*       Thank you for your fairness !                                *
*                                                                    *
**********************************************************************
*                                                                    *
*       OS version: Internal                                         *
*                                                                    *
*       Current version number will be inserted here                 *
*       when shipment is built.                                      *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File    : BSP.c
Purpose : BSP for MIMXRT1050 EVK(B) eval board
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "BSP.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/

//
// The LED implementation is disabled by default since the LED pin is
// also used for JTAG_TDI and ENET_RST. In order to enable the LED
// implementation, set BSP_ENABLE_LED to 1.
//
#define BSP_ENABLE_LED                       (0)

#define LED                                  (9)

#define CCM_BASE_ADDR                        (0x400FC000u)
#define CCM_CCGR1                            (*(volatile unsigned int*)(CCM_BASE_ADDR + 0x6C))
#define CCM_CCGR4                            (*(volatile unsigned int*)(CCM_BASE_ADDR + 0x78))

#define IOMUXC_BASE_ADDR                     (0x401F8000u)
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_09  (*(volatile unsigned int*)(IOMUXC_BASE_ADDR + 0x0E0))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_09  (*(volatile unsigned int*)(IOMUXC_BASE_ADDR + 0x2D0))

#define GPIO_BASE_ADDR                       (0x401B8000u)
#define GPIO_DR                              (*(volatile unsigned int*)(GPIO_BASE_ADDR + 0x0))
#define GPIO_DIR                             (*(volatile unsigned int*)(GPIO_BASE_ADDR + 0x4))

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/*********************************************************************
*
*       BSP_Init()
*/
void BSP_Init(void) {
#if (BSP_ENABLE_LED == 1)
  CCM_CCGR4                           |=  (0x3u << 2);    // Enable iomuxc clock
  CCM_CCGR1                           &= ~(0x3u << 26);   // Disable gpio1 clock
  IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_09  =   0x5;           // Set mux to ALT5 GPIO1_IO09
  IOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_09  =   0x10B0;        // Functional properties
  CCM_CCGR1                           |=  (0x3u << 26);   // Enable gpio1 clock
  GPIO_DR                             |=  (0x1u << LED);
  GPIO_DIR                            |=  (0x1u << LED);  // Set GPIO pin 9 to output
#endif
}

/*********************************************************************
*
*       BSP_SetLED()
*/
void BSP_SetLED(int Index) {
#if (BSP_ENABLE_LED == 1)
  if (Index == 0) {
    GPIO_DR &= ~(0x1u << LED);
  }
#else
  BSP_USE_PARA(Index);
#endif
}

/*********************************************************************
*
*       BSP_ClrLED()
*/
void BSP_ClrLED(int Index) {
#if (BSP_ENABLE_LED == 1)
  if (Index == 0) {
    GPIO_DR |= (0x1u << LED);
  }
#else
  BSP_USE_PARA(Index);
#endif
}

/*********************************************************************
*
*       BSP_ToggleLED()
*/
void BSP_ToggleLED(int Index) {
#if (BSP_ENABLE_LED == 1)
  if (Index == 0) {
    GPIO_DR ^= (0x1u << LED);
  }
#else
  BSP_USE_PARA(Index);
#endif
}

/****** End Of File *************************************************/
