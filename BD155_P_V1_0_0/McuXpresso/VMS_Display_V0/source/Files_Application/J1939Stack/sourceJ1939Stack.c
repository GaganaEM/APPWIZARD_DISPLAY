#include "../../Files_Header/sourceMacro.h"
#include "../../Files_Header/sourceInclude.h"
#include "../../Files_Header/sourceExternVariable.h"

#include "sourceJ1939Stack.h"



void funcReadMailbox(unsigned char lcCanPort, uint16_t liMailboxNo)
{
    uint32_t llCanJ1939Pgn = 0;
    struct CanJ1939Frame CanJ1939RxFrame;

    CanJ1939RxFrame.CanJ1939Dlc    =   rxXfer.frame->length;
    CanJ1939RxFrame.CanData.Unit   =   rxXfer.frame->dataWord0;
    CanJ1939RxFrame.CanData.Unit   =   CanJ1939RxFrame.CanData.Unit << 32;
    CanJ1939RxFrame.CanData.Unit   =   CanJ1939RxFrame.CanData.Unit | rxXfer.frame->dataWord1;
    CanJ1939RxFrame.CanId.Unit     =   rxXfer.frame->id;

    gucSourceAddress = CanJ1939RxFrame.CanId.Id.CanJ1939SourceAddress;

    if(gucSourceAddress == 0)
    {
    	gucSourceAddress = ENGINE_ECU;
    	Can_Comm.EngCanDisconnectedCntr = 0;
    	Can_Comm.strt_tmr_engcan_discnctd = 1;
    }
    else if(gucSourceAddress == 3)
    {
    	gucSourceAddress = TRANSMISSION_ECU;
    	Can_Comm.TransCanDisconnectedCntr = 0;
    	Can_Comm.strt_tmr_transcan_discnctd = 1;
    }
    else if(gucSourceAddress == 2)
    {
    	gucSourceAddress = IOMODULE_ECU;
    	Can_Comm.IomCanDisconnectedCntr = 0;
    	Can_Comm.strt_tmr_iomcan_discnctd = 1;
    }
    else if(gucSourceAddress == 0xE2)
    {
    	gucSourceAddress = SENDER_CAN;
    	Can_Comm.SenderCanDisconnectedCntr = 0;
    	Can_Comm.strt_tmr_sendercan_discnctd = 1;
    }

    if(CanJ1939RxFrame.CanId.Id.CanJ1939PduFormat < 240)
    {
        CanJ1939RxFrame.CanId.Id.CanJ1939PduSpecific = 0;
    }
    else
    {

    }

    llCanJ1939Pgn = (CanJ1939RxFrame.CanId.Unit & 0x03FFFF00) >> 8;

    if((CanJ1939RxFrame.CanId.Id.CanJ1939DataPage == 1) || (CanJ1939RxFrame.CanId.Id.CanJ1939ExtendedDataPage == 1))
    {

    }
    else
    {

    }

    switch(lcCanPort)
    {
        case CANA:
                    CanaJ1939RxFrame = CanJ1939RxFrame;
                    funcDecodeCanRecievedData(lcCanPort, llCanJ1939Pgn);
                    break;
        case CANB :
                    CanbJ1939RxFrame = CanJ1939RxFrame;
                    funcDecodeCanRecievedData(lcCanPort, llCanJ1939Pgn);
                    break;
        default :
                    break;
    }
}

void funcDecodeCanRecievedData(uint16_t liCanPort, uint32_t llCanJ1939Pgn)
{
	funcDecodeCanRxData(liCanPort, llCanJ1939Pgn);
}

