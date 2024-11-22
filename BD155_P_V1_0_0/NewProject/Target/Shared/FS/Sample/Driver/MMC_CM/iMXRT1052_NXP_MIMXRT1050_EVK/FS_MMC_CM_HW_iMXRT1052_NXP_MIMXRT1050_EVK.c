/*********************************************************************
*                   (c) SEGGER Microcontroller GmbH                  *
*                        The Embedded Experts                        *
*                           www.segger.com                           *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File        : FS_MMC_CM_HW_iMXRT1052_NXP_MIMXRT1050_EVK.c
Purpose     : SD/MMC (card mode) hardware layer for NXP iMXRT1050.
Literature  :
  [1] i.MX RT1050 Processor Reference Manual
    (\\FILESERVER\Techinfo\Company\NXP\MCU\iMX(ARM)\iMXRT105x\IMXRT1050RM_Rev1.pdf)
  [2] i.MX RT1050 Applications Processors
    (\\FILESERVER\Techinfo\Company\NXP\MCU\iMX(ARM)\iMXRT105x\IMXRT1050XEC_Rev_B.pdf)
  [3] Schematics IMXRT1050-EVK
    (\\FILESERVER\Techinfo\Company\NXP\MCU\iMX(ARM)\iMXRT105x\Evalboard\MIMXRT1050-EVK\SPF-29538_A_170504.pdf)

Additional information:

Pin assignment of SD card

  Pin name      GPIO            Alt. function
  -------------------------------------------
  SD1_CMD       GPIO_SD_B0_00   ALT0
  SD1_CLK       GPIO_SD_B0_01   ALT0
  SD1_D0        GPIO_SD_B0_02   ALT0
  SD1_D1        GPIO_SD_B0_03   ALT0
  SD1_D2        GPIO_SD_B0_04   ALT0
  SD1_D3        GPIO_SD_B0_05   ALT0
  SD_CD_SW      GPIO_B1_12      ALT6 (0x02, IOMUXC_USDHC1_CD_B_SELECT_INPUT)

Pin assignment of eMMC

  Pin name      GPIO            Alt. function
  -------------------------------------------
  SD2_CMD       GPIO_SD_B1_05   ALT0
  SD2_CLK       GPIO_SD_B1_04   ALT0
  SD2_D0        GPIO_SD_B1_03   ALT0
  SD2_D1        GPIO_SD_B1_02   ALT0
  SD2_D2        GPIO_SD_B1_01   ALT0
  SD2_D3        GPIO_SD_B1_00   ALT0
  SD2_D4        GPIO_SD_B1_08   ALT0
  SD2_D5        GPIO_SD_B1_09   ALT0
  SD2_D6        GPIO_SD_B1_10   ALT0
  SD2_D7        GPIO_SD_B1_11   ALT0
  SD2_RST       GPIO_SD_B1_06   ALT0
*/

/*********************************************************************
*
*       #include section
*
**********************************************************************
*/
#include "BSP_FS.h"
#include "FS.h"
#include "FS_Int.h"
#include "MMC_SD_CardMode_X_HW.h"

/*********************************************************************
*
*       Defines, configurable
*
**********************************************************************
*/
#define USE_DMA                   1                   // Turns the DMA support on and off
#define PERIPH_CLOCK              (396000000uL / 2)   // Peripheral clock speed in Hz
#define DEFAULT_SPEED             400                 // Default communication speed (kHz)
#define MAX_SPEED                 50000               // Limits the maximum communication speed to this value (kHz)
#define DEFAULT_TIMEOUT           0x7FuL              // Card cycles (see the description of Data Timeout Register)
#define NUM_DMA_DESC              64                  // Number of DMA descriptors to allocate

/*********************************************************************
*
*       Defines, fixed
*
**********************************************************************
*/

/*********************************************************************
*
*       Ultra SDHC
*/
#define USDHC1_BASE_ADDR                        0x402C0000uL
#define USDHC2_BASE_ADDR                        0x402C4000uL

/*********************************************************************
*
*       IOMUX controller
*/
#define IOMUXC_BASE_ADDR                        0x401F8000uL
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_B1_12        (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1AC))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_00     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1BC))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_01     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1C0))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_02     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1C4))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_03     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1C8))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_04     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1CC))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_05     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1D0))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_00     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1D4))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1D8))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_02     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1DC))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1E0))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_04     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1E4))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_05     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1E8))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_06     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1EC))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_08     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1F4))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_09     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1F8))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_10     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x1FC))
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_11     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x200))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_B1_12        (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x39C))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_00     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3AC))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_01     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3B0))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_02     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3B4))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_03     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3B8))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_04     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3BC))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_05     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3C0))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_00     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3C4))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_01     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3C8))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_02     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3CC))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_03     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3D0))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_04     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3D4))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_05     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3D8))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_06     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3DC))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_08     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3E4))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_09     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3E8))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_10     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3EC))
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_11     (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x3F0))
#define IOMUXC_USDHC1_CD_B_SELECT_INPUT         (*(volatile U32 *)(IOMUXC_BASE_ADDR + 0x5D4))

/*********************************************************************
*
*       Clock controller module
*/
#define CCM_BASE_ADDR                           0x400FC000uL
#define CCM_CSCMR1                              (*(volatile U32 *)(CCM_BASE_ADDR + 0x1C))       // CCM Serial Clock Multiplexer Register 1
#define CCM_CCGR4                               (*(volatile U32 *)(CCM_BASE_ADDR + 0x78))       // CCM Clock Gating Register 4
#define CCM_CCGR6                               (*(volatile U32 *)(CCM_BASE_ADDR + 0x80))       // CCM Clock Gating Register 6

/*********************************************************************
*
*       IOMUX defines
*/
#define IOMUX_MUX_MODE_BIT                      0
#define IOMUX_MUX_MODE_MASK                     0xFuL
#define IOMUXC_SRE_BIT                          0
#define IOMUXC_DSE_BIT                          3
#define IOMUXC_SPEED_BIT                        6
#define IOMUXC_SPEED_50MHZ                      1uL
#define IOMUXC_PKE_BIT                          12
#define IOMUXC_PUE_BIT                          13
#define IOMUXC_PUS_BIT                          14
#define IOMUXC_PUS_47K                          1uL

/*********************************************************************
*
*       Clock controller defines
*/
#define CCGR_CG_MASK                            0x03uL
#define CCGR_CG_RUN_ALWAYS                      0x03uL
#define CCGR_USDHC1_CLK_ENABLE_BIT              2
#define CCGR_USDHC2_CLK_ENABLE_BIT              4
#define CCGR_IOMUXC_ENABLE_BIT                  2
#define CSCMR1_USDHC1_CLK_SEL_BIT               16
#define CSCMR1_USDHC2_CLK_SEL_BIT               17

/*********************************************************************
*
*       SDHC system control bits
*/
#define SYS_CTRL_IPGEN_BIT                      0
#define SYS_CTRL_HCKEN_BIT                      1
#define SYS_CTRL_PEREN_BIT                      2
#define SYS_CTRL_SDCLKEN_BIT                    3
#define SYS_CTRL_DVS_BIT                        4
#define SYS_CTRL_DVS_MASK                       0xFuL
#define SYS_CTRL_DVS_MAX                        (SYS_CTRL_DVS_MASK + 1)
#define SYS_CTRL_SDCLKFS_BIT                    8
#define SYS_CTRL_SDCLKFS_MASK                   0xFFuL
#define SYS_CTRL_DTOCV_BIT                      16
#define SYS_CTRL_DTOCV_MASK                     0xFuL
#define SYS_CTRL_DTOCV_MAX                      (SYS_CTRL_DTOCV_MASK - 1)
#define SYS_CTRL_RSTA_BIT                       24
#define SYS_CTRL_RSTC_BIT                       25
#define SYS_CTRL_RSTD_BIT                       26
#define SYS_CTRL_INITA_BIT                      27

/*********************************************************************
*
*       SDHC protocol control bits
*/
#define PROT_CTRL_DTW_BIT                       1
#define PROT_CTRL_DTW_MASK                      0x3uL
#define PROT_CTRL_DTW_4BIT                      0x1uL
#define PROT_CTRL_DTW_8BIT                      0x2uL
#define PROT_CTRL_EMODE_BIT                     4
#define PROT_CTRL_EMODE_LE                      2uL
#define PROT_CTRL_DMAS_BIT                      8
#define PROT_CTRL_DMAS_MASK                     0x3uL
#define PROT_CTRL_DMAS_DMA2                     2uL

