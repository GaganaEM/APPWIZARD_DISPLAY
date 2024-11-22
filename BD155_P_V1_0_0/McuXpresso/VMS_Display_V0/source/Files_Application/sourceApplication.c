#include "sourceApplication.h"

void ProcessAnalogInput(void)
{
	/*
	 * Gauge movement alignment formulae
	 *
	 * -----------------------FOR CLOCKWISE MOVEMENT--------------------------------------
	 * ---------if range of the gauge is (0 - Max)[for ex:0-140 or 0-10 or 0-120] --------
	 * Gauge_movement = ( V * ADJ) / MAX;
	 *
	 * V 	= Value to be point on the gauge
	 * ADJ 	= adjustment value i.e manual adjustment through software
	 * MAX  = Max range of the gauge
	 *
	 * --------if range of the gauge is (min-Max)[for ex:40-140 or 10-40 or 40-120]
	 * Gauge_movement = ( (V - MIN) * ADJ) / MAX;
	 *
	 * V 	= Value to be point on the gauge
	 * ADJ 	= adjustment value i.e manual adjustment through software
	 * MIN  = Mininum rage of the gauge
	 * MAX  = Max range of the gauge
	 *
	 * -----------------------FOR ANTI-CLOCKWISE MOVEMENT--------------------------------------
	 * ---------if range of the gauge is (0 - Max)[for ex:0-140 or 0-10 or 0-120] --------
	 * Gauge_movement = -(3600 - (( V * ADJ) / MAX) );
	 *
	 * V 	= Value to be point on the gauge
	 * ADJ 	= adjustment value i.e manual adjustment through software
	 * MAX  = Max range of the gauge
	 *
	 * --------if range of the gauge is (min-Max)[for ex:40-140 or 10-40 or 40-120]
	 * Gauge_movement = -(3600 - (((V - MIN) * ADJ) / MAX) );
	 *
	 * V 	= Value to be point on the gauge
	 * ADJ 	= adjustment value i.e manual adjustment through software
	 * MIN  = Mininum rage of the gauge
	 * MAX  = Max range of the gauge
	 */

#ifdef DOZER_P_VER
	/**************EOP****************/
	GuageEop.CurrentValue   = (gfEop * 2040) / EOP_MAX_RANGE; //30   /10
	GuageEop.CurrentValue	= -GuageEop.CurrentValue;
	GuageEop = GaugeMovement(GuageEop);
	gfEop_text=(float)((-GuageEop.PreviousValue)*EOP_MAX_RANGE/2040.0);//30
	/*************ECT****************/
	GuageEct.CurrentValue   = ((gfEct - ECT_MIN_RANGE) * 2700) / ECT_MAX_RANGE;//40
	GuageEct.CurrentValue	= -GuageEct.CurrentValue;
	GuageEct = GaugeMovement(GuageEct);
	gfEct_text=(float)((float)(-GuageEct.PreviousValue));
	gfEct_text=(float)(gfEct_text*ECT_MAX_RANGE/2700);
	gfEct_text+=ECT_MIN_RANGE;

	/***********ENGINE_RPM***********/
	GuageRpm.CurrentValue	= (giEngineRpm * 2730) / ENG_RPM_MAX_RANGE;
	GuageRpm.CurrentValue	= -GuageRpm.CurrentValue;
	GuageRpm = GaugeMovement(GuageRpm);
	giEngineRpm_text=(int)((-GuageRpm.PreviousValue)*ENG_RPM_MAX_RANGE);
	giEngineRpm_text=(int)(giEngineRpm_text/2730);

	/***********COT***************/
	GuageCot.CurrentValue   = (gfCot - COT_MIN_RANGE) * (3350.0 / COT_MAX_RANGE);//1900
	GuageCot.CurrentValue = -(3600 - GuageCot.CurrentValue);
	GuageCot = GaugeMovement(GuageCot);
	gfCot_text=(float)(GuageCot.PreviousValue+3600);
	gfCot_text=(float)(gfCot_text*COT_MAX_RANGE/3350.0);
	gfCot_text+=COT_MIN_RANGE;

	/***********TOP***************/
	GuageTop.CurrentValue   = (gfTop * 1830)/TOP_MAX_RANGE;
	GuageTop.CurrentValue = -(3600 - GuageTop.CurrentValue);
	GuageTop = GaugeMovement(GuageTop);
	gfTop_text=(float)(GuageTop.PreviousValue+3600);
	gfTop_text=(float)((gfTop_text*TOP_MAX_RANGE)/1830.0);
	gfTop_text=(float)(gfTop_text);

    /**********BATTERY*************/
     	/***********IN MAIN PAGE*********/
 	GuageVolt.CurrentValue   = (gfVolt * 1830)/BATT_MAX_RANGE;//gfVolt
 	GuageVolt.CurrentValue = -(3600 - GuageVolt.CurrentValue);
 	GuageVolt = GaugeMovement(GuageVolt);
 	gfVolt_text=(float)(GuageVolt.PreviousValue+3600);
 	gfVolt_text=(float)((gfVolt_text*BATT_MAX_RANGE)/1830.0);
 	gfVolt_text=(float)(gfVolt_text);

	/********FUEL********/
 	GuageFuel.CurrentValue = -(gfFuel* 3050)/ FUEL_MAX_RANGE;//2700
 	GuageFuel = GaugeMovement(GuageFuel);
 	gfFuel_text=(float)((-GuageFuel.PreviousValue*FUEL_MAX_RANGE)/3050.0);
 	gfFuel_text=(float)(gfFuel_text);

	/************TOP*****************/
	GuageTop2.CurrentValue   = -(gfTop * 2400 / TOP_MAX_RANGE);   //  /28
	GuageTop2 = GaugeMovement(GuageTop2);
	gfTop_text=(float)((-GuageTop2.PreviousValue*TOP_MAX_RANGE/2400.0));

	/*************ECT***********/
	GuageEct2.CurrentValue   = -((gfEct-ECT_MIN_RANGE) * 3600 / ECT_MAX_RANGE);
	GuageEct2 = GaugeMovement(GuageEct2);
	gfEct_text2=(float)((-GuageEct2.PreviousValue*ECT_MAX_RANGE)/3600);
	gfEct_text2+=ECT_MIN_RANGE;

	/****************COT***********/
	GuageCot2.CurrentValue   = -((gfCot-COT_MIN_RANGE) * 4200 / COT_MAX_RANGE);
	GuageCot2 = GaugeMovement(GuageCot2);
	gfCot_text=(float)((-GuageCot2.PreviousValue*COT_MAX_RANGE)/4200);
	gfCot_text+=COT_MIN_RANGE;

	/***********EOT***************/
	GuageEot.CurrentValue   = -((gfEot-EOT_MIN_RANGE) * 4200/ EOT_MAX_RANGE);
	GuageEot = GaugeMovement(GuageEot);
	gfEot_text=(float)((-GuageEot.PreviousValue*EOT_MAX_RANGE)/4200);
	gfEot_text+=EOT_MIN_RANGE;
#else
	/**************EOP****************/
	GuageEop.CurrentValue   = (gfEop * 2040) / EOP_MAX_RANGE; //30   /10
	GuageEop.CurrentValue	= -GuageEop.CurrentValue;
	GuageEop = GaugeMovement(GuageEop);
	gfEop_text=(float)((-GuageEop.PreviousValue)*EOP_MAX_RANGE/2040.0);//30
	/*************ECT****************/
	GuageEct.CurrentValue   = ((gfEct - ECT_MIN_RANGE) * 2700) / ECT_MAX_RANGE;//40
	GuageEct.CurrentValue	= -GuageEct.CurrentValue;
	GuageEct = GaugeMovement(GuageEct);
	gfEct_text=(float)((float)(-GuageEct.PreviousValue));
	gfEct_text=(float)(gfEct_text*ECT_MAX_RANGE/2700);
	gfEct_text+=ECT_MIN_RANGE;//40
#if 0
	/************VEHICLE_SPEED*******/
	GuageKmph.CurrentValue  = (giVehicleSpeed * 2520) / 140;
	GuageKmph.CurrentValue	= -GuageKmph.CurrentValue;
	GuageKmph = GaugeMovement(GuageKmph);
	giVehicleSpeed_text=(int)((-GuageKmph.PreviousValue)*140);
	giVehicleSpeed_text=(int)(giVehicleSpeed_text/2520);
	giOutputRpm_text=(unsigned int)(giOutputRpm);

//	GuageRpm.CurrentValue	= (giEngineRpm * 2520) / 3000;
	GuageRpm.CurrentValue	= (giOutputRpm * 2520) / 3000;
	GuageRpm.CurrentValue	= -GuageRpm.CurrentValue;
	GuageRpm = GaugeMovement(GuageRpm);

	giOutputRpm_text=(int)((-GuageRpm.PreviousValue)*3000);
	giOutputRpm_text=(int)(giOutputRpm_text/2520);
#endif

	/***********ENGINE_RPM***********/
	GuageRpm.CurrentValue	= (giEngineRpm * 2730) / ENG_RPM_MAX_RANGE;
	GuageRpm.CurrentValue	= -GuageRpm.CurrentValue;
	GuageRpm = GaugeMovement(GuageRpm);
	giEngineRpm_text=(int)((-GuageRpm.PreviousValue)*ENG_RPM_MAX_RANGE);
	giEngineRpm_text=(int)(giEngineRpm_text/2730);

	/***********FUEL***************/
	GuageFuel.CurrentValue   = (gfFuel) * (1900 / FUEL_MAX_RANGE);
	GuageFuel.CurrentValue = -(3600 - GuageFuel.CurrentValue);
	GuageFuel = GaugeMovement(GuageFuel);
	gfFuel_text=(float)(GuageFuel.PreviousValue+3600);
    gfFuel_text=(float)(gfFuel_text*FUEL_MAX_RANGE/1900);

    /**********BATTERY*************/
    	/***********IN MAIN PAGE*********/
	GuageVolt.CurrentValue   = (gfEng_battry_volt * 1830)/BATT_MAX_RANGE;//gfVolt
	GuageVolt.CurrentValue = -(3600 - GuageVolt.CurrentValue);
	GuageVolt = GaugeMovement(GuageVolt);
	gfVolt_text=(float)(GuageVolt.PreviousValue+3600);
	gfVolt_text=(float)((gfVolt_text*BATT_MAX_RANGE)/1830.0);
	gfVolt_text=(float)(gfVolt_text);
		/********IN SUB_MAIN PAGE********/
	GuageVolt2.CurrentValue = -(gfVolt* 2700)/ BATT_MAX_RANGE;
	GuageVolt2 = GaugeMovement(GuageVolt2);
	gfVolt2_text=(float)((-GuageVolt2.PreviousValue*BATT_MAX_RANGE)/2700.0);
	gfVolt2_text=(float)(gfVolt2_text);

	/************TOP*****************/
	GuageTop.CurrentValue   = -(gfTop * 2400 / TOP_MAX_RANGE);   //  /28
	GuageTop = GaugeMovement(GuageTop);
	gfTop_text=(float)((-GuageTop.PreviousValue*TOP_MAX_RANGE/2400.0));

	/*************ECT***********/
	GuageEct2.CurrentValue   = -((gfEct-ECT_MIN_RANGE) * 3600 / ECT_MAX_RANGE);
	GuageEct2 = GaugeMovement(GuageEct2);
	gfEct_text2=(float)((-GuageEct2.PreviousValue*ECT_MAX_RANGE)/3600);
	gfEct_text2+=ECT_MIN_RANGE;

	/****************COT***********/
	GuageCot.CurrentValue   = -((gfCot-COT_MIN_RANGE) * 4200 / COT_MAX_RANGE);
	GuageCot = GaugeMovement(GuageCot);
	gfCot_text=(float)((-GuageCot.PreviousValue*COT_MAX_RANGE)/4200);
	gfCot_text+=COT_MIN_RANGE;

	/***********EOT***************/
	GuageEot.CurrentValue   = -((gfEot-EOT_MIN_RANGE) * 4200/ EOT_MAX_RANGE);
	GuageEot = GaugeMovement(GuageEot);
	gfEot_text=(float)((-GuageEot.PreviousValue*EOT_MAX_RANGE)/4200);
	gfEot_text+=EOT_MIN_RANGE;

	/***********FIP***************/
//	GuageFIP.CurrentValue   = (gfFIP_RackPosition) * (1900 / FIP_MAX_RANGE);
//	GuageFIP.CurrentValue = -(3600 - GuageFIP.CurrentValue);
//	GuageFIP = GaugeMovement(GuageFIP);
//	gfFIP_text=(float)(GuageFIP.PreviousValue+3600);
//	gfFIP_text=(float)(gfFIP_text*FIP_MAX_RANGE/1900);

	GuageFIP.CurrentValue   = -(gfFIP_RackPosition * 2400 / FIP_MAX_RANGE);
	GuageFIP = GaugeMovement(GuageFIP);
	gfFIP_text=(float)((-GuageFIP.PreviousValue*FIP_MAX_RANGE/2400.0));
#endif
}

void ProcessDigitalInput(void)
{
	giIcon17 = 1;
	giIcon18 = giCurrentGear;
	if(gfEcl < 10)
	{
		giIcon03 = 2;
	}
	else
	{
		giIcon03 = 1;
	}
	if(gfFuel < 10)
	{
		giIcon06 = 2;
	}
	else if(gfFuel > 12)
	{
		giIcon06 = 1;
	}
//	//D1 Left - D1
//	giIcon01 = ((gulDigitalInputFrame1 >> 2) & 0x03);
//	//D2 Right - D2
//	giIcon14 = ((gulDigitalInputFrame1 >> 6) & 0x03);
//	//D3 High Beam - D3
//	giIcon07 = ((gulDigitalInputFrame1 >> 10) & 0x03);
//	//D4 Pre-heater - D4
//	giIcon09 = ((gulDigitalInputFrame1 >> 14) & 0x03);
//	//D5 Diff-Lock - D5 Trns CFG
//	giIcon05 = ((gulDigitalInputFrame1 >> 18) & 0x03);
//	//D6 Lift arm lock - D6 RET Brk
//	giIcon04 = ((gulDigitalInputFrame1 >> 22) & 0x03);
//	//D7 Reverse - D7
//	giIcon17 = ((gulDigitalInputFrame1 >> 26) & 0x03);
//	//D9 Spare Close To GN - D11 PARK BRK
//	giIcon10 = ((gulDigitalInputFrame1 >> 34) & 0x03);
//	//D16 HOFC - D16
//	giIcon02 = ((gulDigitalInputFrame1 >> 62) & 0x03);
//	//D17 Coolant Level - D12 BODY UP
//	giIcon12 = ((gulDigitalInputFrame2 >> 2) & 0x03);
//	//D18 HOLL - DUMP BRAKE
//	giIcon11 = ((gulDigitalInputFrame2 >> 6) & 0x03);
//	//D21 Acc Pressure - D21
//
//	//D22 EOL - D27 SEAT BELT
//	giIcon08 = ((gulDigitalInputFrame2 >> 22) & 0x03);
//	//D23 TOFC - D23
//	giIcon05 = ((gulDigitalInputFrame2 >> 26) & 0x03);
//	//D29 FDOT - D25 SLFL Retarder / Mode
//	giIcon13 = ((gulDigitalInputFrame2 >> 50) & 0x03);
//	//D35 Charge Alt - D35
//	giIcon15 = ((gulDigitalInputFrame2 >> 62) & 0x03);

//	giIcon01 = (giIcon01 == 1 && (bToggleIcon01 == 1 || bToggleBit == 1))? 2 : 1;
//	giIcon02 = (giIcon02 == 1 && (bToggleIcon02 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon03 = (giIcon03 == 1 && (bToggleIcon03 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon04 = (giIcon04 == 1 && (bToggleIcon04 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon05 = (giIcon05 == 1 && (bToggleIcon05 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon06 = (giIcon06 == 1 && (bToggleIcon06 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon07 = (giIcon07 == 1 && (bToggleIcon07 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon08 = (giIcon08 == 1 && (bToggleIcon08 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon09 = (giIcon09 == 1 && (bToggleIcon09 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon10 = (giIcon10 == 1 && (bToggleIcon10 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon11 = (giIcon11 == 1 && (bToggleIcon11 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon12 = (giIcon12 == 1 && (bToggleIcon12 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon13 = (giIcon13 == 1 && (bToggleIcon13 == 0 || bToggleBit == 1))? 2 : 1;
//	giIcon14 = (giIcon14 == 1 && (bToggleIcon14 == 1 || bToggleBit == 1))? 2 : 1;
//	giIcon15 = (giIcon15 == 1 && (bToggleIcon15 == 0 || bToggleBit == 1))? 2 : 1;
//
//	giIcon16 = (giIcon16 == 1 && (bToggleIcon16 == 0 || bToggleBit == 1))? 1 : 0;
//	giIcon17 = 1;
////	giIcon17 = (giIcon17 == 1 && (bToggleIcon17 == 0 || bToggleBit == 1))? 1 : 0;
//	giIconRevCol = (giIconRevCol == 1 && (bToggleIcon17 == 0 || bToggleBit == 1))? 1 : 0;
//
//	giIcon18 = giCurrentGear;
}

