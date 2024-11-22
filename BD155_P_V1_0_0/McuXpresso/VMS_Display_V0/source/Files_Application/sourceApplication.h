/*
 * sourceApplication.h
 *
 *  Created on: 22-Oct-2021
 *      Author: EME01-L-02D19
 */

#ifndef FILES_APPLICATION_SOURCEAPPLICATION_H_
#define FILES_APPLICATION_SOURCEAPPLICATION_H_
#include"stdint.h"
#include "../Files_Header/sourceMacro.h"
#include "../Files_Header/sourceExternVariable.h"
#include "../Files_Header/sourceInclude.h"

void ProcessAnalogInput(void);
void ProcessDigitalInput(void);
void funcDm1ScreenScroll(void);
struct GuageIndicator GaugeMovement(struct GuageIndicator GuageValue);
uint8_t DM1MessageSelection(Uint32 lulspn,uint8_t lucfmi);
uint8_t Find_Valid_spnfmi(Uint32 lulspn,uint8_t lucfmi);
/***********************MinMax*************************************/

void ReadAdcChannels(void);
Uint32 funcReadADCData(Uint32 ulcSelectedSensor);
float LoadProcessedValue(uint16_t LookUpNumber, uint32_t AdcCounts);
struct AdcSelectRegister funcSwitchAdcMux(struct AdcSelectRegister strAdcSel);
float CalculateUnknown(struct  strValueFormula strlValueCalculation);
void funcDelayUs(Uint32 llTick);
void funcErrorCheckResistiveType1(uint8_t lulInputNumber);
void funcErrorCheckCurrentType1(uint8_t lulInputNumber);
void InputsThresholdDecisionMaking(void);
void funcMinMaxErrorLog(void);
void funcDataLogging(void);
extern void funcWriteMinMaxToSdCard(void);
extern void funcWriteDataloggingToSdCard(void);

extern uint16_t Re_asgn_Org_srs_addr_frm_dm1_array(uint16_t array_sa, uint16_t fault_no);
extern uint16_t Re_asgn_Org_srs_addr_frm_dm1_array_2(uint16_t SA);

float LoadProcessedValue(uint16_t LookUpNumber, uint32_t AdcCounts);

void Dm1ScreenScroll(void);
void Live_errors_update(uint32_t lulspn,uint16_t lucfmi);
void Next_Error(uint16_t Total_no_errors);
void Previous_Error(uint16_t Total_no_errors);

uint16_t ControlErrorPopup(uint32_t S_P_N, uint16_t F_M_I, uint16_t Actual_no_of_errs);

uint16_t DiagnosticNextError(uint8_t sa, uint16_t indx, uint16_t totl_errs);
uint16_t DiagnosticsPreviousError(uint8_t sa, uint16_t indx, uint16_t totl_err);

float val_temp = 0;

#endif /* FILES_APPLICATION_SOURCEAPPLICATION_H_ */