/*********************************************************************
*
*       SDHC transfer type bits
*/
#define CMD_XFR_TYP_RSPTYP_BIT                  16
#define CMD_XFR_TYP_RSPTYP_NONE                 0uL
#define CMD_XFR_TYP_RSPTYP_136BIT               1uL
#define CMD_XFR_TYP_RSPTYP_48BIT                2uL
#define CMD_XFR_TYP_RSPTYP_48BIT_BUSY           3uL
#define CMD_XFR_TYP_CCCEN_BIT                   19
#define CMD_XFR_TYP_CICEN_BIT                   20
#define CMD_XFR_TYP_DPSEL_BIT                   21
#define CMD_XFR_TYP_CMDIDX_BIT                  24
#define CMD_XFR_TYP_CMDIDX_MASK                 0x3FuL

/*********************************************************************
*
*       SDHC mixer control bits
*/
#define MIX_CTRL_DMAEN_BIT                      0     // DMA enable
#define MIX_CTRL_BCEN_BIT                       1
#define MIX_CTRL_DTDSEL_BIT                     4
#define MIX_CTRL_MSBSEL_BIT                     5

/*********************************************************************
*
*       SDHC interrupt request bits
*/
#define INT_STATUS_CC_BIT                       0   // Command complete
#define INT_STATUS_TC_BIT                       1   // Transfer complete
#define INT_STATUS_DINT_BIT                     3   // DMA interrupt
#define INT_STATUS_BWR_BIT                      4   // Buffer write ready
#define INT_STATUS_BRR_BIT                      5   // Buffer read ready
#define INT_STATUS_CTOE_BIT                     16  // Command timeout error
#define INT_STATUS_CCE_BIT                      17  // Command CRC error
#define INT_STATUS_CEBE_BIT                     18  // Command end bit error
#define INT_STATUS_CIE_BIT                      19  // Command index error
#define INT_STATUS_DTOE_BIT                     20  // Data timeout error
#define INT_STATUS_DCE_BIT                      21  // Data CRC error
#define INT_STATUS_DEBE_BIT                     22  // Data end bit error
#define INT_STATUS_DMAE_BIT                     28  // DMA error

/*********************************************************************
*
*       SDHC present status bits
*/
#define PRES_STATE_CIHB_BIT                     0   // Command inhibit (CMD)
#define PRES_STATE_CDIHB_BIT                    1   // Command inhibit (DAT)
#define PRES_STATE_SDSTB_BIT                    3   // Set to 1 if the clock is stable
#define PRES_STATE_SDOFF_BIT                    7
#define PRES_STATE_BWEN_BIT                     10
#define PRES_STATE_CINST_BIT                    16
#define PRES_STATE_DLSL_DAT0_BIT                24

/*********************************************************************
*
*       SDHC misc. bits
*/
#define BLK_ATTR_BLKCNT_BIT                     16
#define VENDOR_SPEC_EXT_DMA_EN_BIT              0
#define VENDOR_SPEC_FRC_SDCLK_ON                8

/*********************************************************************
*
*       SDHC Watermark level
*/
#define WTMK_LVL_RDWML_BIT                      0
#define WTMK_LVL_RDWML_MASK                     0xFFuL
#define WTMK_LVL_WRWML_BIT                      16
#define WTMK_LVL_WRWML_MASK                     0xFFuL

/*********************************************************************
*
*       DMA attributes
*/
#define DMA_ATTR_VALID_BIT                      0
#define DMA_ATTR_END_BIT                        1
#define DMA_ATTR_INT_BIT                        2
#define DMA_ATTR_ACT_BIT                        4
#define DMA_ATTR_ACT_TRAN_BIT                   2uL

/*********************************************************************
*
*       Number of sectors to transfer at once
*/
#define MAX_BLOCK_SIZE                          512
#define MAX_DMA_LEN                             65535

#if USE_DMA
  #define NUM_BLOCKS_AT_ONCE                    (((NUM_DMA_DESC - 2) * MAX_DMA_LEN) / MAX_BLOCK_SIZE)   // In worst case 2 more DMA descriptors are required for head and tail.
#else
  #define NUM_BLOCKS_AT_ONCE                    65535
#endif // USE_DMA

#if USE_DMA
  #define NUM_BLOCKS_AT_ONCE_REPEAT_SAME        (NUM_DMA_DESC / 3)    // In worst case we need 3 DMA descriptors for each sector written.
#else
  #define NUM_BLOCKS_AT_ONCE_REPEAT_SAME        65535
#endif

/*********************************************************************
*
*       Misc. defines
*/
#define CACHE_LINE_SIZE                         32uL  // in bytes
#define NUM_USDHC_UNITS                         2
#define GET_USDHC_REGS(Unit)                    ((USDHC_REGS *)((Unit == 0) ? USDHC1_BASE_ADDR : USDHC2_BASE_ADDR))

/*********************************************************************
*
*       Local data types
*
**********************************************************************
*/

/*********************************************************************
*
*       Type definitions
*
**********************************************************************
*/

/*********************************************************************
*
*       USDHC_REGS
*/
typedef struct USDHC_REGS {
  volatile U32 USDHC_DS_ADDR;                       // DMA System Address
  volatile U32 USDHC_BLK_ATTR;                      // Block Attributes Register
  volatile U32 USDHC_CMD_ARG;                       // Command Argument Register
  volatile U32 USDHC_CMD_XFR_TYP;                   // Transfer Type Register
  volatile U32 USDHC_CMD_RSP0;                      // Command Response 0
  volatile U32 USDHC_CMD_RSP1;                      // Command Response 1
  volatile U32 USDHC_CMD_RSP2;                      // Command Response 2
  volatile U32 USDHC_CMD_RSP3;                      // Command Response 3
  volatile U32 USDHC_DATA_BUFF_ACC_PORT;            // Buffer Data Port Register
  volatile U32 USDHC_PRES_STATE;                    // Present State Register
  volatile U32 USDHC_PROT_CTRL;                     // Protocol Control Register
  volatile U32 USDHC_SYS_CTRL;                      // System Control Register
  volatile U32 USDHC_INT_STATUS;                    // Interrupt Status Register
  volatile U32 USDHC_INT_STATUS_EN;                 // Interrupt Status Enable Register
  volatile U32 USDHC_INT_SIGNAL_EN;                 // Interrupt Signal Enable
  volatile U32 USDHC_AUTOCMD12_ERR_STATUS;          // Auto CMD12 Error Status
  volatile U32 USDHC_HOST_CTRL_CAP;                 // Host Controller Capabilities
  volatile U32 USDHC_WTMK_LVL;                      // Watermark Level Register
  volatile U32 USDHC_MIX_CTRL;                      // Mixer Control Register
  volatile U32 Reserved1;                           // Not used
  volatile U32 USDHC_FORCE_EVENT;                   // Force Event
  volatile U32 USDHC_ADMA_ERR_STATUS;               // ADMA Error Status Register
  volatile U32 USDHC_ADMA_SYS_ADDR;                 // ADMA System Address Register
  volatile U32 Reserved2;                           // Not used
  volatile U32 USDHC_DLL_CTRL;                      // DLL (Delay Line) Control
  volatile U32 USDHC_DLL_STATUS;                    // DLL Status
  volatile U32 USDHC_CLK_TUNE_CTRL_STATUS;          // CLK Tuning Control and Status
  volatile U32 aReserved3[(0xC0 - 0x6C) / 4];       // Not used
  volatile U32 USDHC_VENDOR_SPEC;                   // Vendor Specific Register 1
  volatile U32 USDHC_MMC_BOOT;                      // MMC Boot Register
  volatile U32 USDHC_VENDOR_SPEC2;                  // Vendor Specific Register 2
  volatile U32 USDHC_TUNING_CTRL;                   // Tuning Control Register
} USDHC_REGS;

#if USE_DMA

/*********************************************************************
*
*       DMA_DESC
*
*  Description
*    Memory layout of a ADMA2 descriptor
*/
typedef struct DMA_DESC {
  U16 Attr;       // Descriptor attributes
  U16 NumBytes;   // Number of bytes to transfer
  U32 Addr;       // Destination/source memory address (32-bit aligned)
} DMA_DESC;