#if 0
void funcDm1ScreenScroll(void)
{
	unsigned char lucTotalLog 	 = 0;
	unsigned char lucDm1FaultPtr = 0;
	//unsigned char lucAddress	 = 0;
	unsigned char lucFault		 = 0;
	unsigned long lulTempSpnFmi	 = 0;

	/************************************************/
	uint8_t i =0,j = 0,actv_status = 0;

	for(i=0;i<DM1_SA;i++)
	{
		 for(j=0;j<NO_OF_DM1_MESSAGES;j++)
		 {
			 if(strDM1Log[i][j].Status == 1)
			 {
				actv_status = 1;
				break;
			 }
			 else
			 {
				 actv_status = 0;
			 }
		 }
	}
	/*************************************************/

	lucTotalLog = gucFaultLogs[2] + gucFaultLogs[1] + gucFaultLogs[0] +  gucFaultLogs[3]; //added

	if(lucTotalLog >= 1 && actv_status != 0)
	{
		giIcon16 = 1;
		gucFaultsActive = 1;
	}
	else
	{
		giIcon16 = 0;
		gucFaultsActive = 0;
	}

	if(bDm1FaultPtr == 1)
	{
		bDm1FaultPtr = 0;

//		if(gucDm1FaultPtr == 0)
//		{
//			lucAddress = 0;
//			while(gucFaultLogs[lucAddress] == 0)
//			{
//				lucAddress++;
//				if(lucAddress > 2)
//				{
//					lucAddress = 0;
//					lucFault = 0;
//					gucDm1FaultPtr = 0;
//				}
//			}
//		}
//		else
//		{
//			if(gucDm1FaultPtr >= gucFaultLogs[lucAddress])
//			{
//				lucAddress++;
//				while(gucFaultLogs[lucAddress] == 0)
//				{
//					lucAddress++;
//					if(lucAddress > 2)
//					{
//						lucAddress = 0;
//						lucFault = 0;
//						gucDm1FaultPtr = 0;
////						lucAddress 	   = 0;
////						gucDm1FaultPtr = 0;
////						lucFault 	   = 0;
//						giDMPopUp	   = 0;
////						memset(&gucFaultLogs,0,sizeof(gucFaultLogs));
////						memset(&strDM1Log,0,sizeof(strDM1Log));
////						memset(&strDm1Screen,0,sizeof(strDm1Screen));
//						break;
//					}
//				}
//			}
//			else
//			{
//
//			}
//		}

		if(gucDm1FaultPtr < gucFaultLogs[lucAddress])
		{
//			lucAddress 	   = 0;
//			gucDm1FaultPtr = 0;
//			lucFault 	   = 0;
//			giDMPopUp	   = 0;
//			memset(&gucFaultLogs,0,sizeof(gucFaultLogs));
//			memset(&strDM1Log,0,sizeof(strDM1Log));
//			memset(&strDm1Screen,0,sizeof(strDm1Screen));
		}
		else
		{
			do
			{
				lucAddress++;
				lucFault = 0;
				gucDm1FaultPtr = 0;
				if(lucAddress > 3)
				{
					lucAddress = 0;
					gucDm1FaultPtr = 0;
					lucFault = 0;
					giDMPopUp	   = 0;
					gucCnt 	= 0;
//					memset(&gucFaultLogs,0,sizeof(gucFaultLogs));
//					memset(&strDM1Log,0,sizeof(strDM1Log));
//					memset(&strDm1Screen,0,sizeof(strDm1Screen));
					break;
				}
			}
			while(gucFaultLogs[lucAddress] == 0);
		}

		if(giDMPopUp == 1)
		{
			lucFault = gucDm1FaultPtr++;
			gucCnt++;

			if(gucCnt > lucTotalLog)
			{
				gucCnt = 1;
			}

				strDm1Screen.CurrentCount 	= gucCnt;//gucDm1FaultPtr;
				strDm1Screen.DeviceId		= 1;
				lulTempSpnFmi 				= strDM1Log[lucAddress][lucFault].SpnFmi;
				strDm1Screen.SPN 			= lulTempSpnFmi & 0x7FFFF;
				strDm1Screen.FMI 			= lulTempSpnFmi >> 19;
				strDm1Screen.OccCount		= strDM1Log[lucAddress][lucFault].OccuranceCount;
				strDm1Screen.Address		= strDM1Log[lucAddress][lucFault].SourceAddress;
				strDm1Screen.Status			= strDM1Log[lucAddress][lucFault].Status;

				strDm1Screen.Message = DM1MessageSelection(strDm1Screen.SPN,strDm1Screen.FMI);
				strDm1Screen.MaximumCount = lucTotalLog;

//			if(strDm1Screen.Address==TRANSMISSION_ECU)
//			{
//				strDm1Screen.Address=3;                        //aravind
//			}



//			switch(lulTempSpnFmi)
//			{
//				case 0xFCDEB :
//							strDm1Screen.Message = 1;
//							break;
//				default :
//							strDm1Screen.Message = 2;
//							break;
//			}
		}
	}
}
#endif


void funcDm1ScreenScroll(void)
{
	uint8_t lucTotalLog 	 = 0;
	volatile static uint8_t lucFault = 0;

	Uint32 spnfmi = 0, spn = 0, lulTempSpnFmi = 0;
	uint16_t fmi = 0;

	bool spnfmi_valid_or_not = 0;
	uint8_t No_of_Faults[DM1_SA] = {0};


	/************************************************/
	uint8_t i =0,j = 0;
	bool actv_status = 0;

	for(i=0;i < DM1_SA;i++)
	{
		 for(j=0;j < NO_OF_DM1_MESSAGES;j++)
		 {
			spnfmi = strDM1Log[i][j].SpnFmi;
			spn	   = (spnfmi & 0x7FFFF);
			fmi    = (spnfmi>>19);

			spnfmi_valid_or_not = Find_Valid_spnfmi(spn,fmi);

			if((spnfmi_valid_or_not == 1) && (strDM1Log[i][j].Status == 1) && spn!=0x7FFFF && spn!=0xFFFF && spn!=0x0000)
			{
//				actv_status = 1;
//				break;
				No_of_Faults[i]++;
				lucTotalLog++;
			}else{}
		 }
//		 if(actv_status == 1)
//		 {
//			 break;
//		 }else{}
	}
	/*************************************************/
	/*
	lucTotalLog = gucFaultLogs[2] + gucFaultLogs[1] + gucFaultLogs[0];//cmted on 20220906
	lucTotalLog = gucFaultLogs[3] + gucFaultLogs[2] + gucFaultLogs[1] + gucFaultLogs[0];//cmted on 20230124
	 */

//	lucTotalLog = gucFaultLogs[4] + gucFaultLogs[3] + gucFaultLogs[2] + gucFaultLogs[1] + gucFaultLogs[0];

	if(lucTotalLog >= 1)
//	if(lucTotalLog >= 1 && actv_status != 0)
	{
		giIcon16 = 1;
		gucFaultsActive = 1;
	}
	else
	{
		giIcon16 = 0;
		gucFaultsActive = 0;
	}

	if(bDm1FaultPtr == 1)
	{
		bDm1FaultPtr = 0;

		if(gucDm1FaultPtr < No_of_Faults[lucAddress])
		{
			/**Do nothing here**/
		}
		else
		{
			do
			{
				lucAddress++;
				lucFault = 0;
				gucDm1FaultPtr = 0;
//				if(lucAddress > 2)//cmted on 20220906
//				if(lucAddress > 3)/*cmted on 20230124*/
				if(lucAddress > (DM1_SA - 1))
				{
					lucAddress = 0;
					gucDm1FaultPtr = 0;
					lucFault = 0;
					giDMPopUp	   = 0;
					gucCnt 	= 0;
					break;
				}
			}
			while(No_of_Faults[lucAddress] == 0);
		}

		if(giDMPopUp == 1)
		{
			if(strDM1Log[lucAddress][lucFault].Status == 0)/**check wheather error_status is active or not**/
			{
				while(strDM1Log[lucAddress][lucFault].Status == 0)
				{
					lucFault++;
				}
			}else{}

			gucCnt++;
			if(gucCnt > lucTotalLog)
			{
				gucCnt = 1;
			}

			strDm1Screen.CurrentCount 	= gucCnt;//gucDm1FaultPtr;
			strDm1Screen.DeviceId		= 1;
			lulTempSpnFmi 				= strDM1Log[lucAddress][lucFault].SpnFmi;
			strDm1Screen.SPN 			= lulTempSpnFmi & 0x7FFFF;
			strDm1Screen.FMI 			= lulTempSpnFmi >> 19;
			strDm1Screen.OccCount		= strDM1Log[lucAddress][lucFault].OccuranceCount;
			/**********reassign the original source address for display*****/
			strDm1Screen.Address		= Re_asgn_Org_srs_addr_frm_dm1_array(lucAddress,lucFault);
			/**************************************************************/
			strDm1Screen.Status			= strDM1Log[lucAddress][lucFault].Status;
			strDm1Screen.Message = DM1MessageSelection(strDm1Screen.SPN,strDm1Screen.FMI);
			strDm1Screen.MaximumCount = lucTotalLog;

			gucDm1FaultPtr++;/*donot change this variable place*/
			lucFault++;/*donot change this variable place*/
		}
	}
}

struct GuageIndicator GaugeMovement(struct GuageIndicator GuageValue)
{
	int16_t liPeriodicValue;
	int16_t liStepSize		  = 7;
//	int16_t liStepSize		  = StepSize;

	if(GuageValue.CurrentValue > GuageValue.PreviousValue)
	{
		liPeriodicValue = (GuageValue.CurrentValue - GuageValue.PreviousValue) / liStepSize;
		if((GuageValue.CurrentValue - GuageValue.PreviousValue) < liStepSize)
		{
			GuageValue.PreviousValue = GuageValue.CurrentValue;
		}
	}
	else
	{
		liPeriodicValue = (GuageValue.PreviousValue - GuageValue.CurrentValue) / liStepSize;
		if((GuageValue.PreviousValue - GuageValue.CurrentValue) < liStepSize)
		{
			GuageValue.PreviousValue = GuageValue.CurrentValue;
		}
	}

	if(GuageValue.PreviousValue < GuageValue.CurrentValue)
	{
		GuageValue.PreviousValue = GuageValue.PreviousValue + liPeriodicValue;

		if(GuageValue.PreviousValue > GuageValue.CurrentValue)
		{
			GuageValue.PreviousValue = GuageValue.CurrentValue;
		}

	}
	else if(GuageValue.PreviousValue > GuageValue.CurrentValue)
	{
		GuageValue.PreviousValue = GuageValue.PreviousValue - liPeriodicValue;
		if(GuageValue.PreviousValue < GuageValue.CurrentValue)
		{
			GuageValue.PreviousValue = GuageValue.CurrentValue;
		}
	}
	else
	{

	}
	return(GuageValue);
}

uint8_t DM1MessageSelection(Uint32 lulspn,uint8_t lucfmi)
{
	uint8_t lucDm1Message=0;
/*
	for(uint16_t i = 0; i < NO_OF_DM1_MESSAGES; i++)
	{
		if(FAULT_SPN[i] == lulspn && FAULT_FMI[i] == lucfmi)
		{
			lucDm1Message = i+1;
			break;
		}
	}
	*/
	for(uint16_t i = 0; i < NO_OF_DM1_MESSAGES; i++)
	{
		if(SPN_FMI_DATA[i][0] == lulspn && SPN_FMI_DATA[i][1] == lucfmi)
		{
			lucDm1Message = i+1;
			break;
		}
	}
/*

#ifdef DOZER_P_VER
    if(lulspn==177 && lucfmi==16)
	{
    	 lucDm1Message=1;
	}
    else if(lulspn==127 && lucfmi==16)
    {
    	 lucDm1Message=2;
    }
    else if(lulspn==127 && lucfmi==18)
    {
    	 lucDm1Message=3;
    }
    else if(lulspn==100 && lucfmi==18)
    {
    	 lucDm1Message=4;
    }
    else if(lulspn==190 && lucfmi==16)
    {
    	 lucDm1Message=5;
    }
    else if(lulspn==3359 && lucfmi==16)
    {
    	 lucDm1Message=6;
    }
    else if(lulspn==111 && lucfmi==18)
    {
    	 lucDm1Message=7;
    }
    else if(lulspn==168 && lucfmi==18)
    {
    	 lucDm1Message=8;
    }
    else if(lulspn==110 && lucfmi==16)
    {
    	 lucDm1Message=9;
    }
    else if(lulspn==175 && lucfmi==16)
    {
    	 lucDm1Message=10;
    }
    else if(lulspn==96 && lucfmi==18)
    {
    	 lucDm1Message=11;
    }
    else if(lulspn==99 && lucfmi==16)
    {
    	 lucDm1Message=12;
    }
    else if(lulspn==96 && lucfmi==3)
    {
    	 lucDm1Message=13;
    }
    else if(lulspn==100 && lucfmi==2)
    {
    	 lucDm1Message=14;
    }
    else if(lulspn==100 && lucfmi==3)
    {
    	 lucDm1Message=15;
    }
    else if(lulspn==100 && lucfmi==4)
    {
    	 lucDm1Message=16;
    }
    else if(lulspn==110 && lucfmi==3)
    {
    	 lucDm1Message=17;
    }
    else if(lulspn==110 && lucfmi==4)
    {
    	 lucDm1Message=18;
    }
    else if(lulspn==175 && lucfmi==3)
    {
    	 lucDm1Message=19;
    }
    else if(lulspn==175 && lucfmi==4)
    {
    	 lucDm1Message=20;
    }
    else if(lulspn==177 && lucfmi==3)
    {
    	 lucDm1Message=21;
    }
    else if(lulspn==177 && lucfmi==4)
    {
    	 lucDm1Message=22;
    }
    else if(lulspn==127 && lucfmi==2)
    {
    	 lucDm1Message=23;
    }
    else if(lulspn==127 && lucfmi==3)
    {
    	 lucDm1Message=24;
    }
    else if(lulspn==127 && lucfmi==4)
    {
    	 lucDm1Message=25;
    }
    else if(lulspn==521001 && lucfmi==3)
    {
    	 lucDm1Message=26;
    }
    else
    {
       ***
    }
#else
    if(lulspn==810 && lucfmi==2)
   	{
       	 lucDm1Message=1;
   	}
   else if(lulspn==723 && lucfmi==2)
   {
	 lucDm1Message=2;
   }
   else if(lulspn==190 && lucfmi==31)
   {
	 lucDm1Message=3;
   }
   else if(lulspn==91 && lucfmi==31)
   {
	 lucDm1Message=4;
   }
   else if(lulspn==974 && lucfmi==31)
   {
	 lucDm1Message=5;
   }
   else if(lulspn==102 && lucfmi==2)
   {
	 lucDm1Message=6;
   }
   else if(lulspn==100 && lucfmi==2)
   {
	 lucDm1Message=7;
   }
   else if(lulspn==108 && lucfmi==31)
   {
	 lucDm1Message=8;
   }
   else if(lulspn==110 && lucfmi==2)
   {
	 lucDm1Message=9;
   }
   else if(lulspn==175 && lucfmi==2)
   {
	 lucDm1Message=10;
   }
   else if(lulspn==167 && lucfmi==31)
   {
	 lucDm1Message=11;
   }
   else if(lulspn==100 && lucfmi==17)
   {
	 lucDm1Message=12;
   }
   else if(lulspn==100 && lucfmi==1)
   {
	 lucDm1Message=13;
   }
   else if(lulspn==110 && lucfmi==15)
   {
	 lucDm1Message=14;
   }
   else if(lulspn==175 && lucfmi==15)
   {
	 lucDm1Message=15;
   }
   else if(lulspn==110 && lucfmi==0)
   {
	 lucDm1Message=16;
   }
   else if(lulspn==167 && lucfmi==31)
   {
	 lucDm1Message=17;
   }
   else if(lulspn==4002 && lucfmi==31)
   {
	 lucDm1Message=18;
   }
   else if(lulspn==3058 && lucfmi==31)
   {
	 lucDm1Message=19;
   }
   else if(lulspn==1210 && lucfmi==31)
   {
	 lucDm1Message=20;
   }
   else if(lulspn==638 && lucfmi==31)
   {
	 lucDm1Message=21;
   }
   else if(lulspn==1210 && lucfmi==31)
   {
	 lucDm1Message=22;
   }
   else if(lulspn==1210 && lucfmi==31)
   {
	 lucDm1Message=23;
   }
   else if(lulspn==638 && lucfmi==31)
   {
	 lucDm1Message=24;
   }
   else if(lulspn==639 && lucfmi==31)
   {
	 lucDm1Message=25;
   }
   else if(lulspn==639 && lucfmi==31)
   {
	 lucDm1Message=26;
   }
	else if(lulspn==3058 && lucfmi==31)
	{
	   lucDm1Message=27;
	}
	else if(lulspn==3058 && lucfmi==31)
	{
	   lucDm1Message=28;
	}
	else if(lulspn==3058 && lucfmi==31)
	{
	   lucDm1Message=29;
	}
	else if(lulspn==630 && lucfmi==31)
	{
	   lucDm1Message=30;
	}
	else if(lulspn==628 && lucfmi==31)
	{
	   lucDm1Message=31;
	}
	else if(lulspn==629 && lucfmi==31)
	{
	   lucDm1Message=32;
	}
	else if(lulspn==924 && lucfmi==31)
	{
	   lucDm1Message=33;
	}
	else if(lulspn==3597 && lucfmi==31)
	{
	   lucDm1Message=34;
	}
	else if(lulspn==3599 && lucfmi==31)
	{
	   lucDm1Message=35;
	}
	else if(lulspn==3598 && lucfmi==31)
	{
	   lucDm1Message=36;
	}
	else if(lulspn==3509 && lucfmi==31)
	{
	   lucDm1Message=37;
	}
	else if(lulspn==3510 && lucfmi==31)
	{
	   lucDm1Message=38;
	}
	else if(lulspn==3511 && lucfmi==31)
	{
	   lucDm1Message=39;
	}
	else if(lulspn==3512 && lucfmi==31)
	{
	   lucDm1Message=40;
	}
	else if(lulspn==1136 && lucfmi==31)
	{
	   lucDm1Message=41;
	}
	else if(lulspn==1136 && lucfmi==31)
	{
	   lucDm1Message=42;
	}
	else if(lulspn==628 && lucfmi==31)
	{
	   lucDm1Message=43;
	}
	else if(lulspn==501 && lucfmi==31)
	{
	   lucDm1Message=44;
	}
	else if(lulspn==628 && lucfmi==31)
	{
	   lucDm1Message=45;
	}
	else if(lulspn==629 && lucfmi==31)
	{
	   lucDm1Message=46;
	}
	else if(lulspn==96 && lucfmi==18)
	{
	   lucDm1Message=47;
	}
	else if(lulspn==96 && lucfmi==3)
	{
	   lucDm1Message=48;
	}
	else if(lulspn == 127 && lucfmi == 18)
	{
		lucDm1Message=49;
	}
	else if(lulspn == 127 && lucfmi == 16)
	{
		lucDm1Message=50;
	}
	else if(lulspn == 127 && lucfmi == 4)
	{
		lucDm1Message=51;
	}
	else if(lulspn == 127 && lucfmi == 3)
	{
		lucDm1Message=52;
	}
	else if(lulspn == 3823 && lucfmi == 16)
	{
		lucDm1Message=53;
	}
	else if(lulspn == 3823 && lucfmi == 3)
	{
		lucDm1Message=54;
	}
	else if(lulspn == 3823 && lucfmi == 4)
	{
		lucDm1Message=55;
	}
	else if(lulspn == 111 && lucfmi == 18)
	{
		lucDm1Message=56;
	}
	else if(lulspn == 70 && lucfmi == 16)
	{
		lucDm1Message=57;
	}
	else if(lulspn == 99 && lucfmi == 18)
	{
		lucDm1Message=58;
	}
	else if(lulspn == 5086 && lucfmi == 18)
	{
		lucDm1Message=59;
	}
	else if(lulspn == 1638 && lucfmi == 3)
	{
		lucDm1Message=60;
	}
	else if(lulspn == 1638 && lucfmi == 4)
	{
		lucDm1Message=61;
	}
	else if(lulspn == 2602 && lucfmi == 18)
	{
		lucDm1Message=62;
	}
	else if(lulspn == 521001 && lucfmi == 3)
	{
		lucDm1Message=63;
	}
   else
   {
	  ***
   }
#endif
*/
	return lucDm1Message;
}