void funcDecodeCanRxData(unsigned char lcCanPort, uint32_t llCanJ1939Pgn)
{
	Uint32 lulData1 = 0;
	uint16_t luiTempVar1 = 0;
	float  lfTempVar1	= 0;

	float radius_of_tyre_var = 1.3;
	float axle_ratio_var = 24.3;
	float no_of_teeth=39;
	float freq_in=0,time_period=0,pulse_on_off=0;


    struct CanJ1939Frame CanJ1939RxFrame;

    switch(lcCanPort)
    {
        case CANA : CanJ1939RxFrame = CanaJ1939RxFrame;
                    break;
        case CANB : CanJ1939RxFrame = CanbJ1939RxFrame;
                    break;
        default :
                    break;
    }

    switch(llCanJ1939Pgn)
    {
        case 0xEA00 :   funcRecieveCanTPFrame(lcCanPort, llCanJ1939Pgn);
                        break;
        case 0xEB00 :   funcRecieveCanTPFrame(lcCanPort, llCanJ1939Pgn);
                        break;
        case 0xEC00 :   funcRecieveCanTPFrame(lcCanPort, llCanJ1939Pgn);
                        break;
#ifdef DOZER_P_VER

#else /*Dozer E Version*/
		case 0xFECA ://DM1 Messagaes
						CanbDM1RxFrame.CanData.Unit =  CanJ1939RxFrame.CanData.Unit;
						gucSa = gucSourceAddress;
						bSingleDm1Frame = 1;
						bDM1RxComplete  = 1;
						break;
		case 0xF004 ://SPN 190 ENGINE RPM
						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						EngRpmCan= lulData1 / 8;

						if(EngRpmCan>=2400 && vms.flag.gauge_rotation_poweron == 0)
						{
							faultsymbols.rpm=1;
						}
						else
						{
							faultsymbols.rpm=0;
						}
						break;

        case 0xFEEE://SPN 110 ECT
						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
						gfEct = lulData1 - 40;

						if(gfEct >= 95 && vms.flag.gauge_rotation_poweron == 0)
						{
							faultsymbols.ect=1;
						}
						else
						{
							faultsymbols.ect=0;
						}
					//SPN 175 EOT
						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						lulData1 = (lulData1 << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
						gfEot = (lulData1 / 32);
						gfEot = gfEot - 273;

						if(gfEot >= 110 && vms.flag.gauge_rotation_poweron == 0)//120
						{
							faultsymbols.eot=1;
						}
						else
						{
							faultsymbols.eot=0;
						}
						break;

        case 0xFEEF ://SPN 100
        				lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
        				gfEop = (float)(lulData1 * 4) / 100.0;
        				if(gfEop <= 0.8 && vms.flag.gauge_rotation_poweron == 0)
        				{
        					faultsymbols.eop=1;
        				}
        				else
        				{
        					faultsymbols.eop=0;
        				}
        				break;
        case 0xFEF7 ://SPN 168 BATTERY VOLTAGE
        				lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
						gfEng_battry_volt = (float)lulData1 / 20.0;
						/*
						if(gfVolt>=28)
						{faultsymbols.batt=1;}
						else
						{faultsymbols.batt=0;}

						if(gfVolt < 24)
						{faultsymbols.chargefail_volt = 1;}
						else
						{faultsymbols.chargefail_volt = 0;}
						*/
						break;

        case 0xFE92 ://SPN 1210 FUEL RACK POSITION
        				lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;//spn: 1210
        				gfFIP_RackPosition = (float)lulData1 * 0.4;
						break;

        case 0xFEE5 ://SPN 247 ENGINE HOURS
        				lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
						giHourMeter 	= (float)lulData1 / 20.0;
						EngineHourMeter = (float)lulData1 / 20.0;

						EngineHourMeter	= EngineHourMeter * ONE_FRAC_DIGIT;
                        break;
        case 0xFEF6 ://SPN 102 ENGINE INTAKE MANIFOLD #1 PRESSURE
        				lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;//spn: 102
        				lulData1 = lulData1 * 2;
        				gfBoostPressure = (float)lulData1 / 100.0;//kPa to Bar
						break;

        case 0xFEF2 ://SPN 183 FUEL RATE
        				lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

						gfFuel_rate = (float)lulData1 / 20.0;
						gfFuel_rate = gfFuel_rate * TWO_FRAC_DIGIT;
						break;
#endif
		/***************SENDER CAN****************/
		case 0xFFF1:
						if(vms.flag.gauge_rotation_poweron != 1)
						{
							Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

							lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							if(lulData1 == 0xAA)
							{
								ain1_s_value = 2;
							}
							else if(lulData1 == 0x55)
							{
								ain1_s_value = 1;
							}
							else
							{
								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
								ain1_s_type = lulData1;

								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
								ain1_s_cnts = lulData1;

								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
								ain1_s_value = lulData1;
#ifdef DOZER_P_VER
								if(ain1_s_value >= 95)//if(gfEct >= 95)
								{
									faultsymbols.ect=1;
								}
								else
								{
									faultsymbols.ect=0;
								}
#endif
							}
						}
						break;
		case 0xFFF2:
						if(vms.flag.gauge_rotation_poweron != 1)
						{
							Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

							lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							if(lulData1 == 0xAA)
							{
								ain2_s_value = 2;
							}
							else if(lulData1 == 0x55)
							{
								ain2_s_value = 1;
							}
							else
							{
								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
								ain2_s_type = lulData1;

								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
								ain2_s_cnts = lulData1;

								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
								ain2_s_value = lulData1;
#ifdef DOZER_P_VER
								if(ain2_s_value >= 110)//if(gfEot >= 110)
								{
									faultsymbols.eot=1;
								}
								else
								{
									faultsymbols.eot=0;
								}
#endif
							}
						}
						break;
		case 0xFFF3:
						if(vms.flag.gauge_rotation_poweron != 1)
						{
							Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

							lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							if(lulData1 == 0xAA)
							{
								ain3_s_value = 2;
							}
							else if(lulData1 == 0x55)
							{
								ain3_s_value = 1;
							}
							else
							{
								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
								ain3_s_type = lulData1;

								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
								ain3_s_cnts = lulData1;

								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
								ain3_s_value = lulData1;
							}
						}
						break;
		case 0xFFF4:
						if(vms.flag.gauge_rotation_poweron != 1)
						{
							Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

							lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							if(lulData1 == 0xAA)
							{
								ain4_s_value = 2;
							}
							else if(lulData1 == 0x55)
							{
								ain4_s_value = 1;
							}
							else
							{
								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
								ain4_s_type = lulData1;

								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
								ain4_s_cnts = lulData1;

								lulData1 = 0;

								lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
								lulData1 = lulData1 << 8;
								lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
								ain4_s_value = lulData1;
#ifdef DOZER_P_VER
								if(ain4_s_value <= 10)//if(gfFuel >= 10)
								{
									faultsymbols.fuel=1;
								}
								else
								{
									faultsymbols.fuel=0;
								}
#endif
							}
						}
						break;
#if 0
#ifdef DOZER_P_VER
/***************SENDER CAN****************/
		case 0xFFF1:
						Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
						if(lulData1 == 0xAA)
						{
							Eng_oil_filter_clogd = 2;
						}
						else if(lulData1 == 0x55)
						{
							Eng_oil_filter_clogd = 1;
						}

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						Ect_Resistance = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
						guiEctCounts = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
						gfEct = lulData1;
						break;
		case 0xFFF2:
						Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						Eot_Resistance = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
						guiEotCounts = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
						gfEot = lulData1;
						break;
		case 0xFFF3:
						Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						Fuel_Resistance = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
						guiFuelCounts = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
						gfFuel = lulData1;
						break;
		case 0xFFF4:
						Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
						break;
/*****************************************/
#else
	/***************SENDER CAN****************/
		case 0xFFF1:
					if(vms.flag.gauge_rotation_poweron != 1)
					{
						Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
						if(lulData1 == 0xAA)
						{
							di_hol = 2;
						}
						else if(lulData1 == 0x55)
						{
							di_hol = 1;
						}

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						Hol_Resistance = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
						guiHolCounts = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
						gfHol = lulData1;
					}
						break;
		case 0xFFF2:
					if(vms.flag.gauge_rotation_poweron != 1)
					{
						Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						Hot_Resistance = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
						guiHotCounts = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
						gfHot = lulData1;
					}
						break;
		case 0xFFF3:
						Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
						/*
						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
						Fuel_Resistance = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
						guiFuelCounts = lulData1;

						lulData1 = 0;

						lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
						lulData1 = lulData1 << 8;
						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
						gfFuel = lulData1;
						*/
						break;
		case 0xFFF4:
						Sender_CAN_Alive = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
						break;
#endif
#endif
#if 0
			case 0xFEEF :
	/*        				gfEop = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
							guiEopCounts = gfEop;                 //for NCI-aravind
							//giEOP_kPa = lulData1 * 4;
							gfEop = (gfEop * 4) / 100;
	*/
							lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
							gfEcl = (float)lulData1 / 2.5;
							break;
			case 0xFEFC :
							lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							guiFuelCounts = lulData1;
							gfFuel = (float)lulData1 * 0.4;
	//        				lulData1=0;
							break;

	//        case 0xFEF7 :   lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
	//        				lulData1 = lulData1 << 8;
	//						lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
	//						gfVolt 	 = (float)lulData1 / 20;
	//                        break;

			case 0xF002 :	lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
							lulData1 = lulData1 << 8;
							lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							giOutputRpm = lulData1 / 8;

							temp_calc_var = (unsigned long )((2 * 3.14159 * radius_of_tyre_var * giOutputRpm * 60));
							giVehicleSpeed = (unsigned int ) (temp_calc_var / (axle_ratio_var * 1000));
							flagkm_CAN = 1;

							freq_in = (float)(giOutputRpm/no_of_teeth);
							time_period =(float)(1/freq_in);
							pulse_on_off = (float)((time_period/2)*1000); // * 1000 becoz to convert into msec
							pulsecount = Roundoff((pulse_on_off/10));  //divide by 10 becoz systick is 10msec
	//						pulsecount = (unsigned int)((pulse_on_off/10));

							lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
							lulData1 = lulData1 << 8;
							lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							giTurbineRpm = lulData1 / 8;
							break;
			case 0xFE69 :	lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
							lulData1 = lulData1 << 8;
							lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
							guiEctCounts = lulData1;
							gfEct = (float)lulData1 / 32;
							gfEct = gfEct - 273;

							break;
			case 0xFEF8 :	lulData1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
							lulData1 = lulData1 << 8;
							lulData1 = lulData1 | CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
							guiTotCounts = lulData1;
							gfTot = (float)lulData1 / 32;
							gfTot = gfTot - 273;
							break;

			case 0xF005 :	giSelectedgear	= CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
							giCurrentGear	= CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
							break;
	//        case 0xFF20:
	//						//D1 Left - D1
	//						giIcon01 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte1 >> 2) & 0x03);
	//						//D2 Right - D2
	//						giIcon14 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte1 >> 6) & 0x03);
	//						//D3 High Beam - D3
	//						giIcon07 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte2 >> 2) & 0x03);
	//						//D4 Pre-heater - D4
	//						giIcon09 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte2 >> 6) & 0x03);
	//						//D5 Diff-Lock - D5 Trns CFG
	////						giIcon05 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte3 >> 2) & 0x03);
	//						//D6 Lift arm lock - D6 RET Brk
	//						giIcon04 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte3 >> 6) & 0x03);
	//
	//						//D7 Reverse - D7
	//						giIconRevCol = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte4 >> 2) & 0x03);
	//						//D9 Spare Close To GN -
	//						//
	//						//D10 Park Brake
	//						giIcon10 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte5 >> 2) & 0x03);
	//						//D16 HOFC - D16
	//						giIcon02 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte8 >> 6) & 0x03);
	//
	//
	//						giIcon01 = (giIcon01 == 1 && (bToggleIcon01 == 1 || bToggleBit == 1))? 2 : 1;
	//						giIcon04 = (giIcon04 == 1 && (bToggleIcon04 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon07 = (giIcon07 == 1 && (bToggleIcon07 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon14 = (giIcon14 == 1 && (bToggleIcon14 == 1 || bToggleBit == 1))? 2 : 1;
	//						giIcon09 = (giIcon09 == 1 && (bToggleIcon09 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon10 = (giIcon10 == 1 && (bToggleIcon10 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon02 = (giIcon02 == 1 && (bToggleIcon02 == 0 || bToggleBit == 1))? 2 : 1;
	//
	//						giIconRevCol = (giIconRevCol == 1 && (bToggleIcon17 == 0 || bToggleBit == 1))? 1 : 0;
	//						break;
	//    	case 0xFF21:
	//						//D17 Coolant Level
	//
	//    					//- D12 BODY UP
	//						giIcon12 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte1 >> 2) & 0x03);
	//						//D18 HOLL - DUMP BRAKE
	//						giIcon11 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte1 >> 6) & 0x03);
	//						//D21 Acc Pressure - D21//D22 EOL -
	//						//D27 SEAT BELT
	//						giIcon08 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte3 >> 6) & 0x03);
	//						//D23 TOFC - D23
	//						giIcon05 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte4 >> 2) & 0x03);
	//						//D29 FDOT - D25 SLFL Retarder / Mode
	//						giIcon13 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte7 >> 2) & 0x03);
	//						//D35 Charge Alt - D35
	//						giIcon15 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte8 >> 6) & 0x03);
	//
	//						giIcon05 = (giIcon05 == 1 && (bToggleIcon05 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon08 = (giIcon08 == 1 && (bToggleIcon08 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon11 = (giIcon11 == 1 && (bToggleIcon11 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon12 = (giIcon12 == 1 && (bToggleIcon12 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon15 = (giIcon15 == 1 && (bToggleIcon15 == 0 || bToggleBit == 1))? 2 : 1;
	//						giIcon13 = (giIcon13 == 1 && (bToggleIcon13 == 0 || bToggleBit == 1))? 2 : 1;
	//						break;
			case 0xFF20:
							//D1 Left
							giIcon01 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte1 >> 2) & 0x03);
							//D2 Right
							giIcon14 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte1 >> 6) & 0x03);
							//D3 High Beam
							giIcon07 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte2 >> 2) & 0x03);
							//D4 Pre-heater
							giIcon09 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte2 >> 6) & 0x03);
							//D6 RETARDER BRAKE
							giIcon04 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte3 >> 6) & 0x03);

							//D7 Reverse
							giIconRevCol = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte4 >> 2) & 0x03);

							//D11 Park Brake
							giIcon10 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte6 >> 2) & 0x03);
							//D16 HOFC
							giIcon02 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte8 >> 6) & 0x03);

							//D12 BODY UP
							giIcon12 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte6 >> 6) & 0x03);

							giIcon01 = (giIcon01 == 1 && (bToggleIcon01 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon04 = (giIcon04 == 1 && (bToggleIcon04 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon07 = (giIcon07 == 1 && (bToggleIcon07 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon14 = (giIcon14 == 1 && (bToggleIcon14 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon09 = (giIcon09 == 1 && (bToggleIcon09 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon10 = (giIcon10 == 1 && (bToggleIcon10 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon02 = (giIcon02 == 1 && (bToggleIcon02 == 0 || bToggleBit == 1))? 2 : 1;

							giIcon12 = (giIcon12 == 1 && (bToggleIcon12 == 0 || bToggleBit == 1))? 2 : 1;


							giIconRevCol = (giIconRevCol == 1 && (bToggleIcon17 == 0 || bToggleBit == 1))? 1 : 0;
							break;
			case 0xFF21:
							//D17 Coolant Level

							//D20 DUMP BRAKE
							giIcon11 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte2 >> 6) & 0x03);

							//D27 SEAT BELT
							giIcon08 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte6 >> 2) & 0x03);
							//D23 Trans. Filter Clog
							giIcon05 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte4 >> 2) & 0x03);

							//D35 Charge Alt
							giIcon15 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte8 >> 6) & 0x03);

							//D26 POWER/ECONOMY MODE
							giIcon13 = ((CanJ1939RxFrame.CanData.part.CanJ1939Byte5 >> 6) & 0x03);

							giIcon05 = (giIcon05 == 1 && (bToggleIcon05 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon08 = (giIcon08 == 1 && (bToggleIcon08 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon11 = (giIcon11 == 1 && (bToggleIcon11 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon15 = (giIcon15 == 1 && (bToggleIcon15 == 0 || bToggleBit == 1))? 2 : 1;
							giIcon13 = (giIcon13 == 1 && (bToggleIcon13 == 0 || bToggleBit == 1))? 2 : 1;
							break;
			case 0xFF22:
							guiEotCounts = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							guiEotCounts = (guiEotCounts << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

	//        				luiTempVar1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
	//        				luiTempVar1 = (luiTempVar1 << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
	//
	//						gfEot = (luiTempVar1 / 32);
	//						gfEot = gfEot - 273;

							guiTopCounts = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
							guiTopCounts = (guiTopCounts << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
	/*     for NCI-aravind
							luiTempVar1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
							luiTempVar1 = (luiTempVar1 << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
							gfTop = ((float)luiTempVar1 * 16) / 100;
	*/
							break;
			case 0xFF23:
							guiFuelCounts = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							guiFuelCounts = (guiFuelCounts << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

							luiTempVar1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
							luiTempVar1 = (luiTempVar1 << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte3;

	//						gfFuel = (float)luiTempVar1 / 2.5; - for testing  for NCI - aravind

							guiBotCounts = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
							guiBotCounts = (guiBotCounts << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte5;

							luiTempVar1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
							luiTempVar1 = (luiTempVar1 << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte7;

	//						gfBot = (luiTempVar1 / 32);       for NCI-aravind
	//						gfBot = gfBot - 273;
							break;
			case 0xFF24:
							guiFreq1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							guiFreq1 = (guiFreq1 << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
							guiFreq2 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
							guiFreq2 = (guiFreq2 << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
							guiVoltageCounts = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
							guiVoltageCounts = (guiVoltageCounts << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte5;

							luiTempVar1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
							luiTempVar1 = (luiTempVar1 << 8) | CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
	//						for NCI-aravind
	//						gfVolt = (float)luiTempVar1 / 20;
							break;

			case 0xFF0A:
	//        	            for NCI-aravind
	/*        				strDateTime.Date 	= CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
							strDateTime.Month	= CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
							strDateTime.Year	= CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
							strDateTime.Hour	= CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
							strDateTime.Minute  = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
							strDateTime.Second  = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
							strDateTime.Year    = strDateTime.Year + 2000;
							if(bTimeFormat == 0)
							{
								if(strDateTime.Hour == 12)
								{
									strDateTime.Hour = strDateTime.Hour;
									strDateTime.Meredian = 2;
								}
								else if(strDateTime.Hour > 12)
								{
									strDateTime.Hour = strDateTime.Hour - 12;
									strDateTime.Meredian = 2;
								}
								else
								{
									strDateTime.Hour = strDateTime.Hour;
									strDateTime.Meredian = 1;
								}
							}
	*/
							break;
#endif
        default :
                        break;
    }

    lulData1=0;
}

void funcRecieveCanTPFrame(unsigned char lcCanPort, uint32_t llCanJ1939Pgn)
{
    uint16_t liFrameNumber        = 0;
    uint16_t liMessageSize        = 0;
    uint16_t liPacketSize         = 0;
    uint16_t luiNumOfBytes        = 0;
    uint16_t luiNumOfFrames       = 0;
    uint16_t liConnAbortReason    = 0;
    uint32_t llPgnNo              = 0;
    uint32_t llRequestedPgn       = 0;

    struct CanJ1939Frame CanJ1939RxFrame;
    struct CanMsgStatusTp strCanTp;

    switch(lcCanPort)
    {
        case CANA : strCanTp = strCanaTp;
                    CanJ1939RxFrame = CanaJ1939RxFrame;

                    break;
        case CANB : strCanTp = strCanbTp;
                    CanJ1939RxFrame = CanbJ1939RxFrame;
                    break;
        default :
                    break;
    }

    switch(llCanJ1939Pgn)
    {
        case 0xEA00 :
                        llRequestedPgn = CanJ1939RxFrame.CanData.part.CanJ1939Byte3 << 8;
                        llRequestedPgn = llRequestedPgn | (CanJ1939RxFrame.CanData.part.CanJ1939Byte2 << 8);
                        llRequestedPgn = llRequestedPgn | CanJ1939RxFrame.CanData.part.CanJ1939Byte1;

                        if(llRequestedPgn == RESPONDPGN)
                        {
                            strCanTp.CanStatusFlags.RecievedPgnRequest = 1;
                            strCanTp.RequestedPgn = llRequestedPgn;
                        }
                        else
                        {

                        }
                        break;
        case 0xEB00 :

                        switch(lcCanPort)
                        {
                            case CANA :
                                        if((strCanTp.CanStatusFlags.SpecificInitReception == 1) || (strCanTp.CanStatusFlags.BamInitReception == 1))
                                        {
                                            liFrameNumber = CanJ1939RxFrame.CanData.part.CanJ1939Byte1 - 1;
                                            CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
                                            CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte2 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
                                            CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte3 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
                                            CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte4 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
                                            CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte5 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
                                            CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte6 = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
                                            CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte7 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
                                            CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte8 = CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
                                        }
                                        else
                                        {}
#ifdef DOZER_P_VER
#else
										/*added by Rajashekhar on 02.06.2023 */
										if(strCanTp.Pgn == 0xFECA && bDM1RxComplete == 0)
										{
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte1 = CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte1;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte2 = CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte2;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte3 = CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte3;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte4 = CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte4;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte5 = CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte5;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte6 = CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte6;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte7 = CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte7;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte8 = CanaRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte8;

											if(liFrameNumber == strCanTp.TotalFrame - 1)
											{
												bDM1RxComplete = 1;
												bSingleDm1Frame = 0;
												datalength = strCanTp.DataLength;

												gucSa = gucSourceAddress;

												dm1_process_start = 1;
												memset(&CanaRecieveMsgBuffer,0,sizeof(CanaRecieveMsgBuffer));
											}else{/**/}
										}
#endif

                                        if(strCanTp.CanStatusFlags.SpecificInitReception==1 && liFrameNumber >= strCanTp.TotalFrame - 1)
                                        {
                                            strCanTp.CanStatusFlags.TransmitEof = 1;
                                        }
                                        else if(strCanTp.CanStatusFlags.BamInitReception == 1 && liFrameNumber >= strCanTp.TotalFrame - 1)
                                        {
                                             memset(&strCanTp,0,sizeof(strCanTp));
                                             rx_complete = 1;
                                        }
                                        else
                                        {}

                                        break;
                            case CANB :
										if((strCanTp.CanStatusFlags.SpecificInitReception == 1) || (strCanTp.CanStatusFlags.BamInitReception == 1))
										{
											liFrameNumber = CanJ1939RxFrame.CanData.part.CanJ1939Byte1 - 1;
											CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte1 = CanJ1939RxFrame.CanData.part.CanJ1939Byte1;
											CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte2 = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;
											CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte3 = CanJ1939RxFrame.CanData.part.CanJ1939Byte3;
											CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte4 = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;
											CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte5 = CanJ1939RxFrame.CanData.part.CanJ1939Byte5;
											CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte6 = CanJ1939RxFrame.CanData.part.CanJ1939Byte6;
											CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte7 = CanJ1939RxFrame.CanData.part.CanJ1939Byte7;
											CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte8 = CanJ1939RxFrame.CanData.part.CanJ1939Byte8;
										}
										else
										{}
#ifdef DOZER_P_VER
#else
										/*added by Rajashekhar on 02.06.2023 */
										if(strCanTp.Pgn == 0xFECA && bDM1RxComplete == 0)
										{
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte1 = CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte1;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte2 = CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte2;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte3 = CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte3;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte4 = CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte4;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte5 = CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte5;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte6 = CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte6;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte7 = CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte7;
											DM1RecieveMsgBuffer[gucSourceAddress][liFrameNumber].byte.TpMsgByte8 = CanbRecieveMsgBuffer[liFrameNumber].byte.TpMsgByte8;

											if(liFrameNumber == strCanTp.TotalFrame - 1)
											{
												bDM1RxComplete = 1;
												bSingleDm1Frame = 0;
												datalength = strCanTp.DataLength;

												gucSa = gucSourceAddress;

												dm1_process_start = 1;
												memset(&CanbRecieveMsgBuffer,0,sizeof(CanbRecieveMsgBuffer));
											}else{/**/}
										}
#endif
										if(strCanTp.CanStatusFlags.SpecificInitReception==1 && liFrameNumber >= strCanTp.TotalFrame - 1)
										{
											noOfFramesReceived = strCanTp.TotalFrame - 1;

											if(sendLog == 0)
											{
												strCanTp.CanStatusFlags.TransmitEof = 1;
												strDataMonitorFlags.dataDownlodingStarted = 0;
											}
											else
											{
												sendLogSerially = 1;
											}

//											strCanTp.CanStatusFlags.TransmitEof = 1;

										}
										else if(strCanTp.CanStatusFlags.BamInitReception == 1 && liFrameNumber >= strCanTp.TotalFrame - 1)
										{
//											if(strCanTp.Pgn == 0xFECA)
//											{
//												bDM1RxComplete = 1;
//												gucSa = gucSourceAddress;
//											}
										}
										else
										{}
                                        break;
                            default :
                                        break;
                        }

                        break;
        case 0xEC00 :
                        /* Receive - BAM : Broadcast Announce Message Transport */
                        if(CanJ1939RxFrame.CanData.part.CanJ1939Byte1 == 0x20)
                        {
                            luiNumOfBytes = CanJ1939RxFrame.CanData.part.CanJ1939Byte3 << 8;
                            luiNumOfBytes = (luiNumOfBytes | CanJ1939RxFrame.CanData.part.CanJ1939Byte2);

                            luiNumOfFrames = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;

                            llPgnNo = CanJ1939RxFrame.CanData.part.CanJ1939Byte8 << 8;
                            llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte7)  << 8;
                            llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte6);

                            strCanTp.Pgn         = llPgnNo;
                            strCanTp.DataLength  = luiNumOfBytes;
                            strCanTp.TotalFrame  = luiNumOfFrames;

                            strCanTp.CanStatusFlags.CommunicationActive    = 1;
                            strCanTp.CanStatusFlags.BamInitReception       = 1;

                            if(llPgnNo == 0xF678)
                            {
                             	memset(&strDataDownloadFlags,	0,	sizeof(strDataDownloadFlags));
                            }

                            memset(&CanaRecieveMsgBuffer,0,sizeof(CanaRecieveMsgBuffer));
                        }
                        /* Received RTS : Request to Send */
                        else if(CanJ1939RxFrame.CanData.part.CanJ1939Byte1 == 0x10)
                        {
                            luiNumOfBytes = CanJ1939RxFrame.CanData.part.CanJ1939Byte3 << 8;
                            luiNumOfBytes = (luiNumOfBytes | CanJ1939RxFrame.CanData.part.CanJ1939Byte2);

                            luiNumOfFrames = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;

                            llPgnNo = CanJ1939RxFrame.CanData.part.CanJ1939Byte8 << 8;
                            llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte7)  << 8;
                            llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte6);

                            strCanTp.Pgn          = llPgnNo;
                            strCanTp.DataLength   = luiNumOfBytes;
                            strCanTp.TotalFrame   = luiNumOfFrames;

                            strCanTp.CanStatusFlags.RecievedRts = 1;

                            strDataMonitorFlags.dataDownlodingStarted = 1;

                            if(llPgnNo == 0xFF00)
                            {
//                             	memset(&CanDataReceiveFlags, 0, sizeof(CanDataReceiveFlags));

                            }
                            else if(llPgnNo == 0xFF01)
                            {
                             	strDataDownloadFlags.digitalError	= 1;
                            }
                            else if(llPgnNo == 0xFF02)
                            {
                             	strDataDownloadFlags.analogError	= 1;
                            }
                            else if(llPgnNo == 0xFF03)
                            {
                             	strDataDownloadFlags.digitalperiodic	= 1;
                            }
                            else if(llPgnNo == 0xFF04)
                            {
                             	strDataDownloadFlags.analogPeriodic	= 1;
                            }
							else if(llPgnNo == 0xFF05)
							{
								strDataDownloadFlags.digitalActiveError 	= 1;
							}
							else if(llPgnNo == 0xFF06)
							{
								strDataDownloadFlags.analogActiveError = 1;
							}
                            else
                            {

                            }

                        }
                        /* CTS - Clear to Send */
                        else if(CanJ1939RxFrame.CanData.part.CanJ1939Byte1 == 0x11)
                        {
                            if(CanJ1939RxFrame.CanData.part.CanJ1939Byte2 == 0x00)
                            {

                            }
                            else
                            {
                                strCanTp.FrameNumber = CanJ1939RxFrame.CanData.part.CanJ1939Byte3 - 1;
                                strCanTp.CtsFrames = strCanTp.FrameNumber + CanJ1939RxFrame.CanData.part.CanJ1939Byte2;

                                llPgnNo = CanJ1939RxFrame.CanData.part.CanJ1939Byte8 << 8;
                                llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte7)  << 8;
                                llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte6);

                                if(llPgnNo == strCanTp.Pgn)
                                {
                                    strCanTp.CanStatusFlags.RecievedCts = 1;
                                }
                                else
                                {}
                            }
                        }
                        /* End of Frame */
                        else if(CanJ1939RxFrame.CanData.part.CanJ1939Byte1 == 0x13)
                        {
                            liMessageSize = CanJ1939RxFrame.CanData.part.CanJ1939Byte3 << 8;
                            liMessageSize = (liMessageSize | CanJ1939RxFrame.CanData.part.CanJ1939Byte2);

                            liPacketSize  = CanJ1939RxFrame.CanData.part.CanJ1939Byte4;

                            llPgnNo = CanJ1939RxFrame.CanData.part.CanJ1939Byte8 << 8;
                            llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte7)  << 8;
                            llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte6);

                            if(llPgnNo == strCanTp.Pgn)
                            {
                                strCanTp.CanStatusFlags.RecievedEof = 1;
                            }
                            else
                            {}
                        }
                        /* Connection abort */
                        else if(CanJ1939RxFrame.CanData.part.CanJ1939Byte1 == 0xFF)
                        {
                            strCanTp.CtsFrames = CanJ1939RxFrame.CanData.part.CanJ1939Byte2;

                            liConnAbortReason = CanaJ1939RxFrame.CanData.part.CanJ1939Byte3 << 8;
                            liConnAbortReason = (liConnAbortReason | CanaJ1939RxFrame.CanData.part.CanJ1939Byte2);

                            llPgnNo = CanJ1939RxFrame.CanData.part.CanJ1939Byte8 << 8;
                            llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte7)  << 8;
                            llPgnNo = (llPgnNo | CanJ1939RxFrame.CanData.part.CanJ1939Byte6);

                            if(llPgnNo == strCanTp.Pgn)
                            {
                                strCanTp.CanStatusFlags.RecievedAbort = 1;
                            }
                            else
                            {}
                        }
                        else
                        {}
                        break;
        default:

        				break;
    }

    switch(lcCanPort)
    {
        case CANA :
                    strCanaTp = strCanTp;
                    CanaJ1939RxFrame = CanJ1939RxFrame;
                    break;
        case CANB :
                    strCanbTp = strCanTp;
                    CanbJ1939RxFrame = CanJ1939RxFrame;
                    break;
        default :
                    break;
    }
}

void funcExtractCanRecievedData(unsigned char lcCanPort, uint32_t llJ1939RxFlags)
{
	strCanFlag.Recieve.all = 0x0000000;

	strCanFlag.Recieve.all = llJ1939RxFlags;

	if(strCanFlag.Recieve.all != 0)
	{
		if(strCanFlag.Recieve.bit.Mailbox1 == 1 && dm1_process_start != 1)
		{
			strCanFlag.Recieve.bit.Mailbox1 = 0;
			funcReadMailbox(lcCanPort, 1);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox2 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox2 = 0;
			funcReadMailbox(lcCanPort, 2);
		}
		else
		{}
		if(strCanFlag.Recieve.bit.Mailbox3 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox3 = 0;
			funcReadMailbox(lcCanPort, 3);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox4 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox4 = 0;
			funcReadMailbox(lcCanPort, 4);
		}
		else
		{}
		if(strCanFlag.Recieve.bit.Mailbox5 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox5 = 0;
			funcReadMailbox(lcCanPort, 5);
		}
		else
		{}
		if(strCanFlag.Recieve.bit.Mailbox6 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox6 = 0;
			funcReadMailbox(lcCanPort, 6);
		}
		else
		{}
		if(strCanFlag.Recieve.bit.Mailbox7 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox7 = 0;
			funcReadMailbox(lcCanPort, 7);
		}
		else
		{}
		if(strCanFlag.Recieve.bit.Mailbox8 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox8 = 0;
			funcReadMailbox(lcCanPort, 8);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox9 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox9 = 0;
			funcReadMailbox(lcCanPort, 9);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox10 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox10 = 0;
			funcReadMailbox(lcCanPort, 10);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox11 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox11=0;
			funcReadMailbox(lcCanPort, 11);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox12 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox12=0;
			funcReadMailbox(lcCanPort, 12);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox13 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox13=0;
			funcReadMailbox(lcCanPort, 13);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox14 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox14=0;
			funcReadMailbox(lcCanPort, 14);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox15 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox15=0;
			funcReadMailbox(lcCanPort, 15);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox16 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox16=0;
			funcReadMailbox(lcCanPort, 16);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox17 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox17=0;
			funcReadMailbox(lcCanPort, 17);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox18 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox18=0;
			funcReadMailbox(lcCanPort, 18);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox19 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox19=0;
			funcReadMailbox(lcCanPort, 19);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox20 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox20=0;
			funcReadMailbox(lcCanPort, 20);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox21 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox21=0;
			funcReadMailbox(lcCanPort, 21);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox22 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox22=0;
			funcReadMailbox(lcCanPort, 22);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox23 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox23=0;
			funcReadMailbox(lcCanPort, 23);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox24 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox24=0;
			funcReadMailbox(lcCanPort, 24);
		}
		else
		{

		}
		if(strCanFlag.Recieve.bit.Mailbox25 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox25=0;
			funcReadMailbox(lcCanPort, 25);
		}
		else
		{

		}
		if(strCanFlag.Recieve.bit.Mailbox26 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox26=0;
			funcReadMailbox(lcCanPort, 26);
		}
		else
		{

		}
		if(strCanFlag.Recieve.bit.Mailbox27 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox27=0;
			funcReadMailbox(lcCanPort, 27);
		}
		else
		{

		}
		if(strCanFlag.Recieve.bit.Mailbox28 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox28=0;
			funcReadMailbox(lcCanPort, 28);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox29 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox29=0;
			funcReadMailbox(lcCanPort, 29);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox30 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox30=0;
			funcReadMailbox(lcCanPort, 30);
		}
		else
		{}

		if(strCanFlag.Recieve.bit.Mailbox31 == 1)
		{
			strCanFlag.Recieve.bit.Mailbox31=0;
			funcReadMailbox(lcCanPort, 31);
		}
		else
		{}
	}
	else
	{}
}

void funcTransmitCanFrame(void)
{
    memset(&strCanaTx,0,sizeof(strCanaTx));
    funcSelectCanFrameToTransmit();

    if(strCanaTx.flMs10_1 == TRUE)
    {

    }
    else
    {

    }
    if(strCanaTx.flMs10_2 == TRUE)
    {

    }
    else
    {

    }
    if(strCanaTx.flMs10_3 == TRUE)
    {
#ifdef DOZER_P_VER
    	send_E_N_G_SPD();
#else
    	send_ParkBrkSw_and_VehicleSpd();
#endif
    }
    else
    {

    }
    if(strCanaTx.flMs10_4 == TRUE)
    {
    }
    else
    {

    }
    if(strCanaTx.flMs20_1 == TRUE)
    {
    	cntr_1s_1++;
    	switch(cntr_1s_1)
    	{
		#ifdef DOZER_P_VER
			case 1:	send_TOFC();;
				break;
			case 2:send_ECT_EOT();//send_EoT();
				break;
			case 3:send_ToP_ToT();
				break;
			case 4:send_FueL_lvl();
				break;
			case 5://send_RboT();
				break;
		#else
			case 1:
				break;
			case 2://send_EoT();
				break;
			case 3:send_ToP_ToT();
				break;
			case 4:send_FueL_lvl();
				break;
			case 5://send_RboT();
				break;
		#endif

			default:
				break;
    	}
		if(cntr_1s_1 >= 5)
		{cntr_1s_1 = 0;}
    }
    else
    {}

    if(strCanaTx.flMs20_2 == TRUE)
    {
    	cntr_1s_2++;
    	switch(cntr_1s_2)
    	{
			case 1:
				break;
			case 2:
				break;
			case 3://send_HydOilFilClog();
				break;
			case 4://send_SteerAxlLubePress();
				break;
			case 5:send_SeatBeltSw();
				break;
			default:
				break;
    	}
		if(cntr_1s_2 >= 5)
		{cntr_1s_2 = 0;}
    }
    else
    {}

    if(strCanaTx.flMs20_3 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs20_4 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs50_1 == TRUE)
    {
#ifdef DOZER_P_VER
#else
    	send_AirFilClog();
#endif
    }
    else
    {}


    if(strCanaTx.flMs50_2 == TRUE)
    {
    	send_ECL_EOP();
    }
    else
    {}

    if(strCanaTx.flMs50_3 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs50_4 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs50_5 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs100_1 == TRUE)
    {
#ifdef DOZER_P_VER
#else
    	sendEngHrsRequest1();
#endif
    }
    else
    {}

    if(strCanaTx.flMs100_2 == TRUE)
    {
#ifdef DOZER_P_VER
#else
    	sendEngHrsRequest2();
#endif
    }
    else
    {}

    if(strCanaTx.flMs100_3 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs100_4 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs100_5 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs100_6 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs200_1 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs200_2 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs200_3 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs200_4 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs250_1 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs250_2 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs250_3 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs500_1 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs500_2 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs500_3 == TRUE)
    {
    }
    else
    {}

    if(strCanaTx.flMs1000_1 == TRUE)
    {
//    	Frame1.MailboxNumber = 1;
//    	Frame1.FrameId		 = 0x0CEA0709;
//    	Frame1.FramePriority = 6;
//    	Frame1.FrameData	 = 0x1122334455667788;
//    	funcCanTransmitMailbox(CANA, Frame1);
    }
    else
    {}

    if(strCanaTx.flMs1000_2 == TRUE)
    {
    }
    else
    {}
}

struct CanMsgStatusTp funcTransmitCanTPFrame(unsigned char lcCanPort, struct CanMsgStatusTp strCanTp)
{
    if(strCanTp.CanStatusFlags.BroadcastInitilize == 1)
    {
        if(strCanTp.CanStatusFlags.BamInitTransmit == 1)
        {
            if((strCanTp.DataLength % 7) != 0)
            {
                strCanTp.TotalFrame = (strCanTp.DataLength / 7) + 1;
            }
            else
            {
                strCanTp.TotalFrame = strCanTp.DataLength / 7;
            }

            CanMsgByte.byte.MsgByte1    =   32;
            CanMsgByte.byte.MsgByte2    =   strCanTp.DataLength;
            CanMsgByte.byte.MsgByte3    =   strCanTp.DataLength >> 8;
            CanMsgByte.byte.MsgByte4    =   strCanTp.TotalFrame;
            CanMsgByte.byte.MsgByte5    =   255;
            CanMsgByte.byte.MsgByte6    =   strCanTp.Pgn;
            CanMsgByte.byte.MsgByte7    =   strCanTp.Pgn >> 8;
            CanMsgByte.byte.MsgByte8    =   strCanTp.Pgn >> 16;

            strCanTp.CanStatusFlags.BamInitTransmit    =   0;
            strCanTp.CanStatusFlags.DataTransmit       =   1;
            strCanTp.DataLength                        =   0;

            TpFrame.FrameId              = 0x0CEC00FF;
            TpFrame.FrameData            = CanMsgByte.all;

            funcCanTransmitMailbox(lcCanPort, TpFrame);

        }
        else if(strCanTp.CanStatusFlags.DataTransmit == 1)
        {
            TpFrame.FrameId              = 0x0CEB00FF;
            TpFrame.FramePriority        = 3;

            switch(lcCanPort)
            {
            	case CANA :
							CanaTransmitMsgBuffer[strCanTp.FrameNumber].byte.TpMsgByte1 = strCanTp.FrameNumber + 1;
							TpFrame.FrameData                               = CanaTransmitMsgBuffer[strCanTp.FrameNumber].all;
            				break;
            	case CANB :
							CanbTransmitMsgBuffer[strCanTp.FrameNumber].byte.TpMsgByte1 = strCanTp.FrameNumber + 1;
							TpFrame.FrameData                               = CanbTransmitMsgBuffer[strCanTp.FrameNumber].all;
							break;
            	default :
            				break;
            }

            funcCanTransmitMailbox(lcCanPort, TpFrame);
            strCanTp.FrameNumber++;

            if(strCanTp.FrameNumber >= strCanTp.TotalFrame)
            {
                memset(&strCanTp,0,sizeof(strCanTp));
            }
            else
            {}

        }
        else
        {}
    }
    else if(strCanTp.CanStatusFlags.SpecificInitilize == 1)
    {
        if(strCanTp.CanStatusFlags.TransmitRts == 1)
        {
            if((strCanTp.DataLength % 7) != 0)
            {
                strCanTp.TotalFrame = (strCanTp.DataLength / 7) + 1;
            }
            else
            {
                strCanTp.TotalFrame = strCanTp.DataLength / 7;
            }

            CanMsgByte.byte.MsgByte1    =   16;
            CanMsgByte.byte.MsgByte2    =   strCanTp.DataLength;
            CanMsgByte.byte.MsgByte3    =   strCanTp.DataLength >> 8;
            CanMsgByte.byte.MsgByte4    =   strCanTp.TotalFrame;
            CanMsgByte.byte.MsgByte5    =   255;
            CanMsgByte.byte.MsgByte6    =   strCanTp.Pgn;
            CanMsgByte.byte.MsgByte7    =   strCanTp.Pgn >> 8;
            CanMsgByte.byte.MsgByte8    =   strCanTp.Pgn >> 16;

            strCanTp.CanStatusFlags.TransmitRts        =   0;
            strCanTp.CanStatusFlags.DataTransmit       =   1;
            strCanTp.FrameNumber        =   0;

            TpFrame.FrameId             = 0x0CEC00FF;
            TpFrame.FrameData           = CanMsgByte.all;

            funcCanTransmitMailbox(lcCanPort, TpFrame);
        }
        else if(strCanTp.CanStatusFlags.RecievedCts == 1)
        {
            TpFrame.FrameId              = 0x0CEB00FF;

            switch(lcCanPort)
            {
            	case CANA :
							CanaTransmitMsgBuffer[strCanTp.FrameNumber].byte.TpMsgByte1 = strCanTp.FrameNumber + 1;
							TpFrame.FrameData                               = CanaTransmitMsgBuffer[strCanTp.FrameNumber].all;
            				break;
            	case CANB :
							CanbTransmitMsgBuffer[strCanTp.FrameNumber].byte.TpMsgByte1 = strCanTp.FrameNumber + 1;
							TpFrame.FrameData                               = CanbTransmitMsgBuffer[strCanTp.FrameNumber].all;
							break;
            	default :
            				break;
            }

            funcCanTransmitMailbox(lcCanPort, TpFrame);

            strCanTp.FrameNumber++;

            if(strCanTp.FrameNumber > strCanTp.TotalFrame)
            {
                strCanTp.CanStatusFlags.TransmitRts         =   0;
                strCanTp.CanStatusFlags.DataTransmit        =   0;
                strCanTp.FrameNumber                        =   0;
                strCanTp.CanStatusFlags.RecievedCts         =   0;
            }
            else if(strCanTp.FrameNumber == strCanTp.CtsFrames)
            {
                strCanTp.CanStatusFlags.RecievedCts         =   0;
            }
            else
            {}
        }
        else if(strCanTp.CanStatusFlags.RecievedEof == 1)
        {
            memset(&strCanTp,0,sizeof(strCanTp));
        }
        else if(strCanTp.CanStatusFlags.RecievedAbort == 1)
        {
            memset(&strCanTp,0,sizeof(strCanTp));
            strCanTp.CanStatusFlags.TransmissionFail        =   1;
        }
        else
        {}
    }
    /* CTS Transmit Function */
    else if(strCanTp.CanStatusFlags.RecievedRts == 1)
    {
        CanMsgByte.byte.MsgByte1    =   17;
        CanMsgByte.byte.MsgByte2    =   strCanTp.TotalFrame;
        CanMsgByte.byte.MsgByte3    =   1;
        CanMsgByte.byte.MsgByte4    =   255;
        CanMsgByte.byte.MsgByte5    =   255;
        CanMsgByte.byte.MsgByte6    =   strCanTp.Pgn;
        CanMsgByte.byte.MsgByte7    =   strCanTp.Pgn >> 8;
        CanMsgByte.byte.MsgByte8    =   strCanTp.Pgn >> 16;

        TpFrame.FrameId              = 0x0CEC00FF;
        TpFrame.FrameData            = CanMsgByte.all;

        funcCanTransmitMailbox(lcCanPort, TpFrame);

        strCanTp.CanStatusFlags.RecievedRts          = 0;
        strCanTp.CanStatusFlags.DataTransmit         = 1;
        strCanTp.CanStatusFlags.SpecificInitReception= 1;
//        strCanTp.DataLength                          = 0;
    }
    else if(strCanTp.CanStatusFlags.TransmitEof == 1)
    {
        CanMsgByte.byte.MsgByte1    =   19;
        CanMsgByte.byte.MsgByte2    =   strCanTp.DataLength;
        CanMsgByte.byte.MsgByte3    =   strCanTp.DataLength >> 8;
        CanMsgByte.byte.MsgByte4    =   strCanTp.TotalFrame;
        CanMsgByte.byte.MsgByte5    =   255;
        CanMsgByte.byte.MsgByte6    =   strCanTp.Pgn;
        CanMsgByte.byte.MsgByte7    =   strCanTp.Pgn >> 8;
        CanMsgByte.byte.MsgByte8    =   strCanTp.Pgn >> 16;

        TpFrame.FrameId              = 0x0CEC00FF;
        TpFrame.FramePriority        = 3;
        TpFrame.FrameData            = CanMsgByte.all;

        funcCanTransmitMailbox(lcCanPort, TpFrame);

        memset(&strCanTp,0,sizeof(strCanTp));
    }
    return(strCanTp);
}

void funcInitiateTransportProtocol(uint16_t liCanPort, uint16_t liCommunicationType, uint16_t liMessageLength, uint32_t liMessagePgn)
{
    struct CanMsgStatusTp strCanTp;

    switch(liCanPort)
    {
        case CANA : strCanTp = strCanaTp;
                    break;
        case CANB : strCanTp = strCanbTp;
                    break;
        default :
                    break;
    }

    if(strCanTp.CanStatusFlags.CommunicationActive != 1)
    {
        switch(liCommunicationType)
        {
            case BROADCAST_MSG:
                                strCanTp.CanStatusFlags.BroadcastInitilize     = 1;
                                strCanTp.CanStatusFlags.BamInitTransmit        = 1;
                                strCanTp.DataLength                            = liMessageLength;
                                strCanTp.Pgn                                   = liMessagePgn;
                                strCanTp.CanStatusFlags.CommunicationActive    = 1;
                                break;
            case SPECIFIC_MSG:
                                strCanTp.CanStatusFlags.SpecificInitilize      = 1;
                                strCanTp.CanStatusFlags.TransmitRts            = 1;
                                strCanTp.DataLength                            = liMessageLength;
                                strCanTp.Pgn                                   = liMessagePgn;
                                strCanTp.CanStatusFlags.CommunicationActive    = 1;
                                break;
            default:
                                break;
        }
    }
    else
    {}

    switch(liCanPort)
    {
        case CANA : strCanaTp = strCanTp;
                    break;
        case CANB : strCanbTp = strCanTp;
                    break;
        default :
                    break;
    }
}

void CanaFrameConfigure(void)
{
    // 10ms 1
    Frame1.FrameId = 0x0CFFFF03;
    Frame1.FramePriority = 3;
    Frame1.MailboxNumber = 7;
    Frame1.FrameData    = 0x1357924680ABCDEF;
    // 10ms 2
    Frame2.FrameId = 0x0CF00103;
    Frame2.FramePriority = 3;
    Frame2.MailboxNumber = 1;
    Frame2.FrameData    = 0x0000000000000001;
    // 10ms 3
    Frame3.FrameId = 0x0CF00203;
    Frame3.FramePriority = 3;
    Frame3.MailboxNumber = 2;
    Frame3.FrameData    = 0x0000000000000002;
    // 10ms 4
    Frame4.FrameId = 0x0CF00303;
    Frame4.FramePriority = 3;
    Frame4.MailboxNumber = 3;
    Frame4.FrameData    = 0x0000000000000003;
    // 20ms 1
    Frame5.FrameId = 0x0CF00403;
    Frame5.FramePriority = 3;
    Frame5.MailboxNumber = 4;
    Frame5.FrameData    = 0x0000000000000004;
    // 20ms 2
    Frame6.FrameId = 0x0CF00503;
    Frame6.FramePriority = 3;
    Frame6.MailboxNumber = 4;
    Frame6.FrameData    = 0x0000000000000005;
    // 20ms 3
    Frame7.FrameId = 0x0CF00603;
    Frame7.FramePriority = 3;
    Frame7.MailboxNumber = 5;
    Frame7.FrameData    = 0x0000000000000006;
    // 20ms 4
    Frame8.FrameId = 0x0CF00703;
    Frame8.FramePriority = 3;
    Frame8.MailboxNumber = 5;
    Frame8.FrameData    = 0x0000000000000007;
    // 50ms 1
    TpFrame.FrameId = 0x0CF00803;
    TpFrame.FramePriority = 3;
    TpFrame.MailboxNumber = 9;
    TpFrame.FrameData    = 0x0000000000000008;
    // 50ms 2
    Frame10.FrameId = 0x0CF00903;
    Frame10.FramePriority = 3;
    Frame10.MailboxNumber = 6;
    Frame10.FrameData    = 0x0000000000000009;
    // 50ms 3
    Frame11.FrameId = 0x0CF00A03;
    Frame11.FramePriority = 3;
    Frame11.MailboxNumber = 6;
    Frame11.FrameData    = 0x000000000000000A;
    // 50ms 4
    Frame12.FrameId = 0x0CF00B03;
    Frame12.FramePriority = 3;
    Frame12.MailboxNumber = 6;
    Frame12.FrameData    = 0x000000000000000B;
    // 50ms 5
    Frame13.FrameId = 0x0CF00C03;
    Frame13.FramePriority = 3;
    Frame13.MailboxNumber = 6;
    Frame13.FrameData    = 0x000000000000000C;
    // 100ms 1
    Frame14.FrameId = 0x0CF01003;
    Frame14.FramePriority = 3;
    Frame14.MailboxNumber = 7;
    Frame14.FrameData    = 0x0000000000000010;
    // 100ms 2
    Frame15.FrameId = 0x0CF01103;
    Frame15.FramePriority = 3;
    Frame15.MailboxNumber = 7;
    Frame15.FrameData    = 0x0000000000000011;
    // 100ms 3
    Frame16.FrameId = 0x0CF01203;
    Frame16.FramePriority = 3;
    Frame16.MailboxNumber = 7;
    Frame16.FrameData    = 0x0000000000000012;
    // 100ms 4
    Frame17.FrameId = 0x0CF01303;
    Frame17.FramePriority = 3;
    Frame17.MailboxNumber = 7;
    Frame17.FrameData    = 0x0000000000000013;
    // 100ms 5
    Frame18.FrameId = 0x0CF01403;
    Frame18.FramePriority = 3;
    Frame18.MailboxNumber = 7;
    Frame18.FrameData    = 0x0000000000000014;
    // 100ms 6
    Frame19.FrameId = 0x0CF01503;
    Frame19.FramePriority = 3;
    Frame19.MailboxNumber = 7;
    Frame19.FrameData    = 0x0000000000000015;
    // 200ms 1
    Frame20.FrameId = 0x0CF01603;
    Frame20.FramePriority = 3;
    Frame20.MailboxNumber = 7;
    Frame20.FrameData    = 0x0000000000000016;
    // 200ms 2
    Frame21.FrameId = 0x0CF01703;
    Frame21.FramePriority = 3;
    Frame21.MailboxNumber = 7;
    Frame21.FrameData    = 0x0000000000000017;
    // 200ms 3
    Frame22.FrameId = 0x0CF01803;
    Frame22.FramePriority = 3;
    Frame22.MailboxNumber = 7;
    Frame22.FrameData    = 0x0000000000000018;
    // 200ms 4
    Frame23.FrameId = 0x0CF01903;
    Frame23.FramePriority = 3;
    Frame23.MailboxNumber = 7;
    Frame23.FrameData    = 0x0000000000000019;
    // 250ms 1
    Frame24.FrameId = 0x0CF01A03;
    Frame24.FramePriority = 3;
    Frame24.MailboxNumber = 7;
    Frame24.FrameData    = 0x000000000000001A;
    // 250ms 2
    Frame25.FrameId = 0x0CF01B03;
    Frame25.FramePriority = 3;
    Frame25.MailboxNumber = 7;
    Frame25.FrameData    = 0x000000000000001B;
    // 250ms 3
    Frame26.FrameId = 0x0CF01C03;
    Frame26.FramePriority = 3;
    Frame26.MailboxNumber = 7;
    Frame26.FrameData    = 0x000000000000001C;
    // 500ms 1
    Frame27.FrameId = 0x0CF01D03;
    Frame27.FramePriority = 3;
    Frame27.MailboxNumber = 7;
    Frame27.FrameData    = 0x000000000000001A;
    // 500ms 2
    Frame28.FrameId = 0x0CF01E03;
    Frame28.FramePriority = 3;
    Frame28.MailboxNumber = 7;
    Frame28.FrameData    = 0x000000000000001B;
    // 500ms 3
    Frame29.FrameId = 0x0CF01F03;
    Frame29.FramePriority = 3;
    Frame29.MailboxNumber = 7;
    Frame29.FrameData    = 0x000000000000001C;
    // 1000ms 1
    Frame30.FrameId = 0x0CF00D03;
    Frame30.FramePriority = 3;
    Frame30.MailboxNumber = 7;
    Frame30.FrameData    = 0x000000000000000D;
    // 1000ms 2
    Frame31.FrameId = 0x0CF00E03;
    Frame31.FramePriority = 3;
    Frame31.MailboxNumber = 7;
    Frame31.FrameData    = 0x000000000000000E;
}

void funcSelectCanFrameToTransmit(void)
{
    giItterateTree = giItterateTree + 1;
    if(giItterateTree > 10)
    {
        giItterateTree = 1;
    }
    else
    {}

    switch(giItterateTree)
    {
        case 0x01 :
                    funcCheckItterateBranchA1();
                    break;
        case 0x02 :
                    funcCheckItterateBranchA2();
                    break;
        case 0x03 :
                    funcCheckItterateBranchA3();
                    break;
        case 0x04 :
                    funcCheckItterateBranchA4();
                    break;
        case 0x05 :
                    funcCheckItterateBranchA5();
                    break;
        case 0x06 :
                    funcCheckItterateBranchA6();
                    break;
        case 0x07 :
                    funcCheckItterateBranchA7();
                    break;
        case 0x08 :
                    funcCheckItterateBranchA8();
                    break;
        case 0x09 :
                    //funcCheckItterateBranchA9();
                    break;
        case 0x0A :
                    //funcCheckItterateBranchA10();
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA1(void)
{
    strCanaTx.flMs10_1 = 1;
}

void funcCheckItterateBranchA2(void)
{
    strCanaTx.flMs10_2 = 1;
}

void funcCheckItterateBranchA3(void)
{
    strCanaTx.flMs10_3 = 1;
}

void funcCheckItterateBranchA4(void)
{
    strCanaTx.flMs10_4 = 1;
}

void funcCheckItterateBranchA5(void)
{
    giItterateBranchA5 = giItterateBranchA5 + 1;
    if(giItterateBranchA5 > 2)
    {
        giItterateBranchA5 = 1;
    }
    else
    {}

    switch(giItterateBranchA5)
    {
        case 0x01 :
                    strCanaTx.flMs20_1 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs20_2 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA6(void)
{
    giItterateBranchA6 = giItterateBranchA6 + 1;
    if(giItterateBranchA6 > 2)
    {
        giItterateBranchA6 = 1;
    }
    else
    {}

    switch(giItterateBranchA6)
    {
        case 0x01 :
                    strCanaTx.flMs20_3 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs20_4 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA7(void)
{
    giItterateBranchA7 = giItterateBranchA7 + 1;
    if(giItterateBranchA7 > 5)
    {
        giItterateBranchA7 = 1;
    }
    else
    {}

    switch(giItterateBranchA7)
    {
        case 0x01 :
                    strCanaTx.flMs50_1 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs50_2 = 1;
                    break;
        case 0x03 :
                    strCanaTx.flMs50_3 = 1;
                    break;
        case 0x04 :
                    strCanaTx.flMs50_4 = 1;
                    break;
        case 0x05 :
                    strCanaTx.flMs50_5 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8(void)
{
    giItterateBranchA8 = giItterateBranchA8 + 1;
    if(giItterateBranchA8 > 5)
    {
        giItterateBranchA8 = 1;
    }
    else
    {}

    switch(giItterateBranchA8)
    {
        case 0x01 :
                    funcCheckItterateBranchA8B1();
                    break;
        case 0x02 :
                    funcCheckItterateBranchA8B2();
                    break;
        case 0x03 :
                    funcCheckItterateBranchA8B3();
                    break;
        case 0x04 :
                    funcCheckItterateBranchA8B4();
                    break;
        case 0x05 :
                    funcCheckItterateBranchA8B5();
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B1(void)
{
    giItterateBranchA8B1 = giItterateBranchA8B1 + 1;
    if(giItterateBranchA8B1 > 2)
    {
        giItterateBranchA8B1 = 1;
    }
    else
    {}

    switch(giItterateBranchA8B1)
    {
        case 0x01 :
                    strCanaTx.flMs100_1 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs100_2 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B2(void)
{
    giItterateBranchA8B2 = giItterateBranchA8B2 + 1;
    if(giItterateBranchA8B2 > 2)
    {
        giItterateBranchA8B2 = 1;
    }
    else
    {}

    switch(giItterateBranchA8B2)
    {
        case 0x01 :
                    strCanaTx.flMs100_3 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs100_4 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B3(void)
{
    giItterateBranchA8B3 = giItterateBranchA8B3 + 1;
    if(giItterateBranchA8B3 > 2)
    {
        giItterateBranchA8B3 = 1;
    }
    else
    {}

    switch(giItterateBranchA8B3)
    {
        case 0x01 :
                    strCanaTx.flMs100_5 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs100_6 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B4(void)
{
    giItterateBranchA8B4 = giItterateBranchA8B4 + 1;
    if(giItterateBranchA8B4 > 2)
    {
        giItterateBranchA8B4 = 1;
    }
    else
    {}

    switch(giItterateBranchA8B4)
    {
        case 0x01 :
                    funcCheckItterateBranchA8B4C1();
                    break;
        case 0x02 :
                    funcCheckItterateBranchA8B4C2();
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B5(void)
{
    giItterateBranchA8B5 = giItterateBranchA8B5 + 1;
    if(giItterateBranchA8B5 > 5)
    {
        giItterateBranchA8B5 = 1;
    }
    else
    {

    }
    switch(giItterateBranchA8B5)
    {
        case 0x01 :
                    funcCheckItterateBranchA8B5C1();
                    break;
        case 0x02 :
                    funcCheckItterateBranchA8B5C2();
                    break;
        case 0x03 :
                    funcCheckItterateBranchA8B5C3();
                    break;
        case 0x04 :
                    funcCheckItterateBranchA8B5C4();
                    break;
        case 0x05 :
                    funcCheckItterateBranchA8B5C5();
                    break;
        default :
                    break;

    }

}

void funcCheckItterateBranchA8B4C1(void)
{
    giItterateBranchA8B4C1 = giItterateBranchA8B4C1 + 1;
    if(giItterateBranchA8B4C1 > 2)
    {
        giItterateBranchA8B4C1 = 1;
    }
    else
    {}

    switch(giItterateBranchA8B3C1)
    {
        case 0x01 :
                    strCanaTx.flMs200_1 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs200_2 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B4C2(void)
{
    giItterateBranchA8B4C2 = giItterateBranchA8B4C2 + 1;
    if(giItterateBranchA8B4C2 > 2)
    {
        giItterateBranchA8B4C2 = 1;
    }
    else
    {}

    switch(giItterateBranchA8B3C2)
    {
        case 0x01 :
                    strCanaTx.flMs200_3 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs200_4 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B5C1(void)
{
    strCanaTx.flMs250_1 = 1;
}

void funcCheckItterateBranchA8B5C2(void)
{
    strCanaTx.flMs250_2 = 1;
}

void funcCheckItterateBranchA8B5C3(void)
{
    strCanaTx.flMs250_3 = 1;
}

void funcCheckItterateBranchA8B5C4(void)
{
    giItterateBranchA8B5C4 = giItterateBranchA8B5C4 + 1;
    if(giItterateBranchA8B5C4 > 2)
    {
        giItterateBranchA8B5C4 = 1;
    }
    else
    {

    }
    switch(giItterateBranchA8B5C4)
    {
        case 0x01 :
                    strCanaTx.flMs500_1 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs500_2 = 1;
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B5C5(void)
{
    giItterateBranchA8B5C5 = giItterateBranchA8B5C5 + 1;
    if(giItterateBranchA8B5C5 > 2)
    {
        giItterateBranchA8B5C5 = 1;
    }
    else
    {}

    switch(giItterateBranchA8B5C5)
    {
        case 0x01 :
                    strCanaTx.flMs500_3 = 1;
                    break;
        case 0x02 :
                    funcCheckItterateBranchA8B5C5D1();
                    break;
        default :
                    break;
    }
}

void funcCheckItterateBranchA8B5C5D1(void)
{
    giItterateBranchA8B5C5D1 = giItterateBranchA8B5C5D1 + 1;
    if(giItterateBranchA8B5C5D1 > 2)
    {
        giItterateBranchA8B5C5D1 = 1;
    }
    else
    {}

    switch(giItterateBranchA8B5C5D1)
    {
        case 0x01 :
                    strCanaTx.flMs1000_1 = 1;
                    break;
        case 0x02 :
                    strCanaTx.flMs1000_2 = 1;
                    break;
        default :
                    break;
    }
}

void funcCanTransmitMailbox(unsigned char lcCanPort, struct CanMessage strTxCanFrame)
{
	uint32_t llCanFlagTxFlag = 0;

//	FLEXCAN_SetTxMbConfig(CAN2, strTxCanFrame.MailboxNumber, true);
	txXfer.frame = &frame;
	txXfer.frame->id 		= FLEXCAN_ID_EXT(strTxCanFrame.FrameId);
	txXfer.frame->format 	= (uint8_t)kFLEXCAN_FrameFormatExtend;
	txXfer.frame->type		= (uint8_t)kFLEXCAN_FrameTypeData;
	txXfer.frame->length	= (uint8_t)DLC;
	txXfer.mbIdx 			= (uint8_t)strTxCanFrame.MailboxNumber;

	txXfer.frame->dataWord0 = strTxCanFrame.FrameData >> 32;
	txXfer.frame->dataWord1 = strTxCanFrame.FrameData;

//	txXfer.frame = &frame;

//	switch(lcCanPort)
//	{
//		case CANA :
//					(void)FLEXCAN_TransferSendNonBlocking(CAN1, &flexcanHandle, &txXfer);
//					while (glCanaFlagTxFlag != strTxCanFrame.MailboxNumber);
//					glCanaFlagTxFlag = 0;
//					break;
//		case CANB :
//					glCanbFlagTxFlag = 0;
//					(void)FLEXCAN_TransferSendNonBlocking(CAN2, &flexcanHandle, &txXfer);
//					while (glCanbFlagTxFlag == 0);
//					glCanbFlagTxFlag = 0;
//					break;
//		default :
//					break;
//	}

	switch(lcCanPort)
	{
		case CANA :
					/*COMMENTED BY RAJASHEKHAR 20231115*/
//					(void)FLEXCAN_TransferSendNonBlocking(CAN1, &flexcanHandle, &txXfer);
//					while (glCanaFlagTxFlag != strTxCanFrame.MailboxNumber);
//					glCanaFlagTxFlag = 0;

					glCanaFlagTxFlag = 0;
					CANAStartTimer=1;
					(void)FLEXCAN_TransferSendNonBlocking(CAN1, &flexcanHandle, &txXfer);
					while (glCanaFlagTxFlag == 0 && CANATimeout==0);
					CANATimeoutCounter=0;
					CANAStartTimer=0;
					CANATimeout=0;
					glCanaFlagTxFlag = 0;
					break;
		case CANB :
					glCanbFlagTxFlag = 0;
					CANBStartTimer=1;
					(void)FLEXCAN_TransferSendNonBlocking(CAN2, &flexcanHandle, &txXfer);
					while (glCanbFlagTxFlag == 0 && CANBTimeout==0);
					CANBTimeoutCounter=0;
					CANBStartTimer=0;
					CANBTimeout=0;
					glCanbFlagTxFlag = 0;
					break;
		default :
					break;
	}
}

void MailBoxConfiguration(unsigned char lcCanPort, uint16_t liMailboxNo, unsigned char lcMbDirection, uint32_t llMessageId, uint32_t llMaskId)
{
	flexcan_rx_mb_config_t mbConfig;

	switch(lcMbDirection)
	{
		case TRANSMIT :
							switch(lcCanPort)
							{
								case CANA :
											FLEXCAN_SetTxMbConfig(CAN1, liMailboxNo, true);
											break;
								case CANB :
											FLEXCAN_SetTxMbConfig(CAN2, liMailboxNo, true);
											break;
								default :
											break;
							}
							break;
		case TRANSMIT_MUX :
							switch(lcCanPort)
							{
								case CANA :
											FLEXCAN_SetTxMbConfig(CAN1, liMailboxNo, true);
											break;
								case CANB :
											FLEXCAN_SetTxMbConfig(CAN2, liMailboxNo, true);
											break;
								default :
											break;
							}
							break;
		case RECIEVE :
							switch(lcCanPort)
							{
								case CANA :
											mbConfig.format = kFLEXCAN_FrameFormatExtend;
											mbConfig.type   = kFLEXCAN_FrameTypeRemote;//kFLEXCAN_FrameTypeData;
											mbConfig.id     = FLEXCAN_ID_EXT(llMaskId);
											FLEXCAN_SetRxMbConfig(CAN1, liMailboxNo, &mbConfig, true);
											rxXfer.mbIdx = (uint8_t)liMailboxNo;
											rxXfer.frame = &frame;
											(void)FLEXCAN_TransferReceiveNonBlocking(CAN1, &flexcanHandle, &rxXfer);
											break;
								case CANB :
											mbConfig.format = kFLEXCAN_FrameFormatExtend;
											mbConfig.type   = kFLEXCAN_FrameTypeRemote;
											mbConfig.id     = FLEXCAN_ID_EXT(llMaskId);
											FLEXCAN_SetRxMbConfig(CAN2, liMailboxNo, &mbConfig, true);
											rxXfer.mbIdx = (uint8_t)liMailboxNo;
											rxXfer.frame = &frame;
											(void)FLEXCAN_TransferReceiveNonBlocking(CAN2, &flexcanHandle, &rxXfer);
											break;
								default :
											break;
							}
							break;
	}
}

void ConfigureMailBox(uint16_t liCanChannel)
{
	//0 - engine
	//3 - transmission
	//2 - IO
	switch(liCanChannel)
	{
		case CANA:
					MailBoxConfiguration(CANA, 1,RECIEVE     , 0x00000000, 0x00000000);	// EEC1 - Engine Speed
					MailBoxConfiguration(CANA, 2,RECIEVE     , 0x00000000, 0x18FFF1E2); // SENDER_CAN
					MailBoxConfiguration(CANA, 3,RECIEVE     , 0x00000000, 0x0CF00400); // SENDER_CAN
					//MailBoxConfiguration(CANA, 4,TRANSMIT_MUX, 0x18EA00F2, 0x18EA00F2);	// FOR ENGINE (REQUEST TO ENGINE FOR :ENGINE HOURS)
					break;
		case CANB:
			 	 	MailBoxConfiguration(CANB, 1,RECIEVE      , 0x00000000, 0x00000000);
					MailBoxConfiguration(CANB, 2,TRANSMIT_MUX , 0x18EA00F2, 0x18EA00F2);
					MailBoxConfiguration(CANB, 3,TRANSMIT_MUX , 0x18FEF8F2, 0x18FEF8F2);  // Top and Tot
					MailBoxConfiguration(CANB, 4,TRANSMIT_MUX , 0x18FEFCF2, 0x18FEFCF2);  // Fuel level
					MailBoxConfiguration(CANB, 5,TRANSMIT_MUX , 0x18FEEFF2, 0x18FEEFF2);  // ECL and Eop
					MailBoxConfiguration(CANB, 6,TRANSMIT_MUX , 0x18FEF1F2, 0x18FEF1F2);  // Parking brake
					MailBoxConfiguration(CANB, 7,TRANSMIT_MUX , 0x18FEF6F2, 0x18FEF6F2);  // Air filter clog
					MailBoxConfiguration(CANB, 8,TRANSMIT_MUX , 0x18E000F2, 0x18E000F2);  // Seat belt
					MailBoxConfiguration(CANB, 9,TRANSMIT_MUX , 0x18FEEEF2, 0x18FEEEF2);  // ECT & EOT
					MailBoxConfiguration(CANB,10,TRANSMIT_MUX , 0x0CF004F2, 0x0CF004F2);  // ENGINE SPEED
					MailBoxConfiguration(CANB,11,TRANSMIT_MUX , 0x18FD95F2, 0x18FD95F2);  // TRANSIMISSION OIL FILTER RESTRICTION SWITCH
					break;
		default:
			break;
	}
/*
	MailBoxConfiguration(CANB, 1, TRANSMIT_MUX, 0x0CEA0708, 0x0CEA0708);
    MailBoxConfiguration(CANB, 2, TRANSMIT_MUX, 0x0CEB0708, 0x0CEB0708);
    MailBoxConfiguration(CANB, 3, TRANSMIT_MUX, 0x0CEC0708, 0x0CEC0708);

    MailBoxConfiguration(CANB, 4, TRANSMIT_MUX, 0x0CF00103, 0x0CF00400);
    MailBoxConfiguration(CANB, 5, TRANSMIT_MUX, 0x0CF00103, 0x0CF00400);
    MailBoxConfiguration(CANB, 6, TRANSMIT_MUX, 0x0CF00103, 0x0CF00400);

//    MailBoxConfiguration(CANB, 7  ,RECIEVE    , 0x00000000, 0x18FECA00);	// DM1 Engine
//    MailBoxConfiguration(CANB, 8  ,RECIEVE    , 0x00000000, 0x18FECA02);	// DM1 IO
//    MailBoxConfiguration(CANB, 9  ,RECIEVE    , 0x00000000, 0x18FECA03);	// DM1 Transmission
    MailBoxConfiguration(CANB, 10 ,RECIEVE    , 0x00000000, 0x18FF2402);	// Analog Input 5

    // Engine
    MailBoxConfiguration(CANB, 11,RECIEVE     , 0x00000000, 0x0CEA0000);
    MailBoxConfiguration(CANB, 12,RECIEVE     , 0x00000000, 0x0CEB0000);
    MailBoxConfiguration(CANB, 13,RECIEVE     , 0x00000000, 0x0CEC0000);

//    MailBoxConfiguration(CANB, 14,RECIEVE     , 0x00000000, 0x18FF00E2);	// SENDER_CAN
//    MailBoxConfiguration(CANB, 15,RECIEVE    ,  0x00000000, 0x18FF01E2);  // SENDER_CAN
//    MailBoxConfiguration(CANB, 16,RECIEVE     , 0x00000000, 0x18FF02E2);  // SENDER_CAN
//    MailBoxConfiguration(CANB, 17,RECIEVE     , 0x00000000, 0x18FF03E2);	// SENDER_CAN
//    MailBoxConfiguration(CANB, 21,RECIEVE     , 0x00000000, 0x18FF04E2);	// SENDER_CAN
//    MailBoxConfiguration(CANB, 22,RECIEVE     , 0x00000000, 0x18FF05E2);	// SENDER_CAN

	MailBoxConfiguration(CANB, 14,RECIEVE     , 0x00000000, 0x18FEE500);	// Engine Hours
	MailBoxConfiguration(CANB, 15,RECIEVE    ,  0x00000000, 0x18FEFC00);    // fuel
	MailBoxConfiguration(CANB, 16,RECIEVE     , 0x00000000, 0x18FEEE00);    // EOT
	MailBoxConfiguration(CANB, 17,RECIEVE     , 0x00000000, 0x0CFE6900);	// Engine Coolant Temperature

    //MailBoxConfiguration(CANB, 14,RECIEVE     , 0x00000000, 0x0CFEEF00);	// Engine Fluid Level / Pressure
    //MailBoxConfiguration(CANB, 16,RECIEVE     , 0x00000000, 0x0CF00400);	// EEC1 - Engine Speed

    //Transmission
    //MailBoxConfiguration(CANB, 18,RECIEVE     , 0x00000000, 0x0CEA0003);
    //MailBoxConfiguration(CANB, 19,RECIEVE     , 0x00000000, 0x0CEB0003);
    //MailBoxConfiguration(CANB, 20,RECIEVE     , 0x00000000, 0x0CEC0003);

    MailBoxConfiguration(CANB, 18 ,RECIEVE    , 0x00000000, 0x18FECA00);	// DM1 Engine
    MailBoxConfiguration(CANB, 19 ,RECIEVE    , 0x00000000, 0x18FECA02);	// DM1 IO
    MailBoxConfiguration(CANB, 20 ,RECIEVE    , 0x00000000, 0x18FECA03);	// DM1 Transmission

    //MailBoxConfiguration(CANB, 21,RECIEVE     , 0x00000000, 0x0CF00203);	// ETC1 - Output Speed
    //MailBoxConfiguration(CANB, 22,RECIEVE     , 0x00000000, 0x18FEF803);	// TF1 - TOT
    MailBoxConfiguration(CANB, 23,RECIEVE     , 0x00000000, 0x18F00503);	// ETC2 - SG / AG

    // IO Module
    MailBoxConfiguration(CANB, 24,RECIEVE     , 0x00000000, 0x0CEA0002);
    MailBoxConfiguration(CANB, 25,RECIEVE     , 0x00000000, 0x0CEB0002);
    MailBoxConfiguration(CANB, 26,RECIEVE     , 0x00000000, 0x0CEC0002);
    MailBoxConfiguration(CANB, 27,RECIEVE     , 0x00000000, 0x18FF0A02);
    // RTC
    //MailBoxConfiguration(CANB, 28,RECIEVE     , 0x00000000, 0x18FF2002);	// Digital Input1
    //MailBoxConfiguration(CANB, 29,RECIEVE     , 0x00000000, 0x18FF2102);	// Digital Input2
    //MailBoxConfiguration(CANB, 24,RECIEVE     , 0x00000000, 0x18FF2202);	// Analog Input 1,2
    MailBoxConfiguration(CANB, 29,RECIEVE     , 0x00000000, 0x0CFEEF00);	// Engine Fluid Level / Pressure
    MailBoxConfiguration(CANB, 31,RECIEVE     , 0x00000000, 0x18FF2302);	// Analog Input 3,4 //0x00000000 - for testing
*/
}

unsigned int Roundoff(float value)
{
    unsigned char last_digit = 0;
    unsigned int before_dot = 0;
//    float temp_float = 0;
    unsigned int integer_f = 0;

    before_dot = (unsigned int)(value * 10);
    last_digit = (unsigned char)(before_dot % 10);

    if(last_digit>5)
    {
        value += 1;
    }

    integer_f = (unsigned int)(value);

    return integer_f;
}
