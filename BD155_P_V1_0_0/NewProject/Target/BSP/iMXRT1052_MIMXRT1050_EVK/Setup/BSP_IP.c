/*********************************************************************
*               (c) SEGGER Microcontroller GmbH & Co. KG             *
*                        The Embedded Experts                        *
*                           www.segger.com                           *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File    : BSP_IP.c
Purpose : BSP for embOS/IP on NXP MIMXRT1050-EVK with NXP i.MXRT1052 MCU.
*/

#include "BSP_IP.h"
#include "SEGGER.h"
#include "RTOS.h"        // For OS_Enter/LeaveInterrupt() .

#include "MIMXRT1052.h"  // Device specific header file, contains CMSIS defines.

/*********************************************************************
*
*       Defines, fixed
*
**********************************************************************
*/

#define PAD_CTL_200MHZ_PU    ((1uL <<  0) |  /* SRE  : SRE_1_Fast_Slew_Rate - Fast Slew Rate           */    \
                              (5uL <<  3) |  /* DSE  : DSE_5_R0_5 - R0/5                               */    \
                              (3uL <<  6) |  /* SPEED: SPEED_3_max_200MHz - max(200MHz)                */    \
                              (0uL << 11) |  /* ODE  : ODE_0_Open_Drain_Disabled - Open Drain Disabled */    \
                              (1uL << 12) |  /* PKE  : PKE_1_Pull_Keeper_Enabled - Pull/Keeper Enabled */    \
                              (1uL << 13) |  /* PUE  : PUE_1_Pull - Pull                               */    \
                              (2uL << 14) |  /* PUS  : PUS_2_100K_Ohm_Pull_Up - 100K Ohm Pull Up       */    \
                              (0uL << 16))   /* HYS  : HYS_0_Hysteresis_Disabled - Hysteresis Disabled */

#define PAD_CTL_100MHZ_PU    ((1uL <<  0) |  /* SRE  : SRE_1_Fast_Slew_Rate - Fast Slew Rate           */    \
                              (5uL <<  3) |  /* DSE  : DSE_5_R0_5 - R0/5                               */    \
                              (2uL <<  6) |  /* SPEED: SPEED_2_medium_100MHz - medium(100MHz)          */    \
                              (0uL << 11) |  /* ODE  : ODE_0_Open_Drain_Disabled - Open Drain Disabled */    \
                              (1uL << 12) |  /* PKE  : PKE_1_Pull_Keeper_Enabled - Pull/Keeper Enabled */    \
                              (1uL << 13) |  /* PUE  : PUE_1_Pull - Pull                               */    \
                              (2uL << 14) |  /* PUS  : PUS_2_100K_Ohm_Pull_Up - 100K Ohm Pull Up       */    \
                              (0uL << 16))   /* HYS  : HYS_0_Hysteresis_Disabled - Hysteresis Disabled */

#define PAD_CTL_50MHZ_PU_OD  ((1uL <<  0) |  /* SRE  : SRE_1_Fast_Slew_Rate - Fast Slew Rate           */    \
                              (5uL <<  3) |  /* DSE  : DSE_5_R0_5 - R0/5                               */    \
                              (0uL <<  6) |  /* SPEED: SPEED_0_low_50MHz - low(50MHz)                  */    \
                              (1uL << 11) |  /* ODE  : ODE_1_Open_Drain_Enabled - Open Drain Enabled   */    \
                              (1uL << 12) |  /* PKE  : PKE_1_Pull_Keeper_Enabled - Pull/Keeper Enabled */    \
                              (1uL << 13) |  /* PUE  : PUE_1_Pull - Pull                               */    \
                              (2uL << 14) |  /* PUS  : PUS_2_100K_Ohm_Pull_Up - 100K Ohm Pull Up       */    \
                              (0uL << 16))   /* HYS  : HYS_0_Hysteresis_Disabled - Hysteresis Disabled */