uint8_t Find_Valid_spnfmi(Uint32 lulspn,uint8_t lucfmi)
{
	bool valid_spnfmi = 0;
	/*
	for(uint16_t i = 0; i < NO_OF_DM1_MESSAGES; i++)
	{
		if(FAULT_SPN[i] == lulspn && FAULT_FMI[i] == lucfmi)
		{
			valid_spnfmi = 1;
			break;
		}
		else
		{
			valid_spnfmi = 0;
		}
	}
	*/
	for(uint16_t i = 0; i < NO_OF_DM1_MESSAGES; i++)
	{
		if(SPN_FMI_DATA[i][0] == lulspn && SPN_FMI_DATA[i][1] == lucfmi)
		{
			valid_spnfmi = 1;
			break;
		}
		else
		{
			valid_spnfmi = 0;
		}
	}
/*

#ifdef DOZER_P_VER
    if(lulspn==177 && lucfmi==16)
	{
    	valid_spnfmi = 1;
	}
    else if(lulspn==127 && lucfmi==16)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==127 && lucfmi==18)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==100 && lucfmi==18)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==190 && lucfmi==16)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==3359 && lucfmi==16)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==111 && lucfmi==18)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==168 && lucfmi==18)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==110 && lucfmi==16)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==175 && lucfmi==16)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==96 && lucfmi==18)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==99 && lucfmi==16)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==96 && lucfmi==3)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==100 && lucfmi==2)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==100 && lucfmi==3)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==100 && lucfmi==4)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==110 && lucfmi==3)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==110 && lucfmi==4)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==175 && lucfmi==3)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==175 && lucfmi==4)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==177 && lucfmi==3)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==177 && lucfmi==4)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==127 && lucfmi==2)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==127 && lucfmi==3)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==127 && lucfmi==4)
    {
    	valid_spnfmi = 1;
    }
    else if(lulspn==521001 && lucfmi==3)
    {
    	valid_spnfmi = 1;
    }
    else
    {
    	valid_spnfmi = 0;
    }
#else
    if(lulspn==810 && lucfmi==2)
   	{
    	valid_spnfmi = 1;
   	}
   else if(lulspn==723 && lucfmi==2)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==190 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==91 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==974 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==102 && lucfmi==2)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==100 && lucfmi==2)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==108 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==110 && lucfmi==2)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==175 && lucfmi==2)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==167 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==100 && lucfmi==17)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==100 && lucfmi==1)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==110 && lucfmi==15)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==175 && lucfmi==15)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==110 && lucfmi==0)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==167 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==4002 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==3058 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==1210 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==638 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==1210 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==1210 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==638 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==639 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
   else if(lulspn==639 && lucfmi==31)
   {
	   valid_spnfmi = 1;
   }
	else if(lulspn==3058 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3058 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3058 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==630 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==628 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==629 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==924 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3597 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3599 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3598 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3509 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3510 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3511 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==3512 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==1136 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==1136 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==628 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==501 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==628 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==629 && lucfmi==31)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==96 && lucfmi==18)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn==96 && lucfmi==3)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 127 && lucfmi == 18)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 127 && lucfmi == 16)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 127 && lucfmi == 4)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 127 && lucfmi == 3)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 3823 && lucfmi == 16)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 3823 && lucfmi == 3)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 3823 && lucfmi == 4)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 111 && lucfmi == 18)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 70 && lucfmi == 16)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 99 && lucfmi == 18)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 5086 && lucfmi == 18)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 1638 && lucfmi == 3)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 1638 && lucfmi == 4)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 2602 && lucfmi == 18)
	{
		valid_spnfmi = 1;
	}
	else if(lulspn == 521001 && lucfmi == 3)
	{
		valid_spnfmi = 1;
	}
   else
   {
	   valid_spnfmi = 0;
   }
#endif
*/
	return valid_spnfmi;
}

/*****************MinMax****************************************************/

void funcReadAdcChannels(void)
{
    static uint8_t luscReadAdcChannel = 0;

    gulAdcAndSpeedConvetedData[luscReadAdcChannel] = funcReadADCData(luscReadAdcChannel);

    gulAdcFloatData[luscReadAdcChannel] = (float)(gulAdcAndSpeedConvetedData[luscReadAdcChannel]/100.00);

    luscReadAdcChannel++;

    if(luscReadAdcChannel > 10)
    {
        luscReadAdcChannel = 0;
    }
    else
    {
        /**/
    }

    strMinMaxDataFrame.CltTempMaxValueTHDEG=95;
    strMinMaxDataFrame.CltTempMinValueTHDEG=40;
    strMinMaxDataFrame.EopMaxValueHighIdleTHKKpa=28;
    strMinMaxDataFrame.EopMinValueHighIdleTHKpa=0.8;
    strMinMaxDataFrame.EotMaxValueDEG=120;
    strMinMaxDataFrame.EotMinValueDEG=40;
	strMinMaxDataFrame.TotMaxValueDEG=120;
	strMinMaxDataFrame.TotMinValueDEG=40;
	strMinMaxDataFrame.EngSpdMaxValueRPM=2499.99;
	strMinMaxDataFrame.EngSpdAvgValueRPM=0;
	strMinMaxDataFrame.ApMaxValueKpa=10;
	strMinMaxDataFrame.ApMinValueKpa=6;
	strMinMaxDataFrame.HrotMaxValueDEG=120;
	strMinMaxDataFrame.HrotMinValueDEG=40;
	strMinMaxDataFrame.SotMaxValueDEG=120;
	strMinMaxDataFrame.SotMinValueDEG=40;
	strMinMaxDataFrame.VehSpdMaxValueKmph=140;
	strMinMaxDataFrame.TopMaxValueKpa=60;
	strMinMaxDataFrame.TopMinValueKpa=10;

}
Uint32 funcReadADCData(Uint32 ulcSelectedSensor)
{
    uint8_t lucSelectedAdcChannel    = 0;
    uint8_t lucSelectedLookUpTable   = 0;
    Uint32 lulAdcFinalValue         = 0;
    uint8_t lucAdcDataSource         = 0;

    struct AdcSelectRegister strSelAdcChannel;

    strSelAdcChannel.sensorType     = DefaultAnalogInput[ulcSelectedSensor].ModeSelection;
    strSelAdcChannel.sensorNumber   = ulcSelectedSensor;

    strSelAdcChannel        = funcSwitchAdcMux(strSelAdcChannel);

    lucSelectedAdcChannel   = strSelAdcChannel.readChannel;
    lucSelectedLookUpTable  = strSelAdcChannel.lookUpTable;
    lucAdcDataSource        = strSelAdcChannel.AdcDataSource;

//    if(lucAdcDataSource == ADC_CHANNEL)
//    {
//        strAdcSelect.readChannel    = lucSelectedAdcChannel;
//        strAdc.AdcRawCount          = 0;
//        strAdc.AdcSamples           = 0;
//        strAdc.AdcAvgCount          = 0;
//        strAdc.AdcRawCount          = 0;
//        strSystem.flAdcReadComplete = 0;
//        strSystem.flAdcReadstart    = 1;
//
//        //Dummy Read
//        while(strSystem.flAdcReadComplete == 0)
//        {
//
//        };
//        strSystem.flAdcReadComplete = 0;
//
//        strAdcSelect.readChannel  = lucSelectedAdcChannel;
//        strAdc.AdcRawCount        = 0;
//        strAdc.AdcSamples         = 0;
//        strAdc.AdcAvgCount        = 0;
//        strAdc.AdcRawCount        = 0;
//        strSystem.flAdcReadComplete = 0;
//        strSystem.flAdcReadstart    = 1;
//
//        while(strSystem.flAdcReadComplete == 0)
//        {
//
//        };
//        strSystem.flAdcReadComplete = 0;


		  switch(ulcSelectedSensor)
		  {
		     case 0:
		    	    strAdc.AdcProcessedValue = gfEop;
		    	    break;
		     case 1:
		    	 strAdc.AdcProcessedValue = gfEot;
		    	    break;
		     case 2:
		    	 strAdc.AdcProcessedValue = gfEct;
		    	    break;
		     case 3:
		    	 strAdc.AdcProcessedValue = gfTot;
		    	    break;
		     case 4:
		    	 strAdc.AdcProcessedValue = gfTop;
		    	    break;
		     case 5:
		    	 strAdc.AdcProcessedValue = gfFuel;
		    	    break;
		     case 6:
		    	 strAdc.AdcProcessedValue = 0;
		    	    break;
		     case 7:
		    	 strAdc.AdcProcessedValue = gfBot;
		    	    break;
		     case 8:
		    	 strAdc.AdcProcessedValue = gfVolt;
		    	    break;
		     case 9:
		    	 strAdc.AdcProcessedValue = giEngineRpm;
		    	    break;
		     case 10:
		    	 strAdc.AdcProcessedValue = giVehicleSpeed;
		    	    break;

		  }

// gulAdcAndSpeedRawData[A1_EOP]= gfEop;
// gulAdcAndSpeedRawData[A2_EOT]=gfEot;
// gulAdcAndSpeedRawData[A3_ECT]=gfEct;
// gulAdcAndSpeedRawData[A4_TOT]=gfTot;
// gulAdcAndSpeedRawData[A5_TOP]=gfTop;
// gulAdcAndSpeedRawData[A6_FL]=gfFuel;
// gulAdcAndSpeedRawData[A16_ENG_RPM]=giEngineRpm;
// gulAdcAndSpeedRawData[A17_ROAD_SPD]=giVehicleSpeed;
// gulAdcAndSpeedRawData[A14_BCAP2]=gfBot;
// gulAdcAndSpeedRawData[PWR_IN_IO]=gfVolt;

//    gulAdcAndSpeedRawData[ulcSelectedSensor]    = strAdc.SampledAvgCounts;
//    }
//    else
//    {
//        /* If data from CAN source then no need to read data from ADC channel*/
//    }

//    strAdc.AdcProcessedValue    = LoadProcessedValue(lucSelectedLookUpTable, gulAdcAndSpeedRawData[ulcSelectedSensor]);

    lulAdcFinalValue = (Uint32)(strAdc.AdcProcessedValue * 100);

    return lulAdcFinalValue;
}