#endif

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
static U16          _BlockSize;   // Size of the block to transfer as set by the upper layer
static U16          _NumBlocks;   // Number of blocks to transfer as set by the upper layer
static U8           _RepeatSame;  // Set to 1 if the same data has to be written to consecutive block indexes.
#if USE_DMA
  static DMA_DESC * _paDMADesc;
  static void     * _pData;
  static U32        _NumBytesHead;
  static U32        _NumBytesMiddle;
  static U32        _NumBytesTail;
  static U32      * _pDataHead;
  static U32      * _pDataMiddle;
  static U32      * _pDataTail;
  static U32      * _pBufferHead;
  static U32      * _pBufferTail;
  static U8         _abDMABuffer[(CACHE_LINE_SIZE * 2) + (CACHE_LINE_SIZE - 1)];
  static U8         _abDMADesc[(sizeof(DMA_DESC) * NUM_DMA_DESC) + (CACHE_LINE_SIZE - 1)];
#endif

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

/*********************************************************************
*
*       _WaitForResponse
*
*  Function description
*    Waits for a command response to arrive.
*
*  Return values
*    FS_MMC_CARD_NO_ERROR                 Success
*    FS_MMC_CARD_RESPONSE_CRC_ERROR       CRC error in response
*    FS_MMC_CARD_RESPONSE_TIMEOUT         No response received
*    FS_MMC_CARD_RESPONSE_GENERIC_ERROR   Any other error
*/
static int _WaitForResponse(U8 Unit) {
  U32          Status;
  USDHC_REGS * pUSDHCRegs;

  //
  // Wait for command to finish
  //
  pUSDHCRegs = GET_USDHC_REGS(Unit);
  while (1) {
    Status = pUSDHCRegs->USDHC_INT_STATUS;
    if (Status & (1uL << INT_STATUS_CTOE_BIT)) {
      return FS_MMC_CARD_RESPONSE_TIMEOUT;        // Error, no response received.
    }
    if (Status & (1uL << INT_STATUS_CCE_BIT)) {
      return FS_MMC_CARD_RESPONSE_CRC_ERROR;      // Error, CRC error detected in response.
    }
    if (Status & (1uL << INT_STATUS_CEBE_BIT)) {
      return FS_MMC_CARD_RESPONSE_GENERIC_ERROR;  // Error, end bit of response is 0.
    }
    if (Status & (1uL << INT_STATUS_CIE_BIT)) {
      return FS_MMC_CARD_RESPONSE_GENERIC_ERROR;  // Error, command index do not match.
    }
#if USE_DMA
    if (Status & (1uL << INT_STATUS_DMAE_BIT)) {
      return FS_MMC_CARD_RESPONSE_GENERIC_ERROR;  // Error, DMA failure.
    }
#endif
    if (Status & (1uL << INT_STATUS_CC_BIT)) {
      return FS_MMC_CARD_NO_ERROR;                // OK, valid response received.
    }
  }
}

#if (USE_DMA == 0)

/*********************************************************************
*
*       _WaitForRxReady
*
*  Function description
*    Waits until new data is received. The function returns in case of a receiving error.
*
*  Return values
*    FS_MMC_CARD_NO_ERROR               Success
*    FS_MMC_CARD_READ_CRC_ERROR         CRC error in received data
*    FS_MMC_CARD_READ_TIMEOUT           No data received
*    FS_MMC_CARD_READ_GENERIC_ERROR     Any other error
*/
static int _WaitForRxReady(U8 Unit) {
  U32          Status;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  while (1) {
    Status = pUSDHCRegs->USDHC_INT_STATUS;
    if (Status & (1uL << INT_STATUS_DEBE_BIT)) {
      return FS_MMC_CARD_READ_GENERIC_ERROR;      // Error, 0 detected on the end bit.
    }
    if (Status & (1uL << INT_STATUS_DCE_BIT)) {
      return FS_MMC_CARD_READ_CRC_ERROR;          // Error, CRC check failed.
    }
    if (Status & (1uL << INT_STATUS_DTOE_BIT)) {
      return FS_MMC_CARD_READ_TIMEOUT;            // Error, data timeout.
    }
    if (Status & (1uL << INT_STATUS_BRR_BIT)) {
      return FS_MMC_CARD_NO_ERROR;                // OK, data can be read from queue.
    }
  }
}

/*********************************************************************
*
*       _WaitForTxReady
*
*  Function description
*    Waits until the transmitter is ready to send new data.
*    The function returns in case of an underrun condition.
*    This can happen when we are not able to deliver the data fast enough.
*
*  Return values
*    FS_MMC_CARD_NO_ERROR               Success
*    FS_MMC_CARD_WRITE_GENERIC_ERROR    Any other error
*/
static int _WaitForTxReady(U8 Unit) {
  U32          Status;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  while (1) {
    Status = pUSDHCRegs->USDHC_INT_STATUS;
    if (Status & (1uL << INT_STATUS_DTOE_BIT)) {
      return FS_MMC_CARD_WRITE_GENERIC_ERROR;     // Error, data timeout.
    }
    if (Status & (1uL << INT_STATUS_DCE_BIT)) {
      return FS_MMC_CARD_WRITE_CRC_ERROR;         // Error, CRC check failed.
    }
    if (Status & (1uL << INT_STATUS_BWR_BIT)) {
      return FS_MMC_CARD_NO_ERROR;                // OK, data can be written to queue.
    }
  }
}
#endif // USE_DMA == 0

/*********************************************************************
*
*       _WaitForCmdReady
*
*  Function description
*    Waits until for the last command to finish.
*/
static void _WaitForCmdReady(U8 Unit) {
  U32          Status;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  while (1) {
    Status = pUSDHCRegs->USDHC_PRES_STATE;
    if ((Status & (1uL << PRES_STATE_CIHB_BIT)) == 0) {
      if ((Status & (1uL << PRES_STATE_CDIHB_BIT)) == 0) {
        if (Status & (1uL << PRES_STATE_DLSL_DAT0_BIT)) {
          break;
        }
      }
    }
  }
}

/*********************************************************************
*
*       _Delay1ms
*
*  Function description
*    Busy loops for about 1 millisecond.
*/
static void _Delay1ms(void) {
  volatile int i;

  //
  // This loop takes about 1ms at 396 MHz.
  //
  for (i = 0; i < 0x7FF; ++i) {
    ;
  }
}

/*********************************************************************
*
*       _Reset
*
*  Function description
*    Resets the command and data state machines. Typ. called in case of an error.
*/
static void _Reset(U8 Unit) {
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  //
  // Reset command path.
  //
  pUSDHCRegs->USDHC_SYS_CTRL |=   1uL << SYS_CTRL_RSTC_BIT;
  pUSDHCRegs->USDHC_SYS_CTRL &= ~(1uL << SYS_CTRL_RSTC_BIT);
  //
  // Reset data path.
  //
  pUSDHCRegs->USDHC_SYS_CTRL |=   1uL << SYS_CTRL_RSTD_BIT;
  pUSDHCRegs->USDHC_SYS_CTRL &= ~(1uL << SYS_CTRL_RSTD_BIT);
}

/*********************************************************************
*
*       _SetWMLRead
*
*  Function description
*    Sets the watermark level for read operations.
*/
static void _SetWMLRead(U8 Unit, U32 NumBytes) {
  U32          NumWords;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  NumWords  = NumBytes >> 2;
  NumWords /= 3;
  if (NumWords == 0) {
    NumWords = 1;
  }
  if (NumWords > WTMK_LVL_RDWML_MASK) {
    NumWords = WTMK_LVL_RDWML_MASK;
  }
  pUSDHCRegs->USDHC_WTMK_LVL &= ~(WTMK_LVL_RDWML_MASK << WTMK_LVL_RDWML_BIT);
  pUSDHCRegs->USDHC_WTMK_LVL |= NumWords << WTMK_LVL_RDWML_BIT;
}

/*********************************************************************
*
*       _SetWMLlWrite
*
*  Function description
*    Sets the watermark level for write operations.
*/
static void _SetWMLWrite(U8 Unit, U32 NumBytes) {
  U32          NumWords;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  NumWords = NumBytes >> 2;
  NumWords = (NumWords << 1) / 3;
  if (NumWords == 0) {
    NumWords = 1;
  }
  if (NumWords > WTMK_LVL_WRWML_MASK) {
    NumWords = WTMK_LVL_WRWML_MASK;
  }
  pUSDHCRegs->USDHC_WTMK_LVL &= ~(WTMK_LVL_WRWML_MASK << WTMK_LVL_WRWML_BIT);
  pUSDHCRegs->USDHC_WTMK_LVL |= NumWords << WTMK_LVL_WRWML_BIT;
}