#define PAD_CTL_50MHZ_PD     ((1uL <<  0) |  /* SRE  : SRE_1_Fast_Slew_Rate - Fast Slew Rate             */  \
                              (6uL <<  3) |  /* DSE  : DSE_6_R0_6 — R0/6                                 */  \
                              (0uL <<  6) |  /* SPEED: SPEED_0_low_50MHz - low(50MHz)                    */  \
                              (0uL << 11) |  /* ODE  : ODE_0_Open_Drain_Disabled - Open Drain Disabled   */  \
                              (0uL << 12) |  /* PKE  : PKE_0_Pull_Keeper_Disabled - Pull/Keeper Disabled */  \
                              (0uL << 13) |  /* PUE  : PUE_0_Keeper - Keeper                             */  \
                              (0uL << 14) |  /* PUS  : PUS_0_100K_Ohm_Pull_Down - 100K Ohm Pull Down     */  \
                              (0uL << 16))   /* HYS  : HYS_0_Hysteresis_Disabled - Hysteresis Disabled   */

/*********************************************************************
*
*       Types, local
*
**********************************************************************
*/

typedef void ETH_ISR_HANDLER(void);

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

static ETH_ISR_HANDLER* _pfEthISRHandler;

/*********************************************************************
*
*       Prototypes
*
*  Declare ISR handler here to avoid "no prototype" warning.
*  They are not declared in any CMSIS header.
*
**********************************************************************
*/

#ifdef __cplusplus
extern "C" {
#endif

void ENET_IRQHandler(void);

#ifdef __cplusplus
}
#endif

/*********************************************************************
*
*       Local functions
*
**********************************************************************
*/