float LoadProcessedValue(uint16_t LookUpNumber, uint32_t AdcCounts)
{
    float retval = 0;
    uint16_t k   = 0;
    memset(&strValueCalculation, 0 ,sizeof(strValueCalculation));

    switch(LookUpNumber)
    {
    /*****************channel 1*****************/
        case CH_A1_R1 :
				if(AdcCounts < LookUpTable_A1[COUNT_ROW][16])//14 for 10 bit configuration
				{
					retval = LookUpTable_A1[VALUE_ROW][16];//14 for 10 bit configuration
				}
				else if(AdcCounts >= LookUpTable_A1[COUNT_ROW][0])
				{
					retval = LookUpTable_A1[VALUE_ROW][0];
				}
				else
				{
					for(k = 0; k <= 16; k++)//14 for 10 bit configuration
					{
						if(AdcCounts > LookUpTable_A1[COUNT_ROW][k + 1] && AdcCounts <= LookUpTable_A1[COUNT_ROW][k])
						{
							strValueCalculation.CountX = LookUpTable_A1[COUNT_ROW][k];  strValueCalculation.CountY = LookUpTable_A1[COUNT_ROW][k + 1];
							strValueCalculation.ValueX = LookUpTable_A1[VALUE_ROW][k];  strValueCalculation.ValueY = LookUpTable_A1[VALUE_ROW][k + 1];
							strValueCalculation.Count  = AdcCounts;
							retval = CalculateUnknown(strValueCalculation);
							break;
						}
					}
				}
				/************************For Resistance convertion************************/
				memset(&strValueCalculation, 0 ,sizeof(strValueCalculation));

				if(AdcCounts < LookUpTable_A1R1[COUNT_ROW][16])//14 for 10 bit configuration
				{
					a1_type = LookUpTable_A1R1[VALUE_ROW][16];//14 for 10 bit configuration
				}
				else if(AdcCounts >= LookUpTable_A1R1[COUNT_ROW][0])
				{
					a1_type = LookUpTable_A1R1[VALUE_ROW][0];
				}
				else
				{
					for(k = 0; k <= 16; k++)//14 for 10 bit configuration
					{
						if(AdcCounts > LookUpTable_A1R1[COUNT_ROW][k + 1] && AdcCounts <= LookUpTable_A1R1[COUNT_ROW][k])
						{
							strValueCalculation.CountX = LookUpTable_A1R1[COUNT_ROW][k];  strValueCalculation.CountY = LookUpTable_A1R1[COUNT_ROW][k + 1];
							strValueCalculation.ValueX = LookUpTable_A1R1[VALUE_ROW][k];  strValueCalculation.ValueY = LookUpTable_A1R1[VALUE_ROW][k + 1];
							strValueCalculation.Count  = AdcCounts;
							a1_type = CalculateUnknown(strValueCalculation);
							//a1_type = a1_type - 10;
							break;
						}
					}
				}
                break;

        case CH_A1_R2 :
                break;

        case CH_A1_I1 :
                //retval = (((AdcCounts - giTareCount_A1_I1) * giCalValue_A1_I1) / (giCalCount_A1_I1 - giTareCount_A1_I1)) + giTareValue_A1_I1;
                break;

        case CH_A1_I2 :
				break;

        case CH_A1_V:
				break;

        case CH_A1_EC:
            	//giEOP_kPa = glEOPCanData * 4;
            	//giEOP_Bar = giEOP_kPa / 100.0;
            	//retval = giEOP_Bar;
				break;

        case CH_A1_TC:
				break;

	/*****************channel 2*****************/
        case CH_A2_R1 :
				break;

        case CH_A2_R2 :
				break;

        case CH_A2_I1:
				if(AdcCounts >= LookUpTable_A2[COUNT_ROW][5])
				{
					retval = LookUpTable_A2[VALUE_ROW][5];
				}
				else if(AdcCounts <= LookUpTable_A2[COUNT_ROW][0])
				{
					retval = LookUpTable_A2[VALUE_ROW][0];
				}
				else
				{
					for(k = 0; k <= 5; k++)
					{
						if(AdcCounts <= LookUpTable_A2[COUNT_ROW][k + 1] && AdcCounts > LookUpTable_A2[COUNT_ROW][k])
						{
							strValueCalculation.CountX = LookUpTable_A2[COUNT_ROW][k];  strValueCalculation.CountY = LookUpTable_A2[COUNT_ROW][k + 1];
							strValueCalculation.ValueX = LookUpTable_A2[VALUE_ROW][k];  strValueCalculation.ValueY = LookUpTable_A2[VALUE_ROW][k + 1];
							strValueCalculation.Count  = AdcCounts;
							retval = CalculateUnknown(strValueCalculation);
							break;
						}
					}
				}
				/************************For Current convertion************************/
				memset(&strValueCalculation, 0 ,sizeof(strValueCalculation));

				if(AdcCounts >= LookUpTable_A2I1[COUNT_ROW][5])
				{
					a2_type = LookUpTable_A2I1[VALUE_ROW][5];
				}
				else if(AdcCounts <=LookUpTable_A2I1[COUNT_ROW][0])
				{
					a2_type = LookUpTable_A2I1[VALUE_ROW][0];
				}
				else
				{
					for(k = 0; k <= 5; k++)
					{
						if(AdcCounts <= LookUpTable_A2I1[COUNT_ROW][k + 1] && AdcCounts > LookUpTable_A2I1[COUNT_ROW][k])
						{
							strValueCalculation.CountX = LookUpTable_A2I1[COUNT_ROW][k];  strValueCalculation.CountY = LookUpTable_A2I1[COUNT_ROW][k + 1];
							strValueCalculation.ValueX = LookUpTable_A2I1[VALUE_ROW][k];  strValueCalculation.ValueY = LookUpTable_A2I1[VALUE_ROW][k + 1];
							strValueCalculation.Count  = AdcCounts;
							a2_type = CalculateUnknown(strValueCalculation);
							//a2_type = a2_type - 10;
							break;
						}
					}
				}
				break;

        case CH_A2_I2:
				if(AdcCounts <= CUR_4mA_CNTS)
				{
					retval = PRESSURE_SENSOR2_MIN_VAL;
				}
				else if(AdcCounts >= CUR_20mA_CNTS)
				{
					retval = PRESSURE_SENSOR2_MAX_VAL;
				}
				else
				{
					/*
					retval = (((AdcCounts - 707) * (60.0 - 0.0)) / (2460 - 707)) + 0.0;
					a2_type= (((AdcCounts - 707) * (20.0 - 4.0)) / (2460 - 707)) + 4.0;
					*/
	        		retval = (((AdcCounts - CUR_4mA_CNTS) * (PRESSURE_SENSOR2_MAX_VAL - PRESSURE_SENSOR2_MIN_VAL)) / (CUR_20mA_CNTS - CUR_4mA_CNTS)) + PRESSURE_SENSOR2_MIN_VAL;
					a2_type= (((AdcCounts - CUR_4mA_CNTS) * (CURR_SENSOR_MAX_INPUT    - CURR_SENSOR_MIN_INPUT))    / (CUR_20mA_CNTS - CUR_4mA_CNTS)) + CURR_SENSOR_MIN_INPUT;
				}
				break;

        case CH_A2_V:
				break;

        case CH_A2_EC:
				break;

        case CH_A2_TC:
				break;

	/*****************channel 3*****************/
        case CH_A3_R1 :
				if(AdcCounts >= LookUpTable_A3[COUNT_ROW][4])
				{
					retval = LookUpTable_A3[VALUE_ROW][4];
				}
				else if(AdcCounts <= LookUpTable_A3[COUNT_ROW][0])
				{
					retval = LookUpTable_A3[VALUE_ROW][0];
				}
				else
				{
					for(k = 0; k <= 4; k++)
					{
						if(AdcCounts <= LookUpTable_A3[COUNT_ROW][k + 1] && AdcCounts > LookUpTable_A3[COUNT_ROW][k])
						{
							strValueCalculation.CountX = LookUpTable_A3[COUNT_ROW][k];  strValueCalculation.CountY = LookUpTable_A3[COUNT_ROW][k + 1];
							strValueCalculation.ValueX = LookUpTable_A3[VALUE_ROW][k];  strValueCalculation.ValueY = LookUpTable_A3[VALUE_ROW][k + 1];
							strValueCalculation.Count  = AdcCounts;
							retval = CalculateUnknown(strValueCalculation);
							break;
						}
					}
				}
				/************************For Resistance convertion************************/
				memset(&strValueCalculation, 0 ,sizeof(strValueCalculation));

				if(AdcCounts >= LookUpTable_A3R1[COUNT_ROW][4])
				{
					a3_type = LookUpTable_A3R1[VALUE_ROW][4];
				}
				else if(AdcCounts <= LookUpTable_A3R1[COUNT_ROW][0])
				{
					a3_type = LookUpTable_A3R1[VALUE_ROW][0];
				}
				else
				{
					for(k = 0; k <= 4; k++)
					{
						if(AdcCounts <= LookUpTable_A3R1[COUNT_ROW][k + 1] && AdcCounts > LookUpTable_A3R1[COUNT_ROW][k])
						{
							strValueCalculation.CountX = LookUpTable_A3R1[COUNT_ROW][k];  strValueCalculation.CountY = LookUpTable_A3R1[COUNT_ROW][k + 1];
							strValueCalculation.ValueX = LookUpTable_A3R1[VALUE_ROW][k];  strValueCalculation.ValueY = LookUpTable_A3R1[VALUE_ROW][k + 1];
							strValueCalculation.Count  = AdcCounts;
							a3_type = CalculateUnknown(strValueCalculation);
							//a3_type = a3_type - 10;
							break;
						}
					}
				}
                break;

        case CH_A3_I1:
        		//retval = (((AdcCounts - giTareCount_A14_I1) * giCalValue_A14_I1) / (giCalCount_A14_I1 - giTareCount_A14_I1)) + giTareValue_A14_I1;
				if(AdcCounts <= CUR_4mA_CNTS)
				{
					retval = PRESSURE_SENSOR1_MIN_VAL;
				}
				else if(AdcCounts >= CUR_20mA_CNTS)
				{
					retval = PRESSURE_SENSOR1_MAX_VAL;
				}
				else
				{
					/*
					retval = (((AdcCounts - 707) * (28.0 - 0.0)) / (2460 - 707)) + 0.0;
					a3_type= (((AdcCounts - 707) * (20.0 - 4.0)) / (2460 - 707)) + 4.0;
					*/
					retval = (((AdcCounts - CUR_4mA_CNTS) * (PRESSURE_SENSOR1_MAX_VAL - PRESSURE_SENSOR1_MIN_VAL)) / (CUR_20mA_CNTS - CUR_4mA_CNTS)) + PRESSURE_SENSOR1_MIN_VAL;
					a3_type= (((AdcCounts - CUR_4mA_CNTS) * (CURR_SENSOR_MAX_INPUT    - CURR_SENSOR_MIN_INPUT))    / (CUR_20mA_CNTS - CUR_4mA_CNTS)) + CURR_SENSOR_MIN_INPUT;
				}
				break;

        case CH_A3_I2:
				break;

        case CH_A3_V:
				break;

        case CH_A3_EC:
            	//giECT_DegreeC = (glECTCanData * 0.03125) - 273;
            	//retval = giECT_DegreeC;
				break;

        case CH_A3_TC:
				break;

	/*****************channel 4*****************/
        case CH_A4_R1:
                break;

        case CH_A4_R2 :
                break;

        case CH_A4_I1:
            	break;

        case CH_A4_I2:
            	break;

        case CH_A4_V:
            	break;

        case CH_A4_EC:
            	break;

        case CH_A4_TC:
            	//giTOT_DegreeC = (glTOTCanData / 32.0) - 273;
            	//retval = giTOT_DegreeC;
            	break;

	/*****************channel 5*****************/
        case CH_A5_R1:
            	break;

        case CH_A5_R2:
            	break;

        case CH_A5_I1 :
        		break;

        case CH_A5_I2:
            	break;

        case CH_A5_V:
            	break;

        case CH_A5_EC:
            	break;

        case CH_A5_TC:
            	break;
	/*****************channel 6*****************/
        case CH_A6_R1 :
        		break;
	/*****************channel 13*****************/
        case CH_A13_R1 :
        		break;

        case CH_A13_R2 :
        		break;

        case CH_A13_I1 :
                break;

        case CH_A13_I2 :
                break;

        case CH_A13_V:
            	break;

        case CH_A13_EC:
            	break;

        case CH_A13_TC:
            	break;

        case CH_A14_R1 :
            	break;
	/*****************channel 14*****************/
        case CH_A14_R2 :
            	break;

        case CH_A14_I1 :
                //retval = (((AdcCounts - giTareCount_A14_I1) * giCalValue_A14_I1) / (giCalCount_A14_I1 - giTareCount_A14_I1)) + giTareValue_A14_I1;
                break;

        case CH_A14_I2 :
        		break;

        case CH_A14_V:
            	break;

        case CH_A14_EC:
            	break;

        case CH_A14_TC:
            	break;

        case CH_BATT_IN :
                  //retval = ((AdcCounts/4096.00) * (3 * 10.5)) + 0.5; //Input Voltage = (ADC/4096)*3.3*10

					if(AdcCounts >= LookUpTable_A4[COUNT_ROW][28])
					{
						retval = LookUpTable_A4[VALUE_ROW][28];
					}
					else if(AdcCounts <= LookUpTable_A4[COUNT_ROW][0])
					{
						retval = LookUpTable_A4[VALUE_ROW][0];
					}
					else
					{
						for(k = 0; k <= 28; k++)
						{
							if(AdcCounts <= LookUpTable_A4[COUNT_ROW][k + 1] && AdcCounts > LookUpTable_A4[COUNT_ROW][k])
							{
								strValueCalculation.CountX = LookUpTable_A4[COUNT_ROW][k];  strValueCalculation.CountY = LookUpTable_A4[COUNT_ROW][k + 1];
								strValueCalculation.ValueX = LookUpTable_A4[VALUE_ROW][k];  strValueCalculation.ValueY = LookUpTable_A4[VALUE_ROW][k + 1];
								strValueCalculation.Count  = AdcCounts;
								retval = CalculateUnknown(strValueCalculation);
								break;
							}
						}
					}
                break;

        default :
            	break;
    }
    return retval;
}

struct AdcSelectRegister funcSwitchAdcMux(struct AdcSelectRegister strAdcSel)
{
    uint8_t lucSensorChannel = 0;
    uint8_t lucSensorType    = 0;
    uint8_t lucChannelToRead = 0;
    uint8_t lucLookUpTable   = 0;
    uint8_t lucDataSourceAdc = 0;

    lucSensorChannel    = strAdcSel.sensorNumber;
    lucSensorType       = strAdcSel.sensorType;

