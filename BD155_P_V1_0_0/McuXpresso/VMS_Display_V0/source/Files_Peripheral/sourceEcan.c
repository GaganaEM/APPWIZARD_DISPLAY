#include "sourceEcan.h"

#include "../Files_Header/sourceMacro.h"
#include "../Files_Header/sourceExternVariable.h"

static void flexcan_callback(CAN_Type *base, flexcan_handle_t *handle, status_t status, uint32_t result, void *userData);
extern void funcExtractCanRecievedData(unsigned char lcCanPort, uint32_t llJ1939RxFlags);

void EcanaConfigure(void)
{
	EcanaPinConfiguration();
	EcanaPeripheralConfiguration();
}

void EcanaPinConfiguration(void)
{
	IOMUXC_SetPinMux(
			IOMUXC_GPIO_AD_B1_08_FLEXCAN1_TX,
	  1U);
	IOMUXC_SetPinMux(
			IOMUXC_GPIO_AD_B1_09_FLEXCAN1_RX,
	  1U);


	IOMUXC_SetPinConfig(
			IOMUXC_GPIO_AD_B1_08_FLEXCAN1_TX,
	    0x10B0u);

	IOMUXC_SetPinConfig(
			IOMUXC_GPIO_AD_B1_09_FLEXCAN1_RX,
	    0x10B0u);
}

void EcanaPeripheralConfiguration(void)
{
    /*Clock setting for FLEXCAN*/

	CLOCK_SetMux(kCLOCK_CanMux, FLEXCAN_CLOCK_SOURCE_SELECT);
	CLOCK_SetDiv(kCLOCK_CanDiv, FLEXCAN_CLOCK_SOURCE_DIVIDER);

	FLEXCAN_GetDefaultConfig(&flexcanConfig);
	FLEXCAN_Init(CAN1, &flexcanConfig, EXAMPLE_CAN_CLK_FREQ);
#ifdef GLOBAL_MASK_DISABLE
#else
	/*added on 10.06.2023 by Rajashekhar to recive all CAN frames on CAN bus
	 * The below function will work only if enableIndividMask is disable in FLEXCAN_GetDefaultConfig()*/
	FLEXCAN_SetRxMbGlobalMask(CAN1,0x00000000);
#endif
	FLEXCAN_TransferCreateHandle(CAN1, &flexcanHandle, flexcan_callback, NULL);
}

void EcanbConfigure(void)
{
	EcanbPinConfiguration();
	EcanbPeripheralConfiguration();
}

void EcanbPinConfiguration(void)
{
	IOMUXC_SetPinMux(
	  IOMUXC_GPIO_AD_B0_14_FLEXCAN2_TX,       /* GPIO_AD_B0_14 is configured as FLEXCAN2_TX */
	  1U);                                    /* Software Input On Field: Force input path of pad GPIO_AD_B0_14 */
	IOMUXC_SetPinMux(
	  IOMUXC_GPIO_AD_B0_15_FLEXCAN2_RX,       /* GPIO_AD_B0_15 is configured as FLEXCAN2_RX */
	  1U);


	IOMUXC_SetPinConfig(
	    IOMUXC_GPIO_AD_B0_14_FLEXCAN2_TX,       /* GPIO_AD_B0_14 PAD functional properties : */
	    0x10B0u);                               /* Slew Rate Field: Slow Slew Rate
	                                               Drive Strength Field: R0/6
	                                               Speed Field: medium(100MHz)
	                                               Open Drain Enable Field: Open Drain Disabled
	                                               Pull / Keep Enable Field: Pull/Keeper Enabled
	                                               Pull / Keep Select Field: Keeper
	                                               Pull Up / Down Config. Field: 100K Ohm Pull Down
	                                               Hyst. Enable Field: Hysteresis Disabled */
	IOMUXC_SetPinConfig(
	    IOMUXC_GPIO_AD_B0_15_FLEXCAN2_RX,       /* GPIO_AD_B0_15 PAD functional properties : */
	    0x10B0u);                               /* Slew Rate Field: Slow Slew Rate
	                                               Drive Strength Field: R0/6
	                                               Speed Field: medium(100MHz)
	                                               Open Drain Enable Field: Open Drain Disabled
	                                               Pull / Keep Enable Field: Pull/Keeper Enabled
	                                               Pull / Keep Select Field: Keeper
	                                               Pull Up / Down Config. Field: 100K Ohm Pull Down
	                                               Hyst. Enable Field: Hysteresis Disabled */
}

void EcanbPeripheralConfiguration(void)
{
    /*Clock setting for FLEXCAN*/

	CLOCK_SetMux(kCLOCK_CanMux, FLEXCAN_CLOCK_SOURCE_SELECT);
	CLOCK_SetDiv(kCLOCK_CanDiv, FLEXCAN_CLOCK_SOURCE_DIVIDER);

	FLEXCAN_GetDefaultConfig(&flexcanConfig);
	FLEXCAN_Init(CAN2, &flexcanConfig, EXAMPLE_CAN_CLK_FREQ);
#ifdef GLOBAL_MASK_DISABLE
#else
	/*added on 10.06.2023 by Rajashekhar to recive all CAN frames on CAN bus
	 * The below function will work only if enableIndividMask is disable in FLEXCAN_GetDefaultConfig()*/
	FLEXCAN_SetRxMbGlobalMask(CAN2,0x00000000);
#endif
	FLEXCAN_TransferCreateHandle(CAN2, &flexcanHandle, flexcan_callback, NULL);
}