/*********************************************************************
*
*       _Init()
*
*  Function description
*    This routine is called from the Ethernet driver to initialize
*    port pins and enable clocks required for Ethernet.
*
*  Parameters
*    IFaceId: Zero-based interface index.
*
*  Additional information
*    Bootstrap (GPIO)    Enet function       Mux port              Input select    Force input path
*                          ENET_RST            GPIO_AD_B0_09_ALT5
*      ENET_NAND_TREE#                         GPIO_AD_B0_10_ALT5
*
*                          ENET_MDC            GPIO_EMC_40_ALT4
*                          ENET_MDIO           GPIO_EMC_41_ALT4      yes
*      ENET_DUPLEX         ENET_RX_DATA00      GPIO_B1_04_ALT3       yes
*      ENET_PHYAD2         ENET_RX_DATA01      GPIO_B1_05_ALT3       yes
*      ENET_CONFIG2        ENET_RXEN           GPIO_B1_06_ALT3       yes
*                          ENET_TX_DATA00      GPIO_B1_07_ALT3
*                          ENET_TX_DATA01      GPIO_B1_08_ALT3
*                          ENET_TX_EN          GPIO_B1_09_ALT3
*                          ENET_TX_CLK         GPIO_B1_10_ALT6       yes             yes
*      ENET_ISO            ENET_RX_ER          GPIO_B1_11_ALT3       yes
*/
static void _Init(unsigned IFaceId) {
  SEGGER_USE_PARA(IFaceId);

  //
  // Enable iomuxc clock.
  //
  CCM->CCGR4 |= (0x3uL << 2);
  //
  // Enable gpio1 clock.
  //
  CCM->CCGR1 |= (0x3uL << 26);
  //
  // Enable gpio2 clock.
  //
  CCM->CCGR0 |= (0x3uL << 30);
  //
  // Configure ENET_RST pin as GPIO.
  // Assert PHY reset.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_09] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_09] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5);
  GPIO1->DR   &= ~(1uL << 9);  // Assert (active low).
  GPIO1->GDIR |=  (1uL << 9);  // Set to output.
  //
  // Configure ENET_NAND_TREE# pin as GPIO.
  // Disable NAND_Tree test.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_10] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_10] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_10]  =  PAD_CTL_100MHZ_PU;
  //
  // Configure ENET_DUPLEX (aka ENET_RX_DATA00) pin as GPIO.
  // Set to low for Full-Duplex.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_04] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_04] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5);
  GPIO2->DR   &= ~(1uL << 20);  // Low: Full-Duplex.
  GPIO2->GDIR |=  (1uL << 20);  // Set to output.
  //
  // Configure ENET_PHYAD2 (aka ENET_RX_DATA01) pin as GPIO.
  // Set to low for PHY addr. 010 = 0x2.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_05] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_05] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5);
  GPIO2->DR   &= ~(1uL << 21);  // Low: Bit 2 of PHY addr.
  GPIO2->GDIR |=  (1uL << 21);  // Set to output.
  //
  // Configure ENET_CONFIG2 (aka ENET_RXEN) pin as GPIO.
  // Set to low for RMII mode.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_06] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_06] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5);
  GPIO2->DR   &= ~(1uL << 22);  // Low: Bit 2 of (R)MII mode.
  GPIO2->GDIR |=  (1uL << 22);  // Set to output.
  //
  // Configure ENET_RX_ER pin as ISOlate GPIO.
  // Remove ISOlate bootostrap.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_11] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_11] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5);
  GPIO2->DR   &= ~(1uL << 27);  // Low: Disable ISOlate.
  GPIO2->GDIR |=  (1uL << 27);  // Set to output.
  //
  // Release PHY reset.
  //
  OS_Delay(1);              // Make sure the pins are set.
  GPIO1->DR |= (1uL << 9);  // Release (active low).
  OS_Delay(15);             // Wait for the bootstrap pins to get latched in.
  //
  // Configure ENET_MDC pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_40] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_40] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(4);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_40]  =  PAD_CTL_200MHZ_PU;
  //
  // Configure ENET_MDIO pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_41] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_41] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(4);
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET_MDIO_SELECT_INPUT]       &= ~IOMUXC_SELECT_INPUT_DAISY_MASK;
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET_MDIO_SELECT_INPUT]       |=  IOMUXC_SELECT_INPUT_DAISY(1);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_41]  =  PAD_CTL_50MHZ_PU_OD;
  //
  // Configure ENET_RX_DATA00 pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_04] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_04] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(3);
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET0_RXDATA_SELECT_INPUT]   &= ~IOMUXC_SELECT_INPUT_DAISY_MASK;
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET0_RXDATA_SELECT_INPUT]   |=  IOMUXC_SELECT_INPUT_DAISY(1);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_04]  =  PAD_CTL_200MHZ_PU;
  //
  // Configure ENET_RX_DATA01 pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_05] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_05] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(3);
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET1_RXDATA_SELECT_INPUT]   &= ~IOMUXC_SELECT_INPUT_DAISY_MASK;
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET1_RXDATA_SELECT_INPUT]   |=  IOMUXC_SELECT_INPUT_DAISY(1);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_05]  =  PAD_CTL_200MHZ_PU;
  //
  // Configure ENET_RXEN pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_06] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_06] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(3);
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET_RXEN_SELECT_INPUT]      &= ~IOMUXC_SELECT_INPUT_DAISY_MASK;
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET_RXEN_SELECT_INPUT]      |=  IOMUXC_SELECT_INPUT_DAISY(1);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_06]  =  PAD_CTL_200MHZ_PU;
  //
  // Configure ENET_TX_DATA00 pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_07] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_07] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(3);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_07]  =  PAD_CTL_200MHZ_PU;
  //
  // Configure ENET_TX_DATA01 pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_08] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_08] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(3);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_08]  =  PAD_CTL_200MHZ_PU;
  //
  // Configure ENET_TX_EN pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_09] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_09] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(3);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_09]  =  PAD_CTL_200MHZ_PU;
  //
  // Configure ENET_TX_CLK pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_10]    &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_10]    |=  (IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(6) | IOMUXC_SW_MUX_CTL_PAD_SION(1));
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET_IPG_CLK_RMII_SELECT_INPUT] &= ~IOMUXC_SELECT_INPUT_DAISY_MASK;
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET_IPG_CLK_RMII_SELECT_INPUT] |=  IOMUXC_SELECT_INPUT_DAISY(1);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_10]     =  PAD_CTL_50MHZ_PD;
  //
  // Configure ENET_RX_ER pin.
  //
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_11] &= ~IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK;
  IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_B1_11] |=  IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(3);
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET_RXERR_SELECT_INPUT]     &= ~IOMUXC_SELECT_INPUT_DAISY_MASK;
  IOMUXC->SELECT_INPUT[kIOMUXC_ENET_RXERR_SELECT_INPUT]     |=  IOMUXC_SELECT_INPUT_DAISY(1);
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_11]  =  PAD_CTL_200MHZ_PU;
  IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_B1_11]  =  PAD_CTL_200MHZ_PU;
  //
  // Configure enet PLL to 50MHz.
  //
  CCM_ANALOG->PLL_ENET |= (1uL << 12);  // Power down the PLL.
  do {
    //
    // Wait for the PLL to unlock.
    //
  } while ((CCM_ANALOG->PLL_ENET & (1uL << 31)) != 0);
  CCM_ANALOG->PLL_ENET  = ((1uL <<  0) |  // DIV_SELECT     : 50MHz for enet0.
                           (1uL <<  2) |  // DIV_SELECT     : 50MHz for enet1 (not documented but set by the SDK).
                           (0uL << 12) |  // POWERDOWN      : Keep the power down active.
                           (1uL << 13) |  // ENABLE         : Enable the ethernet clock output.
                           (0uL << 14) |  // BYPASS_CLK_SRC : REF_CLK_24M - Select the 24MHz oscillator as source.
                           (0uL << 16) |  // BYPASS         : Do NOT bypass the PLL.
                           (0uL << 21));  // ENET_25M_REF_EN: Do NOT enable the PLL providing ENET 25 MHz reference clock.
  CCM_ANALOG->PLL_ENET &= ~(1uL << 12);   // Remove power down.
  do {
    //
    // Wait for the PLL to lock.
    //
  } while ((CCM_ANALOG->PLL_ENET & (1uL << 31)) == 0);
  //
  // Enable the clock output pin.
  //
  IOMUXC_GPR->GPR1 |= IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR(1);
}