    switch(lucSensorChannel)
    {
        case CH_A1 :
            switch(lucSensorType)
            {
            case RESISTIVE_1  :
                lucLookUpTable = CH_A1_R1;
                //SEL_IN1_LOW;
                funcDelayUs(10);
                //SEL_IN2_LOW;
                funcDelayUs(10);
                lucChannelToRead = 0;
                break;

            case RESISTIVE_2  :
                lucLookUpTable = CH_A1_R2;
                //SEL_IN1_LOW;
                funcDelayUs(10);
                //SEL_IN2_LOW;
                funcDelayUs(10);
                lucChannelToRead = 0;
                break;

            case CURRENT_1    :
                lucLookUpTable = CH_A1_I1;
                //SEL_IN1_HIGH;
                funcDelayUs(10);
                //SEL_IN2_HIGH;
                funcDelayUs(10);
                lucChannelToRead = 8;
                break;

            case CURRENT_2    :
                lucLookUpTable = CH_A1_I2;
                //SEL_IN1_HIGH;
                funcDelayUs(10);
                //SEL_IN2_HIGH;
                funcDelayUs(10);
                lucChannelToRead = 8;
                break;

            case ENGINE_CAN:
                lucLookUpTable = CH_A1_EC;
                break;

            case TRANSMISSION_CAN:
                lucLookUpTable = CH_A1_TC;
                break;

            default :

                break;
            }
            break;

        case CH_A2 :
            switch(lucSensorType)
            {
            case RESISTIVE_1  :
                lucLookUpTable = CH_A2_R1;
                lucChannelToRead = 3;
                break;

            case RESISTIVE_2  :
                lucLookUpTable = CH_A2_R2;
                lucChannelToRead = 3;
                                break;
            case CURRENT_1    :
                                break;
            case CURRENT_2    :
                                break;
            case ENGINE_CAN:
                lucLookUpTable = CH_A2_EC;
                                break;
            case TRANSMISSION_CAN:
                lucLookUpTable = CH_A2_TC;
                                break;
            default         :
                                    break;
            }
            break;
        case CH_A3 :
                    switch(lucSensorType)
                    {
                    case RESISTIVE_1  :
                        lucLookUpTable = CH_A3_R1;
                        lucChannelToRead = 4;
                                        break;
                    case RESISTIVE_2  :
                        lucLookUpTable = CH_A3_R1;
                        lucChannelToRead = 4;
                                        break;
                    case CURRENT_1    :
                                        break;
                    case CURRENT_2    :
                                        break;
                    case VOLTAGE    :
                                        break;
                    case ENGINE_CAN:
                        lucLookUpTable = CH_A3_EC;
                                          break;
                    case TRANSMISSION_CAN:
                        lucLookUpTable = CH_A3_TC;
                                          break;
                        default         :
                            lucChannelToRead = 2;
                                            break;
                    }
                    break;
        case CH_A4 :
                    switch(lucSensorType)
                    {
                    case RESISTIVE_1  :
                        lucLookUpTable = CH_A4_R1;
                        lucChannelToRead = 5;
                                        break;
                    case RESISTIVE_2  :
                        lucLookUpTable   = CH_A4_R2;
                        lucChannelToRead = 5;
                                        break;
                    case CURRENT_1    :
                                        break;
                    case CURRENT_2    :
                                        break;
                    case VOLTAGE      :
                                        break;
                    case ENGINE_CAN:
                        lucLookUpTable = CH_A4_EC;
                                          break;
                    case TRANSMISSION_CAN:
                        lucLookUpTable = CH_A4_TC;
                                          break;
                        default         :
                                            break;
                    }
                    break;
        case CH_A5 :
                    switch(lucSensorType)
                    {
                    case RESISTIVE_1  :
                                        break;
                    case RESISTIVE_2  :
                                        break;
                    case CURRENT_1    :
                        lucLookUpTable = CH_A5_I1;
                        lucChannelToRead = 11;
                                        break;
                    case CURRENT_2    :
                                        break;
                    case VOLTAGE    :
                                        break;
                    case ENGINE_CAN:
                        lucLookUpTable = CH_A5_EC;
                                          break;
                    case TRANSMISSION_CAN:
                        lucLookUpTable = CH_A5_TC;
                                          break;
                        default         :

                                            break;
                    }
                    break;
        case CH_A6 :
                    switch(lucSensorType)
                    {
                    case RESISTIVE_1  :
                        lucLookUpTable = CH_A6_R1;
                        lucChannelToRead = 6;
                                        break;
                    case RESISTIVE_2  :
                                        break;
                    case CURRENT_1    :
                                        break;
                    case CURRENT_2    :
                                        break;
                    case VOLTAGE    :
                                        break;
                    case ENGINE_CAN:
                        lucLookUpTable = CH_A6_EC;
                                          break;
                    case TRANSMISSION_CAN:
                        lucLookUpTable = CH_A6_TC;
                                          break;
                        default         :
                                            break;
                    }
                    break;
        case CH_A7 :
                    switch(lucSensorType)
                    {
                    case RESISTIVE_1  :
                        lucLookUpTable = CH_A13_R1;
                        //SEL_IN3_LOW;
                        funcDelayUs(10);
                        //SEL_IN4_LOW;
                        funcDelayUs(10);
                        lucChannelToRead = 1;
                                        break;
                    case RESISTIVE_2  :
                        lucLookUpTable = CH_A13_R2;
                        //SEL_IN3_LOW;
                        funcDelayUs(10);
                        //SEL_IN4_LOW;
                        funcDelayUs(10);
                        lucChannelToRead = 1;
                                        break;
                    case CURRENT_1    :
                        lucLookUpTable = CH_A13_I1;
                        //SEL_IN3_HIGH;
                        funcDelayUs(10);
                        //SEL_IN4_HIGH;
                        funcDelayUs(10);
                        lucChannelToRead = 9;
                                        break;
                    case CURRENT_2    :
                        lucLookUpTable = CH_A13_I2;
                        //SEL_IN3_HIGH;
                        funcDelayUs(10);
                        //SEL_IN4_HIGH;
                        funcDelayUs(10);
                        lucChannelToRead = 9;
                                        break;
                    case VOLTAGE    :
                                        break;
                    case ENGINE_CAN:
                        lucLookUpTable = CH_A13_EC;
                                          break;
                    case TRANSMISSION_CAN:
                        lucLookUpTable = CH_A13_TC;
                                          break;
                        default         :
                                            break;
                    }
                    break;
            case CH_A8 :
                switch(lucSensorType)
                {
                case RESISTIVE_1  :
                    lucLookUpTable = CH_A14_R1;
                    //SEL_IN5_LOW;
                    funcDelayUs(10);
                    //SEL_IN6_LOW;
                    funcDelayUs(10);
                    lucChannelToRead = 2;
                                    break;
                case RESISTIVE_2  :
                    lucLookUpTable = CH_A14_R2;
                    //SEL_IN5_LOW;
                    funcDelayUs(10);
                    //SEL_IN6_LOW;
                    funcDelayUs(10);
                    lucChannelToRead = 2;
                                    break;
                case CURRENT_1    :
                    //SEL_IN5_HIGH;
                    funcDelayUs(10);
                    //SEL_IN6_HIGH;
                    funcDelayUs(10);
                    lucLookUpTable = CH_A14_I1;
                    lucChannelToRead = 10;
                                    break;
                case CURRENT_2    :
                    lucLookUpTable = CH_A14_I2;
                    //SEL_IN5_HIGH;
                    funcDelayUs(10);
                    //SEL_IN6_HIGH;
                    funcDelayUs(10);
                    lucChannelToRead = 10;
                                    break;
                case VOLTAGE    :
                                    break;
                case ENGINE_CAN:
                    lucLookUpTable = CH_A14_EC;
                                      break;

                case TRANSMISSION_CAN:
                    lucLookUpTable = CH_A14_TC;
                                      break;
                    default:

                        break;
                }
                break;

        case BATT_IN :
            switch(lucSensorType)
            {
            case VOLTAGE:
                lucLookUpTable = CH_BATT_IN;
                lucChannelToRead = 7;
                break;

            default :

                break;
            }

            break;

        default     :
                    break;
    }

    if((lucSensorType == ENGINE_CAN) || (lucSensorType == TRANSMISSION_CAN))
    {
        lucDataSourceAdc = FROM_CAN_SOURCE;
    }
    else
    {
        lucDataSourceAdc = ADC_CHANNEL;
    }

    strAdcSel.readChannel   = lucChannelToRead;
    strAdcSel.lookUpTable   = lucLookUpTable;
    strAdcSel.AdcDataSource = lucDataSourceAdc;

    return strAdcSel;
}

float CalculateUnknown(struct  strValueFormula strlValueCalculation)
{
    float lfValue = 0;

    if(strlValueCalculation.CountY < strlValueCalculation.CountX)
    {
        lfValue = ((((strlValueCalculation.CountX - strlValueCalculation.Count) * (strlValueCalculation.ValueY - strlValueCalculation.ValueX)) / (strlValueCalculation.CountX - strlValueCalculation.CountY)) + strlValueCalculation.ValueX);
    }
    else
    {
        lfValue = ((((strlValueCalculation.Count - strlValueCalculation.CountX) * (strlValueCalculation.ValueY - strlValueCalculation.ValueX)) / (strlValueCalculation.CountY - strlValueCalculation.CountX)) + strlValueCalculation.ValueX);
    }

    return(lfValue);
}
void funcDelayUs(Uint32 llTick)
{

    Uint32 liDelayLoop = 0;
    Uint32 llLoopUs1 = 0;

    for(liDelayLoop = 0; liDelayLoop < llTick; liDelayLoop++)
    {
        for(llLoopUs1 = 0; llLoopUs1 < 100; llLoopUs1++)
        {}
    }
}

void InputsThresholdDecisionMaking(void)
{
    uint8_t lucForLoopCounter    = 0;
    uint8_t lucInputNumber       = 0;
    uint8_t lucInputSensorType   = 0;

    const uint8_t cnstDefaultModeSelectionAnalog[9]      = { ENGINE_CAN, RESISTIVE_1, ENGINE_CAN, TRANSMISSION_CAN, CURRENT_1, RESISTIVE_1, RESISTIVE_1, RESISTIVE_1, VOLTAGE };
    const float cnstDefaultErrorLowAnalog[9]            = { 0.8, 40.00, 40.00, 40.00, 10.00, 10.00, 6.00, 40.00, 18.50 };
    const float cnstDefaultErrorHighAnalog[9]           = { 10.00, 120.00, 95.00, 120.00, 20.00, 100.00, 10.00, 120.00, 30.50 };
    const float cnstDefaultErrorOpenAnalog[9]           = { 3000.00, 3000.00, 3000.00, 3000.00, 127.00, 3000.00, 3200.00, 3200.00, 0.1999 };
    const float cnstDefaultErrorShortCircuitAnalog[9]   = { 200.00, 50.00, 50.00, 50.00, 0.1999, 50.00, 200.00, 50.00, 0.1999 };
    const float cnstDefaultErrorLowSpeed[8]             = { 0.00, 0.00, 0.1999, 0.1999, 0.1999, 0.1999, 0.1999, 0.1999 };
    const float cnstDefaultErrorHighSpeed[8]            = { 2499.99, 49.99, 0.1999, 0.1999, 0.1999, 0.1999, 0.1999, 0.1999};
  //load default
    for(lucForLoopCounter = 0;lucForLoopCounter<9;lucForLoopCounter++)
    {
    	DefaultAnalogInput[lucForLoopCounter].ModeSelection = cnstDefaultModeSelectionAnalog[lucForLoopCounter];
    	DefaultAnalogInput[lucForLoopCounter].ErrorOpen = cnstDefaultErrorOpenAnalog[lucForLoopCounter];
		DefaultAnalogInput[lucForLoopCounter].ErrorHigh = cnstDefaultErrorHighAnalog[lucForLoopCounter];
		DefaultAnalogInput[lucForLoopCounter].ErrorShortCircuit = cnstDefaultErrorShortCircuitAnalog[lucForLoopCounter];
		DefaultAnalogInput[lucForLoopCounter].ErrorLow = cnstDefaultErrorLowAnalog[lucForLoopCounter];
    }

    	DefaultSpeedInput[0].ErrorHigh = cnstDefaultErrorHighSpeed[0];
		DefaultSpeedInput[0].ErrorLow  = cnstDefaultErrorLowSpeed[0];
    	DefaultSpeedInput[1].ErrorHigh = cnstDefaultErrorHighSpeed[1];
		DefaultSpeedInput[1].ErrorLow  = cnstDefaultErrorLowSpeed[1];

    /* ADC channel threshold checking and status update */
    for(lucForLoopCounter = 0; lucForLoopCounter < 0x08; lucForLoopCounter++)
    {
        lucInputSensorType  = DefaultAnalogInput[lucForLoopCounter].ModeSelection;

        switch(lucInputSensorType)
        {
        case RESISTIVE_1:
            funcErrorCheckResistiveType1(lucForLoopCounter);
            break;

        case RESISTIVE_2:
            break;

        case CURRENT_1:
            funcErrorCheckCurrentType1(lucForLoopCounter);
            break;

        case CURRENT_2:
            break;

        case ENGINE_CAN:
            break;

        case TRANSMISSION_CAN:
            break;

        default :

            break;
        }
    }

    /* Speed channel threshold checking and status update */
    /* Engine RPM error decision making */
    lucInputNumber = A16_ENG_RPM;
    if(gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] != NO_ERROR)
    {
        if(gulAdcAndSpeedConvetedData[lucInputNumber] > DefaultSpeedInput[0].ErrorHigh)
        {
            gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_HIGH;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] = ERROR_STATUS_HIGH;
        }
        else if(gulAdcAndSpeedConvetedData[lucInputNumber] < DefaultSpeedInput[0].ErrorLow)
        {
            gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_LOW;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] = ERROR_STATUS_LOW;
        }
        else if(gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] == ERROR_STATUS_OPEN)
        {
            gucaMinMaxErrorStatus[lucInputNumber] = ERROR_STATUS_OPEN;
        }
        else
        {
            gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_NORMAL;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] = ERROR_STATUS_NORMAL;
        }
    }
    else
    {
        gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_LOW;
        gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] = ERROR_STATUS_LOW;
    }

    /* Road speed error decision making */
    lucInputNumber = A17_ROAD_SPD;
    if(gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] != NO_ERROR)
    {
        if(gulAdcAndSpeedConvetedData[lucInputNumber] > DefaultSpeedInput[1].ErrorHigh)
        {
            gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_HIGH;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] = ERROR_STATUS_HIGH;
        }
        else if(gulAdcAndSpeedConvetedData[lucInputNumber] < DefaultSpeedInput[1].ErrorLow)
        {
            gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_LOW;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] = ERROR_STATUS_LOW;
        }
        else if(gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] == ERROR_STATUS_OPEN)
        {
            gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_OPEN;
        }
        else
        {
            gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_NORMAL;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] = ERROR_STATUS_NORMAL;
        }
    }
    else
    {
        gucaMinMaxErrorStatus[lucInputNumber]                           = ERROR_STATUS_LOW;
        gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lucInputNumber] = ERROR_STATUS_LOW;
    }
}

void funcErrorCheckResistiveType1(uint8_t lulInputNumber)
{
    if(gulAdcAndSpeedRawData[lulInputNumber] > DefaultAnalogInput[lulInputNumber].ErrorOpen)
    {
        gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_OPEN;
        gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_OPEN;
    }
    else if(gulAdcAndSpeedRawData[lulInputNumber] < DefaultAnalogInput[lulInputNumber].ErrorShortCircuit)
    {
        gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_SHORT;
        gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_SHORT;
    }
    else
    {
        if(gulAdcFloatData[lulInputNumber] >=  DefaultAnalogInput[lulInputNumber].ErrorHigh)
        {
            gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_HIGH;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_HIGH;
        }
        else if(gulAdcFloatData[lulInputNumber] <=  DefaultAnalogInput[lulInputNumber].ErrorLow)
        {
            gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_LOW;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_LOW;
        }
        else
        {
            gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_NORMAL;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_NORMAL;
        }
    }
}

void funcErrorCheckCurrentType1(uint8_t lulInputNumber)
{
    if(gulAdcAndSpeedRawData[lulInputNumber] < DefaultAnalogInput[lulInputNumber].ErrorOpen)
    {
        gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_OPEN;
        gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_OPEN;
    }
    else
    {
        if(gulAdcFloatData[lulInputNumber] >=  DefaultAnalogInput[lulInputNumber].ErrorHigh)
        {
            gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_HIGH;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_HIGH;
        }
        else if(gulAdcFloatData[lulInputNumber] <=  DefaultAnalogInput[lulInputNumber].ErrorLow)
        {
            gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_LOW;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_LOW;
        }
        else
        {
            gucaMinMaxErrorStatus[lulInputNumber]                            = ERROR_STATUS_NORMAL;
            gucCurErrorStatus[NO_OF_DIGITAL_INPUT_OUTPUTS + lulInputNumber]  = ERROR_STATUS_NORMAL;
        }
    }
}

