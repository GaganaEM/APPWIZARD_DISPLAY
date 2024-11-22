#include "../../Files_Header/sourceMacro.h"
#include "../../Files_Header/sourceInclude.h"
#include "../../Files_Header/sourceExternVariable.h"

#include "sourceJ1939Dm1.h"

extern uint8_t DM1MessageSelection(Uint32 lulspn,uint8_t lucfmi);

void StoreDiagnosticMessage(uint8_t lucSource, uint8_t StructureArray, struct strDiagnosticMessage strLocalDM1Log)
{
	strDM1Log[lucSource][StructureArray].SourceAddress 		= strLocalDM1Log.SourceAddress;
	strDM1Log[lucSource][StructureArray].PlugId 	   		= strLocalDM1Log.PlugId;
	strDM1Log[lucSource][StructureArray].SpnFmi		   		= strLocalDM1Log.SpnFmi;
	strDM1Log[lucSource][StructureArray].OccuranceCount		= strLocalDM1Log.OccuranceCount;
	strDM1Log[lucSource][StructureArray].Status				= strLocalDM1Log.Status;
	strDM1Log[lucSource][StructureArray].MessageId          = strLocalDM1Log.MessageId;
}

uint8_t CheckPrevDiagnosticMessage(uint8_t lucSource, Uint32 lulSpnFmi)
{
	gl_LoopCheck = 0x00;

	for(gl_LoopCheck = 0; gl_LoopCheck <= gucFaultLogs[lucSource]; gl_LoopCheck++)
	{
		if(lulSpnFmi == strDM1Log[lucSource][gl_LoopCheck].SpnFmi)
		{
			strDM1Log[lucSource][gl_LoopCheck].Status = 1;
			break;
		}
	}
	return(strDM1Log[lucSource][gl_LoopCheck].Status);
}