/*********************************************************************
*
*       _InstallISR()
*
*  Function description
*    Installs the IP stack interrupt handler for Ethernet.
*
*  Parameters
*    IFaceId: Zero-based interface index.
*    pPara  : Parameters for the interrupt handler to install:
*               - pfISR   : Pointer to the interrupt handler of the
*                           IP stack.
*               - ISRIndex: Default interrupt index as far as known by
*                           the driver.
*                           For drivers that fit multiple devices this
*                           might not always be the correct index and
*                           should then be replaced by the correct
*                           index within this function.
*                - Prio   : Suggested priority by the IP stack. This
*                           is only a suggestion and should be
*                           replaced with the desired priority within
*                           this function.
*
*  Additional information
*    Gets called up to 3 times from the driver as other KINETIS
*    Ethernet based devices have 3 different interrupts. Anyhow
*    we install the same handler for all of them, so we do this
*    up to 3 times here as well.
*/
static void _InstallISR(unsigned IFaceId, BSP_IP_INSTALL_ISR_PARA* pPara) {
  SEGGER_USE_PARA(IFaceId);

  _pfEthISRHandler = pPara->pfISR;
  NVIC_SetPriority(ENET_IRQn, (1u << __NVIC_PRIO_BITS) - 2u);
  NVIC_EnableIRQ(ENET_IRQn);
}

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/*********************************************************************
*
*       ENET_IRQHandler()
*
*  Function description
*    Ethernet interrupt handler.
*
*  Additional information
*    Needs to inform the OS that we are now in interrupt context.
*/
void ENET_IRQHandler(void) {
  OS_EnterInterrupt();
  if (_pfEthISRHandler) {
    (_pfEthISRHandler)();
  }
  OS_LeaveInterrupt();
}

/*********************************************************************
*
*       Public API structures
*
**********************************************************************
*/

const BSP_IP_API BSP_IP_Api = {
  _Init,       // pfInit
  NULL,        // pfDeInit
  _InstallISR  // pfInstallISR
};

/*************************** End of file ****************************/