void funcMinMaxErrorLog(void)
{
    uint8_t lucInputNumber       = 0;

    /* Update current read ADC values/processed values */
    strMinMaxDataFrame.CltTempCurrentValueDEG   = gulAdcFloatData[A3_ECT];
    strMinMaxDataFrame.EopCurrentValueKpa       = gulAdcFloatData[A1_EOP];
    strMinMaxDataFrame.EngSpdCurrentValueRPM    = gulAdcFloatData[A16_ENG_RPM];
    strMinMaxDataFrame.TopCurrentValueKpa       = gulAdcFloatData[A5_TOP];
    strMinMaxDataFrame.TotCurrenrvalueDEG       = gulAdcFloatData[A4_TOT];
    strMinMaxDataFrame.HrotCurentValueDEG       = gulAdcFloatData[A18_HROT];
    strMinMaxDataFrame.VehSpdCurrentValueKmph   = gulAdcFloatData[A17_ROAD_SPD];
    strMinMaxDataFrame.EotCurrentValueDEG       = gulAdcFloatData[A2_EOT];
    strMinMaxDataFrame.ApCurrentValueKpa        = gulAdcFloatData[A19_AP];
    strMinMaxDataFrame.SotCurrentValueDEG       = gulAdcFloatData[A20_SOT];
    strMinMaxDataFrame.DisplayHoursRunHrs       = giHourMeter;//(glHour_meterCanData / 20.0);

    /* Log Coolant temperature error */
    lucInputNumber      = A3_ECT;
//    lucPrevErrorStatus  = funcMemoryReadVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), 0x01);
    if(lucPrevErrorStatusECT != gucaMinMaxErrorStatus[lucInputNumber])
    {
        strMinMaxDataFrame.ErrorType        = gucaMinMaxErrorStatus[lucInputNumber];
        strMinMaxDataFrame.ParameterType    = lucInputNumber;
        lucPrevErrorStatusECT = gucaMinMaxErrorStatus[lucInputNumber];
        funcWriteMinMaxToSdCard();
//        funcMemoryWriteVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), gucaMinMaxErrorStatus[lucInputNumber], 0x01);
//        funcStoreMinMaxLogToMemory(strMinMaxDataFrame);
    }
    else
    {
        /**/
    }

    /* Log Engine oil pressure error */
    lucInputNumber      = A1_EOP;
//    lucPrevErrorStatus  = funcMemoryReadVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), 0x01);
    if(lucPrevErrorStatusEOP != gucaMinMaxErrorStatus[lucInputNumber])
    {
        strMinMaxDataFrame.ErrorType        = gucaMinMaxErrorStatus[lucInputNumber];
        strMinMaxDataFrame.ParameterType    = lucInputNumber;
        lucPrevErrorStatusEOP = gucaMinMaxErrorStatus[lucInputNumber];
        funcWriteMinMaxToSdCard();
//        funcMemoryWriteVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), gucaMinMaxErrorStatus[lucInputNumber], 0x01);
//        funcStoreMinMaxLogToMemory(strMinMaxDataFrame);
    }
    else
    {
        /**/
    }

    /* Log Engine RPM error */
    lucInputNumber      = A16_ENG_RPM;
//    lucPrevErrorStatus  = funcMemoryReadVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), 0x01);
    if(lucPrevErrorStatusRPM != gucaMinMaxErrorStatus[lucInputNumber])
    {
        strMinMaxDataFrame.ErrorType        = gucaMinMaxErrorStatus[lucInputNumber];
        strMinMaxDataFrame.ParameterType    = lucInputNumber;
        lucPrevErrorStatusRPM = gucaMinMaxErrorStatus[lucInputNumber];
        funcWriteMinMaxToSdCard();
//        funcMemoryWriteVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), gucaMinMaxErrorStatus[lucInputNumber], 0x01);
//        funcStoreMinMaxLogToMemory(strMinMaxDataFrame);
    }
    else
    {
        /**/
    }

    /* Log Transmission oil pressure error */
    lucInputNumber      = A5_TOP;
//    lucPrevErrorStatus  = funcMemoryReadVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), 0x01);
    if(lucPrevErrorStatusTOP != gucaMinMaxErrorStatus[lucInputNumber])
    {
        strMinMaxDataFrame.ErrorType        = gucaMinMaxErrorStatus[lucInputNumber];
        strMinMaxDataFrame.ParameterType    = lucInputNumber;
        lucPrevErrorStatusTOP = gucaMinMaxErrorStatus[lucInputNumber];
        funcWriteMinMaxToSdCard();
//        funcMemoryWriteVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), gucaMinMaxErrorStatus[lucInputNumber], 0x01);
//        funcStoreMinMaxLogToMemory(strMinMaxDataFrame);
    }
    else
    {
        /**/
    }

    /* Log Transmission oil temperature error */
    lucInputNumber      = A4_TOT;
//    lucPrevErrorStatus  = funcMemoryReadVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), 0x01);
    if(lucPrevErrorStatusTOT != gucaMinMaxErrorStatus[lucInputNumber])
    {
        strMinMaxDataFrame.ErrorType        = gucaMinMaxErrorStatus[lucInputNumber];
        strMinMaxDataFrame.ParameterType    = lucInputNumber;
        lucPrevErrorStatusTOT = gucaMinMaxErrorStatus[lucInputNumber];
        funcWriteMinMaxToSdCard();
//        funcMemoryWriteVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), gucaMinMaxErrorStatus[lucInputNumber], 0x01);
//        funcStoreMinMaxLogToMemory(strMinMaxDataFrame);
    }
    else
    {
        /**/
    }

    /* Log Hydraulic retarder oil temperature error */

    /* Log Vehicle/Road speed error */
    lucInputNumber      = A17_ROAD_SPD;
//    lucPrevErrorStatus  = funcMemoryReadVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), 0x01);
    if(lucPrevErrorStatusRSpeed != gucaMinMaxErrorStatus[lucInputNumber])
    {
        strMinMaxDataFrame.ErrorType        = gucaMinMaxErrorStatus[lucInputNumber];
        strMinMaxDataFrame.ParameterType    = lucInputNumber;
        lucPrevErrorStatusRSpeed = gucaMinMaxErrorStatus[lucInputNumber];
        funcWriteMinMaxToSdCard();
//        funcMemoryWriteVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), gucaMinMaxErrorStatus[lucInputNumber], 0x01);
//        funcStoreMinMaxLogToMemory(strMinMaxDataFrame);
    }
    else
    {
        /**/
    }

    /* Log Engine oil temperature error */
    lucInputNumber      = A2_EOT;
//    lucPrevErrorStatus  = funcMemoryReadVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), 0x01);
    if(lucPrevErrorStatusEOT != gucaMinMaxErrorStatus[lucInputNumber])
    {
        strMinMaxDataFrame.ErrorType        = gucaMinMaxErrorStatus[lucInputNumber];
        strMinMaxDataFrame.ParameterType    = lucInputNumber;
        lucPrevErrorStatusEOT = gucaMinMaxErrorStatus[lucInputNumber];
        funcWriteMinMaxToSdCard();
//        funcMemoryWriteVariable(PRIMRY_MEMORY, (MIN_MAX_ERROR_STATUS_ADRS_PTR + lucInputNumber), gucaMinMaxErrorStatus[lucInputNumber], 0x01);
//        funcStoreMinMaxLogToMemory(strMinMaxDataFrame);
    }
    else
    {
        /**/
    }
}

void funcDataLogging(void)
{
    /* Update current read ADC values/processed values */
    strDataLoggingFrame.CltTempCurrentValueDEG   = gfEct_text;//gulAdcFloatData[A3_ECT];
    strDataLoggingFrame.EopCurrentValueKpa       = gfEop_text;//gulAdcFloatData[A1_EOP];
    strDataLoggingFrame.EngSpdCurrentValueRPM    = giEngineRpm;//giOutputRpm;//gulAdcFloatData[A16_ENG_RPM];
    strDataLoggingFrame.TopCurrentValueKpa       = gfTop_text;//gulAdcFloatData[A5_TOP];
    strDataLoggingFrame.TotCurrenrvalueDEG       = gfTot_text;//gulAdcFloatData[A4_TOT];
//    strDataLoggingFrame.HrotCurentValueDEG     = gulAdcFloatData[A18_HROT];
    strDataLoggingFrame.VehSpdCurrentValueKmph   = giVehicleSpeed_text;//gulAdcFloatData[A17_ROAD_SPD];
    strDataLoggingFrame.EotCurrentValueDEG       = gfEot_text;//gulAdcFloatData[A2_EOT];
//    strDataLoggingFrame.ApCurrentValueKpa        = gulAdcFloatData[A19_AP];
//    strDataLoggingFrame.SotCurrentValueDEG       = gulAdcFloatData[A20_SOT];
    strDataLoggingFrame.DisplayHoursRunHrs = giHourMeter;//(glHour_meterCanData / 20.0);
    strDataLoggingFrame.FuellvlCurrentValuePer = gfFuel_text; //gfconvertedfuellvl;
    strDataLoggingFrame.BatteryCurrentValueV = gfVolt_text;
    strDataLoggingFrame.ConverterOiltempCurrentValue = gfCot_text;//gfconvertedCot;

    funcWriteDataloggingToSdCard();
}


