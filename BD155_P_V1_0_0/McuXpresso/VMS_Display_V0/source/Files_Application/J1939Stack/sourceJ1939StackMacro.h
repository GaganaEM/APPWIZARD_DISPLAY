#ifndef FILES_APPLICATION_SOURCEJ1939STACKMACRO_H_
#define FILES_APPLICATION_SOURCEJ1939STACKMACRO_H_

/* Select 60M clock divided by USB1 PLL (480 MHz) as master flexcan clock source */
#define FLEXCAN_CLOCK_SOURCE_SELECT (0U)
/* Clock divider for master flexcan clock source */
#define FLEXCAN_CLOCK_SOURCE_DIVIDER (2U)
/* Get frequency of flexcan clock */
#define EXAMPLE_CAN_CLK_FREQ ((CLOCK_GetFreq(kCLOCK_Usb1PllClk) / 8) / (FLEXCAN_CLOCK_SOURCE_DIVIDER + 1U))
/* Fix MISRA_C-2012 Rule 17.7. */
#define LOG_INFO (void)PRINTF

/* Select 60M clock divided by USB1 PLL (480 MHz) as master flexcan clock source */
#define FLEXCAN_CLOCK_SOURCE_SELECT (0U)
/* Clock divider for master flexcan clock source */
#define FLEXCAN_CLOCK_SOURCE_DIVIDER (2U)
/* Get frequency of flexcan clock */
#define EXAMPLE_CAN_CLK_FREQ ((CLOCK_GetFreq(kCLOCK_Usb1PllClk) / 8) / (FLEXCAN_CLOCK_SOURCE_DIVIDER + 1U))
/* Fix MISRA_C-2012 Rule 17.7. */

#define CANA													1
#define CANB                                                    2

#define BROADCAST_MSG                                           1
#define SPECIFIC_MSG                                            2



/* Considering that the first valid MB must be used as Reserved TX MB for ERR005829,
 * if RX FIFO enables (RFEN bit in MCE set as 1) and RFFN in CTRL2 is set default as zero,
 * the first valid TX MB Number shall be 8;
 * if RX FIFO enables (RFEN bit in MCE set as 1) and RFFN in CTRL2 is set by other values (0x1~0xF),
 * the user should consider to detail the first valid MB number;
 * if RX FIFO disables (RFEN bit in MCE set as 0) , the first valid MB number would be zero.
 */
#define RX_MESSAGE_BUFFER_NUM (10)
#define TX_MESSAGE_BUFFER_NUM (9)

#define DLC (8)

/* To get most precise baud rate under some circumstances, users need to set
   quantum which is composed of PSEG1/PSEG2/PROPSEG. Because CAN clock prescaler
   = source clock/(baud rate * quantum), for e.g. 84M clock and 1M baud rate, the
   quantum should be .e.g 14=(6+3+1)+4, so prescaler is 6. By default, quantum
   is set to 10=(3+2+1)+4, because for most platforms e.g. 120M source clock/(1M
   baud rate * 10) is an integer. Remember users must ensure the calculated
   prescaler an integer thus to get precise baud rate. */
#define SET_CAN_QUANTUM 0
#define PSEG1           3
#define PSEG2           2
#define PROPSEG         1

#define TRANSMIT                                                0x11
#define RECIEVE                                                 0x12
#define TRANSMIT_MUX                                            0x13

#define RESPONDPGN                                              0xF004

#define TRUE                                                    1
#define FALSE                                                   0

#endif