#if (USE_DMA == 0)

/*********************************************************************
*
*       _GetWMLRead
*/
static U32 _GetWMLRead(U8 Unit) {
  U32          NumWords;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  NumWords = (pUSDHCRegs->USDHC_WTMK_LVL >> WTMK_LVL_RDWML_BIT) & WTMK_LVL_RDWML_MASK;
  return NumWords;
}

/*********************************************************************
*
*       _GetWMLWrite
*/
static U32 _GetWMLWrite(U8 Unit) {
  U32          NumWords;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  NumWords = (pUSDHCRegs->USDHC_WTMK_LVL >> WTMK_LVL_WRWML_BIT) & WTMK_LVL_WRWML_MASK;
  return NumWords;
}

#endif // USE_DMA == 0

#if USE_DMA

/*********************************************************************
*
*       _StoreDMADesc
*/
static void _StoreDMADesc(DMA_DESC * pDesc, U32 * pAddr, U32 NumBytes, U8 IsLast) {
  pDesc->Addr     = (U32)pAddr;
  pDesc->NumBytes = (U16)NumBytes;
  pDesc->Attr     = 0
                  | (DMA_ATTR_ACT_TRAN_BIT << DMA_ATTR_ACT_BIT)
                  | (1uL                   << DMA_ATTR_VALID_BIT)
                  ;
  if (IsLast) {
    pDesc->Attr   |= 0
                  |  (1uL << DMA_ATTR_INT_BIT)    // Set the DMA interrupt flag at the end of transfer.
                  |  (1uL << DMA_ATTR_END_BIT)
                  ;
  }
}

/*********************************************************************
*
*       _PrepareDMABuffers
*/
static void _PrepareDMABuffers(void) {
  U32   NumBytes;
  U8  * pData;
  U32   NumBytesHead;
  U32   NumBytesMiddle;
  U32   NumBytesTail;
  U8  * pDataHead;
  U8  * pDataMiddle;
  U8  * pDataTail;

  NumBytesHead   = 0;
  NumBytesMiddle = 0;
  NumBytesTail   = 0;
  pDataHead      = NULL;
  pDataMiddle    = NULL;
  pDataTail      = NULL;
  pData          = (U8 *)_pData;
  //
  // Calculate the number of bytes to be transfered via DMA.
  //
  NumBytes = _BlockSize;
  if (_RepeatSame == 0) {
    NumBytes *= _NumBlocks;
  }
  //
  // Determine how to split the data across different DMA transactions.
  //
  NumBytesHead = (U32)pData & (CACHE_LINE_SIZE - 1);
  if (NumBytesHead) {
    NumBytesHead  = CACHE_LINE_SIZE - NumBytesHead;
    NumBytesHead  = MIN(NumBytesHead, NumBytes);
    pDataHead     = pData;
    NumBytes     -= NumBytesHead;
    pData        += NumBytesHead;
  }
  if (NumBytes) {
    NumBytesMiddle  = NumBytes & ~(CACHE_LINE_SIZE - 1);
    pDataMiddle     = pData;
    NumBytes       -= NumBytesMiddle;
    pData          += NumBytesMiddle;
  }
  if (NumBytes) {
    NumBytesTail = NumBytes;
    pDataTail    = pData;
  }
  //
  // Store the calculation results.
  //
  _NumBytesHead   = NumBytesHead;
  _NumBytesMiddle = NumBytesMiddle;
  _NumBytesTail   = NumBytesTail;
  _pDataHead      = (U32 *)(void *)pDataHead;
  _pDataMiddle    = (U32 *)(void *)pDataMiddle;
  _pDataTail      = (U32 *)(void *)pDataTail;
}

/*********************************************************************
*
*       _PrepareDMAWrite
*/
static void _PrepareDMAWrite(void) {
  if (_NumBytesHead) {
    FS_MEMCPY(_pBufferHead, _pDataHead, _NumBytesHead);
    BSP_FS_CleanCacheRange(_pBufferHead, CACHE_LINE_SIZE);
    BSP_FS_InvalidateCacheRange(_pBufferHead, CACHE_LINE_SIZE);
  }
  if (_NumBytesMiddle) {
    BSP_FS_CleanCacheRange(_pDataMiddle, _NumBytesMiddle);
    BSP_FS_InvalidateCacheRange(_pDataMiddle, _NumBytesMiddle);
  }
  if (_NumBytesTail) {
    FS_MEMCPY(_pBufferTail, _pDataTail, _NumBytesTail);
    BSP_FS_CleanCacheRange(_pBufferTail, CACHE_LINE_SIZE);
    BSP_FS_InvalidateCacheRange(_pBufferTail, CACHE_LINE_SIZE);
  }
}

/*********************************************************************
*
*       _ProcessDMARead
*/
static void _ProcessDMARead(void) {
  if (_NumBytesHead) {
    BSP_FS_InvalidateCacheRange(_pBufferHead, CACHE_LINE_SIZE);
    FS_MEMCPY(_pDataHead, _pBufferHead, _NumBytesHead);
  }
  if (_NumBytesMiddle) {
    BSP_FS_InvalidateCacheRange(_pDataMiddle, _NumBytesMiddle);
  }
  if (_NumBytesTail) {
    BSP_FS_InvalidateCacheRange(_pBufferTail, CACHE_LINE_SIZE);
    FS_MEMCPY(_pDataTail, _pBufferTail, _NumBytesTail);
  }
}

/*********************************************************************
*
*       _StartDMATransfer
*
*  Function description
*    Starts a DMA data transfer.
*/
static void _StartDMATransfer(U8 Unit) {
  U32          NumBytes;
  DMA_DESC   * pDesc;
  unsigned     i;
  U8         * pData;
  U8           IsLast;
  U32          NumBytesAtOnce;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  pDesc = _paDMADesc;
  //
  // Configure the DMA descriptors.
  //
  if (_RepeatSame) {
    //
    // Same sector data is written to one or more consecutive locations.
    //
    for (i = 0; i < _NumBlocks; ++i) {
      if (_NumBytesHead) {
        IsLast = 0;
        if ((_NumBytesMiddle == 0) && (_NumBytesTail == 0)) {
          IsLast = 1;
        }
        _StoreDMADesc(pDesc++, _pBufferHead, _NumBytesHead, IsLast);
      }
      if (_NumBytesMiddle) {
        IsLast = 0;
        if (_NumBytesTail == 0) {
          IsLast = 1;
        }
        _StoreDMADesc(pDesc++, _pDataMiddle, _NumBytesMiddle, IsLast);
      }
      if (_NumBytesTail) {
        IsLast = 0;
        if (i == (unsigned)(_NumBlocks - 1)) {
          IsLast = 1;
        }
        _StoreDMADesc(pDesc++, _pBufferTail, _NumBytesTail, IsLast);
      }
    }
  } else {
    //
    // Different data is written to one or more consecutive locations.
    //
    if (_NumBytesHead) {
      IsLast = 0;
      if ((_NumBytesMiddle == 0) && (_NumBytesTail == 0)) {
        IsLast = 1;
      }
      _StoreDMADesc(pDesc++, _pBufferHead, _NumBytesHead, IsLast);
    }
    if (_NumBytesMiddle) {
      NumBytes = _NumBytesMiddle;
      pData    = (U8 *)(void *)_pDataMiddle;
      while (1) {
        NumBytesAtOnce = MIN(NumBytes, MAX_DMA_LEN);
        NumBytes -= NumBytesAtOnce;
        IsLast = 0;
        if ((NumBytes == 0) && (_NumBytesTail == 0)) {
          IsLast = 1;
        }
        _StoreDMADesc(pDesc++, (U32 *)(void *)pData, NumBytesAtOnce, IsLast);
        if (NumBytes == 0) {
          break;
        }
        pData += NumBytesAtOnce;
      }
    }
    if (_NumBytesTail) {
      IsLast = 1;
      _StoreDMADesc(pDesc++, _pBufferTail, _NumBytesTail, IsLast);
    }
  }
  NumBytes = (sizeof(_abDMADesc) / CACHE_LINE_SIZE) * CACHE_LINE_SIZE;
  BSP_FS_CleanCacheRange(_paDMADesc, NumBytes);
  BSP_FS_InvalidateCacheRange(_paDMADesc, NumBytes);
  pUSDHCRegs->USDHC_ADMA_SYS_ADDR  = (U32)_paDMADesc;
  pUSDHCRegs->USDHC_PROT_CTRL     &= ~(PROT_CTRL_DMAS_MASK << PROT_CTRL_DMAS_BIT);
  pUSDHCRegs->USDHC_PROT_CTRL     |=  (PROT_CTRL_DMAS_DMA2 << PROT_CTRL_DMAS_BIT);
}