void Live_errors_update(uint32_t lulspn,uint16_t lucfmi)
{
/*
  	for(uint16_t i = 0; i < NO_OF_DM1_MESSAGES ; i++)
	{
		if(FAULT_SPN[i] == lulspn && FAULT_FMI[i] == lucfmi)
		{
			DM1_Error[i].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
			DM1_Error[i].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
			DM1_Error[i].Status 		= strDM1Log[s_addr][err_no].Status;
			DM1_Error[i].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
			DM1_Error[i].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
			DM1_Error[i].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

			if(strDM1Log[s_addr][err_no].Status == 1)
			{ScrollError[i] = ERROR_ACTIVE;}
			else
			{ScrollError[i] = ERROR_INACTIVE;}

			break;
		}
		else{}
	}
*/
  	for(uint16_t i = 0; i < NO_OF_DM1_MESSAGES ; i++)
	{
		if(SPN_FMI_DATA[i][0] == lulspn && SPN_FMI_DATA[i][1] == lucfmi)
		{
			DM1_Error[i].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
			DM1_Error[i].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
			DM1_Error[i].Status 		= strDM1Log[s_addr][err_no].Status;
			DM1_Error[i].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
			DM1_Error[i].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
			DM1_Error[i].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

			if(strDM1Log[s_addr][err_no].Status == 1)
			{ScrollError[i] = ERROR_ACTIVE;}
			else
			{ScrollError[i] = ERROR_INACTIVE;}

			break;
		}
		else{}
	}
/*

#ifdef DOZER_P_VER
	 DOZER-P-VERSION 155 ECU
	if(lulspn==177 && lucfmi == 16)
	{
		Transmission oil temperature is above normal.
		DM1_Error[0].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[0].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[0].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[0].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[0].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[0].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[0] = ERROR_ACTIVE;}
		else
		{ScrollError[0] = ERROR_INACTIVE;}
	}
	else if(lulspn==127 && lucfmi == 16)
	{
		Transmission Oil Pressure is Above Normal
		DM1_Error[1].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[1].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[1].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[1].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[1].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[1].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[1] = ERROR_ACTIVE;}
		else
		{ScrollError[1] = ERROR_INACTIVE;}
	}
	else if(lulspn==127 && lucfmi == 18)
	{
		Transmission Oil Pressure is below Normal
		DM1_Error[2].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[2].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[2].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[2].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[2].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[2].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[2] = ERROR_ACTIVE;}
		else
		{ScrollError[2] = ERROR_INACTIVE;}
	}
	else if(lulspn==100 && lucfmi == 18)
	{
		Engine oil pressure below normal.
		DM1_Error[3].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[3].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[3].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[3].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[3].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[3].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[3] = ERROR_ACTIVE;}
		else
		{ScrollError[3] = ERROR_INACTIVE;}
	}
	else if(lulspn==190 && lucfmi == 16)
	{
		Engine is over speed.
		DM1_Error[4].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[4].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[4].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[4].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[4].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[4].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[4] = ERROR_ACTIVE;}
		else
		{ScrollError[4] = ERROR_INACTIVE;}
	}
	else if(lulspn==3359 && lucfmi == 16)
	{
		Transmission Oil Filter Clogged
		DM1_Error[5].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[5].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[5].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[5].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[5].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[5].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[5] = ERROR_ACTIVE;}
		else
		{ScrollError[5] = ERROR_INACTIVE;}
	}
	else if(lulspn==111 && lucfmi == 18)
	{
		Low engine coolant level.
		DM1_Error[6].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[6].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[6].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[6].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[6].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[6].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[6] = ERROR_ACTIVE;}
		else
		{ScrollError[6] = ERROR_INACTIVE;}
	}
	else if(lulspn==168 && lucfmi == 18)
	{
		Electrical Battery Potential out of Range
		DM1_Error[7].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[7].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[7].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[7].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[7].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[7].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[7] = ERROR_ACTIVE;}
		else
		{ScrollError[7] = ERROR_INACTIVE;}
	}
	else if(lulspn==110 && lucfmi==16)
	{
		Engine water temperature above normal
		DM1_Error[8].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[8].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[8].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[8].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[8].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[8].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[8] = ERROR_ACTIVE;}
		else
		{ScrollError[8] = ERROR_INACTIVE;}
	}
	else if(lulspn==175 && lucfmi==16)
	{
		Engine Oil temperature above normal.
		DM1_Error[9].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[9].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[9].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[9].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[9].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[9].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[9] = ERROR_ACTIVE;}
		else
		{ScrollError[9] = ERROR_INACTIVE;}
	}
	else if(lulspn==96 && lucfmi==18)
	{
		Fuel level is low.
		DM1_Error[10].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[10].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[10].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[10].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[10].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[10].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[10] = ERROR_ACTIVE;}
		else
		{ScrollError[10] = ERROR_INACTIVE;}
	}
	else if(lulspn==99 && lucfmi==16)
	{
		Engine Oil Filter Clogged
		DM1_Error[11].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[11].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[11].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[11].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[11].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[11].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		Warnings are dependent on Engine RPM > 500
		//if((strDM1Log[s_addr][err_no].Status == 1) && (giEngineRpm > 500))
		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[11] = ERROR_ACTIVE;}
		else
		{ScrollError[11] = ERROR_INACTIVE;}
	}
	else if(lulspn==96 && lucfmi==3)
	{
		Fuel Level sensor open circuit
		DM1_Error[12].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[12].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[12].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[12].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[12].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[12].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		TOP warnings are dependent on Engine RPM > 500
		//if((strDM1Log[s_addr][err_no].Status == 1) && (giEngineRpm > 500))
		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[12] = ERROR_ACTIVE;}
		else
		{ScrollError[12] = ERROR_INACTIVE;}
	}
	else if(lulspn==100 && lucfmi==2)
	{
		Engine oil pressure Sensor malfunction
		DM1_Error[13].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[13].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[13].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[13].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[13].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[13].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[13] = ERROR_ACTIVE;}
		else
		{ScrollError[13] = ERROR_INACTIVE;}
	}
	else if(lulspn==100 && lucfmi==3)
	{
		Engine oil pressure voltage is above normal, or shorted to high.
		DM1_Error[14].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[14].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[14].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[14].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[14].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[14].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[14] = ERROR_ACTIVE;}
		else
		{ScrollError[14] = ERROR_INACTIVE;}
	}
	else if(lulspn==100 && lucfmi==4)
	{
		Engine oil pressure voltage is below normal, or shorted to low.
		DM1_Error[15].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[15].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[15].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[15].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[15].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[15].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[15] = ERROR_ACTIVE;}
		else
		{ScrollError[15] = ERROR_INACTIVE;}
	}
	else if(lulspn==110 && lucfmi==3)
	{
		Engine coolant temperature voltage is above normal, or shorted to high.
		DM1_Error[16].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[16].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[16].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[16].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[16].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[16].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[16] = ERROR_ACTIVE;}
		else
		{ScrollError[16] = ERROR_INACTIVE;}
	}
	else if(lulspn==110 && lucfmi==4)
	{
		Engine coolant temperature voltage is below normal, or shorted to low.
		DM1_Error[17].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[17].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[17].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[17].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[17].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[17].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[17] = ERROR_ACTIVE;}
		else
		{ScrollError[17] = ERROR_INACTIVE;}
	}
	else if(lulspn==175 && lucfmi==3)
	{
		Engine Oil Temperature is Open Circuit
		DM1_Error[18].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[18].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[18].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[18].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[18].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[18].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[18] = ERROR_ACTIVE;}
		else
		{ScrollError[18] = ERROR_INACTIVE;}
	}
	else if(lulspn==175 && lucfmi==4)
	{
		Engine Oil Temperature is Short Circuit
		DM1_Error[19].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[19].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[19].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[19].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[19].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[19].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[19] = ERROR_ACTIVE;}
		else
		{ScrollError[19] = ERROR_INACTIVE;}
	}
	else if(lulspn==177 && lucfmi==3)
	{
		Converter Oil Temperature is Open Circuit
		DM1_Error[20].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[20].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[20].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[20].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[20].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[20].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[20] = ERROR_ACTIVE;}
		else
		{ScrollError[20] = ERROR_INACTIVE;}
	}
	else if(lulspn==177 && lucfmi==4)
	{
		Converter Oil Temperature is Short Circuit
		DM1_Error[21].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[21].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[21].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[21].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[21].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[21].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[21] = ERROR_ACTIVE;}
		else
		{ScrollError[21] = ERROR_INACTIVE;}
	}
	else if(lulspn==127 && lucfmi==2)
	{
		Transmission oil pressure Sensor malfunction
		DM1_Error[22].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[22].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[22].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[22].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[22].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[22].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[22] = ERROR_ACTIVE;}
		else
		{ScrollError[22] = ERROR_INACTIVE;}
	}
	else if(lulspn==127 && lucfmi==3)
	{
		Transmission oil pressure voltage is above normal, or shorted to high.
		DM1_Error[23].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[23].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[23].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[23].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[23].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[23].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[23] = ERROR_ACTIVE;}
		else
		{ScrollError[23] = ERROR_INACTIVE;}
	}
	else if(lulspn==127 && lucfmi==4)
	{
		Transmission oil pressure voltage is below normal, or shorted to low.
		DM1_Error[24].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[24].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[24].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[24].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[24].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[24].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[24] = ERROR_ACTIVE;}
		else
		{ScrollError[24] = ERROR_INACTIVE;}
	}
	else if(lulspn==521001 && lucfmi==3)
	{
		SenderCAN is Disconnected
		DM1_Error[25].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[25].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[25].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[25].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[25].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[25].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[25] = ERROR_ACTIVE;}
		else
		{ScrollError[25] = ERROR_INACTIVE;}
	}
	else{}
#else
	 DOZER-E-VERSION 155 ECU
	if(lulspn==810 && lucfmi == 2)
	{
		ErrPickUp1
		DM1_Error[0].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[0].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[0].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[0].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[0].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[0].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[0] = ERROR_ACTIVE;}
		else
		{ScrollError[0] = ERROR_INACTIVE;}
	}
	else if(lulspn==723 && lucfmi == 2)
	{
		ErrPickUp2
		DM1_Error[1].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[1].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[1].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[1].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[1].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[1].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[1] = ERROR_ACTIVE;}
		else
		{ScrollError[1] = ERROR_INACTIVE;}
	}
	else if(lulspn==190 && lucfmi == 31)
	{
		ErrOverSpeed
		DM1_Error[2].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[2].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[2].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[2].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[2].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[2].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[2] = ERROR_ACTIVE;}
		else
		{ScrollError[2] = ERROR_INACTIVE;}
	}
	else if(lulspn==91 && lucfmi == 31)
	{
		ErrSetp1Ext
		DM1_Error[3].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[3].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[3].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[3].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[3].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[3].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[3] = ERROR_ACTIVE;}
		else
		{ScrollError[3] = ERROR_INACTIVE;}
	}
	else if(lulspn==974 && lucfmi == 31)
	{
		ErrSetp2Ext
		DM1_Error[4].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[4].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[4].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[4].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[4].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[4].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[4] = ERROR_ACTIVE;}
		else
		{ScrollError[4] = ERROR_INACTIVE;}
	}
	else if(lulspn==102 && lucfmi == 2)
	{
		ErrBoostPressure
		DM1_Error[5].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[5].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[5].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[5].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[5].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[5].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[5] = ERROR_ACTIVE;}
		else
		{ScrollError[5] = ERROR_INACTIVE;}
	}
	else if(lulspn==100 && lucfmi == 2)
	{
		ErrOilPressure
		DM1_Error[6].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[6].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[6].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[6].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[6].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[6].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[6] = ERROR_ACTIVE;}
		else
		{ScrollError[6] = ERROR_INACTIVE;}
	}
	else if(lulspn==108 && lucfmi == 31)
	{
		ErrAmbientPressure
		DM1_Error[7].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[7].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[7].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[7].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[7].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[7].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[7] = ERROR_ACTIVE;}
		else
		{ScrollError[7] = ERROR_INACTIVE;}
	}
	else if(lulspn==110 && lucfmi==2)
	{
		ErrCoolantTemp
		DM1_Error[8].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[8].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[8].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[8].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[8].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[8].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[8] = ERROR_ACTIVE;}
		else
		{ScrollError[8] = ERROR_INACTIVE;}
	}
	else if(lulspn==175 && lucfmi==2)
	{
		ErrOilTemp
		DM1_Error[9].SourceAddress 	= strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[9].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[9].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[9].MessageId 		= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[9].OccuranceCount = strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[9].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[9] = ERROR_ACTIVE;}
		else
		{ScrollError[9] = ERROR_INACTIVE;}
	}
	else if(lulspn==167 && lucfmi==31)
	{
		ErrAlternator
		DM1_Error[10].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[10].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[10].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[10].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[10].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[10].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[10] = ERROR_ACTIVE;}
		else
		{ScrollError[10] = ERROR_INACTIVE;}
	}
	else if(lulspn==100 && lucfmi==17)
	{
		ErrOilPressWarn
		DM1_Error[11].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[11].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[11].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[11].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[11].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[11].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		Warnings are dependent on Engine RPM > 500
		//if((strDM1Log[s_addr][err_no].Status == 1) && (giEngineRpm > 500))
		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[11] = ERROR_ACTIVE;}
		else
		{ScrollError[11] = ERROR_INACTIVE;}
	}
	else if(lulspn==100 && lucfmi==1)
	{
		ErrOilPressEcy
		DM1_Error[12].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[12].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[12].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[12].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[12].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[12].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		TOP warnings are dependent on Engine RPM > 500
		//if((strDM1Log[s_addr][err_no].Status == 1) && (giEngineRpm > 500))
		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[12] = ERROR_ACTIVE;}
		else
		{ScrollError[12] = ERROR_INACTIVE;}
	}
	else if(lulspn==110 && lucfmi==15)
	{
		ErrCoolantTempWarn
		DM1_Error[13].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[13].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[13].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[13].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[13].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[13].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[13] = ERROR_ACTIVE;}
		else
		{ScrollError[13] = ERROR_INACTIVE;}
	}
	else if(lulspn==175 && lucfmi==15)
	{
		ErrOilTempWarn
		DM1_Error[14].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[14].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[14].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[14].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[14].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[14].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[14] = ERROR_ACTIVE;}
		else
		{ScrollError[14] = ERROR_INACTIVE;}
	}
	else if(lulspn==110 && lucfmi==0)
	{
		ErrCoolantTempEcy
		DM1_Error[15].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[15].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[15].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[15].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[15].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[15].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[15] = ERROR_ACTIVE;}
		else
		{ScrollError[15] = ERROR_INACTIVE;}
	}
	else if(lulspn==167 && lucfmi==31)
	{
		ErrAlternatorWarn
		DM1_Error[16].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[16].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[16].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[16].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[16].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[16].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[16] = ERROR_ACTIVE;}
		else
		{ScrollError[16] = ERROR_INACTIVE;}
	}
	else if(lulspn==4002 && lucfmi==31)
	{
		ErrFailedToStart
		DM1_Error[17].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[17].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[17].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[17].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[17].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[17].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[17] = ERROR_ACTIVE;}
		else
		{ScrollError[17] = ERROR_INACTIVE;}
	}
	else if(lulspn==3058 && lucfmi==31)
	{
		ErrPECommonAlarm
		DM1_Error[18].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[18].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[18].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[18].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[18].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[18].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[18] = ERROR_ACTIVE;}
		else
		{ScrollError[18] = ERROR_INACTIVE;}
	}
	else if(lulspn==1210 && lucfmi==31)
	{
		ErrFeedback
		DM1_Error[19].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[19].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[19].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[19].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[19].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[19].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[19] = ERROR_ACTIVE;}
		else
		{ScrollError[19] = ERROR_INACTIVE;}
	}
	else if(lulspn==638 && lucfmi==31)
	{
		ErrActuatorDiff
		DM1_Error[20].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[20].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[20].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[20].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[20].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[20].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[20] = ERROR_ACTIVE;}
		else
		{ScrollError[20] = ERROR_INACTIVE;}
	}
	else if(lulspn==1210 && lucfmi==31)
	{
		ErrFeedbackRef
		DM1_Error[21].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[21].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[21].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[21].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[21].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[21].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[21] = ERROR_ACTIVE;}
		else
		{ScrollError[21] = ERROR_INACTIVE;}
	}
	else if(lulspn==1210 && lucfmi==31)
	{
		ErrFeedbackAdjust
		DM1_Error[22].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[22].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[22].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[22].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[22].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[22].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[22] = ERROR_ACTIVE;}
		else
		{ScrollError[22] = ERROR_INACTIVE;}
	}
	else if(lulspn==638 && lucfmi==31)
	{
		ErrAmplifier
		DM1_Error[23].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[23].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[23].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[23].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[23].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[23].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[23] = ERROR_ACTIVE;}
		else
		{ScrollError[23] = ERROR_INACTIVE;}
	}
	else if(lulspn==639 && lucfmi==31)
	{
		ErrSAEJ1939CanBus
		DM1_Error[24].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[24].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[24].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[24].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[24].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[24].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[24] = ERROR_ACTIVE;}
		else
		{ScrollError[24] = ERROR_INACTIVE;}
	}
	else if(lulspn==639 && lucfmi==31)
	{
		ErrSAEJ1939Comm
		DM1_Error[25].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[25].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[25].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[25].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[25].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[25].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[25] = ERROR_ACTIVE;}
		else
		{ScrollError[25] = ERROR_INACTIVE;}
	}
	else if(lulspn==3058 && lucfmi==31)
	{
		ErrHZMCanBus
		DM1_Error[26].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[26].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[26].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[26].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[26].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[26].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[26] = ERROR_ACTIVE;}
		else
		{ScrollError[26] = ERROR_INACTIVE;}
	}
	else if(lulspn==3058 && lucfmi==31)
	{
		ErrHZMCanComm
		DM1_Error[27].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[27].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[27].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[27].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[27].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[27].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[27] = ERROR_ACTIVE;}
		else
		{ScrollError[27] = ERROR_INACTIVE;}
	}
	else if(lulspn==3058 && lucfmi==31)
	{
		ErrPEFatalError
		DM1_Error[28].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[28].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[28].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[28].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[28].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[28].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[28] = ERROR_ACTIVE;}
		else
		{ScrollError[28] = ERROR_INACTIVE;}
	}
	else if(lulspn==630 && lucfmi==31)
	{
		ErrParamStore
		DM1_Error[29].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[29].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[29].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[29].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[29].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[29].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[29] = ERROR_ACTIVE;}
		else
		{ScrollError[29] = ERROR_INACTIVE;}
	}
	else if(lulspn==628 && lucfmi==31)
	{
		ErrProgramTest
		DM1_Error[30].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[30].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[30].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[30].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[30].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[30].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[30] = ERROR_ACTIVE;}
		else
		{ScrollError[30] = ERROR_INACTIVE;}
	}
	else if(lulspn==629 && lucfmi==31)
	{
		ErrRAMTest
		DM1_Error[31].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[31].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[31].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[31].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[31].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[31].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[31] = ERROR_ACTIVE;}
		else
		{ScrollError[31] = ERROR_INACTIVE;}
	}
	else if(lulspn==924 && lucfmi==31)
	{
		ErrDigitalOut
		DM1_Error[32].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[32].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[32].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[32].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[32].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[32].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[32] = ERROR_ACTIVE;}
		else
		{ScrollError[32] = ERROR_INACTIVE;}
	}
	else if(lulspn==3597 && lucfmi==31)
	{
		ErrPowerSupply
		DM1_Error[33].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[33].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[33].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[33].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[33].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[33].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[33] = ERROR_ACTIVE;}
		else
		{ScrollError[33] = ERROR_INACTIVE;}
	}
	else if(lulspn==3599 && lucfmi==31)
	{
		ErrSupply7.5V
		DM1_Error[34].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[34].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[34].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[34].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[34].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[34].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[34] = ERROR_ACTIVE;}
		else
		{ScrollError[34] = ERROR_INACTIVE;}
	}
	else if(lulspn==3598 && lucfmi==31)
	{
		ErrPowerSupplyEDCFb
		DM1_Error[35].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[35].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[35].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[35].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[35].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[35].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[35] = ERROR_ACTIVE;}
		else
		{ScrollError[35] = ERROR_INACTIVE;}
	}
	else if(lulspn==3509 && lucfmi==31)
	{
		Err5VSensorSupply1
		DM1_Error[36].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[36].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[36].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[36].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[36].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[36].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[36] = ERROR_ACTIVE;}
		else
		{ScrollError[36] = ERROR_INACTIVE;}
	}
	else if(lulspn==3510 && lucfmi==31)
	{
		Err5VSensorSupply2
		DM1_Error[37].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[37].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[37].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[37].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[37].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[37].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[37] = ERROR_ACTIVE;}
		else
		{ScrollError[37] = ERROR_INACTIVE;}
	}
	else if(lulspn==3511 && lucfmi==31)
	{
		Err5VSensorSupply3
		DM1_Error[38].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[38].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[38].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[38].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[38].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[38].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[38] = ERROR_ACTIVE;}
		else
		{ScrollError[38] = ERROR_INACTIVE;}
	}
	else if(lulspn==3512 && lucfmi==31)
	{
		Err5VSensorSupply4
		DM1_Error[39].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[39].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[39].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[39].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[39].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[39].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[39] = ERROR_ACTIVE;}
		else
		{ScrollError[39] = ERROR_INACTIVE;}
	}
	else if(lulspn==1136 && lucfmi==31)
	{
		ErrInternTemp1
		DM1_Error[40].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[40].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[40].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[40].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[40].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[40].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[40] = ERROR_ACTIVE;}
		else
		{ScrollError[40] = ERROR_INACTIVE;}
	}
	else if(lulspn==1136 && lucfmi==31)
	{
		ErrInternTemp2
		DM1_Error[41].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[41].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[41].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[41].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[41].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[41].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[41] = ERROR_ACTIVE;}
		else
		{ScrollError[41] = ERROR_INACTIVE;}
	}
	else if(lulspn==628 && lucfmi==31)
	{
		ErrData
		DM1_Error[42].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[42].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[42].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[42].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[42].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[42].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[42] = ERROR_ACTIVE;}
		else
		{ScrollError[42] = ERROR_INACTIVE;}
	}
	else if(lulspn==501 && lucfmi==31)
	{
		ErrConfiguration
		DM1_Error[43].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[43].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[43].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[43].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[43].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[43].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[43] = ERROR_ACTIVE;}
		else
		{ScrollError[43] = ERROR_INACTIVE;}
	}
	else if(lulspn==628 && lucfmi==31)
	{
		ErrStack
		DM1_Error[44].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[44].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[44].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[44].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[44].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[44].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[44] = ERROR_ACTIVE;}
		else
		{ScrollError[44] = ERROR_INACTIVE;}
	}
	else if(lulspn==629 && lucfmi==31)
	{
		ErrIntern
		DM1_Error[45].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[45].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[45].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[45].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[45].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[45].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[45] = ERROR_ACTIVE;}
		else
		{ScrollError[45] = ERROR_INACTIVE;}
	}
	else if(lulspn==96 && lucfmi==18)
	{
		Fuel level is Low
		DM1_Error[46].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[46].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[46].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[46].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[46].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[46].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[46] = ERROR_ACTIVE;}
		else
		{ScrollError[46] = ERROR_INACTIVE;}
	}
	else if(lulspn==96 && lucfmi==3)
	{
		Fuel level sensor is Open
		DM1_Error[47].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[47].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[47].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[47].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[47].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[47].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[47] = ERROR_ACTIVE;}
		else
		{ScrollError[47] = ERROR_INACTIVE;}
	}
	else if(lulspn == 127 && lucfmi == 18)
	{
		Transmission oil pressure is low
		DM1_Error[48].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[48].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[48].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[48].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[48].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[48].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[48] = ERROR_ACTIVE;}
		else
		{ScrollError[48] = ERROR_INACTIVE;}
	}
	else if(lulspn == 127 && lucfmi == 16)
	{
		Transmission oil pressure is high
		DM1_Error[49].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[49].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[49].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[49].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[49].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[49].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[49] = ERROR_ACTIVE;}
		else
		{ScrollError[49] = ERROR_INACTIVE;}
	}
	else if(lulspn == 127 && lucfmi == 4)
	{
		Transmission oil pressure sensor Input is below normal, or shorted to low
		DM1_Error[50].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[50].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[50].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[50].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[50].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[50].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[50] = ERROR_ACTIVE;}
		else
		{ScrollError[50] = ERROR_INACTIVE;}
	}
	else if(lulspn == 127 && lucfmi == 3)
	{
		Transmission oil pressure sensor Input  is above normal, or shorted to high
		DM1_Error[51].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[51].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[51].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[51].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[51].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[51].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[51] = ERROR_ACTIVE;}
		else
		{ScrollError[51] = ERROR_INACTIVE;}
	}
	else if(lulspn == 3823 && lucfmi == 16)
	{
		Converter oil temperature is high
		DM1_Error[52].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[52].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[52].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[52].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[52].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[52].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[52] = ERROR_ACTIVE;}
		else
		{ScrollError[52] = ERROR_INACTIVE;}
	}
	else if(lulspn == 3823 && lucfmi == 3)
	{
		Converter Oil Temperature Sensor Open Circuit
		DM1_Error[53].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[53].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[53].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[53].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[53].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[53].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[53] = ERROR_ACTIVE;}
		else
		{ScrollError[53] = ERROR_INACTIVE;}
	}
	else if(lulspn == 3823 && lucfmi == 4)
	{
		Converter Oil Temperature Sensor Short Circuit
		DM1_Error[54].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[54].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[54].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[54].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[54].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[54].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[54] = ERROR_ACTIVE;}
		else
		{ScrollError[54] = ERROR_INACTIVE;}
	}
	else if(lulspn == 111 && lucfmi == 18)
	{
		Radiator water level is low
		DM1_Error[55].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[55].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[55].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[55].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[55].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[55].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[55] = ERROR_ACTIVE;}
		else
		{ScrollError[55] = ERROR_INACTIVE;}
	}
	else if(lulspn == 70 && lucfmi == 16)
	{
		Parking brake is ON
		DM1_Error[56].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[56].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[56].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[56].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[56].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[56].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[56] = ERROR_ACTIVE;}
		else
		{ScrollError[56] = ERROR_INACTIVE;}
	}
	else if(lulspn == 99 && lucfmi == 18)
	{
		Engine oil filter is clogged
		DM1_Error[57].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[57].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[57].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[57].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[57].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[57].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[57] = ERROR_ACTIVE;}
		else
		{ScrollError[57] = ERROR_INACTIVE;}
	}
	else if(lulspn == 5086 && lucfmi == 18)
	{
		Air Filter Clogged
		DM1_Error[58].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[58].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[58].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[58].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[58].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[58].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[58] = ERROR_ACTIVE;}
		else
		{ScrollError[58] = ERROR_INACTIVE;}
	}
	else if(lulspn == 1638 && lucfmi == 3)
	{
		Hydraulic  Oil Temperature Sensor Open Circuit
		DM1_Error[59].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[59].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[59].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[59].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[59].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[59].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[59] = ERROR_ACTIVE;}
		else
		{ScrollError[59] = ERROR_INACTIVE;}
	}
	else if(lulspn == 1638 && lucfmi == 4)
	{
		Hydraulic Oil Temperature Sensor Short Circuit
		DM1_Error[60].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[60].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[60].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[60].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[60].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[60].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[60] = ERROR_ACTIVE;}
		else
		{ScrollError[60] = ERROR_INACTIVE;}
	}
	else if(lulspn == 2602 && lucfmi == 18)
	{
		Hydraulic Oil Level Low
		DM1_Error[61].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[61].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[61].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[61].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[61].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[61].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[61] = ERROR_ACTIVE;}
		else
		{ScrollError[61] = ERROR_INACTIVE;}
	}
	else if(lulspn == 521001 && lucfmi == 3)
	{
		SenderCAN is disconnected
		DM1_Error[62].SourceAddress = strDM1Log[s_addr][err_no].SourceAddress ;
		DM1_Error[62].SpnFmi 		= strDM1Log[s_addr][err_no].SpnFmi;
		DM1_Error[62].Status 		= strDM1Log[s_addr][err_no].Status;
		DM1_Error[62].MessageId 	= DM1MessageSelection(lulspn,lucfmi);
		DM1_Error[62].OccuranceCount= strDM1Log[s_addr][err_no].OccuranceCount;
		DM1_Error[62].PlugId 		= strDM1Log[s_addr][err_no].PlugId;

		if(strDM1Log[s_addr][err_no].Status == 1)
		{ScrollError[62] = ERROR_ACTIVE;}
		else
		{ScrollError[62] = ERROR_INACTIVE;}
	}
	else
	{}
#endif
*/
}