static void flexcan_callback(CAN_Type *base, flexcan_handle_t *handle, status_t status, uint32_t result, void *userData)
{
	uint32_t  llCanFlagRxFlag = 1;

   if(base == CAN1)
   {
	    switch (status)
		{
			case kStatus_FLEXCAN_RxIdle:

								if(bStartRawFrameLog == 1)
								{
									TempArray[guiLogFileSize][0] 	= rxXfer.frame->id >> 24;
									TempArray[guiLogFileSize][1] 	= rxXfer.frame->id >> 16;
									TempArray[guiLogFileSize][2] 	= rxXfer.frame->id >> 8;
									TempArray[guiLogFileSize][3] 	= rxXfer.frame->id >> 0;
									TempArray[guiLogFileSize][4] 	= rxXfer.frame->dataByte0;
									TempArray[guiLogFileSize][5] 	= rxXfer.frame->dataByte1;
									TempArray[guiLogFileSize][6] 	= rxXfer.frame->dataByte2;
									TempArray[guiLogFileSize][7] 	= rxXfer.frame->dataByte3;
									TempArray[guiLogFileSize][8] 	= rxXfer.frame->dataByte4;
									TempArray[guiLogFileSize][9] 	= rxXfer.frame->dataByte5;
									TempArray[guiLogFileSize][10] 	= rxXfer.frame->dataByte6;
									TempArray[guiLogFileSize][11] 	= rxXfer.frame->dataByte7;
									guiLogFileSize++;
								}
								llCanFlagRxFlag = 0x01L << result;
								funcExtractCanRecievedData(CANA, llCanFlagRxFlag);
								rxXfer.mbIdx = result;
								rxXfer.frame = &frame;
								(void)FLEXCAN_TransferReceiveNonBlocking(CAN1, &flexcanHandle, &rxXfer);
								break;
			case kStatus_FLEXCAN_TxIdle:
								glCanaFlagTxFlag = result;
								//glCanaFlagTxFlag = 1;
								break;
			case kStatus_FLEXCAN_ErrorStatus:
								glCanaFlagTxFlag = result;
								glCanaFlagTxFlag = 1;
								break;
			case kStatus_FLEXCAN_WakeUp:
								wakenUp = true;
								break;

			default:
								break;
		}
   }
   else if(base == CAN2)
   {
	    switch (status)
		{
			case kStatus_FLEXCAN_RxIdle:

								if(bStartRawFrameLog == 1)
								{
									TempArray[guiLogFileSize][0] 	= rxXfer.frame->id >> 24;
									TempArray[guiLogFileSize][1] 	= rxXfer.frame->id >> 16;
									TempArray[guiLogFileSize][2] 	= rxXfer.frame->id >> 8;
									TempArray[guiLogFileSize][3] 	= rxXfer.frame->id >> 0;
									TempArray[guiLogFileSize][4] 	= rxXfer.frame->dataByte0;
									TempArray[guiLogFileSize][5] 	= rxXfer.frame->dataByte1;
									TempArray[guiLogFileSize][6] 	= rxXfer.frame->dataByte2;
									TempArray[guiLogFileSize][7] 	= rxXfer.frame->dataByte3;
									TempArray[guiLogFileSize][8] 	= rxXfer.frame->dataByte4;
									TempArray[guiLogFileSize][9] 	= rxXfer.frame->dataByte5;
									TempArray[guiLogFileSize][10] 	= rxXfer.frame->dataByte6;
									TempArray[guiLogFileSize][11] 	= rxXfer.frame->dataByte7;
									guiLogFileSize++;
								}
								llCanFlagRxFlag = 0x01L << result;
								funcExtractCanRecievedData(CANB, llCanFlagRxFlag);
								rxXfer.mbIdx = result;
								rxXfer.frame = &frame;
								(void)FLEXCAN_TransferReceiveNonBlocking(CAN2, &flexcanHandle, &rxXfer);
								Can_Comm.Can_Disconnected_Counter = 0;
								Can_Comm.strt_tmr_entirecan_discnctd = 1;
								break;
			case kStatus_FLEXCAN_TxIdle:
								glCanbFlagTxFlag = result;
								//glCanbFlagTxFlag = 1;
								break;
			case kStatus_FLEXCAN_ErrorStatus:
								glCanbFlagTxFlag = result;
								glCanbFlagTxFlag = 1;
								break;
			case kStatus_FLEXCAN_WakeUp:
								wakenUp = true;
								break;

			default:
								break;
		}
   }
   else{}
}