/*********************************************************************
*
*       _WaitForEndOfDMARead
*/
static int _WaitForEndOfDMARead(U8 Unit) {
  U32          Status;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  while (1) {
    Status = pUSDHCRegs->USDHC_INT_STATUS;
    if (Status & (1uL << INT_STATUS_DTOE_BIT)) {
      return FS_MMC_CARD_READ_GENERIC_ERROR;      // Error, data timeout.
    }
    if (Status & (1uL << INT_STATUS_DCE_BIT)) {
      return FS_MMC_CARD_READ_CRC_ERROR;          // Error, CRC check failed.
    }
    if (Status & (1uL << INT_STATUS_DMAE_BIT)) {
      return FS_MMC_CARD_READ_GENERIC_ERROR;      // Error, DMA transfer failed.
    }
    if (Status & (1uL << INT_STATUS_DINT_BIT)) {
      return FS_MMC_CARD_NO_ERROR;                // OK, DMA transfer complete.
    }
  }
}

/*********************************************************************
*
*       _WaitForEndOfDMAWrite
*/
static int _WaitForEndOfDMAWrite(U8 Unit) {
  U32          Status;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  while (1) {
    Status = pUSDHCRegs->USDHC_INT_STATUS;
    if (Status & (1uL << INT_STATUS_DTOE_BIT)) {
      return FS_MMC_CARD_WRITE_GENERIC_ERROR;     // Error, data timeout.
    }
    if (Status & (1uL << INT_STATUS_DCE_BIT)) {
      return FS_MMC_CARD_WRITE_CRC_ERROR;         // Error, CRC check failed.
    }
    if (Status & (1uL << INT_STATUS_DMAE_BIT)) {
      return FS_MMC_CARD_WRITE_GENERIC_ERROR;     // Error, DMA transfer failed.
    }
    if (Status & (1uL << INT_STATUS_DINT_BIT)) {
      return FS_MMC_CARD_NO_ERROR;                // OK, DMA transfer complete.
    }
  }
}

#endif // USE_DMA