void Dm1ScreenScroll(void)
{
	uint16_t Total_no_errors = 0;
	uint16_t total_no_errs[DM1_SA] = {0};
	uint32_t spnfmi = 0, spn = 0;
	uint16_t fmi = 0;
	bool spnfmi_valid_or_not = 0;
	s_addr =0,err_no = 0;

	for(s_addr=0;s_addr < DM1_SA;s_addr++)
	{
		 for(err_no=0;err_no < NO_OF_DM1_MESSAGES;err_no++)
		 {
			spnfmi = strDM1Log[s_addr][err_no].SpnFmi;
			spn	   = (spnfmi & 0x7FFFF);
			fmi    = (spnfmi>>19);

			spnfmi_valid_or_not = Find_Valid_spnfmi(spn,fmi);

			if(spnfmi_valid_or_not == 1 && spn!=0x7FFFF && spn!=0xFFFF && spn!=0x0000)
			{
				Live_errors_update(spn,fmi);

				if(strDM1Log[s_addr][err_no].Status == 1)
				{
					total_no_errs[s_addr]++;
					/*Three errors(1.charge fail, 2.TOL low, 3.TOL high) no need to display error message only SAE symbols are enough
					 *Show TOP errors only when engine rpm > 500, but for logging of these errors there is no need to check engine rpm*/
					Total_no_errors = ControlErrorPopup(spn,fmi,Total_no_errors);
				}
			}
		 }
	}

	/***********************DM1 POPUP*********************/
	if(Total_no_errors >= 1)
	{
		if(giDMPopUp == 1)
		{
			giIcon16 = 2;/*Hide*/
			strt_tmr_for_err_icon_toggle = 0;
		}
		else
		{
			if(giIcon16 == 2)/*if still Hide icon is displaying make it Recall*/
			{
				giIcon16 = 1;/*Recall*/
			}
			strt_tmr_for_err_icon_toggle = 1;
		}
		gucFaultsActive = 1;
	}
	else
	{
		giIcon16 = 0;/*Transparent*/

		gucFaultsActive = 0;
		strt_tmr_for_err_icon_toggle = 0;
	}

	if(next_button_pressed == 1)
	{
		next_button_pressed = 0;

		Next_Error(Total_no_errors);
	}
	else if(previous_button_pressed == 1)
	{
		previous_button_pressed = 0;

		Previous_Error(Total_no_errors);
	}
	else if(giDMPopUp == 1)
	{strDm1Screen.Status = DM1_Error[err_index].Status;}
	else
	{}
	/**************************************************************/

	/*********Diagnostics2 screen: 35***************/
	if(get_faults == 1)
	{
		get_faults = 0;

		SourceAdrr = 0;
		memset(&Err_index,0,(DM1_SA*sizeof(uint16_t)));
		memset(&currnt_err_num,0,(DM1_SA*sizeof(uint16_t)));
		blue_upbutton_pressed = 0;
		blue_downbutton_pressed = 0;

		for(uint8_t f = 0; f < DM1_SA;f++)
		{
			Err_index[f] = DiagnosticNextError(f,Err_index[f],total_no_errs[f]);
		}
	}

	if(blue_upbutton_pressed == 1)
	{
		blue_upbutton_pressed = 0;

		Err_index[SourceAdrr] = DiagnosticNextError(SourceAdrr,Err_index[SourceAdrr],total_no_errs[SourceAdrr]);
	}
	else if(blue_downbutton_pressed == 1)
	{
		blue_downbutton_pressed  = 0;

		Err_index[SourceAdrr] = DiagnosticsPreviousError(SourceAdrr,Err_index[SourceAdrr],total_no_errs[SourceAdrr]);
	}
	else
	{
		DiagPage2[SourceAdrr].Status = strDM1Log[SourceAdrr][Err_index[SourceAdrr]].Status;
	}
	/********************************************************************************/
}

uint16_t ControlErrorPopup(uint32_t S_P_N, uint16_t F_M_I, uint16_t Actual_no_of_errs)
{
#if 0
	if(S_P_N == 3353)
	{
		/*charge fail: no need of pop up msg only SAE symbol is enough as per BEML specification*/
		if(F_M_I == 18)
		{/*do nothing*/}
		else
		{Actual_no_of_errs++;}
	}
	else if(S_P_N == 124)/*SAE symbol is enough no need of message to show*/
	{
		/*FMI-18:Transmission Fluid Level Too Low &
		 *FMI-16:Transmission Fluid Level Too High*/
		if(F_M_I == 18 || F_M_I == 16)
		{/*do nothing*/}
		else
		{Actual_no_of_errs++;}
	}
	else if(S_P_N == 3359)/*SAE symbol is enough no need of message to show*/
	{
		/*Transmission: Oil Filter Delta Pressure High*/
		if(F_M_I == 1)
		{/*do nothing*/}
		else
		{Actual_no_of_errs++;}
	}
	else if(S_P_N == 127)/*This is because, TOP warnings are dependent on Engine Rpm > 500*/
	{
		if(F_M_I == 3 || F_M_I == 18)
		{
			/*TOP sensor open/short circuited*/				/*TOP low*/
			if(ScrollError[11] == ERROR_ACTIVE || ScrollError[12] == ERROR_ACTIVE )
			{
				Actual_no_of_errs++;
			}
		}
	}
	else
#endif
	{
		Actual_no_of_errs++;
	}

	return(Actual_no_of_errs);
}

void Next_Error(uint16_t Total_no_errors)
{
	uint32_t TempSpnFmi = 0;

	if(ScrollError[err_index] == ERROR_INACTIVE)
	{
		while(ScrollError[err_index] == ERROR_INACTIVE)
		{
			if(err_index >= (NO_OF_DM1_MESSAGES - 1))
			{
				err_index = 0;

				int16_t i = 0;

				for(i = 0;i < NO_OF_DM1_MESSAGES; i++)
				{
					if(ScrollError[i] == ERROR_ACTIVE)
					{
						err_index = i;
						break;
					}
				}
				break;
			}
			else
			{
				err_index++;
			}
		}
	}

	if(ScrollError[err_index] == ERROR_ACTIVE)
	{
		if(giDMPopUp == 1)
		{
			if(previous_to_next_flag == 1)
			{
				previous_to_next_flag = 0;

				if(Currnt_err_no >= Total_no_errors)
				{
					Currnt_err_no = 0;
				}
			}

			Currnt_err_no++;
			if(Currnt_err_no > Total_no_errors)
			{
				Currnt_err_no = 1;
			}

			strDm1Screen.CurrentCount 	= Currnt_err_no;
			//strDm1Screen.DeviceId		= 1;
			TempSpnFmi 					= DM1_Error[err_index].SpnFmi;
			strDm1Screen.SPN 			= TempSpnFmi & 0x7FFFF;
			strDm1Screen.FMI 			= TempSpnFmi >> 19;
			strDm1Screen.OccCount		= DM1_Error[err_index].OccuranceCount;
			/**********reassign the original source address for display*****/
			strDm1Screen.Address		= Re_asgn_Org_srs_addr_frm_dm1_array_2(DM1_Error[err_index].SourceAddress);
			/**************************************************************/
			strDm1Screen.Status			= DM1_Error[err_index].Status;
			strDm1Screen.Message 		= DM1_Error[err_index].MessageId;
			strDm1Screen.MaximumCount 	= Total_no_errors;

			next_to_previous_flag = 1;
		}
	}
	else
	{
		if(giDMPopUp == 1)
		{ giDMPopUp = 0;}
	}
}

void Previous_Error(uint16_t Total_no_errors)
{
	uint32_t TempSpnFmi = 0;

	if(ScrollError[err_index] == ERROR_INACTIVE)
	{
		while(ScrollError[err_index] == ERROR_INACTIVE)
		{
			if(err_index <  1)
			{
				err_index = (NO_OF_DM1_MESSAGES - 1);

				int16_t j = 0;

				for(j = (NO_OF_DM1_MESSAGES - 1);j >= 0; j--)
				{
					if(ScrollError[j] == ERROR_ACTIVE)
					{
						err_index = j;
						break;
					}
				}
				break;
			}
			else
			{
				err_index--;
			}
		}
	}

	if(ScrollError[err_index] == ERROR_ACTIVE)
	{
		if(giDMPopUp == 1)
		{
			if(next_to_previous_flag == 1)
			{
				next_to_previous_flag = 0;

				if(Currnt_err_no <= 1)
				{
					Currnt_err_no = Total_no_errors + 1;
				}
			}

			Currnt_err_no--;
			if(Currnt_err_no == 0)
			{
				Currnt_err_no = Total_no_errors;
			}

			strDm1Screen.CurrentCount 	= Currnt_err_no;
			//strDm1Screen.DeviceId		= 1;
			TempSpnFmi 					= DM1_Error[err_index].SpnFmi;
			strDm1Screen.SPN 			= TempSpnFmi & 0x7FFFF;
			strDm1Screen.FMI 			= TempSpnFmi >> 19;
			strDm1Screen.OccCount		= DM1_Error[err_index].OccuranceCount;
			/**********reassign the original source address for display*****/
			strDm1Screen.Address		= Re_asgn_Org_srs_addr_frm_dm1_array_2(DM1_Error[err_index].SourceAddress);
			/**************************************************************/
			strDm1Screen.Status			= DM1_Error[err_index].Status;
			strDm1Screen.Message 		= DM1_Error[err_index].MessageId;
			strDm1Screen.MaximumCount 	= Total_no_errors;

			previous_to_next_flag = 1;
		}
	}
	else
	{
		if(giDMPopUp == 1)
		{ giDMPopUp = 0;}
	}
}

uint16_t DiagnosticNextError(uint8_t sa, uint16_t indx, uint16_t totl_errs)
{
	uint32_t TempSpnFmi = 0;

	if(strDM1Log[sa][indx].Status == 0)
	{
		while(strDM1Log[sa][indx].Status == 0)
		{
			if(indx >= (NO_OF_DM1_MESSAGES - 1))
			{
				indx = 0;

				int16_t i = 0;

				for(i = 0;i < NO_OF_DM1_MESSAGES; i++)
				{
					if(strDM1Log[sa][i].Status == 1)
					{
						indx = i;
						break;
					}
				}
				break;
			}
			else
			{
				indx++;
			}
		}
	}

	if(strDM1Log[sa][indx].Status == 1)
	{
		if(prev_to_next[sa] == 1)
		{
			prev_to_next[sa] = 0;

			if(currnt_err_num[sa] >= totl_errs)
			{
				currnt_err_num[sa] = 0;
			}
		}

		currnt_err_num[sa]++;
		if(currnt_err_num[sa] > totl_errs)
		{
			currnt_err_num[sa] = 1;
		}

		DiagPage2[sa].CurrentCount 	= currnt_err_num[sa];
		//DiagPage2[sa].DeviceId		= 1;
		TempSpnFmi 					= strDM1Log[sa][indx].SpnFmi;
		DiagPage2[sa].SPN 			= TempSpnFmi & 0x7FFFF;
		DiagPage2[sa].FMI 			= TempSpnFmi >> 19;
		DiagPage2[sa].OccCount		= strDM1Log[sa][indx].OccuranceCount;
		/**********reassign the original source address for display*****/
		DiagPage2[sa].Address		= Re_asgn_Org_srs_addr_frm_dm1_array_2(strDM1Log[sa][indx].SourceAddress);
		/**************************************************************/
		DiagPage2[sa].Status		= strDM1Log[sa][indx].Status;
		DiagPage2[sa].Message 		= strDM1Log[sa][indx].MessageId;
		DiagPage2[sa].MaximumCount 	= totl_errs;

		next_to_prev[sa] = 1;
	}
	else
	{}

	return(indx);
}

uint16_t DiagnosticsPreviousError(uint8_t sa, uint16_t indx, uint16_t totl_err)
{
	uint32_t TempSpnFmi = 0;

	if(strDM1Log[sa][indx].Status == 0)
	{
		while(strDM1Log[sa][indx].Status == 0)
		{
			if(indx <  1)
			{
				indx = (NO_OF_DM1_MESSAGES - 1);

				int16_t j = 0;

				for(j = (NO_OF_DM1_MESSAGES - 1);j >= 0; j--)
				{
					if(strDM1Log[sa][j].Status == 1)
					{
						indx = j;
						break;
					}
				}
				break;
			}
			else
			{
				indx--;
			}
		}
	}

	if(strDM1Log[sa][indx].Status == 1)
	{
		if(next_to_prev[sa] == 1)
		{
			next_to_prev[sa] = 0;

			if(currnt_err_num[sa] <= 1)
			{
				currnt_err_num[sa] = totl_err + 1;
			}
		}

		currnt_err_num[sa]--;
		if(currnt_err_num[sa] == 0)
		{
			currnt_err_num[sa] = totl_err;
		}

		DiagPage2[sa].CurrentCount 	= currnt_err_num[sa];
		//DiagPage2[sa].DeviceId		= 1;
		TempSpnFmi 					= strDM1Log[sa][indx].SpnFmi;
		DiagPage2[sa].SPN 			= TempSpnFmi & 0x7FFFF;
		DiagPage2[sa].FMI 			= TempSpnFmi >> 19;
		DiagPage2[sa].OccCount		= strDM1Log[sa][indx].OccuranceCount;
		/**********reassign the original source address for display*****/
		DiagPage2[sa].Address		= Re_asgn_Org_srs_addr_frm_dm1_array_2(strDM1Log[sa][indx].SourceAddress);
		/**************************************************************/
		DiagPage2[sa].Status		= strDM1Log[sa][indx].Status;
		DiagPage2[sa].Message 		= strDM1Log[sa][indx].MessageId;
		DiagPage2[sa].MaximumCount 	= totl_err;

		prev_to_next[sa] = 1;
	}
	else
	{}

	return(indx);
}