void LoadFaultToStruct(uint8_t lucSource)
{
	struct strDiagnosticMessage strTempDmLog;

	gl_NoOfFaults 	= 0x00;
	gl_Loop 		= 0x00;
	gl_Loop1		= 0x00;
	gl_Frame		= 0x00;
	gl_Status		= 0x00;

	gl_spnDm1 	=0;
	gl_fmiDm1	=0;

	if(bSingleDm1Frame == 1)
	{
		bSingleDm1Frame = 0;

		while(gl_Loop1 <= gucFaultLogs[lucSource])
		{
			strDM1Log[lucSource][gl_Loop1].Status = 0;
			gl_Loop1++;
		}
		if(lucSource == TRANSMISSION_ECU)
		{
			giCheckTrans = CanbDM1RxFrame.CanData.part.CanJ1939Byte1;
		}
		strTempDmLog.SourceAddress 		= lucSource;
		strTempDmLog.PlugId  			= 0x02;
		strTempDmLog.SpnFmi				= CanbDM1RxFrame.CanData.part.CanJ1939Byte5;
		strTempDmLog.SpnFmi 			= (strTempDmLog.SpnFmi << 8) | CanbDM1RxFrame.CanData.part.CanJ1939Byte4;
		strTempDmLog.SpnFmi				= (strTempDmLog.SpnFmi << 8) | CanbDM1RxFrame.CanData.part.CanJ1939Byte3;
		strTempDmLog.OccuranceCount		= CanbDM1RxFrame.CanData.part.CanJ1939Byte6;

		gl_spnDm1			= strTempDmLog.SpnFmi & 0x7FFFF;
		gl_fmiDm1			= strTempDmLog.SpnFmi >> 19;

		strTempDmLog.MessageId = DM1MessageSelection(gl_spnDm1,gl_fmiDm1);

		spn_fmi_is_valid = Find_Valid_spnfmi(gl_spnDm1,gl_fmiDm1);

		if((spn_fmi_is_valid == 1) && strTempDmLog.SpnFmi != 0xFFFFFF && strTempDmLog.SpnFmi != 0x000000 && gl_spnDm1!=0x7FFFF)
		{
			strTempDmLog.Status				= 1;

			gl_Status = CheckPrevDiagnosticMessage(lucSource, strTempDmLog.SpnFmi);

			if(gl_Status != 1)
			{
				StoreDiagnosticMessage(lucSource, gucFaultLogs[lucSource]++, strTempDmLog);
			}
		}
		else
		{
			strTempDmLog.Status				= 0;
		}
	}
	else
	{
		gl_NoOfFaults = (datalength - 2) / 4;
		//guiLampStatus = (CanbRecieveMsgBuffer[0].byte.TpMsgByte2 << 8) | CanbRecieveMsgBuffer[0].byte.TpMsgByte3;
		if(lucSource == TRANSMISSION_ECU)
		{
			giCheckTrans = DM1RecieveMsgBuffer[lucSource][0].byte.TpMsgByte2;
		}

		while(gl_Loop1 <= gucFaultLogs[lucSource])
		{
			strDM1Log[lucSource][gl_Loop1].Status = 0;
			gl_Loop1++;
		}

		while(gl_Loop <= (gl_NoOfFaults))
		{
			/* First */
			strTempDmLog.SourceAddress 		= lucSource;
			strTempDmLog.PlugId  			= 0x02;
			strTempDmLog.SpnFmi				= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte6;
			strTempDmLog.SpnFmi 			= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte5;
			strTempDmLog.SpnFmi				= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte4;
			strTempDmLog.OccuranceCount		= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte7;
			strTempDmLog.Status				= 1;

			gl_spnDm1			= strTempDmLog.SpnFmi & 0x7FFFF;
			gl_fmiDm1			= strTempDmLog.SpnFmi >> 19;

			spn_fmi_is_valid = Find_Valid_spnfmi(gl_spnDm1,gl_fmiDm1);

			if((spn_fmi_is_valid == 1) && gl_spnDm1!=0xFFFF && gl_spnDm1!=0x0000 && gl_spnDm1!=0x7FFFF)
			{
				gl_Status = CheckPrevDiagnosticMessage(lucSource, strTempDmLog.SpnFmi);
				strTempDmLog.MessageId = DM1MessageSelection(gl_spnDm1,gl_fmiDm1);
				if(gl_Status != 1)
				{
					StoreDiagnosticMessage(lucSource, gucFaultLogs[lucSource]++, strTempDmLog);
				}

				gl_Loop++;
				if(gl_Loop >= gl_NoOfFaults)
				{
					break;
				}
			}
			else
			{
				break;
			}
			/* Second */
			strTempDmLog.SourceAddress 		= lucSource;
			strTempDmLog.PlugId  			= 0x02;
			strTempDmLog.SpnFmi				= DM1RecieveMsgBuffer[lucSource][gl_Frame+1].byte.TpMsgByte3;
			strTempDmLog.SpnFmi 			= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame+1].byte.TpMsgByte2;
			strTempDmLog.SpnFmi				= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte8;
			strTempDmLog.OccuranceCount		= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte4;
			strTempDmLog.Status				= 1;
			gl_Frame++;

			gl_spnDm1			= strTempDmLog.SpnFmi & 0x7FFFF;
			gl_fmiDm1			= strTempDmLog.SpnFmi >> 19;

			spn_fmi_is_valid = Find_Valid_spnfmi(gl_spnDm1,gl_fmiDm1);

			if((spn_fmi_is_valid == 1) && gl_spnDm1!=0xFFFF && gl_spnDm1!=0x0000 && gl_spnDm1!=0x7FFFF)
			{
				gl_Status = CheckPrevDiagnosticMessage(lucSource, strTempDmLog.SpnFmi);
				strTempDmLog.MessageId = DM1MessageSelection(gl_spnDm1,gl_fmiDm1);

				if(gl_Status != 1)
				{
					StoreDiagnosticMessage(lucSource, gucFaultLogs[lucSource]++, strTempDmLog);
				}

				gl_Loop++;
				if(gl_Loop >= gl_NoOfFaults)
				{
					break;
				}
			}
			else
			{
				break;
			}
			/* Third */
			strTempDmLog.SourceAddress 		= lucSource;
			strTempDmLog.PlugId  			= 0x02;
			strTempDmLog.SpnFmi				= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte7;
			strTempDmLog.SpnFmi 			= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte6;
			strTempDmLog.SpnFmi				= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte5;
			strTempDmLog.OccuranceCount		= DM1RecieveMsgBuffer[lucSource][gl_Frame++].byte.TpMsgByte8;
			strTempDmLog.Status				= 1;

			gl_spnDm1			= strTempDmLog.SpnFmi & 0x7FFFF;
			gl_fmiDm1			= strTempDmLog.SpnFmi >> 19;

			spn_fmi_is_valid = Find_Valid_spnfmi(gl_spnDm1,gl_fmiDm1);

			if((spn_fmi_is_valid == 1) && gl_spnDm1!=0xFFFF && gl_spnDm1!=0x0000 && gl_spnDm1!=0x7FFFF)
			{

				gl_Status = CheckPrevDiagnosticMessage(lucSource, strTempDmLog.SpnFmi);
				strTempDmLog.MessageId = DM1MessageSelection(gl_spnDm1,gl_fmiDm1);

				if(gl_Status != 1)
				{
					StoreDiagnosticMessage(lucSource, gucFaultLogs[lucSource]++, strTempDmLog);
				}

				gl_Loop++;
				if(gl_Loop >= gl_NoOfFaults)
				{
					break;
				}
			}
			else
			{
				break;
			}
			/* Fourth */
			strTempDmLog.SourceAddress 		= lucSource;
			strTempDmLog.PlugId  			= 0x02;
			strTempDmLog.SpnFmi				= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte4;
			strTempDmLog.SpnFmi 			= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte3;
			strTempDmLog.SpnFmi				= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte2;
			strTempDmLog.OccuranceCount		= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte5;
			strTempDmLog.Status				= 1;
			gl_spnDm1			= strTempDmLog.SpnFmi & 0x7FFFF;
			gl_fmiDm1			= strTempDmLog.SpnFmi >> 19;

			spn_fmi_is_valid = Find_Valid_spnfmi(gl_spnDm1,gl_fmiDm1);

			if((spn_fmi_is_valid == 1) && gl_spnDm1!=0xFFFF && gl_spnDm1!=0x0000 && gl_spnDm1!=0x7FFFF)
			{
				gl_Status = CheckPrevDiagnosticMessage(lucSource, strTempDmLog.SpnFmi);
				strTempDmLog.MessageId = DM1MessageSelection(gl_spnDm1,gl_fmiDm1);

				if(gl_Status != 1)
				{
					StoreDiagnosticMessage(lucSource, gucFaultLogs[lucSource]++, strTempDmLog);
				}

				gl_Loop++;
				if(gl_Loop >= gl_NoOfFaults)
				{
					break;
				}
			}
			else
			{
				break;
			}
			/* Fifth */
			strTempDmLog.SourceAddress 		= lucSource;
			strTempDmLog.PlugId  			= 0x02;
			strTempDmLog.SpnFmi				= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte8;
			strTempDmLog.SpnFmi 			= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte7;
			strTempDmLog.SpnFmi				= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte6;
			strTempDmLog.OccuranceCount		= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte2;
			strTempDmLog.Status				= 1;
			gl_Frame++;
			gl_spnDm1			= strTempDmLog.SpnFmi & 0x7FFFF;
			gl_fmiDm1			= strTempDmLog.SpnFmi >> 19;

			spn_fmi_is_valid = Find_Valid_spnfmi(gl_spnDm1,gl_fmiDm1);

			if((spn_fmi_is_valid == 1) && gl_spnDm1!=0xFFFF && gl_spnDm1!=0x0000 && gl_spnDm1!=0x7FFFF)
			{
				gl_Status = CheckPrevDiagnosticMessage(lucSource, strTempDmLog.SpnFmi);
				strTempDmLog.MessageId = DM1MessageSelection(gl_spnDm1,gl_fmiDm1);

				if(gl_Status != 1)
				{
					StoreDiagnosticMessage(lucSource, gucFaultLogs[lucSource]++, strTempDmLog);
				}

				gl_Loop++;
				if(gl_Loop >= gl_NoOfFaults)
				{
					break;
				}
			}
			else
			{
				break;
			}
			/* Sixth */
			strTempDmLog.SourceAddress 		= lucSource;
			strTempDmLog.PlugId  			= 0x02;
			strTempDmLog.SpnFmi				= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte5;
			strTempDmLog.SpnFmi 			= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte4;
			strTempDmLog.SpnFmi				= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte3;
			strTempDmLog.OccuranceCount		= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte6;
			strTempDmLog.Status				= 1;

			gl_spnDm1			= strTempDmLog.SpnFmi & 0x7FFFF;
			gl_fmiDm1			= strTempDmLog.SpnFmi >> 19;

			spn_fmi_is_valid = Find_Valid_spnfmi(gl_spnDm1,gl_fmiDm1);

			if((spn_fmi_is_valid == 1) && gl_spnDm1!=0xFFFF && gl_spnDm1!=0x0000 && gl_spnDm1!=0x7FFFF)
			{
				gl_Status = CheckPrevDiagnosticMessage(lucSource, strTempDmLog.SpnFmi);
				strTempDmLog.MessageId = DM1MessageSelection(gl_spnDm1,gl_fmiDm1);

				if(gl_Status != 1)
				{
					StoreDiagnosticMessage(lucSource, gucFaultLogs[lucSource]++, strTempDmLog);
				}

				gl_Loop++;
				if(gl_Loop >= gl_NoOfFaults)
				{
					break;
				}
			}
			else
			{
				break;
			}
			/* Seventh */
			strTempDmLog.SourceAddress 		= lucSource;
			strTempDmLog.PlugId  			= 0x02;
			strTempDmLog.SpnFmi				= DM1RecieveMsgBuffer[lucSource][gl_Frame+1].byte.TpMsgByte2;
			strTempDmLog.SpnFmi 			= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte8;
			strTempDmLog.SpnFmi				= (strTempDmLog.SpnFmi << 8) | DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte7;
			strTempDmLog.OccuranceCount		= DM1RecieveMsgBuffer[lucSource][gl_Frame].byte.TpMsgByte3;
			strTempDmLog.Status				= 1;
			gl_Frame++;

			gl_spnDm1			= strTempDmLog.SpnFmi & 0x7FFFF;
			gl_fmiDm1			= strTempDmLog.SpnFmi >> 19;

			spn_fmi_is_valid = Find_Valid_spnfmi(gl_spnDm1,gl_fmiDm1);

			if((spn_fmi_is_valid == 1) && gl_spnDm1!=0xFFFF && gl_spnDm1!=0x0000 && gl_spnDm1!=0x7FFFF)
			{
				gl_Status = CheckPrevDiagnosticMessage(lucSource, strTempDmLog.SpnFmi);
				strTempDmLog.MessageId = DM1MessageSelection(gl_spnDm1,gl_fmiDm1);

				if(gl_Status != 1)
				{
					StoreDiagnosticMessage(lucSource, gucFaultLogs[lucSource]++, strTempDmLog);
				}

				gl_Loop++;
				if(gl_Loop >= gl_NoOfFaults)
				{
					break;
				}
			}
			else
			{
				break;
			}
		}
	}
}