/*********************************************************************
*
*       _SetupUSDHC1
*/
static void _SetupUSDHC1(void) {
  //
  // Select the source clock for uSDHC. Do not forget to update the value of PERIPH_CLOCK.
  //
  CCM_CSCMR1 &= ~(1uL << CSCMR1_USDHC1_CLK_SEL_BIT);
  //
  // Enable the clock of uSDHC.
  //
  if ((CCM_CCGR6 & (CCGR_CG_MASK << CCGR_USDHC1_CLK_ENABLE_BIT)) != (CCGR_CG_RUN_ALWAYS << CCGR_USDHC1_CLK_ENABLE_BIT)) {
    CCM_CCGR6 |= CCGR_CG_RUN_ALWAYS << CCGR_USDHC1_CLK_ENABLE_BIT;
    while ((CCM_CCGR6 & (CCGR_CG_MASK << CCGR_USDHC1_CLK_ENABLE_BIT)) != (CCGR_CG_RUN_ALWAYS << CCGR_USDHC1_CLK_ENABLE_BIT)) {
      ;
    }
  }
  //
  // Configure port pins.
  //
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_00 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_01 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_02 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_03 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_04 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_05 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_B1_12    &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT6
  IOMUXC_SW_MUX_CTL_PAD_GPIO_B1_12    |=   0x06uL              << IOMUX_MUX_MODE_BIT;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_00 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_01 = 0
                                      | (5uL                 << IOMUXC_DSE_BIT)
                                      | (1uL                 << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_02 = 0
                                      | (5uL                 << IOMUXC_DSE_BIT)
                                      | (1uL                 << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_03 = 0
                                      | (5uL                 << IOMUXC_DSE_BIT)
                                      | (1uL                 << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_04 = 0
                                      | (5uL                 << IOMUXC_DSE_BIT)
                                      | (1uL                 << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B0_05 = 0
                                      | (5uL                 << IOMUXC_DSE_BIT)
                                      | (1uL                 << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_B1_12    = 0
                                      | (5uL                 << IOMUXC_DSE_BIT)
                                      | (1uL                 << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
}

/*********************************************************************
*
*       _SetupUSDHC2
*/
static void _SetupUSDHC2(void) {
  //
  // Select the source clock for uSDHC. Do not forget to update the value of PERIPH_CLOCK.
  //
  CCM_CSCMR1 &= ~(1uL << CSCMR1_USDHC2_CLK_SEL_BIT);
  //
  // Enable the clock of uSDHC.
  //
  if ((CCM_CCGR6 & (CCGR_CG_MASK << CCGR_USDHC2_CLK_ENABLE_BIT)) != (CCGR_CG_RUN_ALWAYS << CCGR_USDHC2_CLK_ENABLE_BIT)) {
    CCM_CCGR6 |= CCGR_CG_RUN_ALWAYS << CCGR_USDHC2_CLK_ENABLE_BIT;
    while ((CCM_CCGR6 & (CCGR_CG_MASK << CCGR_USDHC2_CLK_ENABLE_BIT)) != (CCGR_CG_RUN_ALWAYS << CCGR_USDHC2_CLK_ENABLE_BIT)) {
      ;
    }
  }
  //
  // Configure port pins.
  //
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_05 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_04 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_02 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_00 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_08 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_09 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_10 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_11 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_06 &= ~(IOMUX_MUX_MODE_MASK << IOMUX_MUX_MODE_BIT);      // ALT0
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_05 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_04 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_03 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_02 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_01 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_00 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_08 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_09 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_10 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_11 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
  IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_06 = 0
                                      | (5uL                << IOMUXC_DSE_BIT)
                                      | (1uL                << IOMUXC_SRE_BIT)
                                      | (IOMUXC_SPEED_50MHZ << IOMUXC_SPEED_BIT)
                                      | (1uL                << IOMUXC_PUE_BIT)
                                      | (IOMUXC_PUS_47K     << IOMUXC_PUS_BIT)
                                      | (1uL                << IOMUXC_PKE_BIT)
                                      ;
}

/*********************************************************************
*
*       Public code (via callback)
*
**********************************************************************
*/

/*********************************************************************
*
*       _HW_Init
*
*  Function description
*    Initialize the SD / MMC host controller.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*/
static void _HW_Init(U8 Unit) {
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  //
  // Enable the clock of IOMUX.
  //
  if ((CCM_CCGR4 & (CCGR_CG_MASK << CCGR_IOMUXC_ENABLE_BIT)) != (CCGR_CG_RUN_ALWAYS << CCGR_IOMUXC_ENABLE_BIT)) {
    CCM_CCGR4 |= CCGR_CG_RUN_ALWAYS << CCGR_IOMUXC_ENABLE_BIT;
    while ((CCM_CCGR4 & (CCGR_CG_MASK << CCGR_IOMUXC_ENABLE_BIT)) != (CCGR_CG_RUN_ALWAYS << CCGR_IOMUXC_ENABLE_BIT)) {
      ;
    }
  }
  //
  // Configure clocks and port pins.
  //
  if (Unit == 0) {
    _SetupUSDHC1();
  } else {
    _SetupUSDHC2();
  }
#if USE_DMA
  {
    U8  * p;
    U32   NumBytes;

    //
    // Configure the DMA buffers. The buffers are aligned to cache line.
    //
    NumBytes = (U32)_abDMABuffer & (CACHE_LINE_SIZE - 1);
    p = _abDMABuffer + (CACHE_LINE_SIZE - NumBytes);
    _pBufferHead = (U32 *)(void *)p;
    _pBufferTail = (U32 *)(void *)(p + CACHE_LINE_SIZE);
    NumBytes = (U32)_abDMADesc & (CACHE_LINE_SIZE - 1);
    p = _abDMADesc + (CACHE_LINE_SIZE - NumBytes);
    _paDMADesc = (DMA_DESC *)(void *)p;
  }
#endif
  //
  // Configure SDHC.
  //
  pUSDHCRegs->USDHC_SYS_CTRL     = SYS_CTRL_RSTA_BIT;                           // Reset peripheral.
  pUSDHCRegs->USDHC_SYS_CTRL     = 0;                                           // Start peripheral.
  pUSDHCRegs->USDHC_PROT_CTRL    = PROT_CTRL_EMODE_LE << PROT_CTRL_EMODE_BIT;   // CPU works in little endian mode.
  pUSDHCRegs->USDHC_VENDOR_SPEC |= 1uL << VENDOR_SPEC_FRC_SDCLK_ON;             // Some SD cards do not work properly if this feature is disabled.
}

/*********************************************************************
*
*       _HW_Delay
*
*  Function description
*    Blocks the execution for the specified time.
*
*  Parameters
*    ms   Number of milliseconds to delay.
*/
static void _HW_Delay(int ms) {
  int i;

  for (i = 0; i < ms; ++i) {
    _Delay1ms();
  }
}

/*********************************************************************
*
*       _HW_IsPresent
*
*  Function description
*    Returns the state of the media. If you do not know the state, return
*    FS_MEDIA_STATE_UNKNOWN and the higher layer will try to figure out if
*    a media is present.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*
*  Return value
*    FS_MEDIA_STATE_UNKNOWN     The state of the media is unknown
*    FS_MEDIA_NOT_PRESENT       No card is present
*    FS_MEDIA_IS_PRESENT        A card is present
*/
static int _HW_IsPresent(U8 Unit) {
  int          r;
  USDHC_REGS * pUSDHCRegs;
  U32          State;

  r = FS_MEDIA_IS_PRESENT;
  if (Unit == 0) {        // The eMMC device (Unit == 1) is always present.
    pUSDHCRegs = GET_USDHC_REGS(Unit);
    State = pUSDHCRegs->USDHC_PRES_STATE;
    if ((State & (1uL << PRES_STATE_CINST_BIT)) == 0) {
      r = FS_MEDIA_NOT_PRESENT;
    }
  }
  return r;
}

/*********************************************************************
*
*       _HW_IsWriteProtected
*
*  Function description
*    Returns whether card is write protected or not.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*
*  Notes
*    (1) The microSD cards not have an WP detect switch.
*/
static int _HW_IsWriteProtected(U8 Unit) {
  FS_USE_PARA(Unit);
  return 0;           // Note 1
}

/*********************************************************************
*
*       _HW_SetMaxSpeed
*
*  Function description
*    Sets the frequency of the MMC/SD card controller.
*    The frequency is given in kHz.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*
*  Additional information
*    This function is called two times:
*    1. During card initialization
*       Initialize the frequency to not more than 400kHz.
*
*    2. After card initialization
*       The CSD register of card is read and the max frequency
*       the card can operate is determined.
*       [In most cases: MMC cards 20MHz, SD cards 25MHz]
*/
static U16 _HW_SetMaxSpeed(U8 Unit, U16 Freq) {
  U32          Prescaler;
  U32          Divisor;
  U32          Factor;
  U32          SDClock;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  //
  // Limit the communication speed.
  //
  if (Freq > MAX_SPEED) {
    Freq = MAX_SPEED;
  }
  SDClock = Freq * 1000;              // Convert to Hz
  Factor  = (PERIPH_CLOCK + SDClock - 1) / SDClock;
  //
  // Determine the prescaler and the divisor values.
  //
  if (Factor == 0) {
    Factor = 1;
  }
  if (Factor <= SYS_CTRL_DVS_MAX) {
    Prescaler  = 0;
    Divisor    = Factor - 1;
  } else {
    Prescaler = 1;
    while (1) {
      //
      // Compensate for integer division errors. We have to generate a clock frequency <= Freq.
      //
      if (Factor & 1) {
        ++Factor;
      }
      Factor >>= 1;
      if (Factor <= SYS_CTRL_DVS_MAX) {
        Divisor = Factor - 1;
        break;
      }
      Prescaler <<= 1;
    }
  }
  //
  // Stop the clock to be able to change its frequency.
  //
  pUSDHCRegs->USDHC_SYS_CTRL &= ~(1uL << SYS_CTRL_SDCLKEN_BIT);
  //
  // Set the prescaler and the divisor.
  //
  pUSDHCRegs->USDHC_SYS_CTRL &= ~((SYS_CTRL_SDCLKFS_MASK << SYS_CTRL_SDCLKFS_BIT) |
                      (SYS_CTRL_DVS_MASK     << SYS_CTRL_DVS_BIT));
  pUSDHCRegs->USDHC_SYS_CTRL |= 0
                             |  ((Prescaler & SYS_CTRL_SDCLKFS_MASK) << SYS_CTRL_SDCLKFS_BIT)
                             |  ((Divisor & SYS_CTRL_DVS_MASK)       << SYS_CTRL_DVS_BIT)
                             ;
  //
  // Enable the clock to SD card.
  //
  pUSDHCRegs->USDHC_SYS_CTRL |= 0
                             |  (1uL << SYS_CTRL_SDCLKEN_BIT)
                             |  (1uL << SYS_CTRL_PEREN_BIT)
                             |  (1uL << SYS_CTRL_HCKEN_BIT)
                             |  (1uL << SYS_CTRL_IPGEN_BIT)
                             ;
  //
  // Wait for the clock to stabilize.
  //
  while ((pUSDHCRegs->USDHC_PRES_STATE & (1uL << PRES_STATE_SDSTB_BIT)) == 0) {
    ;
  }
  //
  // Return the actual clock frequency.
  //
  Factor = 1;
  if (Prescaler) {
    Factor *= Prescaler << 1;
  }
  Factor *= Divisor + 1;
  Freq = (U16)((PERIPH_CLOCK / 1000) / Factor);
  return Freq;
}

/*********************************************************************
*
*       _HW_SetResponseTimeOut
*
*  Function description
*    Sets the response time out value given in MMC/SD card cycles.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*
*  Notes
*    (1) The SD host controller has only a short and a long timeout.
*        We always set the long timeout before we send a command.
*/
static void _HW_SetResponseTimeOut(U8 Unit, U32 Value) {
  FS_USE_PARA(Unit);
  FS_USE_PARA(Value);
  //
  // Note 1
  //
}

/*********************************************************************
*
*       _HW_SetReadDataTimeOut
*
*  Function description
*    Sets the read data time out value given in MMC/SD card cycles.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*/
static void _HW_SetReadDataTimeOut(U8 Unit, U32 Value) {
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  if (Value > SYS_CTRL_DTOCV_MAX) {
    Value = SYS_CTRL_DTOCV_MAX;
  }
  pUSDHCRegs->USDHC_SYS_CTRL &= ~(SYS_CTRL_DTOCV_MASK << SYS_CTRL_DTOCV_BIT);
  pUSDHCRegs->USDHC_SYS_CTRL |= Value << SYS_CTRL_DTOCV_BIT;
}

/*********************************************************************
*
*       _HW_SendCmd
*
*  Function description
*    Sends a command to the card.
*
*  Parameters
*    Unit           Index of the SD / MMC host controller (0-based).
*    Cmd            Command number according to [4]
*    CmdFlags       Additional information about the command to execute
*    ResponseType   Type of response as defined in [4]
*    Arg            Command parameter
*/
static void _HW_SendCmd(U8 Unit, unsigned Cmd, unsigned CmdFlags, unsigned ResponseType, U32 Arg) {
  U32          CmdXfrTypReg;
  U32          MixCtrlReg;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  _WaitForCmdReady(Unit);
  _Reset(Unit);
  _RepeatSame = 0;
  if (CmdFlags & FS_MMC_CMD_FLAG_WRITE_BURST_REPEAT) {
    _RepeatSame = 1;
  }
  CmdXfrTypReg = (Cmd & CMD_XFR_TYP_CMDIDX_MASK) << CMD_XFR_TYP_CMDIDX_BIT;   // Set the command index.
  switch (ResponseType) {
  //
  // No response is expected
  //
  case FS_MMC_RESPONSE_FORMAT_NONE:
  default:
    CmdXfrTypReg |= CMD_XFR_TYP_RSPTYP_NONE << CMD_XFR_TYP_RSPTYP_BIT;
    break;
  //
  // Short response is expected (48bit)
  //
  case FS_MMC_RESPONSE_FORMAT_R3:
    CmdXfrTypReg |= CMD_XFR_TYP_RSPTYP_48BIT << CMD_XFR_TYP_RSPTYP_BIT;
    break;

  case FS_MMC_RESPONSE_FORMAT_R1:
    if (CmdFlags & FS_MMC_CMD_FLAG_SETBUSY) {
      CmdXfrTypReg |= CMD_XFR_TYP_RSPTYP_48BIT_BUSY << CMD_XFR_TYP_RSPTYP_BIT;
    } else {
      CmdXfrTypReg |= CMD_XFR_TYP_RSPTYP_48BIT      << CMD_XFR_TYP_RSPTYP_BIT;
    }
    CmdXfrTypReg |= 0
                 |  (1uL << CMD_XFR_TYP_CICEN_BIT)      // Check the received command index.
                 |  (1uL << CMD_XFR_TYP_CCCEN_BIT)      // Check the CRC of response.
                 ;
    break;
  //
  // Long response is expected (136bit)
  //
  case FS_MMC_RESPONSE_FORMAT_R2:
    CmdXfrTypReg |= 0
                 |  (CMD_XFR_TYP_RSPTYP_136BIT << CMD_XFR_TYP_RSPTYP_BIT)
                 |  (1uL                       << CMD_XFR_TYP_CCCEN_BIT)      // Check the CRC of response.
                 ;
    break;
  }
  //
  // If required, Setup the transfer over data lines.
  //
  if (CmdFlags & FS_MMC_CMD_FLAG_DATATRANSFER) {
    CmdXfrTypReg |= 0
                 |  (1uL << CMD_XFR_TYP_DPSEL_BIT)
                 ;
    MixCtrlReg = pUSDHCRegs->USDHC_MIX_CTRL;
    MixCtrlReg &= ~((1uL << MIX_CTRL_MSBSEL_BIT) |
                    (1uL << MIX_CTRL_BCEN_BIT)   |
                    (1uL << MIX_CTRL_DTDSEL_BIT) |
                    (1uL << MIX_CTRL_DMAEN_BIT));
    if (_NumBlocks > 1) {
      MixCtrlReg |= 0
                 |  (1uL << MIX_CTRL_MSBSEL_BIT)
                 |  (1uL << MIX_CTRL_BCEN_BIT)
                 ;
    }
    if (CmdFlags & FS_MMC_CMD_FLAG_WRITETRANSFER) {
      _SetWMLWrite(Unit, _BlockSize);
    } else {
      _SetWMLRead(Unit, _BlockSize);
      MixCtrlReg |= (1uL << MIX_CTRL_DTDSEL_BIT);  // Read data from SD card.
    }
    //
    // Configure the size and the number of blocks to transfer
    //
    pUSDHCRegs->USDHC_BLK_ATTR = ((U32)_NumBlocks << BLK_ATTR_BLKCNT_BIT) | _BlockSize;
    //
    // Configure the number of data lines to use for the transfer.
    //
    pUSDHCRegs->USDHC_PROT_CTRL &= ~(PROT_CTRL_DTW_MASK << PROT_CTRL_DTW_BIT);
    if (CmdFlags & FS_MMC_CMD_FLAG_USE_SD4MODE) {
      pUSDHCRegs->USDHC_PROT_CTRL |= (PROT_CTRL_DTW_4BIT << PROT_CTRL_DTW_BIT);
    } else {
      if (CmdFlags & FS_MMC_CMD_FLAG_USE_MMC8MODE) {
        pUSDHCRegs->USDHC_PROT_CTRL |= (PROT_CTRL_DTW_8BIT << PROT_CTRL_DTW_BIT);
      }
    }
#if USE_DMA
    MixCtrlReg |= (1uL << MIX_CTRL_DMAEN_BIT);
    _PrepareDMABuffers();
    if (CmdFlags & FS_MMC_CMD_FLAG_WRITETRANSFER) {
      _PrepareDMAWrite();
    }
    _StartDMATransfer(Unit);
#endif // USE_DMA
    pUSDHCRegs->USDHC_MIX_CTRL = MixCtrlReg;
  }
#if USE_DMA
  //
  // Enable the status flags we handle in DMA mode.
  //
  pUSDHCRegs->USDHC_INT_STATUS_EN = 0
                                  | (1uL << INT_STATUS_CC_BIT)
                                  | (1uL << INT_STATUS_TC_BIT)
                                  | (1uL << INT_STATUS_CTOE_BIT)
                                  | (1uL << INT_STATUS_CCE_BIT)
                                  | (1uL << INT_STATUS_CEBE_BIT)
                                  | (1uL << INT_STATUS_CIE_BIT)
                                  | (1uL << INT_STATUS_DTOE_BIT)
                                  | (1uL << INT_STATUS_DCE_BIT)
                                  | (1uL << INT_STATUS_DEBE_BIT)
                                  | (1uL << INT_STATUS_DINT_BIT)
                                  | (1uL << INT_STATUS_DMAE_BIT)
                                  ;
#else
  //
  // Enable the status flags we handle in polling mode.
  //
  pUSDHCRegs->USDHC_INT_STATUS_EN = 0
                                  | (1uL << INT_STATUS_CC_BIT)
                                  | (1uL << INT_STATUS_TC_BIT)
                                  | (1uL << INT_STATUS_BWR_BIT)
                                  | (1uL << INT_STATUS_BRR_BIT)
                                  | (1uL << INT_STATUS_CTOE_BIT)
                                  | (1uL << INT_STATUS_CCE_BIT)
                                  | (1uL << INT_STATUS_CEBE_BIT)
                                  | (1uL << INT_STATUS_CIE_BIT)
                                  | (1uL << INT_STATUS_DTOE_BIT)
                                  | (1uL << INT_STATUS_DCE_BIT)
                                  | (1uL << INT_STATUS_DEBE_BIT)
                                  ;
#endif
  //
  // This is the initialization delay defined by the SD card specification as:
  // maximum of 1 msec, 74 clock cycles and supply ramp up time.
  // The sequence below sends 80 clock cycles which is enough for
  // the power supply of SD card to raise to Vdd min.
  //
  if (CmdFlags & FS_MMC_CMD_FLAG_INITIALIZE) {
    pUSDHCRegs->USDHC_SYS_CTRL |= 1uL << SYS_CTRL_INITA_BIT;
    while (pUSDHCRegs->USDHC_SYS_CTRL & (1uL << SYS_CTRL_INITA_BIT)) {
      ;
    }
  }
  pUSDHCRegs->USDHC_INT_STATUS  = ~0uL;                     // Reset all status flags.
  pUSDHCRegs->USDHC_CMD_ARG     = Arg;
  pUSDHCRegs->USDHC_CMD_XFR_TYP = CmdXfrTypReg;             // Send the command.
}

/*********************************************************************
*
*       _HW_GetResponse
*
*  Function description
*    Receives the responses that was sent by the card after
*    a command was sent to the card.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*    pBuffer  User allocated buffer where the response is stored.
*    Size     Size of the buffer in bytes
*
*  Return values
*     FS_MMC_CARD_NO_ERROR                Success
*     FS_MMC_CARD_RESPONSE_CRC_ERROR      CRC error in response
*     FS_MMC_CARD_RESPONSE_TIMEOUT        No response received
*     FS_MMC_CARD_RESPONSE_GENERIC_ERROR  Any other error
*
*  Notes
*     (1) The response data has to  be stored at byte offset 1 since
*         the controller does not provide the first byte of response.
*/
static int _HW_GetResponse(U8 Unit, void * pBuffer, U32 Size) {
  U8           * pData;
  volatile U32 * pReg;
  U32            NumWords;
  U32            Value;
  U32            i;
  int            r;
  USDHC_REGS   * pUSDHCRegs;

  pUSDHCRegs = GET_USDHC_REGS(Unit);
  r = _WaitForResponse(Unit);
  if (r != FS_MMC_CARD_NO_ERROR) {
    _Reset(Unit);
    return r;                     // Error
  }
  //
  // The size we get from the upper driver is total response size in bytes.
  // We compute here the number of read accesses to the 32-bit register which
  // holds the response. Take into account that the first byte of the response
  // is not delivered by the hardware
  //
  NumWords = (Size - 1) / 4;
  pData    = (U8 *)pBuffer;
  pReg     = &pUSDHCRegs->USDHC_CMD_RSP0 + (NumWords - 1);
  //
  // In case of a 136 bit response SDHC does not deliver the checksum byte.
  // By not incrementing the data pointer the bytes are saved at expected positions.
  //
  if (NumWords != 4) {
    ++pData;                      // See note (1)
  }
  for (i = 0; i < NumWords; ++i) {
    Value = *pReg;
    *pData++ = (U8)(Value >> 24);
    *pData++ = (U8)(Value >> 16);
    *pData++ = (U8)(Value >> 8);
    *pData++ = (U8)Value;
    --pReg;
  }
  return FS_MMC_CARD_NO_ERROR;  // OK, valid command received.
}

/*********************************************************************
*
*       _HW_ReadData
*
*  Function description
*    Reads data from the card using the SD / MMC host controller.
*
*  Return values
*    FS_MMC_CARD_NO_ERROR             Success
*    FS_MMC_CARD_READ_CRC_ERROR       CRC error in received data
*    FS_MMC_CARD_READ_TIMEOUT         No data received
*    FS_MMC_CARD_READ_GENERIC_ERROR   Any other error
*/
static int _HW_ReadData(U8 Unit, void * pBuffer, unsigned NumBytes, unsigned NumBlocks) {
#if USE_DMA
  int r;

  FS_USE_PARA(Unit);
  FS_USE_PARA(pBuffer);
  FS_USE_PARA(NumBytes);
  FS_USE_PARA(NumBlocks);
  r = _WaitForEndOfDMARead(Unit);
  _ProcessDMARead();
  return r;
#else
  U32          NumWords;
  U32        * pData32;
  U32          NumWordsAtOnce;
  U32          WordsPerBlock;
  U32          WMLRead;
  int          r;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs    = GET_USDHC_REGS(Unit);
  pData32       = (U32 *)pBuffer;
  WordsPerBlock = NumBytes / 4;
  WMLRead       = _GetWMLRead(Unit);
  do {
    NumWords = WordsPerBlock;
    do {
      r = _WaitForRxReady(Unit);
      if (r != FS_MMC_CARD_NO_ERROR) {
        _Reset(Unit);
        return r;                                                 // Error
      }
      NumWordsAtOnce  = MIN(NumWords, WMLRead);
      NumWords       -= NumWordsAtOnce;
      do {
        *pData32++ = pUSDHCRegs->USDHC_DATA_BUFF_ACC_PORT;
      } while (--NumWordsAtOnce);
      pUSDHCRegs->USDHC_INT_STATUS = 1uL << INT_STATUS_BRR_BIT;   // This flag is only set by SDHC. We have to clear it here to get the next notification.
    } while (NumWords);
  } while (--NumBlocks);
  return FS_MMC_CARD_NO_ERROR;                                    // OK, data received.
#endif
}

/*********************************************************************
*
*       _HW_WriteData
*
*  Function description
*    Writes the data to SD / MMC card using the SD / MMC host controller.
*
*  Return values
*    FS_MMC_CARD_NO_ERROR      Success
*    FS_MMC_CARD_READ_TIMEOUT  No data received
*/
static int _HW_WriteData(U8 Unit, const void * pBuffer, unsigned NumBytes, unsigned NumBlocks) {
#if USE_DMA
  int r;

  FS_USE_PARA(Unit);
  FS_USE_PARA(pBuffer);
  FS_USE_PARA(NumBytes);
  FS_USE_PARA(NumBlocks);
  r = _WaitForEndOfDMAWrite(Unit);
  return r;
#else
  U32          NumWords;
  const U32  * pData32;
  int          r;
  U32          NumWordsAtOnce;
  U32          WordsPerBlock;
  U32          WMLWrite;
  USDHC_REGS * pUSDHCRegs;

  pUSDHCRegs    = GET_USDHC_REGS(Unit);
  pData32       = (U32 *)pBuffer;
  WordsPerBlock = NumBytes / 4;
  WMLWrite      = _GetWMLWrite(Unit);
  do {
    NumWords = WordsPerBlock;
    if (_RepeatSame) {
      pData32 = (U32 *)pBuffer;
    }
    do {
      r = _WaitForTxReady(Unit);
      if (r != FS_MMC_CARD_NO_ERROR) {
        _Reset(Unit);
        return r;                                                 // Error
      }
      NumWordsAtOnce  = MIN(NumWords, WMLWrite);
      NumWords       -= NumWordsAtOnce;
      do {
        pUSDHCRegs->USDHC_DATA_BUFF_ACC_PORT = *pData32++;
      } while (--NumWordsAtOnce);
      pUSDHCRegs->USDHC_INT_STATUS = 1uL << INT_STATUS_BWR_BIT;   // This flag is only set by SDHC. We have to clear it here to get the next notification.
    } while (NumWords);
  } while (--NumBlocks);
  return FS_MMC_CARD_NO_ERROR;                                    // OK, data sent.
#endif
}

/*********************************************************************
*
*       _HW_SetDataPointer
*
*  Function description
*    Tells the hardware layer where to read data from  or write data to.
*    Some SD host controllers require the address of the data buffer
*    before sending the command to the card, eg. programming the DMA.
*    In most cases this function can be left empty.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*    p        Data buffer.
*/
static void _HW_SetDataPointer(U8 Unit, const void * p) {
  FS_USE_PARA(Unit);
#if USE_DMA
  _pData = (void *)p;     // Cast const away. The same buffer is used also for read operations.
#else
  FS_USE_PARA(p);
#endif
}

/*********************************************************************
*
*       _HW_SetBlockLen
*
*  Function description
*    Sets the block size (sector size) that has to be transferred.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*/
static void _HW_SetBlockLen(U8 Unit, U16 BlockSize) {
  FS_USE_PARA(Unit);
  _BlockSize = BlockSize;
}

/*********************************************************************
*
*       _HW_SetNumBlocks
*
*  Function description
*    Sets the number of blocks (sectors) to be transferred.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*/
static void _HW_SetNumBlocks(U8 Unit, U16 NumBlocks) {
  FS_USE_PARA(Unit);
  _NumBlocks = NumBlocks;
}

/*********************************************************************
*
*       _HW_GetMaxReadBurst
*
*  Function description
*    Returns the number of block (sectors) that can be read at once
*    with a single READ_MULTIPLE_SECTOR command.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*
*  Return value
*    Number of sectors that can be read at once.
*/
static U16 _HW_GetMaxReadBurst(U8 Unit) {
  FS_USE_PARA(Unit);
  return NUM_BLOCKS_AT_ONCE;
}

/*********************************************************************
*
*       _HW_GetMaxWriteBurst
*
*  Function description
*    Returns the number of block (sectors) that can be written at once
*    with a single WRITE_MULTIPLE_SECTOR command.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*
*  Return value
*    Number of sectors that can be written at once.
*/
static U16 _HW_GetMaxWriteBurst(U8 Unit) {
  FS_USE_PARA(Unit);
  return NUM_BLOCKS_AT_ONCE;
}

/*********************************************************************
*
*       _HW_GetMaxWriteBurstRepeat
*
*  Function description
*    Returns the number of block (sectors) that can be written at once
*    with a single WRITE_MULTIPLE_SECTOR command and that contain the
*    same data.
*
*  Parameters
*    Unit     Index of the SD / MMC host controller (0-based).
*
*  Return value
*    Number of sectors that can be written at once. The function has
*    to return 0 if the feature is not supported.
*/
static U16 _HW_GetMaxWriteBurstRepeat(U8 Unit) {
  FS_USE_PARA(Unit);
  return NUM_BLOCKS_AT_ONCE_REPEAT_SAME;
}

/*********************************************************************
*
*       FS_MMC_CM_HW_iMX6U5_Variscite_VAR_SOM_DUAL_Kit
*/
const FS_MMC_HW_TYPE_CM FS_MMC_CM_HW_iMXRT1052_NXP_MIMXRT1050_EVK = {
  _HW_Init,
  _HW_Delay,
  _HW_IsPresent,
  _HW_IsWriteProtected,
  _HW_SetMaxSpeed,
  _HW_SetResponseTimeOut,
  _HW_SetReadDataTimeOut,
  _HW_SendCmd,
  _HW_GetResponse,
  _HW_ReadData,
  _HW_WriteData,
  _HW_SetDataPointer,
  _HW_SetBlockLen,
  _HW_SetNumBlocks,
  _HW_GetMaxReadBurst,
  _HW_GetMaxWriteBurst,
  _HW_GetMaxWriteBurstRepeat,
  NULL
};

/*************************** End of file ****************************/
