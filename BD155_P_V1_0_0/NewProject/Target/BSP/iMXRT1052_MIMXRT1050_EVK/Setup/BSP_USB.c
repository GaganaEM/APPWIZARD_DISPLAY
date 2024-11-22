/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co KG                  *
*       Solutions for real time microcontroller applications         *
**********************************************************************
*                                                                    *
*       (c) 1995 - 2012  SEGGER Microcontroller GmbH & Co KG         *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
*       embOS * Real time operating system for microcontrollers      *
*                                                                    *
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
File    : BSP_USB.c
Purpose : BSP_USB for NXP iMXRT1052 on the MIMXRT1050_EVK eval board
--------  END-OF-HEADER  ---------------------------------------------
*/
#include "BSP_USB.h"
#include "SEGGER.h"
#include "RTOS.h"
#include "MIMXRT1052.h"

/*********************************************************************
*
*       Typedefs
*
**********************************************************************
*/
typedef void USB_ISR_HANDLER  (void);

/*********************************************************************
*
*       Prototypes
*
**********************************************************************
*/
#ifdef __cplusplus
extern "C" {
#endif
void USB_OTG1_IRQHandler(void);
void USB_OTG2_IRQHandler(void);
#ifdef __cplusplus
}
#endif
/*********************************************************************
 *
 *       Static data
 *
 **********************************************************************
 */
static USB_ISR_HANDLER * _pfOTG_HS0Handler;
static USB_ISR_HANDLER * _pfOTG_HS1Handler;

/*********************************************************************
 *
 *       Global functions
 *
 **********************************************************************
 */
/*********************************************************************
 *
 *       USB_OTG1_IRQHandler
 */
void USB_OTG1_IRQHandler(void) {
  OS_EnterInterrupt();
  if (_pfOTG_HS0Handler) {
    (_pfOTG_HS0Handler)();
  }
  OS_LeaveInterrupt();
}

/*********************************************************************
 *
 *       USB_OTG2_IRQHandler
 */
void USB_OTG2_IRQHandler(void) {
  OS_EnterInterrupt();
  if (_pfOTG_HS1Handler) {
    (_pfOTG_HS1Handler)();
  }
  OS_LeaveInterrupt();
}

/*********************************************************************
 *
 *       BSP_USB_InstallISR_Ex
 */
void BSP_USB_InstallISR_Ex(int ISRIndex, void (*pfISR)(void), int Prio) {
  IRQn_Type IRQSrc = (IRQn_Type)ISRIndex;

  (void)(Prio);  // Prio parameter is not used as the driver does not provide a CMSIS compatible IRQ prio
  if (IRQSrc == USB_OTG1_IRQn) {
    _pfOTG_HS0Handler = pfISR;
  }
  if (IRQSrc == USB_OTG2_IRQn) {
    _pfOTG_HS1Handler = pfISR;
  }
  NVIC_SetPriority(IRQSrc, (1u << __NVIC_PRIO_BITS) - 2u);
  NVIC_EnableIRQ(IRQSrc);
}

/*********************************************************************
 *
 *       BSP_USBH_InstallISR_Ex
 */
void BSP_USBH_InstallISR_Ex(int ISRIndex, void (*pfISR)(void), int Prio) {
  IRQn_Type IRQSrc = (IRQn_Type)ISRIndex;

  (void)(Prio);  // Prio parameter is not used as the driver does not provide a CMSIS compatible IRQ prio
  if (IRQSrc == USB_OTG1_IRQn) {
    _pfOTG_HS0Handler = pfISR;
  }
  if (IRQSrc == USB_OTG2_IRQn) {
    _pfOTG_HS1Handler = pfISR;
  }
  NVIC_SetPriority(IRQSrc, (1u << __NVIC_PRIO_BITS) - 2u);
  NVIC_EnableIRQ(IRQSrc);
}

/****** End Of File *************************************************/
