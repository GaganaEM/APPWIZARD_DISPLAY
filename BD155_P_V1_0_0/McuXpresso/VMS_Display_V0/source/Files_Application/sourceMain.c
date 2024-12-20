/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "sourceMain.h"
#include "fsl_enc.h"
#include "fsl_xbara.h"


extern uint8_t buttonState ;
//#define TRANSITION_LOCK_DURATION 5 // Duration in milliseconds
//volatile uint32_t transitionLockExpiry = 0;
//volatile uint32_t systemTickMs = 0;
/*******************************************************************************
 * Code
 ******************************************************************************/

/* Initialize the LCD_DISP. */
void BOARD_InitLcd(void)
{
    volatile uint32_t i = 0x1000U;

    gpio_pin_config_t config = {
        kGPIO_DigitalOutput,
        0,
        kGPIO_NoIntmode,
    };

    /* Reset the LCD. */
    GPIO_PinInit(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, &config);

    GPIO_WritePinOutput(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, 0);

    while (i--)
    {
    }

    GPIO_WritePinOutput(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, 1);

    /* Backlight. */
    config.outputLogic = 1;
    GPIO_PinInit(LCD_BL_GPIO, LCD_BL_GPIO_PIN, &config);

    /*Clock setting for LPI2C*/
    CLOCK_SetMux(kCLOCK_Lpi2cMux, LPI2C_CLOCK_SOURCE_SELECT);
    CLOCK_SetDiv(kCLOCK_Lpi2cDiv, LPI2C_CLOCK_SOURCE_DIVIDER);
}

void BOARD_InitLcdifPixelClock(void)
{
    /*
     * The desired output frame rate is 60Hz. So the pixel clock frequency is:
     * (480 + 41 + 4 + 18) * (272 + 10 + 4 + 2) * 60 = 9.2M.
     * Here set the LCDIF pixel clock to 9.3M.
     */

    /*
     * Initialize the Video PLL.
     * Video PLL output clock is OSC24M * (loopDivider + (denominator / numerator)) / postDivider = 93MHz.
     */
    clock_video_pll_config_t config = {
        .loopDivider = 175,//31
        .postDivider = 8,
        .numerator   = 0,
        .denominator = 0,
    };

    CLOCK_InitVideoPll(&config);

    /*
     * 000 derive clock from PLL2
     * 001 derive clock from PLL3 PFD3
     * 010 derive clock from PLL5
     * 011 derive clock from PLL2 PFD0
     * 100 derive clock from PLL2 PFD1
     * 101 derive clock from PLL3 PFD1
     */
    CLOCK_SetMux(kCLOCK_LcdifPreMux, 2);
    CLOCK_SetDiv(kCLOCK_LcdifPreDiv, 4);
    CLOCK_SetDiv(kCLOCK_LcdifDiv, 1);
}

void BOARD_InitGPT(void)
{
    gpt_config_t gptConfig;

    GPT_GetDefaultConfig(&gptConfig);

    gptConfig.enableFreeRun = true;
    gptConfig.divider       = 3000;

    /* Initialize GPT module */
    GPT_Init(EXAMPLE_GPT, &gptConfig);
    GPT_StartTimer(EXAMPLE_GPT);
}

/*******************************************************************************
 * Code
 ******************************************************************************/

void USB_OTG1_IRQHandler(void)
{
    USB_HostEhciIsrFunction(g_HostHandle);
}

void USB_OTG2_IRQHandler(void)
{
    USB_HostEhciIsrFunction(g_HostHandle);
}

void USB_HostClockInit(void)
{
    usb_phy_config_struct_t phyConfig = {
        BOARD_USB_PHY_D_CAL,
        BOARD_USB_PHY_TXCAL45DP,
        BOARD_USB_PHY_TXCAL45DM,
    };

    if (CONTROLLER_ID == kUSB_ControllerEhci0)
    {
        CLOCK_EnableUsbhs0PhyPllClock(kCLOCK_Usbphy480M, 480000000U);
        CLOCK_EnableUsbhs0Clock(kCLOCK_Usb480M, 480000000U);
    }
    else
    {
        CLOCK_EnableUsbhs1PhyPllClock(kCLOCK_Usbphy480M, 480000000U);
        CLOCK_EnableUsbhs1Clock(kCLOCK_Usb480M, 480000000U);
    }
    USB_EhciPhyInit(CONTROLLER_ID, BOARD_XTAL0_CLK_HZ, &phyConfig);
}

void USB_HostIsrEnable(void)
{
    uint8_t irqNumber;

    uint8_t usbHOSTEhciIrq[] = USBHS_IRQS;
    irqNumber                = usbHOSTEhciIrq[CONTROLLER_ID - kUSB_ControllerEhci0];
/* USB_HOST_CONFIG_EHCI */

/* Install isr, set priority, and enable IRQ. */
#if defined(__GIC_PRIO_BITS)
    GIC_SetPriority((IRQn_Type)irqNumber, USB_HOST_INTERRUPT_PRIORITY);
#else
    NVIC_SetPriority((IRQn_Type)irqNumber, USB_HOST_INTERRUPT_PRIORITY);
#endif
    EnableIRQ((IRQn_Type)irqNumber);
}

void USB_HostTaskFn(void *param)
{
    USB_HostEhciTaskFunction(param);
}

/*!
 * @brief USB isr function.
 */

#if ((defined USB_HOST_CONFIG_COMPLIANCE_TEST) && (USB_HOST_CONFIG_COMPLIANCE_TEST))
extern usb_status_t USB_HostTestEvent(usb_device_handle deviceHandle,
                                      usb_host_configuration_handle configurationHandle,
                                      uint32_t eventCode);
#endif

static usb_status_t USB_HostEvent(usb_device_handle deviceHandle,
                                  usb_host_configuration_handle configurationHandle,
                                  uint32_t eventCode)
{
#if ((defined USB_HOST_CONFIG_COMPLIANCE_TEST) && (USB_HOST_CONFIG_COMPLIANCE_TEST))
    usb_host_configuration_t *configuration;
    usb_status_t status1;
    usb_status_t status2;
    uint8_t interfaceIndex = 0;
#endif
    usb_status_t status = kStatus_USB_Success;
    switch (eventCode & 0x0000FFFFU)
    {
        case kUSB_HostEventAttach:
#if ((defined USB_HOST_CONFIG_COMPLIANCE_TEST) && (USB_HOST_CONFIG_COMPLIANCE_TEST))
            status1 = USB_HostTestEvent(deviceHandle, configurationHandle, eventCode);
            status2 = USB_HostMsdEvent(deviceHandle, configurationHandle, eventCode);
            if ((status1 == kStatus_USB_NotSupported) && (status2 == kStatus_USB_NotSupported))
            {
                status = kStatus_USB_NotSupported;
            }
#else
            status = USB_HostMsdEvent(deviceHandle, configurationHandle, eventCode);
#endif
            break;

        case kUSB_HostEventNotSupported:
#if ((defined USB_HOST_CONFIG_COMPLIANCE_TEST) && (USB_HOST_CONFIG_COMPLIANCE_TEST))
            configuration = (usb_host_configuration_t *)configurationHandle;
            for (interfaceIndex = 0; interfaceIndex < configuration->interfaceCount; ++interfaceIndex)
            {
                if (((usb_descriptor_interface_t *)configuration->interfaceList[interfaceIndex].interfaceDesc)
                        ->bInterfaceClass == 9U) /* 9U is hub class code */
                {
                    break;
                }
            }

            if (interfaceIndex < configuration->interfaceCount)
            {
                usb_echo("unsupported hub\r\n");
            }
            else
            {
                usb_echo("Unsupported Device\r\n");
            }
#else
            usb_echo("Unsupported Device\r\n");
#endif
            break;

        case kUSB_HostEventEnumerationDone:
#if ((defined USB_HOST_CONFIG_COMPLIANCE_TEST) && (USB_HOST_CONFIG_COMPLIANCE_TEST))
            status1 = USB_HostTestEvent(deviceHandle, configurationHandle, eventCode);
            status2 = USB_HostMsdEvent(deviceHandle, configurationHandle, eventCode);
            if ((status1 != kStatus_USB_Success) && (status2 != kStatus_USB_Success))
            {
                status = kStatus_USB_Error;
            }
#else
            status = USB_HostMsdEvent(deviceHandle, configurationHandle, eventCode);
#endif
            break;

        case kUSB_HostEventDetach:
#if ((defined USB_HOST_CONFIG_COMPLIANCE_TEST) && (USB_HOST_CONFIG_COMPLIANCE_TEST))
            status1 = USB_HostTestEvent(deviceHandle, configurationHandle, eventCode);
            status2 = USB_HostMsdEvent(deviceHandle, configurationHandle, eventCode);
            if ((status1 != kStatus_USB_Success) && (status2 != kStatus_USB_Success))
            {
                status = kStatus_USB_Error;
            }
#else
            status = USB_HostMsdEvent(deviceHandle, configurationHandle, eventCode);
#endif
            break;

        case kUSB_HostEventEnumerationFail:
            usb_echo("enumeration failed\r\n");
            break;

        default:
            break;
    }
    return status;
}

static void USB_HostApplicationInit(void)
{
    usb_status_t status = kStatus_USB_Success;

    USB_HostClockInit();

#if ((defined FSL_FEATURE_SOC_SYSMPU_COUNT) && (FSL_FEATURE_SOC_SYSMPU_COUNT))
    SYSMPU_Enable(SYSMPU, 0);
#endif /* FSL_FEATURE_SOC_SYSMPU_COUNT */

    status = USB_HostInit(CONTROLLER_ID, &g_HostHandle, USB_HostEvent);

    if (status != kStatus_USB_Success)
    {
        usb_echo("host init error\r\n");
        return;
    }
    USB_HostIsrEnable();

    usb_echo("host init done\r\n");
}

void QTMR_IRQ_HANDLER(void)
{
    /* Clear interrupt flag.*/
    QTMR_ClearStatusFlags(BOARD_QTMR_BASEADDR, BOARD_QTMR_INPUT_CAPTURE_CHANNEL, kQTMR_EdgeFlag);

    qtmrIsrFlag = true;
    /* Add for ARM errata 838869, affects Cortex-M4, Cortex-M4F Store immediate overlapping
      exception return operation might vector to incorrect interrupt */
    __DSB();
}
void Init_SysTick(void)
{
    uint32_t coreClock = CLOCK_GetFreq(kCLOCK_CoreSysClk); // Get core clock frequency
    uint32_t ticksPerMs = coreClock / 1000;                // Number of ticks per millisecond

    // Configure SysTick
    if (SysTick_Config(ticksPerMs))
    {
        // Handle error if configuration fails
        while (1);
    }
}
void SysTick_Handler(void)
{

	gMilliseconds++;


	KeypadPeriodicTimeCall();

	/*********validation time:is SenderCAN is connected or not ************/
	if(start_tmr_for_sender_CAN == 1)
	{
		Sender_CAN_tmr_cnt++;
		if(Sender_CAN_tmr_cnt > 3000)
		{
			Sender_CAN_tmr_cnt = 0;
			start_tmr_for_sender_CAN = 0;
			SenderCAN_disconnected = 1;
		}
	}

	/*********for user interface purpose.
	 * Problem is even if pendrive detected,
	 * popup of pendrive detect appears after the copying
	 * of the entire file to the pendrive.
	 */
	if(Appwizard_rendering_pendrv_detect == 1)
	{
		rendrng_cnter++;
		if(rendrng_cnter>= 1000)
		{
			rendrng_cnter  = 0;
			startcpy_to_pendrv = 1;
			Appwizard_rendering_pendrv_detect = 0;
		}
	}

	Adcdatavalidation();

	if(vms.flag.gauge_rotation_poweron == 0)
	{
#ifdef DOZER_P_VER
		Readfrequency();
#endif
	}

	if(bStartRawFrameLog == 1 && timer_updated==1 && SDCardfuncBegin==0)
	{
		guiRawLogCount++;
		if(guiRawLogCount >= 100)
		{
			guiRawLogCount = 0;
			gucRecTimeCount--;
			timer_updated=0;

			if(gucRecTimeCount == 0)
			{
				bStartRawFrameLog 	= 0;
				gucRecTimeCount 	= 0;
				guiRawLogCount		= 0;
				//gucRecordingStatus  = 2;
				vms.flag.flag_storing_raw_can_data = 1;//added by Rajashekhar on 15.06.2022
				//store_raw_can_data_sd_card  = 1;
			}
		}
	}

	if(start_data_logging_for_every_10min==1)
	{
		dataloggingcounter++;
		if(dataloggingcounter>=60000)  //10mins
		{
			dataloggingcounter=0;
			data_logging_10min=1;
			start_data_logging_for_every_10min=0;
		}
	}


	if(guiDiagTimer==1)
	{
		guiDiagCounter++;
		if(guiDiagCounter >= 300)
		{
			guiDiagCounter=0;
			guiRequestDM1Data=1;
			guiDiagCounttemp++;
		}
		if(guiDiagCounttemp==2)
		{
			guiDiagCounter=0;
			guiDiagCounttemp=0;
			guiDiagPopUp = 0;
			guiDiagTimer=0;
		}
	}

//	if(bStartMinMaxFrameLog == 1)
//	{
//		guiLogFileSize++;
//	}
//	if(bStartFaultFrameLog == 1)
//	{
//		guiLogFileSize++;
//	}

	if(update_rpm == 1)
	{
		cnt_rpm++;
		if(cnt_rpm > 400)
		{
			cnt_rpm = 0;
			update_rpm = 0;
		}
	}

	funcTransmitCanFrame();
	guiToggleCount++;

	if(guiToggleCount >= 100)
	{
		bToggleBit = !bToggleBit;
	}

//	if(bNightMode == 1)
//	{
//		if(bNightMode != bPrevMode)
//		{
//			bPrevMode = bNightMode;
//			giMode = bNightMode;
//		}
//		giMode++;
//		if(giMode > 8)
//		{
//			giMode = 1;
//		}
//	}
//	else
//	{
//		if(bNightMode != bPrevMode)
//		{
//			bPrevMode = bNightMode;
//			giMode = bNightMode;
//		}
//		giMode++;
//		if(giMode > 18)
//		{
//			giMode = 11;
//		}
//	}

	if(start_pendrive_timeout==1)
	{
		pendrive_counter_timeout++;

		if(pendrive_counter_timeout>1000)
		{
			pendrive_counter_timeout=0;
			pendrive_detected_timeout=1;
			start_pendrive_timeout=0;
			pendrivestatusstrttimer=1;
		}
	}

	if(pendrivestatusstrttimer==1)
	{
	    pendrivestatuscounter++;
		if(pendrivestatuscounter>800)
		{
			pendrivestatuscounter=0;
			guiPendrivePoPup=0;
			pendrivestatusstrttimer=0;
		}
	}

	if(CANAStartTimer==1)
	{
		CANATimeoutCounter++;

		if(CANATimeoutCounter>50)
		{
			CANATimeoutCounter=0;
			CANATimeout=1;
			CANAStartTimer=0;
		}
	}

	if(CANBStartTimer==1)
	{
		CANBTimeoutCounter++;

		if(CANBTimeoutCounter>50)
		{
			CANBTimeoutCounter=0;
			CANBTimeout=1;
			CANBStartTimer=0;
		}
	}

	if(giScreenSwitch == 0)
	{
		giScreenTimeCount++;
		if(giScreenTimeCount > 300)
		{
			giScreenTimeCount = 0;
			giScreenSwitch = 1;
			gucCurrentScreen = 1;
		}
	}

	if(giScreenSwitch == 1)
	{
		giScreenTimeCount++;
		if(giScreenTimeCount > 300)
		{
			giScreenTimeCount = 0;
			giScreenSwitch = 2;
			gucCurrentScreen = 2;
		}
	}


	/* commented on 29.10.2022 by Rajashekhar
		if(giScreenSwitch == 2)
		{
			giScreenTimeCount++;

			if(giScreenTimeCount > 300)
			{
				giScreenTimeCount = 0;

				if(giMode==0)
				{
					giScreenSwitch = 3;
					gucCurrentScreen = 3;
				}
				else
				{
					giScreenSwitch = 26;
					gucCurrentScreen = 26;
					power_on=1;
				}
			}
		}

		if(giScreenSwitch == 3)
		{
			giScreenTimeCount++;

			if(giScreenTimeCount > 300)
			{
				giScreenTimeCount = 0;
				giScreenSwitch = 6;
				gucCurrentScreen = 6;
			    gisdcardpopup=1;
			}
		}

		if(giScreenSwitch==26 && power_on==1)
		{
			giScreenTimeCount++;

			if(giScreenTimeCount > 200)
			{
				giScreenTimeCount = 0;
				power_on=0;
	//			giScreenSwitch = 6;
	//			gucCurrentScreen = 6;
			    gisdcardpopup=1;
			}
		}
	*/
		if(giScreenSwitch == 2)
		{
			giScreenTimeCount++;

			if(giScreenTimeCount > 300)
			{
				giScreenTimeCount = 0;

				if(giMode==0)
				{
					//giScreenSwitch = 3;
					gucCurrentScreen = 3;
					Homescreen_select_day();
				}
				else
				{
	//				giScreenSwitch = 26;
					gucCurrentScreen = 4;
					Homescreen_select_night();
				}
			}
		}

		if(gucCurrentScreen == 3)
		{
			if(giScreenSwitch == 6 || giScreenSwitch == 7 || giScreenSwitch == 8 || giScreenSwitch == 9)
			{
				giScreenTimeCount++;
				if(giScreenTimeCount > 300)
				{
					giScreenTimeCount = 0;
					//gisdcardpopup=1;/*During PowerON no need of SDCARD detection Popup*/
					gucCurrentScreen = 5;//dummy variable
				}
			}
		}

		if(gucCurrentScreen == 4)
		{
			if(giScreenSwitch == 26 || giScreenSwitch == 27 || giScreenSwitch == 8 || giScreenSwitch == 9)
			{
				giScreenTimeCount++;
				if(giScreenTimeCount > 200)
				{
					giScreenTimeCount = 0;
					//gisdcardpopup=1;/*During PowerON no need of SDCARD detection Popup*/
					gucCurrentScreen = 6;//dummy variable
				}
			}
		}

	if(gisdcardpopup==1)
	{
		giTimeCountpopup++;
		if(giTimeCountpopup > 250)
		{
			giTimeCountpopup=0;
			gisdcardpopup=0;
			bStartRawFrameUsb=0;
			bStartFaultFrameUsb=0;
#ifdef MIN_MAX_LOGGING_REQ
			bStartMinMaxFrameLog=0;
#else
			bStartDataLogging=0;
#endif
			bStartRawFrameLog=0;
			gucRecordingStatus=0;
			gucCopyStatus=0;
			power_on_SD=1;
		}
	}

	if(set_onesec_timer==1)
	{
		onseccounter++;

		if(onseccounter>100)                  //one sec timer
		{
			onseccounter=0;
			set_onesec_timer=0;
//			test_toggle=!test_toggle;
//			GPIO_WritePinOutput(GPIO2, 20, (test_toggle));
			Calculate_distance_in_km_from_CAN_per_sec();
			set_onesec_timer=1;
	    	if(vms.flag.gauge_rotation_poweron == 1 && (giScreenSwitch == 6 || giScreenSwitch == 26
	    			|| giScreenSwitch == 7 || giScreenSwitch == 27 || giScreenSwitch == 8 || giScreenSwitch == 9))
			{
				no_of_sec++;/******this is not realted to distance this is related to power on gauge rotation***/
			}
	    	else if(vms.flag.gauge_rotation_poweron == 0)
	    	{
	    		no_of_sec = 0;
	    	}else{}

#ifdef SYSTICK_TIMER_USED
	    	tmr_display_hrs();
#endif
		}
	}

	if(set_pulse_timer==1)
	{
		pulsecounter++;

		if(pulsecounter>pulsecount)
		{
			pulsecounter=0;
			//set_onesec_timer=0;
			test_toggle=!test_toggle;
			GPIO_WritePinOutput(GPIO3, 27, (test_toggle));
			set_pulse_timer=1;
		}
	}

	/****do not log errors immediately during power on wait for some time to
	 * read, validate adc channels after this only log
	 */
	if(start_tmr_for_pwron_errs == 1)
	{
		cntr_for_pwron_errs++;
		if(cntr_for_pwron_errs > 6000)
		{
			cntr_for_pwron_errs = 0;
			start_tmr_for_pwron_errs = 0;
			wait_donotlog_errs_immediately_during_pwron = 0;
		}
	}


//	if(giScreenSwitch == 4)
//	{
//		giScreenTimeCount++;
//		if(giScreenTimeCount > 100)
//		{
//			giScreenTimeCount = 0;
//			giScreenSwitch = 6;
//			gucCurrentScreen = 6;
//		}
//	}
//


//	if(start_usb_detection==1)
//	{
//		usb_detection_count++;
//		if(usb_detection_count>500)
//		{
//			usb_detection_count=0;
//			start_usb_detection=0;
//			check_usb_detection=1;
//		}
//	}
	if(vms.flag.gauge_rotation_poweron == 0)
	{
		All_CAN_disconnected_counter();

		ErrorIconToggle();

		id_notset_Toggle();

		EngOvrSpdIconToggle();

		//SeatbeltIconToggle();
	#ifdef DI_ICON_TOGGLE
		EopIconToggle();

		EctIconToggle();

		EotIconToggle();

		FuelIconToggle();

		TopIconToggle();

		TotIconToggle();
	#endif
	}
}
uint32_t millis(void) {
    return gMilliseconds;
}
/*!
 * @brief Main function
 */

// static unsigned into lucStatus = 0;
void Min_max_gauge_values(void)
{
	if(gfEop > EOP_MAX_RANGE)
	{
		gfEop = EOP_MAX_RANGE;
	}
	else if(gfEop < 0)
	{
		gfEop = 0;
	}else{}

	if(gfEct > ECT_MAX_RANGE)
	{
		gfEct = ECT_MAX_RANGE;
	}
	else if(gfEct < 0)
	{
		gfEct = 0;
	}else{}

	if(giEngineRpm > ENG_RPM_MAX_RANGE)
	{
		giEngineRpm = ENG_RPM_MAX_RANGE;
	}
	else if(giEngineRpm < 0)
	{
		giEngineRpm = 0;
	}else{}

	if(gfVolt > BATT_MAX_RANGE)
	{
		gfVolt = BATT_MAX_RANGE;
	}
	else if(gfVolt < 0)
	{
		gfVolt = 0;
	}else{}

	if(gfFuel > FUEL_MAX_RANGE)
	{
		gfFuel = FUEL_MAX_RANGE;
	}
	else if(gfFuel < 0)
	{
		gfFuel = 0;
	}else{}

	if(gfTop > TOP_MAX_RANGE)
	{
		gfTop = TOP_MAX_RANGE;
	}
	else if(gfTop < 0)
	{
		gfTop = 0;
	}else{}

//	if(gfTot > TOT_MAX_RANGE)
//	{
//		gfTot = TOT_MAX_RANGE;
//	}
//	else if(gfTot < 0)
//	{
//		gfTot = 0;
//	}else{}

	if(gfCot > COT_MAX_RANGE)
	{
		gfCot = COT_MAX_RANGE;
	}
	else if(gfCot < 0)
	{
		gfCot = 0;
	}else{}

	if(gfEot > EOT_MAX_RANGE)
	{
		gfEot = EOT_MAX_RANGE;
	}
	else if(gfEot < 0)
	{
		gfEot = 0;
	}else{}
}

int main(void)
{
    Initialization();


    while(1)
    {
#if 1
    	PowerONGaugeRotation();

    	ReadRTC();
#ifdef DOZER_P_VER
    	EngineHrs();
#else
    	/******************************************************************************/
    	if(EngineHourMeter != Prev_EngineHrs && Prev_EngineHrs < EngineHourMeter)
    	{
    		Prev_EngineHrs = EngineHourMeter;
        	MemoryWriteVariable(PRIMARY_MEMORY,ENGINE_ACTUAL_HRS,EngineHourMeter,4);
    	}

    	if(gfFuel_rate != Prev_Fuel_rate && gfFuel_rate != 0 && Prev_Fuel_rate < gfFuel_rate)
    	{
    		Prev_Fuel_rate = gfFuel_rate;
        	MemoryWriteVariable(PRIMARY_MEMORY,ENG_FUEL_RATE,gfFuel_rate,2);
    	}
    	/*******************************************************************************/
#endif
    	/**********display hours **********/
    	DisplayHrs();
    	//Readfrequency();
    	//ReadandProcessallADCchannels();
    	//ReadandProcessDigitalIO();
    	//Updatedistance();

    	Reset_all_CAN_parameters();

    	/* Fault indication
    	 * DM1 Processing
    	 * scrolling of DM1(popup) and other Errors come from different source address
    	 */
    	Display_Errors();

    	/*******Change screen, save/store data, edit data, send data, show/display data,,,,etc
    	 * is based on the keypad interaction******/
    	KeypadApplication();

		//ReadAdcChannels();  // IO MODULE ADC func added
		//InputsThresholdDecisionMaking();

    	//ProcessAnalogInput(); //commented by gagana
		//ProcessDigitalInput();

		/**Raw Can logging, Data logging, Fault and Shiftwise working hours logging**/
//		Logging(); //commented by gagana

		/**copying of RawCan,Data,Fault,Shiftwise working hours logging data to pendrive**/
//		Copying_of_logged_data(); //commented by gagana

#endif
#if 1
		/*APPIZARD MAIN FUNCTION*/
		/***All display related parameter, switching of the screen and etc, are updated in the MainTask().***/
		MainTask();
#endif
    }
    return 0;
}

void Initialization(void)
{
    BOARD_ConfigMPU();
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitLcdifPixelClock();
    BOARD_InitDebugConsole();
    BOARD_InitLcd();
    BOARD_InitGPT();

	USB_HostApplicationInit();
	//CanaFrameConfigure();
	KeypadConfig();
	VariablesInit();
	J1939Config();
	J1939MailboxConfigure();
    //SDCardfuncBegin = DetectSDCard();
	InitAdc();
	RTCInit();
	PWM_config();
	FreqCaptureInit();
	Max22190Init();
	Poweron_memory_read_write();
	Poweronreaddatafromfram();
	SysTick_Config(SystemCoreClock / 100); //10ms systick
	set_brightness(giIntensityPercent);

    /*******This is related to Display Enable pin of MAX16929AGUI/V+(U22),
     * by using this output we short JU1 jumper in IO Card
     * and we used pin no:38 in CN3 connector (in CPU card AINSEL2)****/
	AIN_SEL_IN2_LOW;//from CPU card it is pin no: 22 and GPIO_AD_B1_06
	AIN_SEL_IN2_LOW;
	DelayUs1(1000);
	AIN_SEL_IN2_HIGH;//from CPU card it is pin no: 22 and GPIO_AD_B1_06
	AIN_SEL_IN2_HIGH;
	/********************************************************************/



	XBARA_Init(XBARA1);
	XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputIomuxXbarIn21, kXBARA1_OutputEnc1PhaseAInput);
	XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputIomuxXbarIn22, kXBARA1_OutputEnc1PhaseBInput);
//	XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputIomuxXbarIn23, kXBARA1_OutputEnc1Index);
//	ENC_EnableInterrupts(ENC1, kENC_INDEXPulseInterruptEnable);
//	EnableIRQ(ENC1_IRQn);
/*
	while(1)
	{
		AIN_SEL_IN2_HIGH;//AIN_MUX_A2_HIGH;
		DelayUs1(5000);
		AIN_SEL_IN2_LOW;//AIN_MUX_A2_LOW;
		DelayUs1(5000);
	}
*/
/*
	WinbondMemoryTest();
	erase_fram_memory(0x0000,0x7FFF);
*/
}


int funcSdCardApplication(void)
{
    const TCHAR driverNumberBuffer[3U] = {SDDISK + '0', ':', '/'};
    volatile bool failedFlag           = false;
    char ch                            = '0';

    BYTE work[FF_MAX_SS];

	   if (sdcardWaitCardInsert() != kStatus_Success)
       {
          return 1;
       }

       if (f_mount(&g_fileSystem, driverNumberBuffer, 0U))
       {
//           PRINTF("Mount volume failed.\r\n");
           return 1;
       }

		#if (FF_FS_RPATH >= 2U)

			error = f_chdrive((char const *)&driverNumberBuffer[0U]);

			if (error)
			{
		//          PRINTF("Change drive failed.\r\n");
				return 1;
			}

		#endif

#if FF_USE_MKFS

    PRINTF("\r\nMake file system......The time may be long if the card capacity is big.\r\n");

    if (f_mkfs(driverNumberBuffer, 0, work, sizeof work))
    {
        PRINTF("Make file system failed.\r\n");

        return 1;
    }

#endif /* FF_USE_MKFS */

   		return 0;
}

static status_t sdcardWaitCardInsert(void)
{
   BOARD_SD_Config(&g_sd, NULL, BOARD_SDMMC_SD_HOST_IRQ_PRIORITY, NULL);

   /* SD host init function */
   if (SD_HostInit(&g_sd) != kStatus_Success)
   {
//	   PRINTF("\r\nSD host init fail\r\n");
	   return kStatus_Fail;
   }

   /* wait card insert */

   if (SD_PollingCardInsert(&g_sd, kSD_Inserted) == kStatus_Success)
   {
//	   PRINTF("\r\nCard inserted.\r\n");
	   /* power off card */
	   SD_SetCardPower(&g_sd, false);
	   SD_SetCardPower(&g_sd, true);
   }
   else
   {
	   return kStatus_Fail;
   }

   return kStatus_Success;
}

void VariablesInit(void)
{
	giScreenSwitch 		= 0;
	giScreenTimeCount	= 0;
	gcPowerOnExecute 	= 1;
	power_on_SD=2;
	SDCardfuncBegin = 0;

#ifdef DOZER_P_VER
	giIcon01 = 0;
	giIcon12 = 0;
#else
	giIcon01 = 1;
	giIcon12 = 1;
#endif
	giIcon02 = 1;
	giIcon03 = 1;
	giIcon04 = 1;
	giIcon05 = 1;
	giIcon06 = 1;
	giIcon07 = 1;
	giIcon08 = 1;
	giIcon09 = 1;
	giIcon10 = 1;
	giIcon11 = 1;

	giIcon13 = 1;
	giIcon14 = 1;
	giIcon15 = 1;

	bNightMode = 0;
	bPrevMode  = 1;
	//    once = 1;
	//    del = 0;
	del  = 2160;
	once = 2160;
	gucRecTimeCount = 30;

	guiEngOilInterval = 250;
	guiAirFilterInterval = 250;
	guiHydOilInterval = 250;
	guiSerEngInterval = 250;
	guiSerMacInterval = 250;

	guiEngOilNext = 250;
	guiAirFilterNext = 250;
	guiHydOilNext = 250;
	guiSerEngNext = 250;
	guiSerMacNext = 250;

	guiEngOilRemain = 250;
	guiAirFilterRemain = 250;
	guiHydOilRemain = 250;
	guiSerEngRemain = 250;
	guiSerMacRemain = 250;

	//    start_usb_detection=0;
	rawdatadatapt=0;
	filedatapt=0;
	Copyrawdataptr=0;
	data_copied=0;
	filefaultlogdatapt=0;
	Copyfaultdataptr=0;
	CopyMinMaxdataptr=0;
	fileMinMaxlogdatapt=0;
	fileDataloggingdatapt=0;
	guiPendrivePoPup=0;
	guiPendriveStatus=2;
	pendrivestatuscounter=0;
	pendrivestatusstrttimer=0;
	pendrive_check=2;
	giCloseOpenScreens=0;
	CopyDataloggingdataptr=0;
	//    record_adjust_30sec_time_count=100;
	//    giScreenPrevSwitch=100;
	//    var=0;

	start_data_logging_for_every_10min=1;

	SECOND_ADDRESS=0x00;     /*Seconds*/
	MINUTE_ADDRESS=0x01;     /*Minutes*/
	HOUR_ADDRESS=0x02;       /*Hour*/
	MONTH_ADDRESS=0x04;      /*Month*/
	YEAR_ADDRESS=0x05;       /*Year*/
	DAY_OF_WEEK_ADDRESS=0x06;    /*Day of the week*/
	CTRL_STATUS_ADDRESS=0x07;
	DATE_ADDRESS=0x03;
	SET_12HOUR_AM=0x7F;
	MASK_12HOUR=0x1F;
	MASK_SECOND=0x7F;
	MASK_MINUTE=0x7F;
	MASK_DATE=0x3F;
	MASK_MONTH=0x1F;
	MASK_YEAR=0xFF;

	AIN_MUX_A0_LOW;
	AIN_MUX_A1_LOW;
	//AIN_MUX_A2_LOW;

	//    record_adjust_10min_time_count=1000;
	memset(g_bufferRead,'\0',sizeof(g_bufferRead));

	memset(&presentadc,	0,	sizeof(presentadc));
	memset(&prevadc,	0,	sizeof(prevadc));
	memset(&tempadc,	0,	sizeof(tempadc));
	memset(&starttmr,	0,	sizeof(starttmr));
	memset(&stoptmr,	0,	sizeof(stoptmr));

	//    memset(filecopy,'\0',sizeof(filecopy));

	//     countervar = 1;
	set_onesec_timer=1;
	set_pulse_timer=1;

	power_on_open_faultlog_file = 1;//added on 03.06.2022
	fault_found_write_to_sd = 0;
	vms.all = 0x00;

	/***********Added on 18.10.2022**************/
	vms.flag.gauge_rotation_poweron = 1;
	no_of_sec = 0;
	GuageFuel.PreviousValue = -3600;
	GuageVolt.PreviousValue = -3600;
	GuageEct.PreviousValue = 900;

	GuageEct2.PreviousValue = 1200;
	GuageCot.PreviousValue = 1200;
	GuageEot.PreviousValue = 1200;
	/*********************************************/
	brightness_percentage = 50;
	giIntensityPercent = 50;

	use_only_numericals = 0;

	Appwizard_rendering_pendrv_detect = 0;
	startcpy_to_pendrv = 0;
	rendrng_cnter = 0;

	start_tmr_for_pwron_errs = 0;
	cntr_for_pwron_errs = 0;
	wait_donotlog_errs_immediately_during_pwron = 1;

	/****Sender CAN*****/
	Sender_CAN_Alive = 0;
	start_tmr_for_sender_CAN = 0;
	Sender_CAN_tmr_cnt = 0;
	SenderCAN_disconnected = 0;

	Eng_oil_filter_clogd = 0;

	disp_seconds_cntr = 0;
	DisplayHourMeter = 0;
	log_display_hrs = 0;

	eng_seconds_cntr = 0;
	EngineHourMeter = 0;
	#ifdef SYSTICK_TIMER_USED
		display_on = 1;
	#else
		rtc_datetime_edited = 0;
		make_ref_time_as_prsnt_time = 1;
		make_ref_tm_as_prsnt_tm_eng_hrs = 1;
	#endif


	memset(&DM1_Error,0,sizeof(DM1_Error));
	memset(&ScrollError,0,sizeof(ScrollError));

	memset(&gucFaultLogs,0,sizeof(gucFaultLogs));
	memset(&faultsymbols,	0,	sizeof(faultsymbols));

	datalog_pwron = 1;

	/**********************************************/
	memset(&Can_Comm,0,sizeof(Can_Comm));
	Can_Comm.strt_tmr_entirecan_discnctd= 1;
	Can_Comm.strt_tmr_engcan_discnctd 	= 1;
	Can_Comm.strt_tmr_iomcan_discnctd 	= 1;
	Can_Comm.strt_tmr_transcan_discnctd = 1;
	Can_Comm.strt_tmr_sendercan_discnctd = 1;
	/**********************************************/
}

void funcSdCardtest(void)
{
	if(gisdcardpopup==1)
	{
		gisdcardstatus=0;
	}

    if(power_on_SD==1)
    {
    	power_on_SD=0;
/*
#ifdef MIN_MAX_LOGGING_REQ
    	error = f_unlink(_T("/EM1/MinMax.csv"));
#else
    	error = f_unlink(_T("/EM1/DataLogging.csv"));
#endif
    	error = f_unlink(_T("/EM1/Faultlog.csv"));
    	error = f_unlink(_T("/EM1/RawCanData.csv"));
*/
    }

    if(power_on_SD==0)
    {
		if(usb_written == 1)
		{
			usb_written = 0;
			f_mount(&g_fileSystem, driverNumberBuffer2, 0U);
			f_chdrive((char const *)&driverNumberBuffer2[0U]);
		}
		if(store_raw_can_data_sd_card==1)  //store raw can data into sd card
		{
			store_raw_can_data_sd_card=0;
			funcstore30secrawcandataintosdcard();
		}
		if(store_dm1_mesg==1 && bStartRawFrameUsb==0 && bStartFaultFrameUsb==0) //store dm1 mesg into sd card
		{
			store_dm1_mesg=0;
			funcstoreDM1faultmesgesintoSdcard();
		}

#ifdef MIN_MAX_LOGGING_REQ
		if(data_copied==0 && bStartFaultFrameUsb==0 && bStartRawFrameUsb==0 && bStartMinMaxFrameLog==0) // store minmax into sd card
		{
			funcMinMaxErrorLog();
		}
#else
		if(data_copied==0 && bStartFaultFrameUsb==0 && bStartRawFrameUsb==0 && bStartDataLogging==0) // store datalogging into sd card
		{
			if(data_logging_10min==1)
			{
				data_logging_10min=0;
				funcDataLogging();
				dataloggingcounter=0;
				start_data_logging_for_every_10min=1;
			}
		}
#endif
		if(bStartRawFrameUsb==1 && data_copied==0 && bStartFaultFrameUsb==0)  //read RawCanData from SD card
		{
			funcReadRawDatafromSdCard();
		}

		if(bStartFaultFrameUsb==1 && data_copied==0 && bStartRawFrameUsb==0)   //read faultlog from SD card
		{
			funcReadFaultDatafromSdCard();
		}

#ifdef MIN_MAX_LOGGING_REQ
		if(bStartMinMaxFrameLog==1 && data_copied==0 && bStartRawFrameUsb==0 && bStartFaultFrameUsb==0)
		{
			funcReadMinMaxfromSDcard();
		}
#else
		if(bStartDataLogging==1 && data_copied==0 && bStartRawFrameUsb==0 && bStartFaultFrameUsb==0)
		{
			funcReadDataLogfromSdCard();
		}
#endif
		if(unlink_rawCandatalog==1)
		{
			unlink_rawCandatalog=0;
	    	error = f_unlink(_T("/EM1/RawCanData.csv"));
	    	guiPendriveStatus=5;
	    	rawdatadatapt=0;
	    	Writedataintofram(RAW_DATA_PTR);
		}
		if(unlink_datalog==1)
		{
			unlink_datalog=0;
	    	error = f_unlink(_T("/EM1/DataLogging.csv"));
	    	Dataloggingdatapt=0;
	    	guiPendriveStatus=5;
	    	Writedataintofram(DATA_LOG_PTR);
		}
		if(unlink_faultlog==1)
		{
			unlink_faultlog=0;
	    	error = f_unlink(_T("/EM1/Faultlog.csv"));
	    	datapt=0;
	    	guiPendriveStatus=5;
	    	Writedataintofram(FAULT_DATA_PTR);
		}
    }
}

void Store_Dmlog_Frame_From_Into_SDCard(void)
{
	uint16_t no_data_rcvd 	= 0;
	uint16_t dataframenum 	= 0;
	uint8_t	year			= 0;
	uint8_t month			= 0;
	uint8_t date			= 0;
	uint8_t hour			= 0;
	uint8_t minute			= 0;
	uint8_t second			= 0;
	uint8_t source_addr		= 0;
	uint16_t full_year 		= 0;
	uint8_t plugid 			= 0;
	uint8_t status 			= 0;
	uint8_t occurence_count = 0;
	uint8_t lamp_status 	= 0;

	uint8_t i = 0,j=0;
	uint8_t file_write_buff[150] = {0};
	uint32_t temp_spn_fmi = 0;
	uint8_t buff_cntr = 0;
	uint8_t *p_sa_str;
	uint8_t status_str[10] = {0};
	uint8_t *pstatus;
	uint8_t *fault_description;
	uint16_t array_size = 0;
	uint16_t byte_cntr = 0;
	uint8_t dmlog_frame_bytes[DM_LOG_FRAME_SIZE] = {0};

    unsigned long  lulDecimalValues = 0;
    uint8_t lucFloatValue    = 0;
    unsigned long lucTempLogData   = 0;
//	uint32_t mem_addr = start_addr;

    strfaultLoggingData.CltTempCurrentValueDEG   = gfEct_text;//gulAdcFloatData[A3_ECT];
    strfaultLoggingData.EopCurrentValueKpa       = gfEop_text;//gulAdcFloatData[A1_EOP];
    strfaultLoggingData.EngSpdCurrentValueRPM    = giEngineRpm;//giOutputRpm;//gulAdcFloatData[A16_ENG_RPM];
    strfaultLoggingData.TopCurrentValueKpa       = gfTop_text;//gulAdcFloatData[A5_TOP];
    strfaultLoggingData.EotCurrentValueDEG       = gfEot_text;//gulAdcFloatData[A2_EOT];
    strfaultLoggingData.DisplayHoursRunHrs = giHourMeter;//(glHour_meterCanData / 20.0);
    strfaultLoggingData.BatteryCurrentValueV = gfVolt_text;
    strfaultLoggingData.ConverterOiltempCurrentValue = gfCot_text;//gfconvertedCot;

	if(created_new==1)
	{
		uint8_t csv_header_make[]={"VIN:\n MAKE:\n MODEL:\n SERIAL NUMBER:\n UNIT NUMBER:\n DISPLAY DATE CODE: 081220201910\n IO MODULE FIRMWARE: 79.70.0175 V008 - BEML V003 \n DATE DOWNLOADED:\n"};
		f_write(&g_fileObject1,csv_header_make, sizeof(csv_header_make),&bytesWritten); //csv_header
		datapt+=sizeof(csv_header_make);
		uint8_t csv_header[] = {" Year, Month, Day, Time, Source_Name, Plug_ID, Source_Address, Status, SPN, FMI, Occ_Count, Lamp_Status, Fault, Engine_Speed_RPM, Converter_Oil_temp, Transmission_Oil_Pressure, "
				                "Engine_Oil_Pressure, Battery_Voltage, Engine_Coolant_temperature, Engine_Oil_temperature, Engine_Hours\n"};
		f_write(&g_fileObject1,csv_header, sizeof(csv_header),&bytesWritten); //csv_header
		created_new=0;
		datapt+=sizeof(csv_header);
	}
	for(i=0;i<DM1_SA;i++)
	{
		 for(j=0;j<NO_OF_DM1_MESSAGES;j++)
		 {
			temp_spn_fmi= strDM1Log[i][j].SpnFmi;

			spn=(temp_spn_fmi & 0x7FFFF);
			 if((strDM1Log[i][j].Status!=strDM1LogPrev[i][j].Status) && spn!=0x7FFFF && spn!=0xFFFF && spn!=0x0000)
			 {
				year 			= (strDateTime.Year-2000);
				month 			= strDateTime.Month;
				date 			= strDateTime.Date;
				hour 			= strDateTime.Hour;
				minute 			= strDateTime.Minute;
				second  		= strDateTime.Second;
				source_addr     = strDM1Log[i][j].SourceAddress;
				plugid          = strDM1Log[i][j].PlugId;
				status          = strDM1Log[i][j].Status;

				temp_spn_fmi=strDM1Log[i][j].SpnFmi;

				spn=(temp_spn_fmi & 0x7FFFF);
				fmi=(temp_spn_fmi>>19);

				occurence_count=strDM1Log[i][j].OccuranceCount;
				lamp_status 	=  1;			//dmlog_frame_bytes[13];
				write_value_to_SDcard(0x14,0);  //year 20
				write_value_to_SDcard(year,",");
				write_value_to_SDcard(month,",");
				write_value_to_SDcard(date,",");
				write_value_to_SDcard(hour,":");
				write_value_to_SDcard(minute,":");
				write_value_to_SDcard(second,",");
				p_sa_str = source_addr_decode(source_addr);
				write_string_to_SDcard(p_sa_str,",");
				write_value_to_SDcard(plugid,",");
				write_value_to_SDcard(source_addr,",");

				if(status == 1)
				{
					memcpy(status_str,"Active",sizeof("Active"));
					write_string_to_SDcard(status_str,",");
				}
				else
				{
					memcpy(status_str,"Inactive",sizeof("Inactive"));
					write_string_to_SDcard(status_str,",");
				}

				write_value_to_SDcard(spn,",");
				write_value_to_SDcard(fmi,",");
				write_value_to_SDcard(occurence_count,",");
				write_value_to_SDcard(lamp_status,",");
				fault_description = spn_fmi_decode(spn,fmi);
				write_string_to_SDcard(fault_description,",");

			    lucTempLogData      = strfaultLoggingData.EngSpdCurrentValueRPM * 100;
			    lulDecimalValues    = lucTempLogData/100;
			    lucFloatValue       = lucTempLogData%100;

			    funcfaultTempHextoAscii(lulDecimalValues);
			    FuncfaultlogStringPrint(".");
			    funcfaultTempHextoAscii(lucFloatValue);
			    FuncfaultlogStringPrint(",");

				lucTempLogData      = strfaultLoggingData.ConverterOiltempCurrentValue* 100;
			    lulDecimalValues    = lucTempLogData/100;
			    lucFloatValue       = lucTempLogData%100;

			    funcfaultTempHextoAscii(lulDecimalValues);
			    FuncfaultlogStringPrint(".");
			    funcfaultTempHextoAscii(lucFloatValue);
			    FuncfaultlogStringPrint(",");

			    lucTempLogData      = strfaultLoggingData.TopCurrentValueKpa * 100;
			    lulDecimalValues    = lucTempLogData/100;
			    lucFloatValue       = lucTempLogData%100;

			    funcfaultTempHextoAscii(lulDecimalValues);
			    FuncfaultlogStringPrint(".");
			    funcfaultTempHextoAscii(lucFloatValue);
			    FuncfaultlogStringPrint(",");

			    lucTempLogData      = strfaultLoggingData.EopCurrentValueKpa * 100;
			    lulDecimalValues    = lucTempLogData/100;
			    lucFloatValue       = lucTempLogData%100;

			    funcfaultTempHextoAscii(lulDecimalValues);
			    FuncfaultlogStringPrint(".");
			    funcfaultTempHextoAscii(lucFloatValue);
			    FuncfaultlogStringPrint(",");

			    lucTempLogData      = strfaultLoggingData.BatteryCurrentValueV * 100;
			    lulDecimalValues    = lucTempLogData/100;
			    lucFloatValue       = lucTempLogData%100;

			    funcfaultTempHextoAscii(lulDecimalValues);
			    FuncfaultlogStringPrint(".");
			    funcfaultTempHextoAscii(lucFloatValue);
			    FuncfaultlogStringPrint(",");

			    lucTempLogData      = strfaultLoggingData.CltTempCurrentValueDEG * 100;
			    lulDecimalValues    = lucTempLogData/100;
			    lucFloatValue       = lucTempLogData%100;

			    funcfaultTempHextoAscii(lulDecimalValues);
			    FuncfaultlogStringPrint(".");
			    funcfaultTempHextoAscii(lucFloatValue);
			    FuncfaultlogStringPrint(",");

			    lucTempLogData      = strfaultLoggingData.EotCurrentValueDEG * 100;
			    lulDecimalValues    = lucTempLogData/100;
			    lucFloatValue       = lucTempLogData%100;

			    funcfaultTempHextoAscii(lulDecimalValues);
			    FuncfaultlogStringPrint(".");
			    funcfaultTempHextoAscii(lucFloatValue);
			    FuncfaultlogStringPrint(",");

			    lucTempLogData      = strfaultLoggingData.DisplayHoursRunHrs * 10;
			    lulDecimalValues    = lucTempLogData/10;
			    lucFloatValue       = lucTempLogData%10;

			    funcfaultTempHextoAscii(lulDecimalValues);
			    FuncfaultlogStringPrint(".");
			    funcfaultTempHextoAscii(lucFloatValue);
			    FuncfaultlogStringPrint(",");

				f_write(&g_fileObject1,"\n",sizeof("\n"),&bytesWritten);
				datapt+=sizeof("\n");
				strDM1LogPrev[i][j].Status=strDM1Log[i][j].Status;
			 }
		 }
	}
}

void write_value_to_SDcard(uint32_t hex_value,uint8_t *seperator)
{
	int8_t i = 0;
	uint8_t j=0,no_of_byte = 0;
	uint8_t temp_buff[10] = {0};

	num_val = hex2ascii(hex_value);

	for(i=num_val;i>0;)
	{
		temp_buff[j++] = conv_array[i-1];
		if(num_val==1)
		{
			break;
		}
		else
		temp_buff[j++] = conv_array[i-2];
		i=i-2;
	}

	f_write(&g_fileObject1,temp_buff, num_val,&bytesWritten);
	datapt+=num_val;
	if(seperator!=0)
	{
		f_write(&g_fileObject1,seperator, 1,&bytesWritten);
		datapt+=1;
	}
}

void write_string_to_SDcard(uint8_t *pstr,uint8_t *seperator)
{
    if(*pstr!='\0')
    {
		f_write(&g_fileObject1,pstr, strlen(pstr),&bytesWritten);
		datapt+=strlen(pstr);
		if(seperator!=0)
		{
			f_write(&g_fileObject1,seperator, 1,&bytesWritten);
			datapt+=1;
		}
    }
    else
    {
    	f_write(&g_fileObject1,"\0", strlen("\0"),&bytesWritten);
		datapt+=strlen("\0");
		if(seperator!=0)
		{
			f_write(&g_fileObject1,seperator, 1,&bytesWritten);
			datapt+=1;
		}
    }
}

void store_raw_can_data_into_sd_card(void)
{
	uint16_t frame_num = 0;
	uint16_t byte_cntr = 0;
	uint32_t pgn = 0;
	uint8_t i = 0;
	uint8_t char_data = 0;
	uint32_t AddrAddTemp =0;
	uint8_t rawcan_data_bytes[RAWCANDATA_FRAME_SIZE] = {0};
	uint8_t raw_can_data_csv_header[] = {" PGN, D1, D2, D3, D4, D5, D6, D7, D8\n"};

		if(raw_data_header==1)
		{
			raw_data_header=0;
			f_write(&g_fileObject1,raw_can_data_csv_header,sizeof(raw_can_data_csv_header),&bytesWritten);
			rawdatadatapt+=sizeof(raw_can_data_csv_header);
		}

		for (frame_num = 0;frame_num<guiLogFileSize;frame_num++)
		{
			for(byte_cntr = 0;byte_cntr<RAWCANDATA_FRAME_SIZE;byte_cntr++)
			{
				rawcan_data_bytes[byte_cntr] = TempArray[frame_num][byte_cntr];
			}

			pgn = rawcan_data_bytes[0];
			pgn <<=8;
			pgn |= rawcan_data_bytes[1];
			pgn <<=8;
			pgn |= rawcan_data_bytes[2];
			pgn <<=8;
			pgn |= rawcan_data_bytes[3];

			for(i =0;i<8;i++)
			{
				can_data[i] = rawcan_data_bytes[4+i];
			}

			hex_display(pgn);
			f_write(&g_fileObject1,hex_char,sizeof(hex_char),&bytesWritten);
			rawdatadatapt+=sizeof(hex_char);
			f_write(&g_fileObject1,",", 1,&bytesWritten);
			rawdatadatapt+=1;
			hex_buff(can_data);

			for(i=0;i<16;i++)
			{
				char_data = can_ascii_buff[i];
				f_write(&g_fileObject1,&char_data, 1,&bytesWritten);
				rawdatadatapt+=1;

				if(i%2!=0)
				{
					f_write(&g_fileObject1,",", 1,&bytesWritten);
					rawdatadatapt+=1;
				}
				DelayUs1(200);
			}

			f_write(&g_fileObject1,"\n",sizeof("\n"),&bytesWritten);
			rawdatadatapt+=sizeof("\n");
			AddrAddTemp +=16;
			DelayUs1(500);
		}
}
uint8_t DetectSDCard(void)
{
    const TCHAR driverNumberBuffer2[3U] = {SDDISK + '0', ':', '/'};
    volatile bool failedFlag           = false;
    char ch                            = '0';
    BYTE work[FF_MAX_SS];

	   if (sdcardWaitCardInsert() != kStatus_Success)
       {
          return 1;
       }

       if (f_mount(&g_fileSystem, driverNumberBuffer2, 0U))
       {
    	   //PRINTF("Mount volume failed.\r\n");
           return 1;
       }

	#if (FF_FS_RPATH >= 2U)
		error = f_chdrive((char const *)&driverNumberBuffer2[0U]);
		if (error)
		{
			//PRINTF("Change drive failed.\r\n");
			return 1;
		}
	#endif

#if FF_USE_MKFS

    PRINTF("\r\nMake file system......The time may be long if the card capacity is big.\r\n");

    if (f_mkfs(driverNumberBuffer2, 0, work, sizeof work))
    {
        PRINTF("Make file system failed.\r\n");
//        SDCardfuncBegin=0;

        return -1;
    }

#endif /* FF_USE_MKFS */
//}

    return 0;
}

void funcsdcardtrail(void)
{
    error = f_mkdir(_T("/SDCARD"));

    if (error == FR_EXIST)
    {
	   error = f_opendir(&g_opendir,_T("/SDCARD"));
    }

    error = f_open(&g_fileObject1, _T("/SDCARD/sdcardtest.csv"), (FA_WRITE | FA_READ | FA_CREATE_NEW));

    if(error == FR_EXIST)
	{
		error = f_open(&g_fileObject1, _T("/SDCARD/sdcardtest.csv"), (FA_WRITE | FA_READ | FA_OPEN_EXISTING));
	}

    f_lseek(&g_fileObject1, rawdatadatapt);
    f_write(&g_fileObject1,"A",1,&bytesWritten);
    f_close(&g_fileObject1);
    f_closedir(&g_opendir);
    rawdatadatapt++;
}

void funcstore30secrawcandataintosdcard(void)
{
	error = f_mkdir(_T("/EM1"));

	if(error)
	{
		if (error == FR_EXIST)
		{
			error = f_opendir(&g_opendir,_T("/EM1"));
		}
	}

	error = f_open(&g_fileObject1, _T("/EM1/RawCanData.csv"), (FA_WRITE | FA_READ | FA_CREATE_NEW));

	if(error == FR_EXIST)
    {
		error = f_open(&g_fileObject1, _T("/EM1/RawCanData.csv"),(FA_WRITE | FA_READ | FA_OPEN_EXISTING));
    }
	else
	{
		rawdatadatapt=0;
		raw_data_header=1;
	}

	f_lseek(&g_fileObject1, rawdatadatapt);
	store_raw_can_data_into_sd_card();
	f_close(&g_fileObject1);
	f_closedir(&g_opendir);
	gucRecordingStatus  = 2;
	sd_written = 1;
	Writedataintofram(RAW_DATA_PTR);
}

void funcstoreDM1faultmesgesintoSdcard(void)
{
#if 0
	error = f_mkdir(_T("/EM1"));

	if(error)
	{
		if (error == FR_EXIST)
		{
			error = f_opendir(&g_opendir,_T("/EM1"));
		}
	}

	error = f_open(&g_fileObject1, _T("/EM1/Faultlog.csv"), (FA_WRITE | FA_READ | FA_CREATE_NEW));

	if (error == FR_EXIST)
	{
		error = f_open(&g_fileObject1, _T("/EM1/Faultlog.csv"),(FA_WRITE | FA_READ | FA_OPEN_EXISTING));
	}
	else
	{
		datapt=0;
		created_new=1;
	}

	f_lseek(&g_fileObject1, datapt);
	Store_Dmlog_Frame_From_Into_SDCard();
	f_close(&g_fileObject1);
	f_closedir(&g_opendir);
	sd_written = 1;
	Writedataintofram(FAULT_DATA_PTR);
#endif
	uint8_t i = 0, j = 0;
	Uint32 Spn_Fmi_byte = 0;

	if(power_on_open_faultlog_file == 0)
	{
		for(i=0;i<DM1_SA;i++)
		{
			 for(j=0;j<NO_OF_DM1_MESSAGES;j++)
			 {
				 Spn_Fmi_byte = strDM1Log[i][j].SpnFmi;
				 spn=(Spn_Fmi_byte & 0x7FFFF);

				 if((strDM1Log[i][j].Status != strDM1LogPrev[i][j].Status) && spn!=0x7FFFF && spn!=0xFFFF && spn!=0x0000)
				 {
					 fault_found_write_to_sd = 1;
					 break;
				 }
				 else
				 {
					 fault_found_write_to_sd = 0;
				 }
			 }
		}
	}else {/**/}
	//every sd card files not to create or open every time, otherwise it will lead to hang of system
	if(power_on_open_faultlog_file == 1 || fault_found_write_to_sd == 1)
	{
		power_on_open_faultlog_file = 0;
		fault_found_write_to_sd = 0;

		error = f_mkdir(_T("/EM1"));

		if(error)
		{
			if (error == FR_EXIST)
			{
				error = f_opendir(&g_opendir,_T("/EM1"));
			}
		}

		error = f_open(&g_fileObject1, _T("/EM1/Faultlog.csv"), (FA_WRITE | FA_CREATE_NEW));

		if (error == FR_EXIST)
		{
			error = f_open(&g_fileObject1, _T("/EM1/Faultlog.csv"),(FA_WRITE | FA_OPEN_EXISTING));
		}
		else
		{
			datapt=0;
			created_new=1;
		}

		f_lseek(&g_fileObject1, datapt);
		Store_Dmlog_Frame_From_Into_SDCard();
		f_close(&g_fileObject1);
		f_closedir(&g_opendir);
		sd_written = 1;
		Writedataintofram(FAULT_DATA_PTR);
		DelayUs1(300);
	}else{/**/}
}

void funcReadRawDatafromSdCard(void)
{
	unsigned int i=0;

	count=0;
	memset(g_bufferRead,'\0',sizeof(g_bufferRead));
	error = f_opendir(&g_opendir,_T("/EM1"));
	error = f_open(&g_fileObject1, _T("/EM1/RawCanData.csv"), (FA_READ | FA_OPEN_EXISTING));

	if(error==FR_OK)
	{
		f_lseek(&g_fileObject1, Copyrawdataptr);
		f_read(&g_fileObject1,g_bufferRead,sizeof(g_bufferRead),&bytesRead);
		Copyrawdataptr+=sizeof(g_bufferRead);

		for(i=0;i<sizeof(g_bufferRead);i++)
		{
			if(g_bufferRead[i]=='\0')
			{
				count++;
			}
		}

		if(count>=(BUFFER_SIZE-1))
		{
			count=0;
			file_close=1;
			Copyrawdataptr=0;
		}
		else
		{
			count=0;
		}

		f_close(&g_fileObject1);
		f_closedir(&g_opendir);
		sd_written = 1;
		data_copied=1;
	}
	else
	{
		guiPendriveStatus=4;
	    bStartRawFrameUsb=0;
	}
}
void funcReadFaultDatafromSdCard(void)
{
	unsigned int i=0;
	count=0;
	memset(g_bufferRead,'\0',sizeof(g_bufferRead));
	error = f_opendir(&g_opendir,_T("/EM1"));
	error = f_open(&g_fileObject1, _T("/EM1/Faultlog.csv"), (FA_READ | FA_OPEN_EXISTING));

	if(error==FR_OK)
	{
		f_lseek(&g_fileObject1, Copyfaultdataptr);
		f_read(&g_fileObject1,g_bufferRead,sizeof(g_bufferRead),&bytesRead);
		Copyfaultdataptr+=sizeof(g_bufferRead);

		for(i=0;i<sizeof(g_bufferRead);i++)
		{
			if(g_bufferRead[i]=='\0')
			{
				count++;
			}
		}

		if(count>=(BUFFER_SIZE-1))
		{
			count=0;
			file_close=1;
			Copyfaultdataptr=0;
		}
		else
		{
			count=0;
		}

		f_close(&g_fileObject1);
		f_closedir(&g_opendir);
		sd_written = 1;
		data_copied=1;
	}
	else
	{
		guiPendriveStatus=4;
		bStartFaultFrameUsb=0;
	}
}

void funcWriteMinMaxToSdCard(void)
{
	error = f_mkdir(_T("/EM1"));

	if(error)
	{
		if (error == FR_EXIST)
		{
			error = f_opendir(&g_opendir,_T("/EM1"));
		}
	}

	error = f_open(&g_fileObject1, _T("/EM1/MinMax.csv"), (FA_WRITE | FA_READ | FA_CREATE_NEW));

	if(error == FR_EXIST)
    {
		error = f_open(&g_fileObject1, _T("/EM1/MinMax.csv"),(FA_WRITE | FA_READ | FA_OPEN_EXISTING));
    }
	else
	{
		minmaxdatapt=0;
		minmaxheader=1;
	}

	f_lseek(&g_fileObject1, minmaxdatapt);
	store_minmax_to_sd_card(strMinMaxDataFrame);
	f_close(&g_fileObject1);
	f_closedir(&g_opendir);
	sd_written = 1;
}

void funcWriteDataloggingToSdCard(void)
{
	error = f_mkdir(_T("/EM1"));

	if(error)
	{
		if (error == FR_EXIST)
		{
			error = f_opendir(&g_opendir,_T("/EM1"));
		}
	}

	error = f_open(&g_fileObject1, _T("/EM1/DataLogging.csv"), (FA_WRITE | FA_READ | FA_CREATE_NEW));

	if(error == FR_EXIST)
    {
		error = f_open(&g_fileObject1, _T("/EM1/DataLogging.csv"),(FA_WRITE | FA_READ | FA_OPEN_EXISTING));
    }
	else
	{
		Dataloggingdatapt=0;
		Dataloggingheader=1;
	}

	f_lseek(&g_fileObject1, Dataloggingdatapt);
	store_Datalogging_to_sd_card(strDataLoggingFrame);
	f_close(&g_fileObject1);
	f_closedir(&g_opendir);
	sd_written = 1;
	Writedataintofram(DATA_LOG_PTR);
}


void store_minmax_to_sd_card(struct MinMaxLogRegister strMinMaxLogData)
{
    unsigned long  lulDecimalValues = 0;
    uint8_t lucFloatValue    = 0;
    unsigned long lucTempLogData   = 0;
    uint8_t lucTempDataBuff  = 0;
	uint8_t	year			= 0;
	uint8_t month			= 0;
	uint8_t date			= 0;
	uint8_t hour			= 0;
	uint8_t minute			= 0;
	uint8_t second			= 0;

	uint8_t vehicle_model[10] ={0};
	uint8_t display_date_code_no[13] = {0};
	uint8_t io_mod_firm_ver[30] = {0};


//	uint8_t minmaxlog_csv_header0[] = {" Log_entry:"};
//	uint8_t minmaxlog_csv_header1[] = {", Date, Time, Display_Hours_Run_Hrs, Parameter, Error Type,"
//                "CoolantTemp_MaxValue_DEG,CoolantTemp_CurrentValue_DEG, CoolantTemp_MinValue_DEG, "
//                "Engine_Oil_Pressure_MaxValue_HighIdle_kPa, Engine_Oil_Pressure_Current_kPa, Engine_Oil_Pressure_MinValue_HighIdle_kPa,"
//                "Engine_Speed_MaxValue_RPM, Engine_Speed_CurrentValue_RPM, Engine_Speed_AvgValue_RPM,"
//                "Transmission_Oil_Pressure_MaxValue_kPa,  Transmission_Oil_Pressure_CurrentValue_kPa, Transmission_Oil_Pressure_MinValue_kPa, "
//                "Transmission_Oil_Temp_MaxValue_DEG, Transmission_Oil_Temp_CurrentValue_DEG, Transmission_Oil_Temp_MinValue_DEG,"
//                "Hydraulic_Retarder_Oil_Temp_MaxValue_DEG, Hydraulic_Retarder_Oil_Temp_CurrentValue_DEG, Hydraulic_Retarder_Oil_Temp_MinValue_DEG, "
//                "Vehicle_Speed_MaxValue_Kmph, Vehicle_Speed_CurrentValue_Kmph,"
//                "EngineOilTemp_MaxValue_DEG, EngineOilTemp_CurrentValue_DEG, EngineOilTemp_MinValue_DEG,"
//                "Air_Pressure_MaxValue_kPa, Air_Pressure_CurrentValue_kPa, Air_Pressure_MinValue_kPa, "
//                "Steering_Oil_Temp_MaxValue_DEG, Steering_Oil_Temp_CurrentValue_DEG, Steering_Oil_Temp_MinValue_DEG\n"};
//
//	memcpy(vehicle_model,"BH100",sizeof("BH100"));
//	memcpy(display_date_code_no,"181020210210",sizeof("181020210210"));
//	memcpy(io_mod_firm_ver,"V1.0.0 A - BH100",sizeof("V1.0.0 A - BH100"));

	year 			= (strDateTime.Year-2000);
	month 			= strDateTime.Month;
	date 			= strDateTime.Date;
	hour 			= strDateTime.Hour;
	minute 			= strDateTime.Minute;
	second  		= strDateTime.Second;

   if(minmaxheader==1)
   {
	    minmaxheader=0;
        FuncStringPrint("VIN:\n");
        FuncStringPrint("MAKE:\n");
        FuncStringPrint("MODEL:\n");
        FuncStringPrint("UNIT NUMBER:\n");
        FuncStringPrint("DISPLAY DATE CODE\n");
        FuncStringPrint("IO MODULE FIRMWARE:\n");
        FuncStringPrint("DATE DOWNLOADED(DD/MM/YYYY:\n");
        FuncStringPrint(", Date, Time, Display_Hours_Run_Hrs, Parameter, Error Type,"
                "CoolantTemp_MaxValue_DEG,CoolantTemp_CurrentValue_DEG, CoolantTemp_MinValue_DEG, "
                "Engine_Oil_Pressure_MaxValue_HighIdle_kPa, Engine_Oil_Pressure_Current_kPa, Engine_Oil_Pressure_MinValue_HighIdle_kPa,"
                "Engine_Speed_MaxValue_RPM, Engine_Speed_CurrentValue_RPM, Engine_Speed_AvgValue_RPM,"
                "Transmission_Oil_Pressure_MaxValue_kPa,  Transmission_Oil_Pressure_CurrentValue_kPa, Transmission_Oil_Pressure_MinValue_kPa, "
                "Transmission_Oil_Temp_MaxValue_DEG, Transmission_Oil_Temp_CurrentValue_DEG, Transmission_Oil_Temp_MinValue_DEG,"
                "Hydraulic_Retarder_Oil_Temp_MaxValue_DEG, Hydraulic_Retarder_Oil_Temp_CurrentValue_DEG, Hydraulic_Retarder_Oil_Temp_MinValue_DEG, "
                "Vehicle_Speed_MaxValue_Kmph, Vehicle_Speed_CurrentValue_Kmph,"
                "EngineOilTemp_MaxValue_DEG, EngineOilTemp_CurrentValue_DEG, EngineOilTemp_MinValue_DEG,"
                "Air_Pressure_MaxValue_kPa, Air_Pressure_CurrentValue_kPa, Air_Pressure_MinValue_kPa, "
                "Steering_Oil_Temp_MaxValue_DEG, Steering_Oil_Temp_CurrentValue_DEG, Steering_Oil_Temp_MinValue_DEG\n");
   }

    log_no++;

    FuncStringPrint("Log Entry: ");
    funcTempHextoAscii(log_no);
    FuncStringPrint("\n");
    FuncStringPrint(",");

    /* Date */
    lucTempDataBuff = (date);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint("/");
    lucTempDataBuff = (month);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint("/");
    lucTempDataBuff = (year);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint(",");

    /* Time */
    lucTempDataBuff = (hour);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint(":");
    lucTempDataBuff = (minute);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint(":");
    lucTempDataBuff = (second);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint(",");

    /* Display hours */
    lucTempLogData      = strMinMaxLogData.DisplayHoursRunHrs * 10;
    lulDecimalValues    = lucTempLogData/10;
    lucFloatValue       = lucTempLogData%10;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    funcPrintParameterType(strMinMaxLogData.ParameterType);
    FuncStringPrint(",");

    funcPrintErrorType(strMinMaxLogData.ErrorType);
    FuncStringPrint(",");

    /* Coolant temperature */

    lucTempLogData      = strMinMaxLogData.CltTempMaxValueTHDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.CltTempCurrentValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.CltTempMinValueTHDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    /* EOP */
    lucTempLogData      = strMinMaxLogData.EopMaxValueHighIdleTHKKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.EopCurrentValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.EopMinValueHighIdleTHKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    /* Engine RPM */
    lucTempLogData      = strMinMaxLogData.EngSpdMaxValueRPM * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.EngSpdCurrentValueRPM * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.EngSpdAvgValueRPM * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");



    /* TOP */
    lucTempLogData      = strMinMaxLogData.TopMaxValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.TopCurrentValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.TopMinValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    /* TOT */
    lucTempLogData      = strMinMaxLogData.TotMaxValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.TotCurrenrvalueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.TotMinValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    /* HROT */
    lucTempLogData      =     strMinMaxLogData.HrotMaxValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.HrotCurentValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      =  strMinMaxLogData.HrotMinValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    /* Vehicle/Road Speed */
    lucTempLogData      = strMinMaxLogData.VehSpdMaxValueKmph * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.VehSpdCurrentValueKmph * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");
    /* EOT */
    lucTempLogData      = strMinMaxLogData.EotMaxValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.EotCurrentValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.EotMinValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    /* AP */
    lucTempLogData      = strMinMaxLogData.ApMaxValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.ApCurrentValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.ApMinValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    /* SOT */
    lucTempLogData      = strMinMaxLogData.SotMaxValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.SotCurrentValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strMinMaxLogData.SotMinValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");
    FuncStringPrint("\n");
}

void store_Datalogging_to_sd_card(struct MinMaxLogRegister strDataLoggingData)
{
    unsigned long  lulDecimalValues = 0;
    uint8_t lucFloatValue    = 0;
    unsigned long lucTempLogData   = 0;
    uint8_t lucTempDataBuff  = 0;
	uint8_t	year			= 0;
	uint8_t month			= 0;
	uint8_t date			= 0;
	uint8_t hour			= 0;
	uint8_t minute			= 0;
	uint8_t second			= 0;

	uint8_t vehicle_model[10] ={0};
	uint8_t display_date_code_no[13] = {0};
	uint8_t io_mod_firm_ver[30] = {0};


//	uint8_t minmaxlog_csv_header0[] = {" Log_entry:"};
//	uint8_t minmaxlog_csv_header1[] = {", Date, Time, Display_Hours_Run_Hrs, Parameter, Error Type,"
//                "CoolantTemp_MaxValue_DEG,CoolantTemp_CurrentValue_DEG, CoolantTemp_MinValue_DEG, "
//                "Engine_Oil_Pressure_MaxValue_HighIdle_kPa, Engine_Oil_Pressure_Current_kPa, Engine_Oil_Pressure_MinValue_HighIdle_kPa,"
//                "Engine_Speed_MaxValue_RPM, Engine_Speed_CurrentValue_RPM, Engine_Speed_AvgValue_RPM,"
//                "Transmission_Oil_Pressure_MaxValue_kPa,  Transmission_Oil_Pressure_CurrentValue_kPa, Transmission_Oil_Pressure_MinValue_kPa, "
//                "Transmission_Oil_Temp_MaxValue_DEG, Transmission_Oil_Temp_CurrentValue_DEG, Transmission_Oil_Temp_MinValue_DEG,"
//                "Hydraulic_Retarder_Oil_Temp_MaxValue_DEG, Hydraulic_Retarder_Oil_Temp_CurrentValue_DEG, Hydraulic_Retarder_Oil_Temp_MinValue_DEG, "
//                "Vehicle_Speed_MaxValue_Kmph, Vehicle_Speed_CurrentValue_Kmph,"
//                "EngineOilTemp_MaxValue_DEG, EngineOilTemp_CurrentValue_DEG, EngineOilTemp_MinValue_DEG,"
//                "Air_Pressure_MaxValue_kPa, Air_Pressure_CurrentValue_kPa, Air_Pressure_MinValue_kPa, "
//                "Steering_Oil_Temp_MaxValue_DEG, Steering_Oil_Temp_CurrentValue_DEG, Steering_Oil_Temp_MinValue_DEG\n"};
//
//	memcpy(vehicle_model,"BH100",sizeof("BH100"));
//	memcpy(display_date_code_no,"181020210210",sizeof("181020210210"));
//	memcpy(io_mod_firm_ver,"V1.0.0 A - BH100",sizeof("V1.0.0 A - BH100"));

	year 			= (strDateTime.Year-2000);
	month 			= strDateTime.Month;
	date 			= strDateTime.Date;
	hour 			= strDateTime.Hour;
	minute 			= strDateTime.Minute;
	second  		= strDateTime.Second;

   if(Dataloggingheader==1)
   {
	    Dataloggingheader=0;
        FuncStringPrint("VIN:\n");
        FuncStringPrint("MAKE:\n");
        FuncStringPrint("MODEL:\n");
        FuncStringPrint("UNIT NUMBER:\n");
        FuncStringPrint("DISPLAY DATE CODE\n");
        FuncStringPrint("IO MODULE FIRMWARE:\n");
        FuncStringPrint("DATE DOWNLOADED(DD/MM/YYYY):\n");
        FuncStringPrint(", Date, Time, Display_Hours_Run_Hrs, "
                "CoolantTemp_CurrentValue_DEG, "
                "Engine_Oil_Pressure_Current_kPa, "
                "Engine_Speed_CurrentValue_RPM, "
                "Transmission_Oil_Pressure_CurrentValue_kPa, "
        		"Fuel_Level_Percentage, "
        		"Battery_Voltage_Volt, "
        		"Converter_Oil_temperature_DEG, "
//                "Transmission_Oil_Temp_CurrentValue_DEG, "
//                "Hydraulic_Retarder_Oil_Temp_CurrentValue_DEG, "
                "Vehicle_Speed_CurrentValue_Kmph, "
                "EngineOilTemp_CurrentValue_DEG, ");
//               "Air_Pressure_CurrentValue_kPa, "
//                "Steering_Oil_Temp_CurrentValue_DEG, ");
        FuncStringPrint("\n");
   }



    log_no++;

    FuncStringPrint("Log Entry: ");
    funcTempHextoAscii(log_no);
    FuncStringPrint("\n");
    FuncStringPrint(",");

    /* Date */
    lucTempDataBuff = (date);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint("/");
    lucTempDataBuff = (month);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint("/");
    lucTempDataBuff = (year);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint(",");

    /* Time */
    lucTempDataBuff = (hour);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint(":");
    lucTempDataBuff = (minute);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint(":");
    lucTempDataBuff = (second);
    funcTempHextoAscii((lucTempDataBuff));
    FuncStringPrint(",");

    /* Display hours */
    lucTempLogData      = strDataLoggingData.DisplayHoursRunHrs * 10;
    lulDecimalValues    = lucTempLogData/10;
    lucFloatValue       = lucTempLogData%10;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

//    funcPrintParameterType(strDataLoggingData.ParameterType);
//    FuncStringPrint(",");
//
//    funcPrintErrorType(strDataLoggingData.ErrorType);
//    FuncStringPrint(",");

    /* Coolant temperature */

//    lucTempLogData      = strDataLoggingData.CltTempMaxValueTHDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.CltTempCurrentValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.CltTempMinValueTHDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    /* EOP */
//    lucTempLogData      = strDataLoggingData.EopMaxValueHighIdleTHKKpa * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.EopCurrentValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.EopMinValueHighIdleTHKpa * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    /* Engine RPM */
//    lucTempLogData      = strDataLoggingData.EngSpdMaxValueRPM * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.EngSpdCurrentValueRPM * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");


//    lucTempLogData      = strDataLoggingData.EngSpdAvgValueRPM * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");



    /* TOP */
//    lucTempLogData      = strDataLoggingData.TopMaxValueKpa * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.TopCurrentValueKpa * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.FuellvlCurrentValuePer * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.BatteryCurrentValueV * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.ConverterOiltempCurrentValue* 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");


//    lucTempLogData      = strDataLoggingData.TopMinValueKpa * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    /* TOT */
/*
    lucTempLogData      = strDataLoggingData.TotMaxValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.TotCurrenrvalueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.TotMinValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");
*/

    /* HROT */
//    lucTempLogData      =     strDataLoggingData.HrotMaxValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.HrotCurentValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

//    lucTempLogData      =  strDataLoggingData.HrotMinValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    /* Vehicle/Road Speed */
//    lucTempLogData      = strDataLoggingData.VehSpdMaxValueKmph * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.VehSpdCurrentValueKmph * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");
    /* EOT */
//    lucTempLogData      = strDataLoggingData.EotMaxValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    lucTempLogData      = strDataLoggingData.EotCurrentValueDEG * 100;
    lulDecimalValues    = lucTempLogData/100;
    lucFloatValue       = lucTempLogData%100;

    funcTempHextoAscii(lulDecimalValues);
    FuncStringPrint(".");
    funcTempHextoAscii(lucFloatValue);
    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.EotMinValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

    /* AP */
//    lucTempLogData      = strDataLoggingData.ApMaxValueKpa * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.ApCurrentValueKpa * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.ApMinValueKpa * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");
//
//    /* SOT */
//    lucTempLogData      = strDataLoggingData.SotMaxValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.SotCurrentValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");

//    lucTempLogData      = strDataLoggingData.SotMinValueDEG * 100;
//    lulDecimalValues    = lucTempLogData/100;
//    lucFloatValue       = lucTempLogData%100;
//
//    funcTempHextoAscii(lulDecimalValues);
//    FuncStringPrint(".");
//    funcTempHextoAscii(lucFloatValue);
//    FuncStringPrint(",");
    FuncStringPrint("\n");


}


void FuncStringPrint(uint8_t *puidata)
{
#ifdef PENDRIVE_USED
		if(*puidata !='\0')
		{
			f_write(&g_fileObject1,puidata,strlen(puidata),&bytesWritten);
	#ifdef MIN_MAX_LOGGING_REQ
			minmaxdatapt+=strlen(puidata);
	#else
			Dataloggingdatapt+=strlen(puidata);
	#endif
		}
		else
		{
			f_write(&g_fileObject1,"\0",strlen("\0"),&bytesWritten);
	#ifdef MIN_MAX_LOGGING_REQ
			minmaxdatapt+=strlen("\0");
	#else
			Dataloggingdatapt+=strlen("\0");
	#endif
		}
#else
		transmit_serial(puidata);
#endif
}

void FuncfaultlogStringPrint(uint8_t *puidata)
{
#ifdef PENDRIVE_USED
    if(*puidata !='\0')
    {
		f_write(&g_fileObject1,puidata,strlen(puidata),&bytesWritten);
		datapt+=strlen(puidata);
    }
    else
    {
    	f_write(&g_fileObject1,"\0",strlen("\0"),&bytesWritten);
    	datapt+=strlen("\0");
    }
#else
    transmit_serial(puidata);
#endif
}

void funcPrintParameterType(uint8_t lucParameterType)
{
    switch(lucParameterType)
    {
    case A1_EOP:
        FuncStringPrint("A1_EOP");
        break;

    case A2_EOT:
        FuncStringPrint("A2_EOT");
        break;

    case A3_ECT:
        FuncStringPrint("A3_ECT");
        break;

    case A4_TOT:
        FuncStringPrint("A4_TOT");
        break;

    case A5_TOP:
        FuncStringPrint("A5_TOP");
        break;

    case A6_FL:
        FuncStringPrint("A6_FL");
        break;

    case A13_BCAP1:
        FuncStringPrint("A13_BCAP1");
        break;

    case A14_BCAP2:
        FuncStringPrint("A14_BCAP2");
        break;

    case PWR_IN_IO:
        FuncStringPrint("PWR_IN_IO");
        break;

    case A16_ENG_RPM:
        FuncStringPrint("A16_ENG_RPM");
        break;

    case A17_ROAD_SPD:
        FuncStringPrint("A17_ROAD_SPD");
        break;

    default:
        FuncStringPrint("NA");
        break;
    }
}
void funcPrintErrorType(uint8_t lucErrorType)
{
    switch(lucErrorType)
    {
    case ERROR_STATUS_NORMAL:
        FuncStringPrint("NORMAL");
        break;

    case ERROR_STATUS_OPEN:
        FuncStringPrint("ERROR OPEN");
        break;

    case ERROR_STATUS_HIGH:
        FuncStringPrint("ERROR HIGH");
        break;

    case ERROR_STATUS_LOW:
        FuncStringPrint("ERROR LOW");
        break;

    case ERROR_STATUS_SHORT:
        FuncStringPrint("ERROR SHORT");
        break;

    default:
        FuncStringPrint("NA");
        break;
    }
}
void funcTempHextoAscii(Uint32 luiHexValue)
{
    int8_t lucValue,lucCounter,lucArray[10];
    lucCounter = 1;
    uint8_t  temp_array[10],i=0;

    memset(temp_array,'\0',sizeof(temp_array));
    memset(lucArray,'\0',sizeof(lucArray));

    if(luiHexValue==0)
    {
#ifdef PENDRIVE_USED
			f_write(&g_fileObject1,"0",1,&bytesWritten);
	#ifdef MIN_MAX_LOGGING_REQ
			minmaxdatapt+=1;
	#else
			Dataloggingdatapt+=1;
	#endif
#else
			transmit_serial("0");
#endif
    }
    else
    {
		while(luiHexValue >= 10)
		{
			lucValue = luiHexValue % 10;
			luiHexValue =luiHexValue/10;
			lucArray[lucCounter++]  = lucValue+0x30;
		}

		lucArray[lucCounter++]=luiHexValue+0x30;

		i=0;
		while(lucCounter>=0)
		{
			temp_array [i]= lucArray[lucCounter-1];
			i++;
			lucCounter--;
		}
		temp_array[i]='\0';

	//    while(lucCounter > 1)
	//    {
	//        lucCounter--;
	////        FuncStringPrint(lucArray[lucCounter]);
	//    }
#ifdef PENDRIVE_USED
			f_write(&g_fileObject1,temp_array,(i-1),&bytesWritten);
	#ifdef MIN_MAX_LOGGING_REQ
			minmaxdatapt+=(i-1);
	#else
			Dataloggingdatapt+=(i-1);
	#endif
#else
			//str_tx(*temp_array);//(temp_array,(i-1));
			transmit_serial(temp_array);
#endif
    }
}

void funcfaultTempHextoAscii(Uint32 luiHexValue)
{
	   int8_t lucValue,lucCounter,lucArray[10];
	   lucCounter = 1;
	   uint8_t  temp_array[10],i=0;

	    memset(temp_array,'\0',sizeof(temp_array));
	    memset(lucArray,'\0',sizeof(lucArray));

	    if(luiHexValue==0)
	    {
#ifdef PENDIRVE_USED
			f_write(&g_fileObject1,"0",1,&bytesWritten);
			datapt+=1;
#else
			transmit_serial("0");
#endif
	    }
	    else
	    {
			while(luiHexValue >= 10)
			{
				lucValue = luiHexValue % 10;
				luiHexValue =luiHexValue/10;
				lucArray[lucCounter++]  = lucValue+0x30;
			}

			lucArray[lucCounter++]=luiHexValue+0x30;
			i=0;
			while(lucCounter>=0)
			{
				temp_array [i]= lucArray[lucCounter-1];
				i++;
				lucCounter--;
			}
			temp_array[i]='\0';
#ifdef PENDIRVE_USED
			f_write(&g_fileObject1,temp_array,(i-1),&bytesWritten);
			datapt+=(i-1);
#else
			transmit_serial(temp_array);
#endif
	    }
}


void funcReadMinMaxfromSDcard(void)
{
	unsigned int i=0;
	count=0;
	memset(g_bufferRead,'\0',sizeof(g_bufferRead));
	error = f_opendir(&g_opendir,_T("/EM1"));
	error = f_open(&g_fileObject1, _T("/EM1/MinMax.csv"), (FA_READ | FA_OPEN_EXISTING));

	if(error==FR_OK)
	{
		f_lseek(&g_fileObject1,CopyMinMaxdataptr);
		f_read(&g_fileObject1,g_bufferRead,sizeof(g_bufferRead),&bytesRead);
		CopyMinMaxdataptr+=sizeof(g_bufferRead);

		for(i=0;i<sizeof(g_bufferRead);i++)
		{
			if(g_bufferRead[i]=='\0')
			{
				count++;
			}
		}

		if(count>=(BUFFER_SIZE-1))
		{
			count=0;
			file_close=1;
			CopyMinMaxdataptr=0;
		}
		else
		{
			count=0;
		}

		f_close(&g_fileObject1);
		f_closedir(&g_opendir);
		sd_written = 1;
		data_copied=1;
	}
}

void funcReadDataLogfromSdCard(void)
{
	unsigned int i=0;
	count=0;
	memset(g_bufferRead,'\0',sizeof(g_bufferRead));
	error = f_opendir(&g_opendir,_T("/EM1"));
	error = f_open(&g_fileObject1, _T("/EM1/DataLogging.csv"), (FA_READ | FA_OPEN_EXISTING));

	if(error==FR_OK)
	{
		f_lseek(&g_fileObject1,CopyDataloggingdataptr);
		f_read(&g_fileObject1,g_bufferRead,sizeof(g_bufferRead),&bytesRead);
		CopyDataloggingdataptr+=sizeof(g_bufferRead);

		for(i=0;i<sizeof(g_bufferRead);i++)
		{
			if(g_bufferRead[i]=='\0')
			{
				count++;
			}
		}

		if(count>=(BUFFER_SIZE-1))
		{
			count=0;
			file_close=1;
			CopyDataloggingdataptr=0;
		}
		else
		{
			count=0;
		}

		f_close(&g_fileObject1);
		f_closedir(&g_opendir);
		sd_written = 1;
		data_copied=1;
	}
	else
	{
		guiPendriveStatus=4;
		bStartDataLogging=0;
	}
}

void InitAdc(void)
{
    ADC_GetDefaultConfig(&adcConfigStrcut);
    ADC_Init(ADC_BASE, &adcConfigStrcut);
#if !(defined(FSL_FEATURE_ADC_SUPPORT_HARDWARE_TRIGGER_REMOVE) && FSL_FEATURE_ADC_SUPPORT_HARDWARE_TRIGGER_REMOVE)
    ADC_EnableHardwareTrigger(ADC_BASE, false);
#endif

    /* Do auto hardware calibration. */
    if (kStatus_Success == ADC_DoAutoCalibration(ADC_BASE))
    {
//        PRINTF("ADC_DoAutoCalibration() Done.\r\n");
    }
    else
    {
//        PRINTF("ADC_DoAutoCalibration() Failed.\r\n");
    }
}

unsigned int ReadADCValues(unsigned int channel_number)
{
	unsigned int delayi=0;
	unsigned int delayj=0;
	unsigned long avg_cnt=0;
	unsigned long temp_adc=0;
	unsigned int avg_adc=0;

    /* Configure the user channel and interrupt. */
    adcChannelConfigStruct.channelNumber                        = channel_number;
    adcChannelConfigStruct.enableInterruptOnConversionCompleted = false;

    temp_adc=0;
	avg_cnt=0;

    while(avg_cnt<250)
    {
        ADC_SetChannelConfig(ADC_BASE,ADC_CHANNEL_GROUP,&adcChannelConfigStruct);
        while (0U == ADC_GetChannelStatusFlags(ADC_BASE,ADC_CHANNEL_GROUP))
        {

        }

        temp_adc+=ADC_GetChannelConversionValue(ADC_BASE,ADC_CHANNEL_GROUP);
        avg_cnt++;
    }

    avg_adc=(temp_adc/avg_cnt);

    return avg_adc;
}

void FreqCaptureInit(void)
{
    QTMR_GetDefaultConfig(&qtmrConfig);
    /* Initial the input channel. */
    qtmrConfig.primarySource = QTMR_PRIMARY_SOURCE;
    QTMR_Init(BOARD_QTMR_BASEADDR, BOARD_QTMR_INPUT_CAPTURE_CHANNEL, &qtmrConfig);
    /* Setup the input capture */
    QTMR_SetupInputCapture(BOARD_QTMR_BASEADDR, BOARD_QTMR_INPUT_CAPTURE_CHANNEL, QTMR_CounterInputPin, false, true,
                           kQTMR_RisingEdge);
    /* Enable at the NVIC */
    EnableIRQ(QTMR_IRQ_ID);
    /* Enable timer compare interrupt */
    QTMR_EnableInterrupts(BOARD_QTMR_BASEADDR, BOARD_QTMR_INPUT_CAPTURE_CHANNEL, kQTMR_EdgeInterruptEnable);
    /* Start the input channel to count on rising edge of the primary source clock */
    QTMR_StartTimer(BOARD_QTMR_BASEADDR, BOARD_QTMR_INPUT_CAPTURE_CHANNEL, kQTMR_PriSrcRiseEdge);
    counterClock = QTMR_SOURCE_CLOCK / 1000U;
}

unsigned long Readfrequency(void)
{
	ucfreqcount = 0;

	if(qtmrIsrFlag)
	{

//	while (ucfreqcount < 5 || timeCapt == 0)
//	{
//		while (!(qtmrIsrFlag))
//		{
//
//		}
		freq_tmr_start = 0;

		qtmrIsrFlag = false;
		ucfreqcount++;
		timeCapt = BOARD_QTMR_BASEADDR->CHANNEL[BOARD_QTMR_INPUT_CAPTURE_CHANNEL].CAPT;

		tusec = (timeCapt * 1000U) / counterClock;
		tusec = tusec / 1000000;
		tusec = 1 / tusec;
		//freq = tusec;
		//presentadc.freq_counts = freq;
		freq = ceil(tusec);

		freq = Filter_Engine_Speed1(freq);
		//freq = Filter_Engine_Speed2(freq);
		Captured_Freq = freq;
		ConvertFREQtoRPM(Captured_Freq);
	}
	else
	{
		//presentadc.freq_counts=0;
		freq_tmr_start = 1;
	}

}
void I2cWrite(uint8_t i2caddress,uint8_t i2cdata)
{
	LPI2C_MasterStart(EXAMPLE_I2C_MASTER, LPI2C_MASTER_SLAVE_ADDR_7BIT, kLPI2C_Write);
	LPI2C_MasterSend(EXAMPLE_I2C_MASTER,&i2caddress, 1);
	LPI2C_MasterSend(EXAMPLE_I2C_MASTER,&i2cdata,1);
    LPI2C_MasterStop(EXAMPLE_I2C_MASTER);

 //   ms_delay(10);
}

uint8_t  I2cRead(uint8_t i2cReadaddress)
{
	uint8_t test=0;

	LPI2C_MasterStart(EXAMPLE_I2C_MASTER, LPI2C_MASTER_SLAVE_ADDR_7BIT, kLPI2C_Write);
	LPI2C_MasterSend (EXAMPLE_I2C_MASTER,&i2cReadaddress, 1);
    LPI2C_MasterRepeatedStart(EXAMPLE_I2C_MASTER, LPI2C_MASTER_SLAVE_ADDR_7BIT, kLPI2C_Read);
    LPI2C_MasterReceive(EXAMPLE_I2C_MASTER,&test, 1);
    LPI2C_MasterStop(EXAMPLE_I2C_MASTER);

    return test;
}

void WriteRTC(void)
{
	    uint8_t temp_data=0;

	    PM_var=0;
		I2cWrite(CTRL_STATUS_ADDRESS,0x10);                    // WRITE RTC DATA
		temp_data=hexa2bcd_rtc(guiSecond);
		I2cWrite(SECOND_ADDRESS,temp_data);
		temp_data=hexa2bcd_rtc(guiMinute);
		I2cWrite(MINUTE_ADDRESS,temp_data);

		if(guiMeridian==1)
		{
			PM_var=0;  //AM
		}
		else if(guiMeridian==2)
		{
			PM_var=1; //PM
		}

		temp_data=hexa2bcd_rtc(guiHour);
		temp_data=(SET_12HOUR_AM & (PM_var << 5) | (temp_data));
		I2cWrite(HOUR_ADDRESS,temp_data);

		temp_data=hexa2bcd_rtc(guiDate);
		I2cWrite(DATE_ADDRESS,temp_data);
		temp_data=hexa2bcd_rtc(guiMonth);
		I2cWrite(MONTH_ADDRESS,temp_data);
		temp_data=hexa2bcd_rtc((guiYear-2000));
		I2cWrite(YEAR_ADDRESS,temp_data);

		I2cWrite(CTRL_STATUS_ADDRESS,0x00);
}


void ReadRTC(void)
{
	I2cWrite(CTRL_STATUS_ADDRESS,0x00);                //READ RTC DATA

	rtc_sec=  I2cRead(SECOND_ADDRESS);
	rtc_min=  I2cRead(MINUTE_ADDRESS);
	rtc_hour= I2cRead(HOUR_ADDRESS);
	rtc_date= I2cRead(DATE_ADDRESS);
	rtc_month=I2cRead(MONTH_ADDRESS);
	rtc_year= I2cRead(YEAR_ADDRESS);

	I2cWrite(CTRL_STATUS_ADDRESS,0x10);

	PM_var = (rtc_hour >>5) & 0x01;
	strDateTime.Hour   = bcd2bin((MASK_12HOUR & rtc_hour));
	strDateTime.Minute = bcd2bin((MASK_MINUTE & rtc_min));
	strDateTime.Second = bcd2bin((MASK_SECOND & rtc_sec));
	strDateTime.Date  =  bcd2bin((MASK_DATE & rtc_date));
	strDateTime.Month =  bcd2bin((MASK_MONTH & rtc_month));
	strDateTime.Year  =  bcd2bin((MASK_YEAR & rtc_year));
	strDateTime.Year+=2000;
	strDateTime.Meredian = PM_var;

	if(strDateTime.Meredian==0)    //AM
	{
		strDateTime.Meredian=1; //for Appwizard
	}
	else if(strDateTime.Meredian==1)  //PM
	{
		strDateTime.Meredian=2; //for Appwizard
	}



//	ms_delay(100);
}

uint16_t bcd2bin(uint16_t BCD)
{
	return (((BCD>>4)*10) + (BCD & 0xF));
}

uint8_t  hexa2bcd_rtc(uint8_t temp_data)
{
	uint16_t  bcd_result = 0;
	uint16_t  shift = 0;
	uint8_t  temp_data1 = temp_data;

	while(temp_data1>0)
	{
		bcd_result |= (temp_data1 % 10) <<(shift++ << 2);
		temp_data1 /=10;
	}
	return(bcd_result);
}
void RTCInit(void)
{
    CLOCK_SetMux(kCLOCK_Lpi2cMux, LPI2C_CLOCK_SOURCE_SELECT);
    CLOCK_SetDiv(kCLOCK_Lpi2cDiv, LPI2C_CLOCK_SOURCE_DIVIDER);

    LPI2C_MasterGetDefaultConfig(&masterConfig);

    masterConfig.enableMaster=true;
    masterConfig.baudRate_Hz = LPI2C_BAUDRATE;
    LPI2C_MasterInit(EXAMPLE_I2C_MASTER, &masterConfig, LPI2C_MASTER_CLOCK_FREQUENCY);
}

void Max22190Init(void)
{
	SPI_CS_HIGH_MEM; //disable FRAM memory
	WINBOND_CS_HIGH; //disable winbond memory

    WriteSpiMax22190((MAX22190_ADDR_WB_REG  | 0x80),0x00);      //wire break disable
    uimax22190datareceived = Max22190DeviceProcess(MAX22190_ADDR_WB_REG | 0x00);
    WriteSpiMax22190((MAX22190_ADDR_IN1_REG | 0x80),0x08);  //All filter input in bypass mode
    WriteSpiMax22190((MAX22190_ADDR_IN2_REG | 0x80),0x08);
    WriteSpiMax22190((MAX22190_ADDR_IN3_REG | 0x80),0x08);
    WriteSpiMax22190((MAX22190_ADDR_IN4_REG | 0x80),0x08);
    WriteSpiMax22190((MAX22190_ADDR_IN5_REG | 0x80),0x08);
    WriteSpiMax22190((MAX22190_ADDR_IN6_REG | 0x80),0x08);
    WriteSpiMax22190((MAX22190_ADDR_IN7_REG | 0x80),0x08);
    WriteSpiMax22190((MAX22190_ADDR_IN8_REG | 0x80),0x08);
    WriteSpiMax22190((MAX22190_ADDR_INEN_REG | 0x80),0xFF);  //all input channels enabled to read data
    WriteSpiMax22190((MAX22190_ADDR_FAULT1EN_REG | 0x80),0xC0); //disable all faults //to enable 0xC0
    WriteSpiMax22190((MAX22190_ADDR_FAULT1_REG | 0x80),0x00);  //disable POR bit
    uimax22190datareceived = Max22190DeviceProcess(MAX22190_ADDR_FAULT1_REG | 0x00);

}

void WriteSpiMax22190(uint8_t lcMax22190WriteAddress,uint8_t lcMax22190WriteData)
{
	SPI_CS_LOW;
	DelayUs1(1);
    ClockDataOut(lcMax22190WriteAddress);
    ClockDataOut(lcMax22190WriteData);
    DelayUs1(1);
 //   DelayUs1(10);
    SPI_CS_HIGH;
}

void ClockDataOut(uint8_t lcSpiTxData)
{
    uint8_t lcBitBangCnt = 0;
    for(lcBitBangCnt = 0;lcBitBangCnt < 8;lcBitBangCnt++)
    {
        if(lcSpiTxData & 0x80)
        	SPI_DOUT_HIGH;
        else
        	SPI_DOUT_LOW;

        DelayUs1(1);
        SPI_CLK_LOW;
        DelayUs1(1);
        SPI_CLK_HIGH;
        DelayUs1(1);
        lcSpiTxData<<=1;
    }
}

uint16_t Max22190DeviceProcess(uint8_t adresss)
{
    uint8_t temp1=0;
    uint8_t temp2=0;

    uint16_t lcMax22190_WbD1Data=0;

    SPI_CS_HIGH_MEM; //disable FRAM memory;
	WINBOND_CS_HIGH; //disable winbond memory

    SPI_CS_LOW;
    DelayUs1(1);

    ClockDataOut(adresss);

    temp2=ClockDataIn();

    lcMax22190_WbD1Data=(temp1<<8 | temp2);

    DelayUs1(1);

    SPI_CS_HIGH;

    return lcMax22190_WbD1Data;
}

uint8_t ClockDataIn(void)
{
    uint8_t lcBitBangCnt = 0;
    uint8_t lcSpiDataIn = 0;
    uint8_t lcPinState = 0;

    for(lcBitBangCnt = 0;lcBitBangCnt < 8;lcBitBangCnt++)
    {
        lcSpiDataIn = (lcSpiDataIn << 1);
        DelayUs1(1);

        SPI_CLK_LOW;
        DelayUs1(1);

        if(SPI_DATA_IN)
        lcSpiDataIn |=1;

        DelayUs1(1);
        SPI_CLK_HIGH;
        DelayUs1(1);
    }

    return(lcSpiDataIn);
}

void DelayUs1(unsigned long llTick)
{
    volatile unsigned long liDelayLoop = 0;

    llTick = (llTick * 50);//Previously it was 1000 mdfd to 50 by Rajashekhar

    for(liDelayLoop = 0; liDelayLoop < llTick; liDelayLoop++)
    {
    	/**Nop**/
    }
}

void ReadandProcessallADCchannels(void)
{
	uint16_t raw_adc_counts = 0;

#ifdef DOZER_P_VER
//	/**********Internal***********/
//	funcMUXSelected(AIN1_SELECTED);
//	presentadc.cot_adc_counts = ReadADCValues(1);
//	presentadc.cot_adc_counts = Filter_AIN1_counts(presentadc.cot_adc_counts);
//
//	funcMUXSelected(AIN2_SELECTED);
//	presentadc.top_adc_counts = ReadADCValues(1);
//	presentadc.top_adc_counts = Filter_AIN2_counts(presentadc.top_adc_counts);
//
//	funcMUXSelected(AIN3_SELECTED);
//	presentadc.eop_adc_counts = ReadADCValues(1);
//	presentadc.eop_adc_counts = Filter_AIN3_counts(presentadc.eop_adc_counts);
//
//	funcMUXSelected(BATTERY_SELECTED);
//	presentadc.battery_adc_counts = ReadADCValues(1);
//	presentadc.battery_adc_counts = Filter_Battery_counts(presentadc.battery_adc_counts);
//
//	Validate_adc_counts();

	/**********Internal***********/
	funcMUXSelected(AIN1_SELECTED);
	raw_adc_counts = ReadADCValues(1);
	raw_adc_counts = Filter_AIN1_counts(raw_adc_counts);

	ADC_channel_processing(CH_A1_R1, raw_adc_counts);

	funcMUXSelected(AIN2_SELECTED);
	raw_adc_counts = ReadADCValues(1);
	raw_adc_counts = Filter_AIN2_counts(raw_adc_counts);

	ADC_channel_processing(CH_A2_I1, raw_adc_counts);

	funcMUXSelected(AIN3_SELECTED);
	raw_adc_counts = ReadADCValues(1);
	raw_adc_counts = Filter_AIN3_counts(raw_adc_counts);

	ADC_channel_processing(CH_A3_I1, raw_adc_counts);

	funcMUXSelected(BATTERY_SELECTED);
	raw_adc_counts = ReadADCValues(1);
	raw_adc_counts = Filter_Battery_counts(raw_adc_counts);

	ADC_channel_processing(CH_BATT_IN, raw_adc_counts);

	/*********Sender Can********/
	gfEct = ain1_s_value;
	gfEot = ain2_s_value;
	gfFuel = ain4_s_value;

#else//#ifdef NEW_LOOKUPTABLE_PROCESS
	/**********Internal***********/
	funcMUXSelected(AIN1_SELECTED);
	raw_adc_counts = ReadADCValues(1);
	raw_adc_counts = Filter_AIN1_counts(raw_adc_counts);

	ADC_channel_processing(CH_A1_R1, raw_adc_counts);

	funcMUXSelected(AIN2_SELECTED);
	raw_adc_counts = ReadADCValues(1);
	raw_adc_counts = Filter_AIN2_counts(raw_adc_counts);

	ADC_channel_processing(CH_A2_I1, raw_adc_counts);

	funcMUXSelected(AIN3_SELECTED);
	raw_adc_counts = ReadADCValues(1);
	raw_adc_counts = Filter_AIN3_counts(raw_adc_counts);

	ADC_channel_processing(CH_A3_R1, raw_adc_counts);

	funcMUXSelected(BATTERY_SELECTED);
	raw_adc_counts = ReadADCValues(1);
	raw_adc_counts = Filter_Battery_counts(raw_adc_counts);

	ADC_channel_processing(CH_BATT_IN, raw_adc_counts);

	/*********Sender Can********/
	gfHot = ain2_s_value;
#endif
}

void funcProcessCOTValue(uint16_t luicotadccounts)
{
	volatile uint16_t lui=0;

	for(lui=0;lui<106;lui++)
	{
		if(luicotadccounts>=adccountsforres40to6K[105])
		{
			lui=105;
			break;
		}
		else if(luicotadccounts<=adccountsforres40to6K[0])
		{
			lui=0;
			break;
		}
		else if(luicotadccounts>=adccountsforres40to6K[lui] && luicotadccounts<adccountsforres40to6K[lui+1])
		{
			break;
		}
		else { }
	}


//	guicotadcvalue = adccountsforres40to6K[lui];
//	guicotresistancevalue = resvaluefor40to6K[lui];
//	gfCot = tempvaluefor40to6K[lui];

	a1_cnts = adccountsforres40to6K[lui];
	a1_type = resvaluefor40to6K[lui];
	a1_conv_val = tempvaluefor40to6K[lui];
	gfCot = a1_conv_val;
}
#ifdef DOZER_P_VER
void funcProcessEOPValue(uint16_t luieopadccounts)
{
	volatile uint16_t luj=0;

	for(luj=0;luj<282;luj++)
	{
		if(luieopadccounts>=adccountsfor0to28bar[281])
		{
			luj=280;
			break;
		}
		else if(luieopadccounts<=adccountsfor0to28bar[0])
		{
			luj=0;
			break;
		}
		else if(luieopadccounts>=adccountsfor0to28bar[luj] && luieopadccounts<adccountsfor0to28bar[luj+1])
		{
			break;
		}
		else { }
	}

//	guieopadcvalue = adccountsfor0to28bar[luj];
//	gfeopcurrentvalue = curvaluefor0to28bar[luj];
//	gfEop = pressurevaluefor0to28bar[luj];

	a3_cnts = adccountsfor0to28bar[luj];
	a3_type = curvaluefor0to28bar[luj];
	a3_conv_val = pressurevaluefor0to28bar[luj];
	gfEop = a3_conv_val;
}
#else
void funcProcessFuelValue(uint16_t luifueladccounts)
{
	volatile uint16_t lui=0;

	for(lui=0;lui<106;lui++)
	{
		if(luifueladccounts>=adccountsforres40to6K[105])
		{
			lui=105;
			break;
		}
		else if(luifueladccounts<=adccountsforres40to6K[0])
		{
			lui=0;
			break;
		}
		else if(luifueladccounts>=adccountsforres40to6K[lui] && luifueladccounts<adccountsforres40to6K[lui+1])
		{
			break;
		}
		else { }
	}

//	guicotadcvalue = adccountsforres40to6K[lui];
//	guicotresistancevalue = resvaluefor40to6K[lui];
//	gfCot = tempvaluefor40to6K[lui];

	/**Here lookup table is to be update**/
	a3_cnts = adccountsforres40to6K[lui];
	a3_type = resvaluefor40to6K[lui];
	a3_conv_val = tempvaluefor40to6K[lui];
	gfFuel = a3_conv_val;
}
#endif
void funcProcessBatteryVolValue(uint16_t luibattvoladccounts)
{
   volatile uint16_t luk=0;

	for(luk=0;luk<122;luk++)
	{
		if(luibattvoladccounts>=adccountsforbatteryVol[0])
		{
			luk=0;
			break;
		}
		else if(luibattvoladccounts<=adccountsforbatteryVol[121])
		{
			luk=121;
			break;
		}
		else if(luibattvoladccounts>=adccountsforbatteryVol[luk+1] && luibattvoladccounts<adccountsforbatteryVol[luk])
		{
			luk+=1;
			break;
		}
		else { }
	}

	guibatteryadcvalue=adccountsforbatteryVol[luk];
	gfVolt = batteryVolvaluefor8to32V[luk];
}

void ConvertFREQtoRPM(unsigned long luifreq)
{
	EngRpmSensor = (int)((luifreq)* 60);
	EngRpmSensor = (int)(EngRpmSensor / ENGINE_FLY_WHEEL_TEETH);

	EngRpmSensor = Filter_Engine_Speed_RPM(EngRpmSensor);
}


void funcProcessTOPValue(uint16_t luitopadccounts)
{
   volatile uint16_t lul=0;

	for(lul=0;lul<602;lul++)
	{
		if(luitopadccounts>=adccountsfor0to60bar[601])
		{
			lul=600;
			break;
		}
		else if(luitopadccounts<=adccountsfor0to60bar[0])
		{
			lul=0;
			break;
		}
		else if(luitopadccounts>=adccountsfor0to60bar[lul] && luitopadccounts<adccountsfor0to60bar[lul+1])
		{
			break;
		}
		else { }
	}

//	guitopadcvalue=adccountsfor0to60bar[lul];
//	gftopcurrentvalue=curvaluefor0to60bar[lul];
//	gfTop = pressurevaluefor0to60bar[lul];

	a2_cnts=adccountsfor0to60bar[lul];
	a2_type=curvaluefor0to60bar[lul];
	a2_conv_val = pressurevaluefor0to60bar[lul];
	gfTop = a2_conv_val;
}

void funcMUXSelected(uint8_t muxselected)
{
	switch(muxselected)
	{
		case AIN1_SELECTED:
				AIN_MUX_A0_LOW;   //AIN1+RES
				AIN_MUX_A1_LOW;
				break;
		case AIN2_SELECTED:
				AIN_MUX_A0_HIGH;   //AIN2+CUR
				AIN_MUX_A1_LOW;
				break;
		case AIN3_SELECTED:
				AIN_MUX_A0_LOW;   //AIN3+CUR
				AIN_MUX_A1_HIGH;
				break;
		case BATTERY_SELECTED:
				AIN_MUX_A0_HIGH;   //BATTERY IN+
				AIN_MUX_A1_HIGH;
				break;
		default:
			    break;
	}
}

//void funcMUXSelected(uint8_t muxselected)
//{
//	switch(muxselected)
//	{
//		case COT_SELECTED:
//				AIN_SEL_IN1_LOW;
//				AIN_SEL_IN2_HIGH;
//				AIN_MUX_A0_HIGH;   //AIN1+RES
//				AIN_MUX_A1_LOW;
//				AIN_MUX_A2_LOW;
//				break;
//		case EOP_SELECTED:
//				AIN_MUX_A0_LOW;   //AIN3+CUR
//				AIN_MUX_A1_HIGH;
//				AIN_MUX_A2_HIGH;
//				break;
//		case BATTERY_SELECTED:
//				AIN_MUX_A0_HIGH;   //AIN2+VOL
//				AIN_MUX_A1_LOW;
//				AIN_MUX_A2_HIGH;
//				break;
//		case TOP_SELECTED:
//				AIN_MUX_A0_HIGH;   //AIN2+CUR
//				AIN_MUX_A1_HIGH;
//				AIN_MUX_A2_LOW;
//				break;
//		default:
//			    break;
//	}
//}

void ReadandProcessDigitalIO(void)
{
	strReadInputs.all = Max22190DeviceProcess(MAX22190_ADDR_DATA_REG | 0x00);

#ifdef DOZER_P_VER
	/*Engine Coolant level*/
	if(strReadInputs.bits.input1==1)
	{giIcon05 = 1;}
	else
	{giIcon05 = 2;}

	/*Transmission oil filter clog*/
	if(strReadInputs.bits.input2==1)
	{giIcon10 = 2;}
	else
	{giIcon10 = 1;}

	/**/
	if(strReadInputs.bits.input3 == 1)
	{}
	else
	{}

	/*SeatBelt*/
	if(strReadInputs.bits.input4==1)
	{diseatbelt=2;giIcon07 = 2;}
	else
	{diseatbelt=1;giIcon07 = 1;}

	/**/
	if(strReadInputs.bits.input5 == 1)
	{}
	else
	{}

	/*input 6*/
	if(strReadInputs.bits.input6 == 1)
	{}
	else
	{}

	/*sender CAN Digital inputs*/
	if(ain3_s_value == 2)
	{giIcon11 = 2;}
	else
	{giIcon11 = 1;}
#else
	/*Radiator water level*/
	if(strReadInputs.bits.input1==1)
	{diRwl=1;giIcon05 = 1;}
	else
	{diRwl=2;giIcon05 = 2;}

	/*Parking Brake*/
	if(strReadInputs.bits.input2==1)
	{diPrkbrk=2;giIcon10 = 2;}
	else
	{diPrkbrk=1;giIcon10 = 1;}

	/*Airfilter clog*/
	if(strReadInputs.bits.input3 == 1)
	{diAirfilclg=2;giIcon01 = 2;}
	else
	{diAirfilclg=1;giIcon01 = 1;}

	/*SeatBelt*/
	if(strReadInputs.bits.input4==1)
	{diseatbelt=2;giIcon07 = 2;}
	else
	{diseatbelt=1;giIcon07 = 1;}

	/*Engine Oil Filter clog*/
	if(strReadInputs.bits.input5 == 1)
	{diEOFC=2;giIcon11 = 2;}
	else
	{diEOFC=1;giIcon11 = 1;}

	/*input 6*/
	if(strReadInputs.bits.input6 == 1)
	{}
	else
	{}

	/*sender CAN Digital inputs*/
//	if(di_hol == 2)
//	{giIcon12 = 2;}
//	else
//	{giIcon12 = 1;}

	if(ain1_s_value == 2)
	{giIcon12 = 2;}
	else
	{giIcon12 = 1;}
#endif

#ifdef DI_ICON_TOGGLE
#else
	if(faultsymbols.eop == 1)
	{giIcon02 = 2;/*red*/}
	else
	{giIcon02 = 1;/*grey*/}


	if(faultsymbols.ect == 1)
	{giIcon03 = 2;/*Red*/}
	else
	{giIcon03 = 1;/*Grey*/}


	if(faultsymbols.eot == 1)
	{giIcon04 = 2;/*Red*/}
	else
	{giIcon04 = 1;/*Grey*/}


	if(faultsymbols.fuel == 1)
	{giIcon06 = 2;/*Red*/}
	else
	{giIcon06 = 1;/*Grey*/}


	if(faultsymbols.top == 1)
	{giIcon08 = 2;/*Red*/}
	else
	{giIcon08 = 1;/*Grey*/}

	if(faultsymbols.cot == 1)
	{giIcon09 = 2;/*Red*/}
	else
	{giIcon09 = 1;/*Grey*/}
#endif
}

void ProcessDM1faultfromVMS(void)
{
#ifdef DOZER_P_VER
/***********************************VMS_HMI INTERNAL PARAMETERS******************************************/

	/*******************************DIGITAL INPUT 1: ECL************************************/
		/**7)SPN:111 FMI:18**
		 *Low Engine Coolant level
		 */
		if(strReadInputs.bits.input1 == 0)//(strReadInputs.bits.DiEngCoolantLevel == 1)
		{
			error_cnt=0;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 111);
		}
		else
		{
			error_cnt=0;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 111);
		}
	/*******************************DIGITAL INPUT 2: TOFC************************************/
		/**6)SPN:3359 FMI:16**
		 * Transmission oil filter clogged
		 */
	    if(strReadInputs.bits.input2 == 1)//(strReadInputs.bits.DiTransOilfilterClog == 1)
	    {
	    	error_cnt=1;
	    	strDmLogfromVMS[error_cnt].Status = 1;
	    	strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 3359);
	    }
	    else
	    {
	    	error_cnt=1;
	    	strDmLogfromVMS[error_cnt].Status = 0;
	    	strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 3359);
	    }


	/*********************************ANALOG INPUT 1: EOP****************************************/
		/**4)SPN:100 FMI:18**
		 * Engine Oil Pressure is below noraml
		 */
		if(gfEop <= 0.8 && a3_cnts > CH3_SHORT_CNTS)
		{
			error_cnt=2;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 100);
		}
		else
		{
			error_cnt=2;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 100);
		}

		/**14)SPN:100 FMI:2**
		 * Engine oil pressure sensor malfunction
		 * error_cnt=3;
		 */

		/**15)SPN:100 FMI:3**
		 * Engine oil pressure voltage is above normal, or shorted to high
		 * error_cnt=4;
		 */

		/**16)SPN:100 FMI:4**
		 * Engine oil pressure voltage is below normal, or shorted to low
		 */
		//if(guieopadcvalue <= 50)/**50counts is as per lookuptable of adccountsfor0to28bar[]*/
		//if(presentadc.eop_adc_counts <= 25)/**50counts is as per lookuptable of adccountsfor0to28bar[]*/
		if(a3_cnts <= CH3_SHORT_CNTS)
		{
			error_cnt=5;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 100);
		}
		else
		{
			error_cnt=5;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 100);
		}

	/*********************************ANALOG INPUT2: TOP*************************************/
		/**2)SPN:127 FMI:16**
		 * Transmission Oil Pressure is above noraml
		 */
		if(gfTop >= 35)
		{
			error_cnt=6;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 127);
		}
		else
		{
			error_cnt=6;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 127);
		}

		/**3)SPN:127 FMI:18**
		 * Transmission Oil Pressure is below noraml
		 */
		if(gfTop <= 15 && a2_cnts > CH2_SHORT_CNTS)
		{
			error_cnt=7;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 127);
		}
		else
		{
			error_cnt=7;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 127);
		}

		/**23)SPN:127 FMI:2**
		 * Transmission oil pressure sensor malfunction
		 * error_cnt=8;
		 */

		/**24)SPN:127 FMI:3**
		 * "Transmission oil pressure voltage is above normal, or shorted to high"
		 * error_cnt=9;
		 */

		/**25)SPN:127 FMI:4**
		 * Transmission oil pressure voltage is below normal, or shorted to low
		 */
		//if(guitopadcvalue <= 50)/**50counts is as per lookuptable of adccountsfor0to60bar[602]*/
		//if(presentadc.top_adc_counts <= 25)
		if(a2_cnts <= CH2_SHORT_CNTS)
		{
			error_cnt=10;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 127);
		}
		else
		{
			error_cnt=10;
			strDmLogfromVMS[error_cnt++].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 127);
		}

	/*******************************ANALOG INPUT 3: COT************************************/
		/**21)SPN:177 FMI:3**
		 * Converter oil temperature is open circuit
		 */
		//if(guicotadcvalue >= 901)/**901counts is as per lookuptable of 40 to 6K resistance values*/
		//if(presentadc.cot_adc_counts >= 950)
		if(a1_cnts >= CH1_OPEN_CNTS)
		{
			error_cnt=11;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 177);
		}
		else
		{
			error_cnt=11;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 177);
		}

		/**22)SPN:177 FMI:4**
		 * Converter oil temperature is short circuit
		 */
		//if(guicotadcvalue <= 26)/**26counts is as per lookuptable of 40 to 6K resistance values*/
		//if(presentadc.cot_adc_counts <= 20)
		if(a1_cnts <= CH1_SHORT_CNTS)
		{
			error_cnt=12;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 177);
		}
		else
		{
			error_cnt=12;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 177);
		}

	/*******************************ANALOG INPUT 4: BATTERY************************************/
		/**8)SPN:168 FMI:18**
		 * Electrical Battery Potential out of Range
		 */
	    if(gfVolt<= 22 || gfVolt >= 30)
	    {
	    	error_cnt=13;
	    	strDmLogfromVMS[error_cnt].Status = 1;
	    	strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 168);
	    }
	    else
	    {
	    	error_cnt=13;
	    	strDmLogfromVMS[error_cnt].Status = 0;
	    	strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 168);
	    }

	/*************************FREQUENCY INPUT : ENGINE SPEED**************************/
		/**5)SPN:190 FMI:16**
		 * Engine is Overspeed
		 */
		if(giEngineRpm >= 2400)
		{
			error_cnt=14;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 190);
		}
		else
		{
			error_cnt=14;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 190);
		}

/***********************************END OF VMS_HMI INTERNAL PARAMETERS******************************************/

/***********************************SENDER_CAN_RELATED PARAMETERS***********************************************/

	/******************SENDER-CAN CONNECTED OR DISCONNECTED*******************/
		/**26)SPN:521001 FMI:3**
		 * SenderCAN Disconnected.
		 * error_cnt=15;
		 */
		if(Sender_CAN_Alive == 0x00)
		{
			error_cnt=15;
			start_tmr_for_sender_CAN = 1;

			if(SenderCAN_disconnected == 1)
			{
				SenderCAN_disconnected = 0;
				strDmLogfromVMS[error_cnt].Status = 1;
				strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 521001);
			}
		}
		else if(Sender_CAN_Alive == 0xA1 || Sender_CAN_Alive == 0xB1 || Sender_CAN_Alive == 0xC1 || Sender_CAN_Alive == 0xD1)
		{

			start_tmr_for_sender_CAN = 0;
			Sender_CAN_tmr_cnt = 0;
			Sender_CAN_Alive = 0;

			error_cnt=15;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 521001);
		}

	/*****************************ANALOG INPUT 1: ECT*************************/
		/**17)SPN:110 FMI:3**
		 * Engine coolant temperature voltage is above normal, or shorted to high
		 */
		if(gfEct >= 95)
		{
			error_cnt=16;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 110);
		}
		else
		{
			error_cnt=16;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 110);
		}

		/**18)SPN:110 FMI:4**
		 * Engine coolant temperature voltage is below normal, or shorted to low
		 * error_cnt=17;
		 */
		//if((guiEctCounts == 4095 || gfEct <= 40) && Sender_CAN_Alive !=0x00)
		if(ain1_s_cnts == 4095)
		{
			error_cnt=17;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 110);
		}
		else
		{
			error_cnt=17;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 110);
		}

		/**19)SPN:175 FMI:3**
		 * Engine Oil temperature is open circuit
		 * error_cnt=18;
		 */
		//if(guiEotCounts == 4095)
		if(ain2_s_cnts == 4095)
		{
			error_cnt=18;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 175);
		}
		else
		{
			error_cnt=18;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 175);
		}

		/**20)SPN:175 FMI:4**
		 * Engine Oil temperature is short circuit
		 * error_cnt=19;
		 */
		//if(guiEotCounts == 5)
		if(ain2_s_cnts == 5)
		{
			error_cnt=19;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 175);
		}
		else
		{
			error_cnt=19;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 175);
		}

	/*****************************ANALOG INPUT 2: EOT*************************/
		/**10)SPN:175 FMI:16**
		 * Engine Oil Temperature above noraml
		 */
		if(gfEot >= 106)
		{
			error_cnt=20;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 175);
		}
		else
		{
			error_cnt=20;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 175);
		}

	/*****************************ANALOG INPUT 3: EOFC*************************/
		/**12)SPN:99 FMI:16**
		 * Engine oil filter clogged
		 * error_cnt=21;
		 */
		//if(Eng_oil_filter_clogd == 2)
		if(ain3_s_value == 2)
		{
			error_cnt=21;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 99);
		}
		else
		{
			error_cnt=21;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 99);
		}

	/*****************************ANALOG INPUT 4: FUEL LEVEL*************************/
		/**11)SPN:96 FMI:18**
		 * Fuel Level is Low
		 */
		//if(gfFuel <= 10 && Sender_CAN_Alive !=0x00)
		if(gfFuel <= 10 && ain4_s_cnts  != 4095 && ain4_s_cnts  != 5)
		{
			error_cnt=22;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 96);
		}
		else
		{
			error_cnt=22;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 96);
		}

		/**13)SPN:96 FMI:3**
		 * Fuel Level sensor open circuit
		 * error_cnt=23;
		 */
		//if(guiFuelCounts  == 4095)
		if(ain4_s_cnts  == 4095)
		{
			error_cnt=23;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 96);
		}
		else
		{
			error_cnt=23;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 96);
		}

/*********************************************END OF SENDER-CAN******************************************/

/**********************************TOT*********************************/
	/**1)SPN:177 FMI:16**
	 * Transmission Oil Temperature is above noraml
	 */
    if(gfTot>=110)
    {
    	error_cnt=24;
    	strDmLogfromVMS[error_cnt].Status = 1;
    	strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 177);   //((fmi << 19) | Spn)
     }
    else
    {
    	error_cnt=24;
    	strDmLogfromVMS[error_cnt].Status = 0;
    	strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 177);
    }

	/**9)SPN:110 FMI:16**
	 * Engine Water Temperature above noraml
	 * error_cnt=25;
	 */
#else

	/*****************************ANALOG INPUT 3: FUEL LEVEL*************************/
		/**1)SPN:96 FMI:18**
		 * Fuel Level is Low
		 * error_cnt=0;
		 */
		if(gfFuel <= 10)
		{
			error_cnt=0;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 96);
		}
		else
		{
			error_cnt=0;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 96);
		}

		/**2)SPN:96 FMI:3**
		 * Fuel Level sensor open circuit
		 * error_cnt=1;
		 */
		if(a3_cnts  >= CH3_OPEN_CNTS)//|| a3_type  == 0
		{
			error_cnt=1;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 96);
		}
		else
		{
			error_cnt=1;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 96);
		}

	/*********************************ANALOG INPUT2: TOP*************************************/
		/**3)SPN:127 FMI:18**
		 * Transmission Oil Pressure is Low
		 */
		if(gfTop <= 15 && a2_cnts > CH2_SHORT_CNTS)
		{
			error_cnt=2;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 127);
		}
		else
		{
			error_cnt=2;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 127);
		}

		/**4)SPN:127 FMI:16**
		 * Transmission Oil Pressure is High
		 */
		if(gfTop >= 35)
		{
			error_cnt=3;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 127);
		}
		else
		{
			error_cnt=3;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 127);
		}

		/**5)SPN:127 FMI:4**
		 * Transmission oil pressure voltage is below normal, or shorted to low
		 * error_cnt=4;
		 */
		if(a2_cnts <= CH2_SHORT_CNTS)
		{
			error_cnt=4;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 127);
		}
		else
		{
			error_cnt=4;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 127);
		}

		/**6)SPN:127 FMI:3**
		 * "Transmission oil pressure voltage is above normal, or shorted to high"
		 * error_cnt=5;
		 */
		if(a2_cnts >= CH2_OPEN_CNTS)
		{
			error_cnt=5;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 127);
		}
		else
		{
			error_cnt=5;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 127);
		}

	/*******************************ANALOG INPUT 1: COT************************************/
		/**7)SPN:3823 FMI:16**
		 * Converter oil temperature is high
		 */
		if(gfCot >= 119)
		{
			error_cnt=6;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 3823);
		}
		else
		{
			error_cnt=6;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 3823);
		}

		/**8)SPN:3823 FMI:3**
		 * Converter oil temperature is open circuit
		 * error_cnt=7;
		 */
		//if(guicotadcvalue >= 901)/**901counts is as per lookuptable of 40 to 6K resistance values*/
		if(a1_cnts >= CH1_OPEN_CNTS)
		{
			error_cnt=7;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 3823);
		}
		else
		{
			error_cnt=7;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 3823);
		}

		/**9)SPN:3823 FMI:4**
		 * Converter oil temperature is short circuit
		 * error_cnt=8;
		 */
		//if(guicotadcvalue <= 26)/**26counts is as per lookuptable of 40 to 6K resistance values*/
		if(a1_cnts <= CH1_SHORT_CNTS)
		{
			error_cnt=8;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 3823);
		}
		else
		{
			error_cnt=8;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 3823);
		}

		/**10)SPN:111 FMI:18**
		 * Radiator water level is low
		 * error_cnt=9;
		 */
		if(diRwl == 2)//(diRwl == 1)
		{
			error_cnt=9;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 111);
		}
		else
		{
			error_cnt=9;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 111);
		}

		/**11)SPN:70 FMI:16**
		 * Parking brake is ON
		 * error_cnt=10;
		 */
		if(strReadInputs.bits.input2 == 1)//(diPrkbrk == 1)
		{
			error_cnt=10;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16<< 19) | 70);
		}
		else
		{
			error_cnt=10;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((16 << 19) | 70);
		}

		/**12)SPN:99 FMI:18**
		 * Engine oil filter is clogged
		 * error_cnt=11;
		 */
		if(strReadInputs.bits.input5 == 1)//(diEOFC == 1)
		{
			error_cnt=11;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 99);
		}
		else
		{
			error_cnt=11;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 99);
		}
		/**13)SPN:5086 FMI:18**
		 * Air Filter Clogged
		 * error_cnt=12;
		 */
		if(strReadInputs.bits.input3 == 1)//(diAirfilclg == 1)
		{
			error_cnt=12;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 5086);
		}
		else
		{
			error_cnt=12;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 5086);
		}
/***********************************SENDER_CAN_RELATED PARAMETERS***********************************************/
	/*****************************ANALOG INPUT 2: HOT(Hyraulic oil tempreature)*************************/
		/**14)SPN:1638 FMI:3**
		 * Hydraulic  Oil Temperature Sensor Open Circuit
		 * error_cnt=13;
		 */
		//if(guiHotCounts == 4095)
		if(ain2_s_cnts == 4095)
		{
			error_cnt=13;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 1638);
		}
		else
		{
			error_cnt=13;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 1638);
		}

		/**15)SPN:1638 FMI:4**
		 * Hydraulic Oil Temperature Sensor Short Circuit
		 * error_cnt=14;
		 */
		//if(guiHotCounts == 5)
		if(ain2_s_cnts == 5)
		{
			error_cnt=14;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 1638);
		}
		else
		{
			error_cnt=14;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((4 << 19) | 1638);
		}
	/*****************************ANALOG INPUT 1: HOL(Hydraulic oil level)*************************/
		/**16)SPN:2602 FMI:18**
		 * HOL(Hydraulic oil level)
		 * error_cnt=15;
		 */
		//if(di_hol == 2)
		if(ain1_s_value == 2)
		{
			error_cnt=15;
			strDmLogfromVMS[error_cnt].Status = 1;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 2602);
		}
		else
		{
			error_cnt=15;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((18 << 19) | 2602);
		}
	/******************SENDER-CAN CONNECTED OR DISCONNECTED*******************/
		/**17)SPN:521001 FMI:3**
		 * SenderCAN Disconnected.
		 * error_cnt=16;
		 */
		if(Sender_CAN_Alive == 0x00)
		{
			error_cnt=16;
			start_tmr_for_sender_CAN = 1;

			if(SenderCAN_disconnected == 1)
			{
				SenderCAN_disconnected = 0;
				strDmLogfromVMS[error_cnt].Status = 1;
				strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 521001);
			}
		}
		else if(Sender_CAN_Alive == 0xA1 || Sender_CAN_Alive == 0xB1 || Sender_CAN_Alive == 0xC1 || Sender_CAN_Alive == 0xD1)
		{

			start_tmr_for_sender_CAN = 0;
			Sender_CAN_tmr_cnt = 0;
			Sender_CAN_Alive = 0;

			error_cnt=16;
			strDmLogfromVMS[error_cnt].Status = 0;
			strDmLogfromVMS[error_cnt].SpnFmi = ((3 << 19) | 521001);
		}
/*********************************************END OF SENDER-CAN******************************************/
#endif
		StoreDM1faultfromVMS();
}

void StoreDM1faultfromVMS(void)
{
	volatile unsigned char i=0,j=0;
	volatile unsigned char temp_errflag=0;

	uint32_t local_spn = 0;
			uint8_t local_fmi = 0;

//	for(i=0;i<8;i++) commented on 21.04.2023 by Rajashekhar
	for(i=0;i<NO_OF_INTERNAL_DM1_MSG;i++)
	{
		if(strDmLogfromVMS[i].Status!=strDmLogfromVMSprev[i].Status)
		{
			strDmLogfromVMSprev[i].Status=strDmLogfromVMS[i].Status;

			store_dm1_mesg=1;

			for(j=0;j<error_cnt_VMS;j++)
			{
			    if(strDmLogfromVMSerror[j].SpnFmi==strDmLogfromVMS[i].SpnFmi)
			    {
			    	if(strDmLogfromVMSprev[i].Status==1)
			    	{
			    	   strDmLogfromVMS[i].OccuranceCount++;

						if(strDmLogfromVMS[i].OccuranceCount>127)
						{
							strDmLogfromVMS[i].OccuranceCount=127;
						}
						strDmLogfromVMSerror[j].OccuranceCount = strDmLogfromVMS[i].OccuranceCount;
			    	}

			    	temp_errflag=1;
					strDmLogfromVMSerror[j].SpnFmi = strDmLogfromVMS[i].SpnFmi;
					strDmLogfromVMSerror[j].Status = strDmLogfromVMS[i].Status;
					strDmLogfromVMSerror[j].SourceAddress = VMS;

					local_spn			= strDmLogfromVMS[i].SpnFmi & 0x7FFFF;
					local_fmi			= strDmLogfromVMS[i].SpnFmi >> 19;

					strDmLogfromVMSerror[j].MessageId = DM1MessageSelection(local_spn,local_fmi);

				    StoreDiagnosticMessage(VMS,j,strDmLogfromVMSerror[j]);
			    	break;
			    }
			}

			if(temp_errflag!=1)
			{
				strDmLogfromVMSerror[error_cnt_VMS].SpnFmi = strDmLogfromVMS[i].SpnFmi;
				strDmLogfromVMSerror[error_cnt_VMS].Status = strDmLogfromVMS[i].Status;
				strDmLogfromVMSerror[error_cnt_VMS].SourceAddress = VMS;

				local_spn			= strDmLogfromVMSerror[error_cnt_VMS].SpnFmi & 0x7FFFF;
				local_fmi			= strDmLogfromVMSerror[error_cnt_VMS].SpnFmi >> 19;

				strDmLogfromVMSerror[error_cnt_VMS].MessageId = DM1MessageSelection(local_spn,local_fmi);

				if(strDmLogfromVMSprev[i].Status==1)
				{
					strDmLogfromVMS[i].OccuranceCount++;

					if(strDmLogfromVMS[i].OccuranceCount>127)
					{
						strDmLogfromVMS[i].OccuranceCount=127;
					}
					strDmLogfromVMSerror[error_cnt_VMS].OccuranceCount = strDmLogfromVMS[i].OccuranceCount;
				}

			    StoreDiagnosticMessage(VMS,error_cnt_VMS,strDmLogfromVMSerror[error_cnt_VMS]);
			    error_cnt_VMS++;
			}
				gucFaultLogs[VMS] = error_cnt_VMS;
		}
	}
}
void Indicatefaultsymbols(void)
{
	if(gfCot >= 119)//120
	{
		faultsymbols.cot=1;
	}
	else
	{
		faultsymbols.cot=0;
	}
#ifdef DOZER_P_VER
	if(gfTop <= 15 || gfTop >= 35)
#else
	if(gfTop <= 15)
#endif
	{
		faultsymbols.top=1;
	}
	else
	{
		faultsymbols.top=0;
	}
#ifdef DOZER_P_VER
	if(gfEop<=0.8)
	{
		faultsymbols.eop=1;
	}
	else
	{
		faultsymbols.eop=0;
	}
	if(giEngineRpm>=2400)
	{
		faultsymbols.rpm=1;
	}
	else
	{
		faultsymbols.rpm=0;
	}
#else
	if(gfFuel <= 10)//12.5
	{
		faultsymbols.fuel=1;
	}
	else
	{
		faultsymbols.fuel=0;
	}
#endif

/*
	if(gfEop_text<=0.8)
	{
		faultsymbols.eop=1;
	}
	else
	{
		faultsymbols.eop=0;
	}

	if(gfEct_text>= 95)
	{
		faultsymbols.ect=1;
	}
	else
	{
		faultsymbols.ect=0;
	}

	if(gfEot_text >= 110)//120
	{
		faultsymbols.eot=1;
	}
	else
	{
		faultsymbols.eot=0;
	}

	if(giEngineRpm_text>=2400)
	{
		faultsymbols.rpm=1;
	}
	else
	{
		faultsymbols.rpm=0;
	}
*/

/*	if(gfVolt_text < 22 || gfVolt_text > 30) //28
	{
		faultsymbols.batt=1;
	}
	else
	{
		faultsymbols.batt=0;
	}*/

#if 0
	if(giOutputRpm_text>=2400)
	{
		faultsymbols.rpm=1;
	}
	else
	{
		faultsymbols.rpm=0;
	}

	/*
		if(	giVehicleSpeed_text>=60)
		{
			faultsymbols.speed=1;
		}
		else
		{
			faultsymbols.speed=0;
		}
	*/
	if(gfTot_text>=120)
	{
		faultsymbols.tot=1;
	}
	else
	{
		faultsymbols.tot=0;
	}
#endif
}

void Writedataintofram(unsigned char store_parameter)
{
	volatile unsigned char w=0;

	switch(store_parameter)
	{
			case UIN:
				     for(w=0;w<16;w++)
				     {
				    	 MemoryWriteVariable(PRIMARY_MEMORY,(UIN_ADDR+w),acAPPW_Language_0[OFFSET_0 + w],1);
				     }
				     break;
			case MAKE:
					 for(w=0;w<16;w++)
					 {
						 MemoryWriteVariable(PRIMARY_MEMORY,(MAKE_ADDR+w),acAPPW_Language_0[OFFSET_1 + w],1);
					 }
				     break;
			case MODEL:
					 for(w=0;w<16;w++)
					 {
						 MemoryWriteVariable(PRIMARY_MEMORY,(MODEL_ADDR+w),acAPPW_Language_0[OFFSET_2 + w],1);
					 }
				     break;
			case SERIAL_NO:
					 for(w=0;w<16;w++)
					 {
						 MemoryWriteVariable(PRIMARY_MEMORY,(SERIAL_NO_ADDR+w),acAPPW_Language_0[OFFSET_3 + w],1);
					 }
				     break;
			case UNIT_NO:
					 for(w=0;w<16;w++)
					 {
						 MemoryWriteVariable(PRIMARY_MEMORY,(UNIT_NO_ADDR+w),acAPPW_Language_0[OFFSET_4 + w],1);
					 }
				     break;
			case MODE:
				     if(giMode==0)
				     {
						 MemoryWriteVariable(PRIMARY_MEMORY,MODE_ADDR,1,1);
				     }
				     else
				     {
						 MemoryWriteVariable(PRIMARY_MEMORY,MODE_ADDR,2,1);
				     }
				     break;
			case PASSWORD:
					 for(w=0;w<5;w++)
					 {
						 MemoryWriteVariable(PRIMARY_MEMORY,(PASSWORD_ADDR+w),gucSetPassword[w],1);
					 }
					 break;

			case RAW_DATA_PTR:
					 MemoryWriteVariable(PRIMARY_MEMORY,RAW_CAN_DATA_PTR_ADDR,rawdatadatapt,4);
					 break;

			case DATA_LOG_PTR:
					 MemoryWriteVariable(PRIMARY_MEMORY,DATALOG_PTR_ADDR,Dataloggingdatapt,4);
					 break;

			case FAULT_DATA_PTR:
					 MemoryWriteVariable(PRIMARY_MEMORY,FAULTLOG_PTR_ADDR,datapt,4);
					 break;

			case KM_DISTANCE:
					 MemoryWriteVariable(PRIMARY_MEMORY,ODO_KM_ADDR,km_ctr,4);
					 break;

			case FRAC_KM_DISTANCE:
					 MemoryWriteVariable(PRIMARY_MEMORY,ODO_FRAC_KM_ADDR,frac_km,1);
					 break;
			 default:
					 break;
	}
}

void Poweronreaddatafromfram(void)
{
	volatile unsigned char r=0;
	unsigned char password_read_wrong=0;

	MemoryWriteVariable(PRIMARY_MEMORY,0x00,0x00,1); //dummy write

    for(r=0;r<16;r++)
    {
    	acAPPW_Language_0[OFFSET_0 + r] = MemoryReadVariable(PRIMARY_MEMORY,(UIN_ADDR+r),1);
    	acAPPW_Language_0[OFFSET_1 + r] = MemoryReadVariable(PRIMARY_MEMORY,(MAKE_ADDR+r),1);
    	acAPPW_Language_0[OFFSET_2 + r] = MemoryReadVariable(PRIMARY_MEMORY,(MODEL_ADDR+r),1);
    	acAPPW_Language_0[OFFSET_3 + r] = MemoryReadVariable(PRIMARY_MEMORY,(SERIAL_NO_ADDR+r),1);
    	acAPPW_Language_0[OFFSET_4 + r] = MemoryReadVariable(PRIMARY_MEMORY,(UNIT_NO_ADDR+r),1);
    }

    giMode = MemoryReadVariable(PRIMARY_MEMORY,MODE_ADDR,1);

    if(giMode==0 || giMode==0xFF || giMode==0x20)
    {
    	giMode=0;
    	MemoryWriteVariable(PRIMARY_MEMORY,MODE_ADDR,1,1);
    }
    else
    {
    	if(giMode==1)
    	{
    		giMode=0;
    	}
    	else
    	{
    		giMode=1;
    	}
    }

	 for(r=0;r<5;r++)
	 {
		 gucSetPassword[r]=MemoryReadVariable(PRIMARY_MEMORY,(PASSWORD_ADDR+r),1);

		 if(gucSetPassword[r]==0 || gucSetPassword[r]==0xFF || gucSetPassword[r]==0x20)
		 {
			password_read_wrong=1;
			break;
		 }
	 }

	 if(password_read_wrong==1)
	 {
		password_read_wrong=0;
		gucSetPassword[0]=1;
		gucSetPassword[1]=2;
		gucSetPassword[2]=4;
		gucSetPassword[3]=5;
		gucSetPassword[4]=6;

		for(r=0;r<5;r++)
		{
			MemoryWriteVariable(PRIMARY_MEMORY,(PASSWORD_ADDR+r),gucSetPassword[r],1);
		}
	 }

    for(r=0;r<16;r++)  //if data gets corrupted , loading with space
    {
    	if(acAPPW_Language_0[OFFSET_0 + r]==0 || acAPPW_Language_0[OFFSET_0 + r]==0xFF)
    	{
    		acAPPW_Language_0[OFFSET_0 + r] = 0x20;	//space
    		MemoryWriteVariable(PRIMARY_MEMORY,(UIN_ADDR+r),acAPPW_Language_0[OFFSET_0 + r],1);
    	}

    	if(acAPPW_Language_0[OFFSET_1 + r]==0 || acAPPW_Language_0[OFFSET_1 + r]==0xFF)
		{
			acAPPW_Language_0[OFFSET_1 + r] = 0x20;	//space
    		MemoryWriteVariable(PRIMARY_MEMORY,(MAKE_ADDR+r),acAPPW_Language_0[OFFSET_1 + r],1);
		}

    	if(acAPPW_Language_0[OFFSET_2 + r]==0 || acAPPW_Language_0[OFFSET_2 + r]==0xFF)
		{
			acAPPW_Language_0[OFFSET_2 + r] = 0x20;	//space
    		MemoryWriteVariable(PRIMARY_MEMORY,(MODEL_ADDR+r),acAPPW_Language_0[OFFSET_2 + r],1);
		}

    	if(acAPPW_Language_0[OFFSET_3 + r]==0 || acAPPW_Language_0[OFFSET_3 + r]==0xFF)
		{
			acAPPW_Language_0[OFFSET_3 + r] = 0x20;	//space
    		MemoryWriteVariable(PRIMARY_MEMORY,(SERIAL_NO_ADDR+r),acAPPW_Language_0[OFFSET_3 + r],1);
		}

    	if(acAPPW_Language_0[OFFSET_4 + r]==0 || acAPPW_Language_0[OFFSET_4 + r]==0xFF)
		{
			acAPPW_Language_0[OFFSET_4 + r] = 0x20;	//space
    		MemoryWriteVariable(PRIMARY_MEMORY,(UNIT_NO_ADDR+r),acAPPW_Language_0[OFFSET_4 + r],1);
		}
    }

    rawdatadatapt=MemoryReadVariable(PRIMARY_MEMORY,RAW_CAN_DATA_PTR_ADDR,4);
    if(rawdatadatapt==0 || rawdatadatapt==0xFFFFFFFF)
    {
    	rawdatadatapt=0;
    	 MemoryWriteVariable(PRIMARY_MEMORY,RAW_CAN_DATA_PTR_ADDR,rawdatadatapt,4);
    }

    Dataloggingdatapt=MemoryReadVariable(PRIMARY_MEMORY,DATALOG_PTR_ADDR,4);
    if(Dataloggingdatapt==0 || Dataloggingdatapt==0xFFFFFFFF)
    {
    	Dataloggingdatapt=0;
    	MemoryWriteVariable(PRIMARY_MEMORY,DATALOG_PTR_ADDR,Dataloggingdatapt,4);
    }

    datapt=MemoryReadVariable(PRIMARY_MEMORY,FAULTLOG_PTR_ADDR,4);
    if(datapt==0 || datapt==0xFFFFFFFF)
    {
    	datapt=0;
    	MemoryWriteVariable(PRIMARY_MEMORY,FAULTLOG_PTR_ADDR,datapt,4);
    }

    km_ctr=MemoryReadVariable(PRIMARY_MEMORY,ODO_KM_ADDR,4);
    if(km_ctr==0 || km_ctr== 0xFFFFFFFF)
    {
    	km_ctr=0;
    	MemoryWriteVariable(PRIMARY_MEMORY,ODO_KM_ADDR,km_ctr,4);
    }

    frac_km = MemoryReadVariable(PRIMARY_MEMORY,ODO_FRAC_KM_ADDR,1);
    if(frac_km == 0 || frac_km == 0xFFFFFFFF)
    {
    	frac_km = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,ODO_FRAC_KM_ADDR,frac_km,1);
    }

    if(frac_km > 0)
    {
    	fract_ctr = frac_km;
    	fract_ctr = fract_ctr * 100;
    }
    else
    {
    	fract_ctr = 0;
    }

    Distance_in_km = final_km_convertion(km_ctr,frac_km);

	read_onoff_home_setting_status();//added on 28.10.2022
    Read_brightness_from_FRAM();
    ReadDisplayHrs();
    ReadEngHrs();
	Read_identification_details();
    ReadEngFuelRate();
	PowerOnReadForShiftHrs();
}
void ReadDisplayHrs(void)
{
    /*********************display hours*******************/
	disp_seconds_cntr = MemoryReadVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, 2);
    if(disp_seconds_cntr == 0 || disp_seconds_cntr == 0xFFFF)
    {
    	disp_seconds_cntr = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,DISPLAY_SEC_CNTR,disp_seconds_cntr,2);
    }

    Display_fractn_hr = MemoryReadVariable(PRIMARY_MEMORY, DISPLAY_FRACTN_HRS, 1);
    if(Display_fractn_hr == 0 || Display_fractn_hr == 0xFF)
    {
    	Display_fractn_hr = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,DISPLAY_FRACTN_HRS,Display_fractn_hr,1);
    }

    Display_actual_hr = MemoryReadVariable(PRIMARY_MEMORY, DISPLAY_ACTUAL_HRS, 4);
    if(Display_actual_hr == 0 || Display_actual_hr == 0xFFFFFFFF)
    {
    	Display_actual_hr = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,DISPLAY_ACTUAL_HRS,Display_actual_hr,4);
    }
}

void ReadEngHrs(void)
{
#ifdef DOZER_P_VER
    /***********************Engine Hours*********************/
	eng_seconds_cntr = MemoryReadVariable(PRIMARY_MEMORY, ENGINE_SEC_CNTR, 2);
    if(eng_seconds_cntr == 0 || eng_seconds_cntr == 0xFFFF)
    {
    	eng_seconds_cntr = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,ENGINE_SEC_CNTR,eng_seconds_cntr,2);
    }

	eng_fractn_hr = MemoryReadVariable(PRIMARY_MEMORY, ENGINE_FRACTN_HRS, 1);
    if(eng_fractn_hr == 0 || eng_fractn_hr == 0xFF)
    {
    	eng_fractn_hr = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,ENGINE_FRACTN_HRS,eng_fractn_hr,1);
    }

	eng_actual_hr = MemoryReadVariable(PRIMARY_MEMORY, ENGINE_ACTUAL_HRS, 4);
    if(eng_actual_hr == 0 || eng_actual_hr == 0xFFFFFFFF)
    {
    	eng_actual_hr = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,ENGINE_ACTUAL_HRS,eng_actual_hr,4);
    }

#else
    EngineHourMeter = MemoryReadVariable(PRIMARY_MEMORY, ENGINE_ACTUAL_HRS, 4);
    Prev_EngineHrs = EngineHourMeter;
    if(EngineHourMeter == 0 || EngineHourMeter == 0xFFFFFFFF)
    {
    	EngineHourMeter = 0;
    	Prev_EngineHrs = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,ENGINE_ACTUAL_HRS,EngineHourMeter,4);
    }
#endif
}
void ReadEngFuelRate(void)
{
    gfFuel_rate = MemoryReadVariable(PRIMARY_MEMORY, ENG_FUEL_RATE, 2);
    Prev_Fuel_rate = gfFuel_rate;
    if(gfFuel_rate == 0 || gfFuel_rate == 0xFFFF)
    {
    	gfFuel_rate = 0;
    	Prev_Fuel_rate = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,ENG_FUEL_RATE,gfFuel_rate,2);
    }
}
void Validate_adc_counts(void)
{
	if(stoptmr.cot_adc == 1)
	{
			presentadc.cot_adc_counts =   tempadc.cot_adc_counts;
			prevadc.cot_adc_counts = presentadc.cot_adc_counts;
			stoptmr.cot_adc = 0;
			funcProcessCOTValue(presentadc.cot_adc_counts);
	}

	tempadc.cot_adc_counts = presentadc.cot_adc_counts;

	if(tempadc.cot_adc_counts != prevadc.cot_adc_counts && starttmr.cot_adc == 0)
	{
		starttmr.cot_adc = 1;
		stoptmr.cot_adc  = 0;
		counter_cot = 0;
	}
#ifdef DOZER_P_VER
	if(stoptmr.eop_adc == 1)
	{
			presentadc.eop_adc_counts =   tempadc.eop_adc_counts;
			prevadc.eop_adc_counts = presentadc.eop_adc_counts;
			stoptmr.eop_adc  = 0;
			funcProcessEOPValue(presentadc.eop_adc_counts);
	}

	tempadc.eop_adc_counts = presentadc.eop_adc_counts;

	if(tempadc.eop_adc_counts != prevadc.eop_adc_counts && starttmr.eop_adc == 0)
	{
		starttmr.eop_adc  = 1;
		stoptmr.eop_adc   = 0;
		counter_eop = 0;
	}
#else
	if(stoptmr.fuel_adc == 1)
	{
			presentadc.fuel_adc_counts =   tempadc.fuel_adc_counts;
			prevadc.fuel_adc_counts = presentadc.fuel_adc_counts;
			stoptmr.fuel_adc  = 0;
			//funcProcessFuelValue(presentadc.fuel_adc_counts);
	}

	tempadc.fuel_adc_counts = presentadc.fuel_adc_counts;

	if(tempadc.fuel_adc_counts != prevadc.fuel_adc_counts && starttmr.fuel_adc == 0)
	{
		starttmr.fuel_adc  = 1;
		stoptmr.fuel_adc   = 0;
		counter_fuel = 0;
	}
#endif
	if(stoptmr.top_adc == 1)
	{
			presentadc.top_adc_counts =   tempadc.top_adc_counts;
			prevadc.top_adc_counts = presentadc.top_adc_counts;
			stoptmr.top_adc  = 0;
			funcProcessTOPValue(presentadc.top_adc_counts);
	}

	tempadc.top_adc_counts = presentadc.top_adc_counts;

	if(tempadc.top_adc_counts != prevadc.top_adc_counts && starttmr.top_adc == 0)
	{
		starttmr.top_adc  = 1;
		stoptmr.top_adc   = 0;
		counter_top = 0;
	}

	if(stoptmr.battery_adc == 1)
	{
			presentadc.battery_adc_counts =   tempadc.battery_adc_counts;
			prevadc.battery_adc_counts = presentadc.battery_adc_counts;
			stoptmr.battery_adc  = 0;
		    funcProcessBatteryVolValue(presentadc.battery_adc_counts);
	}

	tempadc.battery_adc_counts = presentadc.battery_adc_counts;

	if(tempadc.battery_adc_counts != prevadc.battery_adc_counts && starttmr.battery_adc == 0)
	{
		starttmr.battery_adc  = 1;
		stoptmr.battery_adc   = 0;
		counter_batt = 0;
	}

	if(stoptmr.freq_in == 1)
	{
			presentadc.freq_counts = tempadc.freq_counts;
			prevadc.freq_counts = presentadc.freq_counts;
			stoptmr.freq_in  = 0;
			ConvertFREQtoRPM(presentadc.freq_counts);
	}

	tempadc.freq_counts = presentadc.freq_counts;

	if(tempadc.freq_counts != prevadc.freq_counts && starttmr.freq_in == 0)
	{
		starttmr.freq_in  = 1;
		stoptmr.freq_in   = 0;
		counter_freq = 0;
	}
}

void Adcdatavalidation(void)
{
    if(starttmr.cot_adc == 1)
	{
	    counter_cot++;
		if(counter_cot > IN_VAL_TIME)
		{
			starttmr.cot_adc = 0;
			stoptmr.cot_adc  = 1;
			counter_cot     = 0;
		}
	}

    if(starttmr.top_adc == 1)
	{
	    counter_top++;
		if(counter_top > IN_VAL_TIME)
		{
			starttmr.top_adc = 0;
			stoptmr.top_adc  = 1;
			counter_top     = 0;
		}
	}
#ifdef DOZER_P_VER
    if(starttmr.eop_adc == 1)
	{
	    counter_eop++;
		if(counter_eop > IN_VAL_TIME)
		{
			starttmr.eop_adc = 0;
			stoptmr.eop_adc  = 1;
			counter_eop     = 0;
		}
	}
#else
    if(starttmr.fuel_adc == 1)
	{
	    counter_fuel++;
		if(counter_fuel > IN_VAL_TIME)
		{
			starttmr.fuel_adc = 0;
			stoptmr.fuel_adc  = 1;
			counter_fuel     = 0;
		}
	}
#endif

    if(starttmr.battery_adc == 1)
	{
	    counter_batt++;
		if(counter_batt > IN_VAL_TIME)
		{
			starttmr.battery_adc = 0;
			stoptmr.battery_adc  = 1;
			counter_batt     = 0;
		}
	}

    if(starttmr.freq_in==1)
	{
	    counter_freq++;
		if(counter_freq > IN_VAL_TIME)
		{
			starttmr.freq_in = 0;
			stoptmr.freq_in  = 1;
			counter_freq     = 0;
		}
	}
	/***********added by Rajashekhar on 24.09.2022**********/
	if(freq_tmr_start == 1)
	{
		freq_tmr_start_cnt++;
		if(freq_tmr_start_cnt >= 100)
		{
			freq_tmr_start_cnt = 0;
			freq = 0;
			EngRpmSensor = 0;//giEngineRpm = 0;
			Captured_Freq = 0;
		}
	}
	else
	{
		freq_tmr_start_cnt = 0;
	}
	/*************************************************/
}

/* Author: Midhun
 * Date of Creation: 14/06/2016
 * Function averages 30 samples of data
 * If there is a huge variation in the present speed sample, It validates the
 * change for next 25 samples
 * If the average is zero it validates it for 2 samples
 * Parameters to pass	: Frequency output from sensor
 * Return Value			: Filtered value from 30 samples
 */
static unsigned int Filter_Engine_Speed1(unsigned int Values_To_Read)
{
	static unsigned int Counter_10=0;
	unsigned long Average=0;
	unsigned char Counter_For=0;
	static unsigned char Zero_Speed_Occurence=0,Discarded_Value_Counter=0;

	static unsigned int Sensor_Val_Buffer[30]={0};
	static unsigned int Result=0;

	/*If previous result was greater than 50 then check the new samples tolerance with result*/
	if(Result>=50)
	{
		if(Values_To_Read<=(Result+3) && Values_To_Read>=(Result-3))
		{
			Sensor_Val_Buffer[Counter_10]=Values_To_Read;
			Counter_10++;
			if(Counter_10>=30)
			{
				Counter_10=0;
			}
			Discarded_Value_Counter=0;
		}
		/*If tolerance is greater than +/- 3 then validated the change in speed*/
		/*This validation checks that the change in speed is continuously available for next 25 samples of speed*/
		else
		{
			Discarded_Value_Counter++;
			if(Discarded_Value_Counter>=25)
			{
				Discarded_Value_Counter=0;
				/*Fill all buffer with new speed values*/
				for(Counter_For=0;Counter_For<=29;Counter_For++)
				{
					Sensor_Val_Buffer[Counter_For]=Values_To_Read;
				}
			}
		}
	}
	/*If speed is less than 50 then blindly buffer the speed values*/
	else
	{
		Sensor_Val_Buffer[Counter_10]=Values_To_Read;
		Counter_10++;
		if(Counter_10>=30)
		{
			Counter_10=0;
		}
	}


	/*Find average*/
	for(Counter_For=0;Counter_For<=29;Counter_For++)
	{
		Average+=Sensor_Val_Buffer[Counter_For];
	}
	Average/=30;

	/*If average goes zero for 2 samples validate it as zero speed*/
	if(Average!=0)
	{
		Result=Average;
	}
	else
	{
		Zero_Speed_Occurence++;
		if(Zero_Speed_Occurence==2)
		{
			Zero_Speed_Occurence=0;
			Result=0;
		}
	}
	return(Result);
}
static unsigned int Filter_Engine_Speed2(unsigned int Values_To_Read)
{
	static unsigned int Counter_10=0;
	unsigned long Average=0;
	unsigned char Counter_For=0;
	static unsigned char Zero_Speed_Occurence=0,Discarded_Value_Counter=0;

	static unsigned int Sensor_Val_Buffer[30]={0};
	static unsigned int Result=0;

	/*If previous result was greater than 50 then check the new samples tolerance with result*/
	if(Result>=50)
	{
		if(Values_To_Read<=(Result+3) && Values_To_Read>=(Result-3))
		{
			Sensor_Val_Buffer[Counter_10]=Values_To_Read;
			Counter_10++;
			if(Counter_10>=30)
			{
				Counter_10=0;
			}
			Discarded_Value_Counter=0;
		}
		/*If tolerance is greater than +/- 3 then validated the change in speed*/
		/*This validation checks that the change in speed is continuously available for next 25 samples of speed*/
		else
		{
			Discarded_Value_Counter++;
			if(Discarded_Value_Counter>=25)
			{
				Discarded_Value_Counter=0;
				/*Fill all buffer with new speed values*/
				for(Counter_For=0;Counter_For<=29;Counter_For++)
				{
					Sensor_Val_Buffer[Counter_For]=Values_To_Read;
				}
			}
		}
	}
	/*If speed is less than 50 then blindly buffer the speed values*/
	else
	{
		Sensor_Val_Buffer[Counter_10]=Values_To_Read;
		Counter_10++;
		if(Counter_10>=30)
		{
			Counter_10=0;
		}
	}


	/*Find average*/
	for(Counter_For=0;Counter_For<=29;Counter_For++)
	{
		Average+=Sensor_Val_Buffer[Counter_For];
	}
	Average/=30;

	/*If average goes zero for 2 samples validate it as zero speed*/
	if(Average!=0)
	{
		Result=Average;
	}
	else
	{
		Zero_Speed_Occurence++;
		if(Zero_Speed_Occurence==2)
		{
			Zero_Speed_Occurence=0;
			Result=0;
		}
	}
	return(Result);
}


static unsigned int Filter_Engine_Speed_RPM(unsigned int Values_To_Read)
{
	static unsigned int Counter_10=0;
	unsigned long Average=0;
	unsigned char Counter_For=0;
	static unsigned char Zero_Speed_Occurence=0,Discarded_Value_Counter=0;

	static unsigned int Sensor_Val_Buffer[30]={0};
	static unsigned int Result=0;

	/*If previous result was greater than 50 then check the new samples tolerance with result*/
	if(Result>=50)
	{
		if(Values_To_Read<=(Result+3) && Values_To_Read>=(Result-3))
		{
			Sensor_Val_Buffer[Counter_10]=Values_To_Read;
			Counter_10++;
			if(Counter_10>=30)
			{
				Counter_10=0;
			}
			Discarded_Value_Counter=0;
		}
		/*If tolerance is greater than +/- 3 then validated the change in speed*/
		/*This validation checks that the change in speed is continuously available for next 25 samples of speed*/
		else
		{
			Discarded_Value_Counter++;
			if(Discarded_Value_Counter>=25)
			{
				Discarded_Value_Counter=0;
				/*Fill all buffer with new speed values*/
				for(Counter_For=0;Counter_For<=29;Counter_For++)
				{
					Sensor_Val_Buffer[Counter_For]=Values_To_Read;
				}
			}
		}
	}
	/*If speed is less than 50 then blindly buffer the speed values*/
	else
	{
		Sensor_Val_Buffer[Counter_10]=Values_To_Read;
		Counter_10++;
		if(Counter_10>=30)
		{
			Counter_10=0;
		}
	}


	/*Find average*/
	for(Counter_For=0;Counter_For<=29;Counter_For++)
	{
		Average+=Sensor_Val_Buffer[Counter_For];
	}
	Average/=30;

	/*If average goes zero for 2 samples validate it as zero speed*/
	if(Average!=0)
	{
		Result=Average;
	}
	else
	{
		Zero_Speed_Occurence++;
		if(Zero_Speed_Occurence==2)
		{
			Zero_Speed_Occurence=0;
			Result=0;
		}
	}
	return(Result);
}



void Calculate_distance_in_km_from_CAN_per_sec(void)
{
	if(flagdistance==1)
	{
		flagdistance = 0;
		distance_p_sec = (float)(giVehicleSpeed);
	//		distance_p_sec = (distance_p_sec/100);
		distance_p_sec = (distance_p_sec / 3600); //sec
		CAN_distance = CAN_distance + distance_p_sec;
	}
	else
	{
		/**/
	}
}

void Updatedistance(void)
{
	Distance_in_kilometer();

	if(flagodometer_updated)
	{
		flagodometer_updated = 0;
		fract_ctr = (fract_ctr + one_km_1);

		if (fract_ctr >999)//95
		{
			fract_ctr -= 1000;//decimal_adj;
			km_ctr++;
			Writedataintofram(KM_DISTANCE);
	//			while(km_ctr > 99)
	//			{
	//				km_ctr = km_ctr - 100;
	//			}
		}
	//		fract_ctr1 = fract_ctr/10;
	//		km_ctr+=fract_ctr;
	/*102 is used to not to get proper 10, when we divide 1000 from 100(i.e 1000/100 = 10) but if we divide 1000/102 = 9.something*/
		frac_km	  = fract_ctr / 102;
		Writedataintofram(FRAC_KM_DISTANCE);
		Distance_in_km = final_km_convertion(km_ctr,frac_km);
	}
}

uint32_t final_km_convertion(uint32_t int_km,uint8_t fractional_km)
{
	uint32_t dis_in_km = 0;

	dis_in_km = int_km;
	dis_in_km = dis_in_km * ONE_FRAC_DIGIT;
	dis_in_km = dis_in_km + fractional_km;

	return dis_in_km;
}

void Distance_in_kilometer(void)
{
	flagodometer_updated = 0;

	if(flagkm_CAN)
	{
		/*This is for CAN */
		flagkm_CAN = 0;
		flagdistance = 1;
		one_km_1 = CAN_distance * 1000;

		if(one_km_1 > 9)// we changed to 9 from 99 t get 0.01 Km Resolution(Previously 0.09km Resolution
		{
			CAN_distance = 0;
			flagodometer_updated = 1;
		}
		else
		{
			/**/
		}
	}
	else
	{
		/**/
	}
}

void PowerONGaugeRotation(void)
{
	/**********************added on 18.10.2022**************************/
	if(vms.flag.gauge_rotation_poweron == 1 && (giScreenSwitch == 6 || giScreenSwitch == 26
	|| giScreenSwitch == 7 || giScreenSwitch == 27 || giScreenSwitch == 8 || giScreenSwitch == 9))
	{
		if(no_of_sec == 1)
		{
			gfEop = 0;
			gfEct = 0;
			gfVolt= 0;
			giEngineRpm = 0;
			gfFuel = 0;
			gfTop = 0;
			gfCot = 0;
			gfEot = 0;
#ifdef DOZER_P_VER
			/*Digital inputs*/
			giIcon01 = 0;
			giIcon12 = 0;
#else
			gfHot = -45;
			gfBoostPressure = 0;
			gfFIP_RackPosition = 0;
			gfEng_battry_volt = 0;

			/*Digital inputs*/
			giIcon01 = 1;
			giIcon12 = 1;
#endif
			giIcon02 = 1;
			giIcon03 = 1;
			giIcon04 = 1;
			giIcon05 = 1;
			giIcon06 = 1;
			giIcon07 = 1;
			giIcon08 = 1;
			giIcon09 = 1;
			giIcon10 = 1;
			giIcon11 = 1;

			memset(&faultsymbols,0,sizeof(faultsymbols));
		}
		else if(no_of_sec == 3)
		{
			gfEop = 10;
			gfEct = 120;
			gfVolt= 36;
			giEngineRpm = 3000;
			gfFuel = 100;
			gfTop = 40;
			gfCot = 140;
			gfEot = 140;
#ifdef DOZER_P_VER
			/*Digital inputs*/
			giIcon01 = 0;
			giIcon12 = 0;
#else
			gfHot = 250;
			gfFIP_RackPosition = 100;
			gfBoostPressure = 5;
			gfEng_battry_volt = 36;

			/*Digital inputs*/
			giIcon01 = 2;
			giIcon12 = 2;
#endif
			giIcon02 = 2;
			giIcon03 = 2;
			giIcon04 = 2;
			giIcon05 = 2;
			giIcon06 = 2;
			giIcon07 = 2;
			giIcon08 = 2;
			giIcon09 = 2;
			giIcon10 = 2;
			giIcon11 = 2;

			memset(&faultsymbols,0xFF,sizeof(faultsymbols));
		}
		else if(no_of_sec >= 10)
		{
			gfEop = 0;
			gfEct = 0;
			gfVolt= 0;
			giEngineRpm = 0;
			gfFuel = 0;
			gfTop = 0;
			gfCot = 0;
			gfEot = 0;
#ifdef DOZER_P_VER
			/*Digital inputs*/
			giIcon01 = 0;
			giIcon12 = 0;
#else
			gfHot = -45;
			gfFIP_RackPosition = 0;
			gfBoostPressure = 0;
			gfEng_battry_volt = 0;

			/*Digital inputs*/
			giIcon01 = 1;
			giIcon12 = 1;
#endif
			giIcon02 = 1;
			giIcon03 = 1;
			giIcon04 = 1;
			giIcon05 = 1;
			giIcon06 = 1;
			giIcon07 = 1;
			giIcon08 = 1;
			giIcon09 = 1;
			giIcon10 = 1;
			giIcon11 = 1;

			memset(&faultsymbols,0,sizeof(faultsymbols));

			vms.flag.gauge_rotation_poweron = 0;
			start_tmr_for_pwron_errs = 1;
			cntr_for_pwron_errs = 0;

			for(uint16_t i = 0; i < 100; i++)
			{
				ReadandProcessallADCchannels();
			}
		}
	}

	if(vms.flag.gauge_rotation_poweron == 0)
	{
		ReadandProcessDigitalIO();
		ReadandProcessallADCchannels();
		//SeatBeltFlow();
		//EngRpmCan = 1200;/*This needs to be commented*/
    	//giEngineRpm = Filter_Engine_Speed_RPM(EngRpmCan);
#ifdef DOZER_P_VER
    	giEngineRpm = EngRpmSensor;
		//giEngineRpm = 2500;
#else
    	giEngineRpm = EngRpmCan;
#endif
		Min_max_gauge_values();
		Indicatefaultsymbols();
    	BUZZER_ENABLE();
	}else{}
	/*****************************************************************/
}

void fl_cpy_drv1_to_drv0(void)
{
    FATFS fs1, fs2;      /* Work area (filesystem object) for logical drives */
    FIL fsrc, fdst;      /* File objects */
//    BYTE buffer[99999];   /* File copy buffer */
    BYTE buffer[513U];   /* File copy buffer */
    FRESULT fr;          /* FatFs function common result code */
    UINT br, bw;         /* File read/write count */


    /* Register work area for each logical drive */
    error = f_mount(&fs1, "1:", 0);
    error = f_mount(&fs2, "2:", 0);

    DelayUs1(30000);
    /* Open source file on the drive 1 */
    error = f_open(&fsrc, "2:RawCanData.csv", FA_READ);

    DelayUs1(30000);
    /* Create destination file on the drive 0 */
    error = f_open(&fdst, "1:RawCanData.csv", FA_WRITE | FA_CREATE_ALWAYS);

    /* Copy source to destination */
    for (;;) {
    	DelayUs1(30000);
    	error = f_read(&fsrc, buffer, sizeof(buffer), &br);  /* Read a chunk of source file */
        if (error || br == 0) break; /* error or eof */
        DelayUs1(30000);
        error = f_write(&fdst, buffer, br, &bw);            /* Write it to the destination file */
        if (error || bw < br) break; /* error or disk full */
    }

    /* Close open files */
    f_close(&fsrc);
    f_close(&fdst);

    /* Unregister work area prior to discard it */
    f_mount(0, "1:", 0);
    f_mount(0, "2:", 0);
}

static void PWM_DRV_Init3PhPwm(void)
{
    uint16_t deadTimeVal;
    pwm_signal_param_t pwmSignal[2];
    uint32_t pwmSourceClockInHz;
    uint32_t pwmFrequencyInHz = APP_DEFAULT_PWM_FREQUENCE;

    pwmSourceClockInHz = PWM_SRC_CLK_FREQ;

    /* Set deadtime count, we set this to about 650ns */
    deadTimeVal = ((uint64_t)pwmSourceClockInHz * 650) / 1000000000;

#ifdef PWM_1_SM012
    pwmSignal[0].pwmChannel       = kPWM_PwmA;
    pwmSignal[0].level            = kPWM_HighTrue;
    pwmSignal[0].dutyCyclePercent = 50; /* 1 percent dutycycle */
    pwmSignal[0].deadtimeValue    = deadTimeVal;
    pwmSignal[0].faultState       = kPWM_PwmFaultState0;

    pwmSignal[1].pwmChannel = kPWM_PwmB;
    pwmSignal[1].level      = kPWM_HighTrue;
    /* Dutycycle field of PWM B does not matter as we are running in PWM A complementary mode */
    pwmSignal[1].dutyCyclePercent = 50;
    pwmSignal[1].deadtimeValue    = deadTimeVal;
    pwmSignal[1].faultState       = kPWM_PwmFaultState0;

    /*********** PWMA_SM0 - phase A, configuration, setup 2 channel as an example ************/
    PWM_SetupPwm(BOARD_PWM_BASEADDR, kPWM_Module_0, pwmSignal, 2, kPWM_SignedCenterAligned, pwmFrequencyInHz,
                 pwmSourceClockInHz);

    /*********** PWMA_SM1 - phase B configuration, setup PWM A channel only ************/
    PWM_SetupPwm(BOARD_PWM_BASEADDR, kPWM_Module_1, pwmSignal, 1, kPWM_SignedCenterAligned, pwmFrequencyInHz,
                 pwmSourceClockInHz);

    /*********** PWMA_SM2 - phase C configuration, setup PWM A channel only ************/
    PWM_SetupPwm(BOARD_PWM_BASEADDR, kPWM_Module_2, pwmSignal, 1, kPWM_SignedCenterAligned, pwmFrequencyInHz,
                 pwmSourceClockInHz);
#endif

#ifdef PWM_4_SM3
    pwmSignal[0].pwmChannel       = kPWM_PwmA;
    pwmSignal[0].level            = kPWM_HighTrue;
    pwmSignal[0].dutyCyclePercent = 50; /* 1 percent dutycycle */
    pwmSignal[0].deadtimeValue    = deadTimeVal;
    pwmSignal[0].faultState       = kPWM_PwmFaultState0;
    /*********** PWMA_SM3 - phase C configuration, setup PWM A channel only ************/
    PWM_SetupPwm(BOARD_PWM_BASEADDR, kPWM_Module_3, pwmSignal, 1, kPWM_SignedCenterAligned, pwmFrequencyInHz,
                 pwmSourceClockInHz);
#endif
}
int PWM_config(void)
{
    /**********04.11.2022***********/
    /* Structure of initialize PWM */
    pwm_config_t pwmConfig;
    pwm_fault_param_t faultConfig;

    //CLOCK_SetDiv(kCLOCK_AhbDiv, 0x2); /* Set AHB PODF to 2, divide by 3 */
    //CLOCK_SetDiv(kCLOCK_IpgDiv, 0x3); /* Set IPG PODF to 3, divede by 4 */

    /* Set the PWM Fault inputs to a low value */
    XBARA_Init(XBARA1);
#ifdef PWM_1_SM012
    XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1Fault0);
    XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1Fault1);
    XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1234Fault2);
    XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1234Fault3);
#endif

#ifdef PWM_4_SM3
    XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm4Fault0);
    XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm4Fault1);
    XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1234Fault2);
    XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1234Fault3);
#endif
    PRINTF("FlexPWM driver example\n");

    /*
     * pwmConfig.enableDebugMode = false;
     * pwmConfig.enableWait = false;
     * pwmConfig.reloadSelect = kPWM_LocalReload;
     * pwmConfig.clockSource = kPWM_BusClock;
     * pwmConfig.prescale = kPWM_Prescale_Divide_1;
     * pwmConfig.initializationControl = kPWM_Initialize_LocalSync;
     * pwmConfig.forceTrigger = kPWM_Force_Local;
     * pwmConfig.reloadFrequency = kPWM_LoadEveryOportunity;
     * pwmConfig.reloadLogic = kPWM_ReloadImmediate;
     * pwmConfig.pairOperation = kPWM_Independent;
     */
    PWM_GetDefaultConfig(&pwmConfig);

#ifdef DEMO_PWM_CLOCK_DEVIDER
    pwmConfig.prescale = DEMO_PWM_CLOCK_DEVIDER;
#endif

    /* Use full cycle reload */
    pwmConfig.reloadLogic = kPWM_ReloadPwmFullCycle;
    /* PWM A & PWM B form a complementary PWM pair */
    pwmConfig.pairOperation   = kPWM_ComplementaryPwmA;
    pwmConfig.enableDebugMode = true;
#ifdef PWM_1_SM012
    /* Initialize submodule 0 */
    if (PWM_Init(BOARD_PWM_BASEADDR, kPWM_Module_0, &pwmConfig) == kStatus_Fail)
    {
        PRINTF("PWM initialization failed\n");
        return 1;
    }

    /* Initialize submodule 1, make it use same counter clock as submodule 0. */
    pwmConfig.clockSource           = kPWM_Submodule0Clock;
    pwmConfig.prescale              = kPWM_Prescale_Divide_1;
    pwmConfig.initializationControl = kPWM_Initialize_MasterSync;
    if (PWM_Init(BOARD_PWM_BASEADDR, kPWM_Module_1, &pwmConfig) == kStatus_Fail)
    {
        PRINTF("PWM initialization failed\n");
        return 1;
    }

    /* Initialize submodule 2 the same way as submodule 1 */
    if (PWM_Init(BOARD_PWM_BASEADDR, kPWM_Module_2, &pwmConfig) == kStatus_Fail)
    {
        PRINTF("PWM initialization failed\n");
        return 1;
    }
#endif

#ifdef PWM_4_SM3
    /* Initialize submodule 3 the same way as submodule 1 */
    if (PWM_Init(BOARD_PWM_BASEADDR, kPWM_Module_3, &pwmConfig) == kStatus_Fail)
    {
        PRINTF("PWM initialization failed\n");
        return 1;
    }
#endif

    /*
     *   config->faultClearingMode = kPWM_Automatic;
     *   config->faultLevel = false;
     *   config->enableCombinationalPath = true;
     *   config->recoverMode = kPWM_NoRecovery;
     */
    PWM_FaultDefaultConfig(&faultConfig);

#ifdef DEMO_PWM_FAULT_LEVEL
    faultConfig.faultLevel = DEMO_PWM_FAULT_LEVEL;
#endif

    /* Sets up the PWM fault protection */
#ifdef PWM_1_SM012
    PWM_SetupFaults(BOARD_PWM_BASEADDR, kPWM_Fault_0, &faultConfig);
    PWM_SetupFaults(BOARD_PWM_BASEADDR, kPWM_Fault_1, &faultConfig);
    PWM_SetupFaults(BOARD_PWM_BASEADDR, kPWM_Fault_2, &faultConfig);
#endif

#ifdef PWM_4_SM3
    PWM_SetupFaults(BOARD_PWM_BASEADDR, kPWM_Fault_3, &faultConfig);
#endif
    /* Set PWM fault disable mapping for submodule 0/1/2 */
#ifdef PWM_1_SM012
    PWM_SetupFaultDisableMap(BOARD_PWM_BASEADDR, kPWM_Module_0, kPWM_PwmA, kPWM_faultchannel_0,
                             kPWM_FaultDisable_0 | kPWM_FaultDisable_1 | kPWM_FaultDisable_2 | kPWM_FaultDisable_3);
    PWM_SetupFaultDisableMap(BOARD_PWM_BASEADDR, kPWM_Module_1, kPWM_PwmA, kPWM_faultchannel_0,
                             kPWM_FaultDisable_0 | kPWM_FaultDisable_1 | kPWM_FaultDisable_2 | kPWM_FaultDisable_3);
    PWM_SetupFaultDisableMap(BOARD_PWM_BASEADDR, kPWM_Module_2, kPWM_PwmA, kPWM_faultchannel_0,
                             kPWM_FaultDisable_0 | kPWM_FaultDisable_1 | kPWM_FaultDisable_2 | kPWM_FaultDisable_3);
#endif

#ifdef PWM_4_SM3
    PWM_SetupFaultDisableMap(BOARD_PWM_BASEADDR, kPWM_Module_3, kPWM_PwmA, kPWM_faultchannel_0,
                                kPWM_FaultDisable_0 | kPWM_FaultDisable_1 | kPWM_FaultDisable_2 | kPWM_FaultDisable_3);
#endif
    /* Call the init function with demo configuration */
    PWM_DRV_Init3PhPwm();

    /* Set the load okay bit for all submodules to load registers from their buffer */
    PWM_SetPwmLdok(BOARD_PWM_BASEADDR, kPWM_Control_Module_0 | kPWM_Control_Module_1 | kPWM_Control_Module_2 | kPWM_Control_Module_3, true);

    /* Start the PWM generation from Submodules 0, 1 and 2 */
    PWM_StartTimer(BOARD_PWM_BASEADDR, kPWM_Control_Module_0 | kPWM_Control_Module_1 | kPWM_Control_Module_2 | kPWM_Control_Module_3);
}

void generate_pwm(uint16_t duty_cycle)
{
    /* Delay at least 100 PWM periods. */
    //SDK_DelayAtLeastUs((1000000U / APP_DEFAULT_PWM_FREQUENCE) * 100, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);


//        pwmVal = pwmVal + 4;
//
//        /* Reset the duty cycle percentage */
//        if (pwmVal > 100)
//        {
//            pwmVal = 4;
//        }

    /* Update duty cycles for all 3 PWM signals */
#ifdef PWM_1_SM012
    PWM_UpdatePwmDutycycle(BOARD_PWM_BASEADDR, kPWM_Module_0, kPWM_PwmA, kPWM_SignedCenterAligned, pwmVal);
    PWM_UpdatePwmDutycycle(BOARD_PWM_BASEADDR, kPWM_Module_1, kPWM_PwmA, kPWM_SignedCenterAligned, (pwmVal >> 1));
    PWM_UpdatePwmDutycycle(BOARD_PWM_BASEADDR, kPWM_Module_2, kPWM_PwmA, kPWM_SignedCenterAligned, (pwmVal >> 2));
#endif

#ifdef PWM_4_SM3
    //PWM_UpdatePwmDutycycle(BOARD_PWM_BASEADDR, kPWM_Module_3, kPWM_PwmA, kPWM_SignedCenterAligned, (pwmVal));
    PWM_UpdatePwmDutycycle(BOARD_PWM_BASEADDR, kPWM_Module_3, kPWM_PwmA, kPWM_SignedCenterAligned, (duty_cycle));
#endif
    /* Set the load okay bit for all submodules to load registers from their buffer */
   //PWM_SetPwmLdok(BOARD_PWM_BASEADDR, kPWM_Control_Module_0 | kPWM_Control_Module_1 | kPWM_Control_Module_2 | kPWM_Control_Module_3, true);

    PWM_SetPwmLdok(BOARD_PWM_BASEADDR,kPWM_Control_Module_3, true);
}

void set_brightness(uint8_t brightness_perc)
{
	switch(brightness_perc)
	{
	case 0: duty_cycle = 15;//%
			generate_pwm(duty_cycle);
		break;
	case 10:duty_cycle = 15;//%
			generate_pwm(duty_cycle);
		break;
	case 20:duty_cycle = 20;//%
			generate_pwm(duty_cycle);
		break;
	case 30:duty_cycle = 30;//%
			generate_pwm(duty_cycle);
		break;
	case 40:duty_cycle = 40;//%
			generate_pwm(duty_cycle);
		break;
	case 50:duty_cycle = 50;//%
			generate_pwm(duty_cycle);
		break;
	case 60:duty_cycle = 60;//%
			generate_pwm(duty_cycle);
		break;
	case 70:duty_cycle = 70;//%
			generate_pwm(duty_cycle);
		break;
	case 80:duty_cycle = 80;//%
			generate_pwm(duty_cycle);
		break;
	case 90:duty_cycle = 90;//%
			generate_pwm(duty_cycle);
		break;
	case 100:duty_cycle = 95;//%
			generate_pwm(duty_cycle);
		break;

	default:
		break;
	}
}

void write_value_to_Pendrv(Uint32 hex_value,uint8_t *seperator)
{
	int8_t i = 0;
	uint8_t j=0,no_of_byte = 0;
	uint8_t temp_buff[10] = {0};

	num_val = hex2ascii(hex_value);

	for(i=num_val;i>0;)
	{
		temp_buff[j++] = conv_array[i-1];
		if(num_val==1)
		{
			break;
		}
		else
		temp_buff[j++] = conv_array[i-2];
		i=i-2;
	}
#ifdef PENDRIVE_USED
	f_write(&g_fileObject1,temp_buff, num_val,&bytesWritten);
	//f_sync(&g_fileObject1);
	datapt+=num_val;
	if(seperator!=0)
	{
		f_write(&g_fileObject1,seperator, 1,&bytesWritten);
		//f_sync(&g_fileObject1);
		datapt+=1;
	}
#else
    transmit_serial(temp_buff);
	if(seperator!=0)
	{
		transmit_serial(seperator);
	}
#endif
}

void write_string_to_Pendrv(uint8_t *pstr,uint8_t *seperator)
{
#ifdef PENDRIVE_USED
    if(*pstr!='\0')
    {
		f_write(&g_fileObject1,pstr, strlen(pstr),&bytesWritten);
		//f_sync(&g_fileObject1);
		datapt+=strlen(pstr);
		if(seperator!=0)
		{
			f_write(&g_fileObject1,seperator, 1,&bytesWritten);
			//f_sync(&g_fileObject1);
			datapt+=1;
		}
    }
    else
    {
    	f_write(&g_fileObject1,"\0", strlen("\0"),&bytesWritten);
		//f_sync(&g_fileObject1);
		datapt+=strlen("\0");
		if(seperator!=0)
		{
			f_write(&g_fileObject1,seperator, 1,&bytesWritten);
			//f_sync(&g_fileObject1);
			datapt+=1;
		}
    }
#else
    transmit_serial(pstr);
    transmit_serial(seperator);
#endif
}

/*** New Faultlogging function to winbond memory**/
void Fault_logging(void)
{
	memset(&Errorlog_frame, 0, sizeof(Errorlog_frame));

	unsigned long temp_spn_fmi = 0, spn = 0;
	uint16_t fmi = 0;

	bool spnfmi_valid_or_not = 0;

	for(uint8_t i=0; i < DM1_SA; i++)
	{
		 for(uint8_t j=0; j < NO_OF_DM1_MESSAGES; j++)
		 {
			 temp_spn_fmi = strDM1Log[i][j].SpnFmi;
			 spn		  = (temp_spn_fmi & 0x7FFFF);
			 fmi          = (temp_spn_fmi>>19);

			 spnfmi_valid_or_not = Find_Valid_spnfmi(spn,fmi);

			 if((spnfmi_valid_or_not == 1) && (strDM1Log[i][j].Status!=strDM1LogPrev[i][j].Status) && spn!=0x7FFFF && spn!=0xFFFF && spn!=0x0000)
			 {
				ReadRTC();
				Errorlog_frame.EL_Date     	= strDateTime.Date;
				Errorlog_frame.EL_Month    	= strDateTime.Month;
				Errorlog_frame.EL_Year     	= (strDateTime.Year - 2000);
				Errorlog_frame.EL_Hour     	= strDateTime.Hour;
				Errorlog_frame.EL_Minute   	= strDateTime.Minute;
				Errorlog_frame.EL_Seconds   = strDateTime.Second ;
				Errorlog_frame.EL_Merideian = strDateTime.Meredian;

#ifdef DOZER_P_VER
				Errorlog_frame.EL_Engine_Speed 		= giEngineRpm;
				Errorlog_frame.EL_COT 				= gfCot * 100;
				Errorlog_frame.EL_TOP 				= gfTop * 100;
				Errorlog_frame.EL_EngineHoursRunHrs	= EngineHourMeter;
				Errorlog_frame.EL_EOP 				= gfEop * 100;
				Errorlog_frame.EL_Battery_V 		= gfVolt * 100;
				Errorlog_frame.EL_ECT 				= gfEct * 100;
				Errorlog_frame.EL_EOT 				= gfEot * 100;
				Errorlog_frame.EL_Fuel_Percentage	= gfFuel * 100;
#else
				Errorlog_frame.EL_Engine_Speed 		= giEngineRpm;
				Errorlog_frame.EL_EOP 				= gfEop * 100;
				Errorlog_frame.EL_EOT 				= gfEot * 100;
				Errorlog_frame.EL_ECT 				= gfEct * 100;
				Errorlog_frame.EL_EngineHoursRunHrs	= EngineHourMeter;
				if(gfEng_battry_volt == 0 && gfVolt != 0)
				{
					Errorlog_frame.EL_Battery_V 		= gfVolt * 100;
				}
				else
				{
					Errorlog_frame.EL_Battery_V 		= gfEng_battry_volt * 100;
				}
				Errorlog_frame.EL_FIP_rack_pos 		= gfFIP_RackPosition * 100;
				Errorlog_frame.EL_Fuel_Percentage	= gfFuel * 100;
				Errorlog_frame.EL_COT 				= gfCot * 100;
				Errorlog_frame.EL_TOP 				= gfTop * 100;
				Errorlog_frame.EL_HOT 				= gfHot * 100;
#endif
				temp_spn_fmi=strDM1Log[i][j].SpnFmi;

				spn=(temp_spn_fmi & 0x7FFFF);
				fmi=(temp_spn_fmi>>19);

				/**********reassign the original source address for display*****/
				Errorlog_frame.EL_Source_Addr	= Re_asgn_Org_srs_addr_frm_dm1_array(i,j);

				//Errorlog_frame.EL_Source_Addr 	= strDM1Log[i][j].SourceAddress;
				Errorlog_frame.EL_Plug_ID 		= strDM1Log[i][j].PlugId;
				Errorlog_frame.EL_SPN 			= spn;
				Errorlog_frame.EL_FMI 			= fmi;
				Errorlog_frame.EL_Occurance_cnt = strDM1Log[i][j].OccuranceCount;
				Errorlog_frame.EL_Err_status 	= strDM1Log[i][j].Status;
				Errorlog_frame.EL_Lamp_status 	= 1;

				/****RTC*****/
				MemoryWriteVariable(PRIMARY_MEMORY, EL_DATE_OFFSET,         Errorlog_frame.EL_Date       ,1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_MONTH_OFFSET,        Errorlog_frame.EL_Month      ,1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_YEAR_OFFSET,         Errorlog_frame.EL_Year       ,1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_HOUR_OFFSET,         Errorlog_frame.EL_Hour       ,1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_MINUTE_OFFSET,       Errorlog_frame.EL_Minute     ,1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_SECOND_OFFSET,       Errorlog_frame.EL_Seconds    ,1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_MERIDIAN_OFFSET,     Errorlog_frame.EL_Merideian  ,1);
#ifdef DOZER_P_VER
				/****parameters*****/
				MemoryWriteVariable(PRIMARY_MEMORY, EL_ENGINE_RPM_OFFSET, 	Errorlog_frame.EL_Engine_Speed , 		2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_COT_OFFSET, 			Errorlog_frame.EL_COT, 					2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_TOP_OFFSET, 			Errorlog_frame.EL_TOP, 					2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_ENGINE_HRS_OFFSET, 	Errorlog_frame.EL_EngineHoursRunHrs,	4);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_EOP_OFFSET, 			Errorlog_frame.EL_EOP, 					2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_BATTERY_OFFSET, 		Errorlog_frame.EL_Battery_V, 			2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_ECT_OFFSET,			Errorlog_frame.EL_ECT , 				2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_EOT_OFFSET, 			Errorlog_frame.EL_EOT, 					2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_FUEL_PERCENTAGE_OFFSET,Errorlog_frame.EL_Fuel_Percentage, 	2);
#else
				/****parameters*****/
				MemoryWriteVariable(PRIMARY_MEMORY, EL_ENGINE_RPM_OFFSET, 	Errorlog_frame.EL_Engine_Speed , 		2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_EOP_OFFSET, 			Errorlog_frame.EL_EOP, 					2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_EOT_OFFSET, 			Errorlog_frame.EL_EOT, 					2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_ECT_OFFSET,			Errorlog_frame.EL_ECT , 				2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_ENGINE_HRS_OFFSET, 	Errorlog_frame.EL_EngineHoursRunHrs,	4);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_BATTERY_OFFSET, 		Errorlog_frame.EL_Battery_V, 			2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_FIP_RACK_POS_OFFSET, Errorlog_frame.EL_FIP_rack_pos, 		2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_FUEL_PERCENTAGE_OFFSET,Errorlog_frame.EL_Fuel_Percentage, 	2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_COT_OFFSET, 			Errorlog_frame.EL_COT, 					2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_TOP_OFFSET, 			Errorlog_frame.EL_TOP, 					2);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_HOT_OFFSET,			Errorlog_frame.EL_HOT,					2);
#endif
				/*DM1*/
				MemoryWriteVariable(PRIMARY_MEMORY, EL_SOURCE_ADDRESS_OFFSET, Errorlog_frame.EL_Source_Addr, 		1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_PLUG_ID_OFFSET,		  Errorlog_frame.EL_Plug_ID,			1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_SPN_OFFSET, 			  Errorlog_frame.EL_SPN, 				3);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_FMI_OFFSET, 			  Errorlog_frame.EL_FMI, 				1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_OCCURANCE_COUNT_OFFSET,Errorlog_frame.EL_Occurance_cnt, 	1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_ERROR_STATUS_OFFSET,   Errorlog_frame.EL_Err_status, 		1);
				MemoryWriteVariable(PRIMARY_MEMORY, EL_LAMP_STATUS_OFFSET, 	  Errorlog_frame.EL_Lamp_status, 		1);

				Store_one_errorlog_frame_to_winbond_table();

				strDM1LogPrev[i][j].Status = strDM1Log[i][j].Status;
			 }
			 else{}
		 }
	}
}

/*** New datalogging function to winbond memory**/
void Data_logging(void)
{
	memset(&Datalog_frame, 0, sizeof(Datalog_frame));

	ReadRTC();
	Datalog_frame.DL_Date     = strDateTime.Date;
	Datalog_frame.DL_Month    = strDateTime.Month;
	Datalog_frame.DL_Year     = (strDateTime.Year - 2000);
	Datalog_frame.DL_Hour     = strDateTime.Hour;
	Datalog_frame.DL_Minute   = strDateTime.Minute;
	Datalog_frame.DL_Seconds  = strDateTime.Second ;
	Datalog_frame.DL_Merideian= strDateTime.Meredian;

#ifdef DOZER_P_VER
	Datalog_frame.DL_Engine_Speed 	= giEngineRpm;
	Datalog_frame.DL_COT 			= gfCot * 100;
	Datalog_frame.DL_TOP 			= gfTop * 100;
	Datalog_frame.DL_EngineHoursRunHrs= EngineHourMeter;
	Datalog_frame.DL_EOP 			= gfEop * 100;
	Datalog_frame.DL_Battery_V 		= gfVolt * 100;
	Datalog_frame.DL_ECT 			= gfEct * 100;
	Datalog_frame.DL_EOT 			= gfEot * 100;
	Datalog_frame.DL_Fuel_Percentage= gfFuel * 100;
#else
	Datalog_frame.DL_Engine_Speed 	= giEngineRpm;
	Datalog_frame.DL_EOP 			= gfEop * 100;
	Datalog_frame.DL_EOT 			= gfEot * 100;
	Datalog_frame.DL_ECT 			= gfEct * 100;
	Datalog_frame.DL_EngineHoursRunHrs= EngineHourMeter;
	if(gfEng_battry_volt == 0 && gfVolt != 0)
	{
		Datalog_frame.DL_Battery_V 		= gfVolt * 100;
	}
	else
	{
		Datalog_frame.DL_Battery_V 		= gfEng_battry_volt * 100;
	}
	Datalog_frame.DL_FIP_rack_pos 	= gfFIP_RackPosition * 100;
	Datalog_frame.DL_Fuel_Percentage= gfFuel * 100;
	Datalog_frame.DL_COT 			= gfCot * 100;
	Datalog_frame.DL_TOP 			= gfTop * 100;
	Datalog_frame.DL_HOT 			= gfHot * 100;
#endif
    /****RTC*****/
    MemoryWriteVariable(PRIMARY_MEMORY, DL_DATE_OFFSET,         Datalog_frame.DL_Date       ,1);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_MONTH_OFFSET,        Datalog_frame.DL_Month      ,1);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_YEAR_OFFSET,         Datalog_frame.DL_Year       ,1);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_HOUR_OFFSET,         Datalog_frame.DL_Hour       ,1);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_MINUTE_OFFSET,       Datalog_frame.DL_Minute     ,1);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_SECOND_OFFSET,       Datalog_frame.DL_Seconds    ,1);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_MERIDIAN_OFFSET,     Datalog_frame.DL_Merideian  ,1);
#ifdef DOZER_P_VER
    /****parameters*****/
    MemoryWriteVariable(PRIMARY_MEMORY, DL_ENGINE_RPM_OFFSET, 	Datalog_frame.DL_Engine_Speed, 		2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_COT_OFFSET, 			Datalog_frame.DL_COT, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_TOP_OFFSET, 			Datalog_frame.DL_TOP, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_ENGINE_HRS_OFFSET, 	Datalog_frame.DL_EngineHoursRunHrs, 4);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_EOP_OFFSET, 			Datalog_frame.DL_EOP, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_BATTERY_OFFSET, 		Datalog_frame.DL_Battery_V, 		2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_ECT_OFFSET,			Datalog_frame.DL_ECT, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_EOT_OFFSET, 			Datalog_frame.DL_EOT, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_FUEL_PERCENTAGE_OFFSET,Datalog_frame.DL_Fuel_Percentage, 2);
#else
    /****parameters*****/
    MemoryWriteVariable(PRIMARY_MEMORY, DL_ENGINE_RPM_OFFSET, 	Datalog_frame.DL_Engine_Speed, 		2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_EOP_OFFSET, 			Datalog_frame.DL_EOP, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_EOT_OFFSET, 			Datalog_frame.DL_EOT, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_ECT_OFFSET,			Datalog_frame.DL_ECT, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_ENGINE_HRS_OFFSET, 	Datalog_frame.DL_EngineHoursRunHrs, 4);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_BATTERY_OFFSET, 		Datalog_frame.DL_Battery_V, 		2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_FIP_RACK_POS_OFFSET, Datalog_frame.DL_FIP_rack_pos,		2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_FUEL_PERCENTAGE_OFFSET,Datalog_frame.DL_Fuel_Percentage, 2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_COT_OFFSET, 			Datalog_frame.DL_COT, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_TOP_OFFSET, 			Datalog_frame.DL_TOP, 				2);
    MemoryWriteVariable(PRIMARY_MEMORY, DL_HOT_OFFSET,			Datalog_frame.DL_HOT,				2);
#endif
    Store_one_datalog_frame_to_winbond_table();
}

/***Shiftwise working hours logging function to winbond memory**/
void Swwh_logging(bool Shift_start,bool Shift_end,uint8_t ShiftNo,uint16_t Working_Hours)
{
	memset(&Swwhlog_frame, 0, sizeof(Swwhlog_frame));

	//ReadRTC();
	if(Shift_start == 1)
	{
		Swwhlog_frame.ShiftNo  = ShiftNo;
		Swwhlog_frame.ShiftStartDD  = strDateTime.Date;
		Swwhlog_frame.ShiftStartMM  = strDateTime.Month;
		Swwhlog_frame.ShiftStartYY  = (strDateTime.Year - 2000);
		Swwhlog_frame.ShiftStartHH  = strDateTime.Hour;
		Swwhlog_frame.ShiftStartMIN = strDateTime.Minute;
		Swwhlog_frame.ShiftStartSS  = strDateTime.Second ;
		Swwhlog_frame.ShiftStartMER = strDateTime.Meredian;

	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_NO,         Swwhlog_frame.ShiftNo       ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_START_DD,   Swwhlog_frame.ShiftStartDD  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_START_MM,   Swwhlog_frame.ShiftStartMM  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_START_YY,   Swwhlog_frame.ShiftStartYY  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_START_HH,   Swwhlog_frame.ShiftStartHH  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_START_MIN,  Swwhlog_frame.ShiftStartMIN ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_START_SS,   Swwhlog_frame.ShiftStartSS  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_START_MER,  Swwhlog_frame.ShiftStartMER ,1);
	}
	else if(Shift_end == 1)
	{
		Swwhlog_frame.ShiftCloseDD  = strDateTime.Date;
		Swwhlog_frame.ShiftCloseMM  = strDateTime.Month;
		Swwhlog_frame.ShiftCloseYY  = (strDateTime.Year - 2000);
		Swwhlog_frame.ShiftCloseHH  = strDateTime.Hour;
		Swwhlog_frame.ShiftCloseMIN = strDateTime.Minute;
		Swwhlog_frame.ShiftCloseSS  = strDateTime.Second ;
		Swwhlog_frame.ShiftCloseMER = strDateTime.Meredian;

		Swwhlog_frame.ShiftWorkingHrs = Working_Hours;

	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_CLOSE_DD,   Swwhlog_frame.ShiftCloseDD  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_CLOSE_MM,   Swwhlog_frame.ShiftCloseMM  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_CLOSE_YY,   Swwhlog_frame.ShiftCloseYY  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_CLOSE_HH,   Swwhlog_frame.ShiftCloseHH  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_CLOSE_MIN,  Swwhlog_frame.ShiftCloseMIN ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_CLOSE_SS,   Swwhlog_frame.ShiftCloseSS  ,1);
	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_CLOSE_MER,  Swwhlog_frame.ShiftCloseMER ,1);

	    MemoryWriteVariable(PRIMARY_MEMORY, SHIFT_WORKING_HRS,  Swwhlog_frame.ShiftWorkingHrs ,2);

	    Store_one_swwhlog_frame_to_winbond_table();
	}
	else{}
}
void Decode_errorlog_array(void)
{
	memset(&Errorlog_frame, 0, sizeof(Errorlog_frame));

	Errorlog_frame.EL_Date  = errorlog_array[0];
	Errorlog_frame.EL_Month = errorlog_array[1];
	Errorlog_frame.EL_Year  = errorlog_array[2];
	Errorlog_frame.EL_Hour  = errorlog_array[3];
	Errorlog_frame.EL_Minute= errorlog_array[4];
	Errorlog_frame.EL_Seconds=errorlog_array[5];
	Errorlog_frame.EL_Merideian=errorlog_array[6];

#ifdef DOZER_P_VER
	Errorlog_frame.EL_Engine_Speed = errorlog_array[8];
	Errorlog_frame.EL_Engine_Speed = (Errorlog_frame.EL_Engine_Speed << 8) | errorlog_array[7];

	Errorlog_frame.EL_COT = errorlog_array[10];
	Errorlog_frame.EL_COT = (Errorlog_frame.EL_COT << 8) | errorlog_array[9];

	Errorlog_frame.EL_TOP = errorlog_array[12];
	Errorlog_frame.EL_TOP = (Errorlog_frame.EL_TOP << 8) |  errorlog_array[11];

	Errorlog_frame.EL_EngineHoursRunHrs = errorlog_array[16];
	Errorlog_frame.EL_EngineHoursRunHrs = (Errorlog_frame.EL_EngineHoursRunHrs << 8) | errorlog_array[15];
	Errorlog_frame.EL_EngineHoursRunHrs = (Errorlog_frame.EL_EngineHoursRunHrs << 8) | errorlog_array[14];
	Errorlog_frame.EL_EngineHoursRunHrs = (Errorlog_frame.EL_EngineHoursRunHrs << 8) | errorlog_array[13];

	Errorlog_frame.EL_EOP = errorlog_array[18];
	Errorlog_frame.EL_EOP = (Errorlog_frame.EL_EOP << 8) | errorlog_array[17];

	Errorlog_frame.EL_Battery_V = errorlog_array[20];
	Errorlog_frame.EL_Battery_V = (Errorlog_frame.EL_Battery_V << 8) | errorlog_array[19];

	Errorlog_frame.EL_ECT = errorlog_array[22];
	Errorlog_frame.EL_ECT = (Errorlog_frame.EL_ECT << 8) | errorlog_array[21];

	Errorlog_frame.EL_EOT = errorlog_array[24];
	Errorlog_frame.EL_EOT = (Errorlog_frame.EL_EOT << 8) | errorlog_array[23];

	Errorlog_frame.EL_Fuel_Percentage = errorlog_array[26];
	Errorlog_frame.EL_Fuel_Percentage = (Errorlog_frame.EL_Fuel_Percentage << 8) | errorlog_array[25];
#else
	Errorlog_frame.EL_Engine_Speed = errorlog_array[8];
	Errorlog_frame.EL_Engine_Speed = (Errorlog_frame.EL_Engine_Speed << 8) | errorlog_array[7];

	Errorlog_frame.EL_EOP = errorlog_array[10];
	Errorlog_frame.EL_EOP = (Errorlog_frame.EL_EOP << 8) | errorlog_array[9];

	Errorlog_frame.EL_EOT = errorlog_array[12];
	Errorlog_frame.EL_EOT = (Errorlog_frame.EL_EOT << 8) | errorlog_array[11];

	Errorlog_frame.EL_ECT = errorlog_array[14];
	Errorlog_frame.EL_ECT = (Errorlog_frame.EL_ECT << 8) | errorlog_array[13];

	Errorlog_frame.EL_EngineHoursRunHrs = errorlog_array[18];
	Errorlog_frame.EL_EngineHoursRunHrs = (Errorlog_frame.EL_EngineHoursRunHrs << 8) | errorlog_array[17];
	Errorlog_frame.EL_EngineHoursRunHrs = (Errorlog_frame.EL_EngineHoursRunHrs << 8) | errorlog_array[16];
	Errorlog_frame.EL_EngineHoursRunHrs = (Errorlog_frame.EL_EngineHoursRunHrs << 8) | errorlog_array[15];

	Errorlog_frame.EL_Battery_V = errorlog_array[20];
	Errorlog_frame.EL_Battery_V = (Errorlog_frame.EL_Battery_V << 8) | errorlog_array[19];

	Errorlog_frame.EL_FIP_rack_pos = errorlog_array[22];
	Errorlog_frame.EL_FIP_rack_pos = (Errorlog_frame.EL_FIP_rack_pos << 8) | errorlog_array[21];

	Errorlog_frame.EL_Fuel_Percentage = errorlog_array[24];
	Errorlog_frame.EL_Fuel_Percentage = (Errorlog_frame.EL_Fuel_Percentage << 8) | errorlog_array[23];

	Errorlog_frame.EL_COT = errorlog_array[26];
	Errorlog_frame.EL_COT = (Errorlog_frame.EL_COT << 8) | errorlog_array[25];

	Errorlog_frame.EL_TOP = errorlog_array[28];
	Errorlog_frame.EL_TOP = (Errorlog_frame.EL_TOP << 8) |  errorlog_array[27];

	Errorlog_frame.EL_HOT = errorlog_array[30];
	Errorlog_frame.EL_HOT = (Errorlog_frame.EL_HOT << 8) | errorlog_array[29];
#endif

	Errorlog_frame.EL_Source_Addr = errorlog_array[31];
	Errorlog_frame.EL_Plug_ID = errorlog_array[32];
	Errorlog_frame.EL_SPN = errorlog_array[35];
	Errorlog_frame.EL_SPN = (Errorlog_frame.EL_SPN << 8) | errorlog_array[34];
	Errorlog_frame.EL_SPN = (Errorlog_frame.EL_SPN << 8) | errorlog_array[33];
	Errorlog_frame.EL_FMI = errorlog_array[36];
	Errorlog_frame.EL_Occurance_cnt = errorlog_array[37];
	Errorlog_frame.EL_Err_status = errorlog_array[38];
	Errorlog_frame.EL_Lamp_status = errorlog_array[39];

    write_one_errorlog_frame_to_pendrive(Errorlog_frame);
}
void Decode_datalog_array(void)
{
	memset(&Datalog_frame, 0, sizeof(Datalog_frame));

	Datalog_frame.DL_Date  = datalog_array[0];
	Datalog_frame.DL_Month = datalog_array[1];
	Datalog_frame.DL_Year  = datalog_array[2];
	Datalog_frame.DL_Hour  = datalog_array[3];
	Datalog_frame.DL_Minute= datalog_array[4];
	Datalog_frame.DL_Seconds=datalog_array[5];
	Datalog_frame.DL_Merideian=datalog_array[6];
#ifdef DOZER_P_VER
	Datalog_frame.DL_Engine_Speed = datalog_array[8];
	Datalog_frame.DL_Engine_Speed = (Datalog_frame.DL_Engine_Speed << 8) | datalog_array[7];

	Datalog_frame.DL_COT = datalog_array[10];
	Datalog_frame.DL_COT = (Datalog_frame.DL_COT << 8) | datalog_array[9];

	Datalog_frame.DL_TOP = datalog_array[12];
	Datalog_frame.DL_TOP = (Datalog_frame.DL_TOP << 8) |  datalog_array[11];

	Datalog_frame.DL_EngineHoursRunHrs = datalog_array[16];
	Datalog_frame.DL_EngineHoursRunHrs = (Datalog_frame.DL_EngineHoursRunHrs << 8) | datalog_array[15];
	Datalog_frame.DL_EngineHoursRunHrs = (Datalog_frame.DL_EngineHoursRunHrs << 8) | datalog_array[14];
	Datalog_frame.DL_EngineHoursRunHrs = (Datalog_frame.DL_EngineHoursRunHrs << 8) | datalog_array[13];

	Datalog_frame.DL_EOP = datalog_array[18];
	Datalog_frame.DL_EOP = (Datalog_frame.DL_EOP << 8) | datalog_array[17];

	Datalog_frame.DL_Battery_V = datalog_array[20];
	Datalog_frame.DL_Battery_V = (Datalog_frame.DL_Battery_V << 8) | datalog_array[19];

	Datalog_frame.DL_ECT = datalog_array[22];
	Datalog_frame.DL_ECT = (Datalog_frame.DL_ECT << 8) | datalog_array[21];

	Datalog_frame.DL_EOT = datalog_array[24];
	Datalog_frame.DL_EOT = (Datalog_frame.DL_EOT << 8) | datalog_array[23];

	Datalog_frame.DL_Fuel_Percentage = datalog_array[26];
	Datalog_frame.DL_Fuel_Percentage = (Datalog_frame.DL_Fuel_Percentage << 8) | datalog_array[25];
#else
	Datalog_frame.DL_Engine_Speed = datalog_array[8];
	Datalog_frame.DL_Engine_Speed = (Datalog_frame.DL_Engine_Speed << 8) | datalog_array[7];

	Datalog_frame.DL_EOP = datalog_array[10];
	Datalog_frame.DL_EOP = (Datalog_frame.DL_EOP << 8) | datalog_array[9];

	Datalog_frame.DL_EOT = datalog_array[12];
	Datalog_frame.DL_EOT = (Datalog_frame.DL_EOT << 8) | datalog_array[11];

	Datalog_frame.DL_ECT = datalog_array[14];
	Datalog_frame.DL_ECT = (Datalog_frame.DL_ECT << 8) | datalog_array[13];

	Datalog_frame.DL_EngineHoursRunHrs = datalog_array[18];
	Datalog_frame.DL_EngineHoursRunHrs = (Datalog_frame.DL_EngineHoursRunHrs << 8) | datalog_array[17];
	Datalog_frame.DL_EngineHoursRunHrs = (Datalog_frame.DL_EngineHoursRunHrs << 8) | datalog_array[16];
	Datalog_frame.DL_EngineHoursRunHrs = (Datalog_frame.DL_EngineHoursRunHrs << 8) | datalog_array[15];

	Datalog_frame.DL_Battery_V = datalog_array[20];
	Datalog_frame.DL_Battery_V = (Datalog_frame.DL_Battery_V << 8) | datalog_array[19];

	Datalog_frame.DL_FIP_rack_pos = datalog_array[22];
	Datalog_frame.DL_FIP_rack_pos = (Datalog_frame.DL_FIP_rack_pos << 8) | datalog_array[21];

	Datalog_frame.DL_Fuel_Percentage = datalog_array[24];
	Datalog_frame.DL_Fuel_Percentage = (Datalog_frame.DL_Fuel_Percentage << 8) | datalog_array[23];

	Datalog_frame.DL_COT = datalog_array[26];
	Datalog_frame.DL_COT = (Datalog_frame.DL_COT << 8) | datalog_array[25];

	Datalog_frame.DL_TOP = datalog_array[28];
	Datalog_frame.DL_TOP = (Datalog_frame.DL_TOP << 8) |  datalog_array[27];

	Datalog_frame.DL_HOT = datalog_array[30];
	Datalog_frame.DL_HOT = (Datalog_frame.DL_HOT << 8) | datalog_array[29];
#endif
    write_one_datalog_frame_to_pendrive(Datalog_frame);
}

void Decode_swwhlog_array(void)
{
	memset(&Swwhlog_frame, 0, sizeof(Swwhlog_frame));

	Swwhlog_frame.ShiftNo  		= swwhlog_array[0];
	Swwhlog_frame.ShiftStartDD 	= swwhlog_array[1];
	Swwhlog_frame.ShiftStartMM  = swwhlog_array[2];
	Swwhlog_frame.ShiftStartYY  = swwhlog_array[3];
	Swwhlog_frame.ShiftStartHH	= swwhlog_array[4];
	Swwhlog_frame.ShiftStartMIN	= swwhlog_array[5];
	Swwhlog_frame.ShiftStartSS	= swwhlog_array[6];
	Swwhlog_frame.ShiftStartMER	= swwhlog_array[7];

	Swwhlog_frame.ShiftCloseDD 	= swwhlog_array[8];
	Swwhlog_frame.ShiftCloseMM  = swwhlog_array[9];
	Swwhlog_frame.ShiftCloseYY  = swwhlog_array[10];
	Swwhlog_frame.ShiftCloseHH	= swwhlog_array[11];
	Swwhlog_frame.ShiftCloseMIN	= swwhlog_array[12];
	Swwhlog_frame.ShiftCloseSS	= swwhlog_array[13];
	Swwhlog_frame.ShiftCloseMER	= swwhlog_array[14];

	Swwhlog_frame.ShiftWorkingHrs = swwhlog_array[16];
	Swwhlog_frame.ShiftWorkingHrs = (Swwhlog_frame.ShiftWorkingHrs << 8) | swwhlog_array[15];

    write_one_swwhlog_frame_to_pendrive(Swwhlog_frame);
}
void SwwhHextoAscii(Uint32 luiHexValue)
{
    int8_t lucValue,lucCounter,lucArray[10];
    lucCounter = 1;
    uint8_t  temp_array[10],i=0;

    memset(temp_array,'\0',sizeof(temp_array));
    memset(lucArray,'\0',sizeof(lucArray));

    if(luiHexValue==0)
    {
#ifdef PENDRIVE_USED
		f_write(&g_fileObject1,"0",1,&bytesWritten);
		Swwhloggingdatapt+=1;
#else
		transmit_serial("0");
#endif
    }
    else
    {
		while(luiHexValue >= 10)
		{
			lucValue = luiHexValue % 10;
			luiHexValue =luiHexValue/10;
			lucArray[lucCounter++]  = lucValue+0x30;
		}

		lucArray[lucCounter++]=luiHexValue+0x30;

		i=0;
		while(lucCounter>=0)
		{
			temp_array [i]= lucArray[lucCounter-1];
			i++;
			lucCounter--;
		}
		temp_array[i]='\0';
#ifdef PENDRIVE_USED
		f_write(&g_fileObject1,temp_array,(i-1),&bytesWritten);
		Swwhloggingdatapt+=(i-1);
#else
		transmit_serial(temp_array);
#endif
    }
}
void SwwhStringPrint(uint8_t *puidata)
{
#ifdef PENDRIVE_USED
    if(*puidata !='\0')
    {
		f_write(&g_fileObject1,puidata,strlen(puidata),&bytesWritten);
		Swwhloggingdatapt+=strlen(puidata);
    }
    else
    {
    	f_write(&g_fileObject1,"\0",strlen("\0"),&bytesWritten);
    	Swwhloggingdatapt+=strlen("\0");
    }
#else
    transmit_serial(puidata);
#endif
}

void GenHextoAscii(Uint32 luiHexValue)
{
    int8_t lucValue,lucCounter,lucArray[10];
    lucCounter = 1;
    uint8_t  temp_array[10],i=0;

    memset(temp_array,'\0',sizeof(temp_array));
    memset(lucArray,'\0',sizeof(lucArray));

    if(luiHexValue==0)
    {
#ifdef PENDRIVE_USED
		f_write(&g_fileObject1,"0",1,&bytesWritten);
		Genloggingdatapt+=1;
#else
		transmit_serial("0");
#endif
    }
    else
    {
		while(luiHexValue >= 10)
		{
			lucValue = luiHexValue % 10;
			luiHexValue =luiHexValue/10;
			lucArray[lucCounter++]  = lucValue+0x30;
		}

		lucArray[lucCounter++]=luiHexValue+0x30;

		i=0;
		while(lucCounter>=0)
		{
			temp_array [i]= lucArray[lucCounter-1];
			i++;
			lucCounter--;
		}
		temp_array[i]='\0';
#ifdef PENDRIVE_USED
		f_write(&g_fileObject1,temp_array,(i-1),&bytesWritten);
		Genloggingdatapt+=(i-1);
#else
		transmit_serial(temp_array);
#endif
    }
}

void GenStringPrint(uint8_t *puidata)
{
#ifdef PENDRIVE_USED
    if(*puidata !='\0')
    {
		f_write(&g_fileObject1,puidata,strlen(puidata),&bytesWritten);
		Genloggingdatapt+=strlen(puidata);
    }
    else
    {
    	f_write(&g_fileObject1,"\0",strlen("\0"),&bytesWritten);
    	Genloggingdatapt+=strlen("\0");
    }
#else
    transmit_serial(puidata);
#endif
}
void Read_identification_details(void)
{
	uint8_t status = 0;
	uint8_t local_array[17] = {":                "};
	uint8_t local_array1[17] ={":0000000000000000"};

	memset(&uin,0,sizeof(uin));
	memset(&make,0,sizeof(make));
	memset(&model,0,sizeof(model));
	memset(&serial_number,0,sizeof(serial_number));
	memset(&unit_number,0,sizeof(unit_number));

    uin[0] = 0x3A;/* : */
    make[0] = 0x3A;
    model[0] = 0x3A;
    serial_number[0] = 0x3A;
    unit_number[0] = 0x3A;

    for(uint8_t f=0; f<16; f++)
    {
    	uin[f+1] 			= MemoryReadVariable(PRIMARY_MEMORY,(UIN_ADDR+f),1);
    	make[f+1] 			= MemoryReadVariable(PRIMARY_MEMORY,(MAKE_ADDR+f),1);
    	model[f+1] 			= MemoryReadVariable(PRIMARY_MEMORY,(MODEL_ADDR+f),1);
    	serial_number[f+1]	= MemoryReadVariable(PRIMARY_MEMORY,(SERIAL_NO_ADDR+f),1);
    	unit_number[f+1] 	= MemoryReadVariable(PRIMARY_MEMORY,(UNIT_NO_ADDR+f),1);
    }

    if(((status == memcmp(local_array,uin,sizeof(uin)))     && (status == memcmp(local_array,make,sizeof(make))) &&
	    (status == memcmp(local_array,model,sizeof(model))) && (status == memcmp(local_array,serial_number,sizeof(serial_number))) &&
	    (status == memcmp(local_array,unit_number,sizeof(unit_number))))
    		||
	   ((status == memcmp(local_array1,uin,sizeof(uin)))     && (status == memcmp(local_array1,make,sizeof(make))) &&
		(status == memcmp(local_array1,model,sizeof(model))) && (status == memcmp(local_array1,serial_number,sizeof(serial_number))) &&
		(status == memcmp(local_array1,unit_number,sizeof(unit_number)))))
	{
    	strt_tmr_for_idntset_toggle = 1;
	}
    else
    {
    	strt_tmr_for_idntset_toggle = 0;
    }
}
void datalog_write_idntfn_data_to_ext_memory(void)
{
	Read_identification_details();
#ifdef PENDRIVE_USED
    FuncStringPrint("VIN,");
    error = f_write(&g_fileObject1,uin,sizeof(uin),&bytesWritten);
    Dataloggingdatapt+=sizeof(uin);
    FuncStringPrint("\n");

    FuncStringPrint("MAKE,");
    error = f_write(&g_fileObject1,make,sizeof(make),&bytesWritten);
    Dataloggingdatapt+=sizeof(make);
    FuncStringPrint("\n");

    FuncStringPrint("MODEL,");
    error = f_write(&g_fileObject1,model,sizeof(model),&bytesWritten);
    Dataloggingdatapt+=sizeof(model);
    FuncStringPrint("\n");

    FuncStringPrint("SERIAL NUMBER,");
    error = f_write(&g_fileObject1,serial_number,sizeof(serial_number),&bytesWritten);
    Dataloggingdatapt+=sizeof(serial_number);
    FuncStringPrint("\n");

    FuncStringPrint("UNIT NUMBER,");
    error = f_write(&g_fileObject1,unit_number,sizeof(unit_number),&bytesWritten);
    Dataloggingdatapt+=sizeof(unit_number);
    FuncStringPrint("\n");

    FuncStringPrint("DISPLAY DATE CODE,");
    error = f_write(&g_fileObject1,display_date_code,sizeof(display_date_code),&bytesWritten);
    Dataloggingdatapt+=sizeof(display_date_code);
    FuncStringPrint("\n");

    FuncStringPrint("IO MODULE FIRMWARE,");
    error = f_write(&g_fileObject1,io_module_firmware,sizeof(io_module_firmware),&bytesWritten);
    Dataloggingdatapt+=sizeof(io_module_firmware);
    FuncStringPrint("\n");
#else
    FuncStringPrint("VIN,");
    transmit_serial(uin);
    FuncStringPrint("\n");

    FuncStringPrint("MAKE,");
    transmit_serial(make);
    FuncStringPrint("\n");

    FuncStringPrint("MODEL,");
    transmit_serial(model);
    FuncStringPrint("\n");

    FuncStringPrint("SERIAL NUMBER,");
    transmit_serial(serial_number);
    FuncStringPrint("\n");

    FuncStringPrint("UNIT NUMBER,");
    transmit_serial(unit_number);
    FuncStringPrint("\n");

    FuncStringPrint("DISPLAY DATE CODE,");
    transmit_serial(display_date_code);
    FuncStringPrint("\n");

    FuncStringPrint("IO MODULE FIRMWARE,");
    transmit_serial(io_module_firmware);
    FuncStringPrint("\n");

#endif
    FuncStringPrint("DATE DOWNLOADED(DD/MM/YYYY),");
    /* Date/Month/Year */
    ReadRTC();
    //FuncStringPrint(":");
    funcTempHextoAscii(strDateTime.Date);
    FuncStringPrint("/");
    funcTempHextoAscii(strDateTime.Month);
    FuncStringPrint("/");
    funcTempHextoAscii(strDateTime.Year);

    FuncStringPrint("\n");
}

void errorlog_write_idntfn_data_to_ext_memory(void)
{
	Read_identification_details();
#ifdef PENDRIVE_USED
	FuncfaultlogStringPrint("VIN,");
	error = f_write(&g_fileObject1,uin,sizeof(uin),&bytesWritten);
    datapt+=sizeof(uin);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("MAKE,");
    error = f_write(&g_fileObject1,make,sizeof(make),&bytesWritten);
    datapt+=sizeof(make);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("MODEL,");
    error = f_write(&g_fileObject1,model,sizeof(model),&bytesWritten);
    datapt+=sizeof(model);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("SERIAL NUMBER,");
    error = f_write(&g_fileObject1,serial_number,sizeof(serial_number),&bytesWritten);
    datapt+=sizeof(serial_number);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("UNIT NUMBER,");
    error = f_write(&g_fileObject1,unit_number,sizeof(unit_number),&bytesWritten);
    datapt+=sizeof(unit_number);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("DISPLAY DATE CODE,");
    error = f_write(&g_fileObject1,display_date_code,sizeof(display_date_code),&bytesWritten);
    datapt+=sizeof(display_date_code);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("IO MODULE FIRMWARE,");
    error = f_write(&g_fileObject1,io_module_firmware,sizeof(io_module_firmware),&bytesWritten);
    datapt+=sizeof(io_module_firmware);
    FuncfaultlogStringPrint("\n");
#else
	FuncfaultlogStringPrint("VIN,");
	transmit_serial(uin);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("MAKE,");
    transmit_serial(make);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("MODEL,");
    transmit_serial(model);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("SERIAL NUMBER,");
    transmit_serial(serial_number);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("UNIT NUMBER,");
    transmit_serial(unit_number);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("DISPLAY DATE CODE,");
    transmit_serial(display_date_code);
    FuncfaultlogStringPrint("\n");

    FuncfaultlogStringPrint("IO MODULE FIRMWARE,");
    transmit_serial(io_module_firmware);
    FuncfaultlogStringPrint("\n");
#endif
    FuncfaultlogStringPrint("DATE DOWNLOADED(DD/MM/YYYY),");
    /* Date/Month/Year */
    ReadRTC();
    //FuncfaultlogStringPrint(":");
    write_value_to_Pendrv(strDateTime.Date,0);
    FuncfaultlogStringPrint("/");
    write_value_to_Pendrv(strDateTime.Month,0);
    FuncfaultlogStringPrint("/");
    write_value_to_Pendrv(strDateTime.Year,0);

    FuncfaultlogStringPrint("\n");
}
void swwhlog_write_idntfn_data_to_ext_memory(void)
{
	Read_identification_details();
#ifdef PENDRIVE_USED
    SwwhStringPrint("VIN,");
    error = f_write(&g_fileObject1,uin,sizeof(uin),&bytesWritten);
    Swwhloggingdatapt+=sizeof(uin);
    SwwhStringPrint("\n");

    SwwhStringPrint("MAKE,");
    error = f_write(&g_fileObject1,make,sizeof(make),&bytesWritten);
    Swwhloggingdatapt+=sizeof(make);
    SwwhStringPrint("\n");

    SwwhStringPrint("MODEL,");
    error = f_write(&g_fileObject1,model,sizeof(model),&bytesWritten);
    Swwhloggingdatapt+=sizeof(model);
    SwwhStringPrint("\n");

    SwwhStringPrint("SERIAL NUMBER,");
    error = f_write(&g_fileObject1,serial_number,sizeof(serial_number),&bytesWritten);
    Swwhloggingdatapt+=sizeof(serial_number);
    SwwhStringPrint("\n");

    SwwhStringPrint("UNIT NUMBER,");
    error = f_write(&g_fileObject1,unit_number,sizeof(unit_number),&bytesWritten);
    Swwhloggingdatapt+=sizeof(unit_number);
    SwwhStringPrint("\n");

    SwwhStringPrint("DISPLAY DATE CODE,");
    error = f_write(&g_fileObject1,display_date_code,sizeof(display_date_code),&bytesWritten);
    Swwhloggingdatapt+=sizeof(display_date_code);
    SwwhStringPrint("\n");

    SwwhStringPrint("IO MODULE FIRMWARE,");
    error = f_write(&g_fileObject1,io_module_firmware,sizeof(io_module_firmware),&bytesWritten);
    Swwhloggingdatapt+=sizeof(io_module_firmware);
    SwwhStringPrint("\n");
#else
    SwwhStringPrint("VIN,");
    transmit_serial(uin);
    SwwhStringPrint("\n");

    SwwhStringPrint("MAKE,");
    transmit_serial(make);
    SwwhStringPrint("\n");

    SwwhStringPrint("MODEL,");
    transmit_serial(model);
    SwwhStringPrint("\n");

    SwwhStringPrint("SERIAL NUMBER,");
    transmit_serial(serial_number);
    SwwhStringPrint("\n");

    SwwhStringPrint("UNIT NUMBER,");
    transmit_serial(unit_number);
    SwwhStringPrint("\n");

    SwwhStringPrint("DISPLAY DATE CODE,");
    transmit_serial(display_date_code);
    SwwhStringPrint("\n");

    SwwhStringPrint("IO MODULE FIRMWARE,");
    transmit_serial(io_module_firmware);
    SwwhStringPrint("\n");
#endif
    SwwhStringPrint("DATE DOWNLOADED(DD/MM/YYYY),");
    /* Date/Month/Year */
    ReadRTC();
    //SwwhStringPrint(":");
    SwwhHextoAscii(strDateTime.Date);
    SwwhStringPrint("/");
    SwwhHextoAscii(strDateTime.Month);
    SwwhStringPrint("/");
    SwwhHextoAscii(strDateTime.Year);

    SwwhStringPrint("\n");
}

void rawcanlog_write_idntfn_data_to_ext_memory(void)
{
	Read_identification_details();
#ifdef PENDRIVE_USED
    GenStringPrint("VIN,");
    error = f_write(&g_fileObject1,uin,sizeof(uin),&bytesWritten);
    Genloggingdatapt+=sizeof(uin);
    GenStringPrint("\n");

    GenStringPrint("MAKE,");
    error = f_write(&g_fileObject1,make,sizeof(make),&bytesWritten);
    Genloggingdatapt+=sizeof(make);
    GenStringPrint("\n");

    GenStringPrint("MODEL,");
    error = f_write(&g_fileObject1,model,sizeof(model),&bytesWritten);
    Genloggingdatapt+=sizeof(model);
    GenStringPrint("\n");

    GenStringPrint("SERIAL NUMBER,");
    error = f_write(&g_fileObject1,serial_number,sizeof(serial_number),&bytesWritten);
    Genloggingdatapt+=sizeof(serial_number);
    GenStringPrint("\n");

    GenStringPrint("UNIT NUMBER,");
    error = f_write(&g_fileObject1,unit_number,sizeof(unit_number),&bytesWritten);
    Genloggingdatapt+=sizeof(unit_number);
    GenStringPrint("\n");

    GenStringPrint("DISPLAY DATE CODE,");
    error = f_write(&g_fileObject1,display_date_code,sizeof(display_date_code),&bytesWritten);
    Genloggingdatapt+=sizeof(display_date_code);
    GenStringPrint("\n");

    GenStringPrint("IO MODULE FIRMWARE,");
    error = f_write(&g_fileObject1,io_module_firmware,sizeof(io_module_firmware),&bytesWritten);
    Genloggingdatapt+=sizeof(io_module_firmware);
    GenStringPrint("\n");
#else
     GenStringPrint("VIN,");
     transmit_serial(uin);
     GenStringPrint("\n");

     GenStringPrint("MAKE,");
     transmit_serial(make);
     GenStringPrint("\n");

     GenStringPrint("MODEL,");
     transmit_serial(model);
     GenStringPrint("\n");

     GenStringPrint("SERIAL NUMBER,");
     transmit_serial(serial_number);
     GenStringPrint("\n");

     GenStringPrint("UNIT NUMBER,");
     transmit_serial(unit_number);
     GenStringPrint("\n");

     GenStringPrint("DISPLAY DATE CODE,");
     transmit_serial(display_date_code);
     GenStringPrint("\n");

     GenStringPrint("IO MODULE FIRMWARE,");
     transmit_serial(io_module_firmware);
     GenStringPrint("\n");
#endif
    GenStringPrint("DATE DOWNLOADED(DD/MM/YYYY),");
    /* Date/Month/Year */
    ReadRTC();
    //GenStringPrint(":");
    GenHextoAscii(strDateTime.Date);
    GenStringPrint("/");
    GenHextoAscii(strDateTime.Month);
    GenStringPrint("/");
    GenHextoAscii(strDateTime.Year);

    GenStringPrint("\n");
}
void write_one_errorlog_frame_to_pendrive(struct EL_frame Errorlog_frame)
{
	uint16_t no_data_rcvd 	= 0;
	uint16_t dataframenum 	= 0;
	uint8_t	year			= 0;
	uint8_t month			= 0;
	uint8_t date			= 0;
	uint8_t hour			= 0;
	uint8_t minute			= 0;
	uint8_t second			= 0;
	uint8_t meridien		= 0;
	uint8_t source_addr		= 0;
	uint16_t full_year 		= 0;
	uint8_t plugid 			= 0;
	uint8_t status 			= 0;
	uint8_t occurence_count = 0;
	uint8_t lamp_status 	= 0;

	volatile uint8_t i = 0,j=0;
	Uint32 temp_spn_fmi = 0;
	uint8_t buff_cntr = 0;
	uint8_t *p_sa_str;
	uint8_t status_str[10] = {0};
	uint8_t *pstatus;
	uint8_t *fault_description;
	uint16_t array_size = 0;
	uint16_t byte_cntr = 0;
	uint8_t dmlog_frame_bytes[DM_LOG_FRAME_SIZE] = {0};

    unsigned long  lulDecimalValues = 0;
    uint8_t lucFloatValue    = 0;
    unsigned long lucTempLogData   = 0;

	if(created_new==1)
	{
		created_new=0;

		/*
		uint8_t csv_header_make[]={"VIN:\n MAKE:\n MODEL:\n SERIAL NUMBER:\n UNIT NUMBER:\n DISPLAY DATE CODE: 081220201910\n IO MODULE FIRMWARE: 79.70.0175 V008 - BEML V003 \n DATE DOWNLOADED:\n"};
		f_write(&g_fileObject1,csv_header_make, sizeof(csv_header_make),&bytesWritten); //csv_header
		//f_sync(&g_fileObject1);
		datapt+=sizeof(csv_header_make);
		*/
		errorlog_write_idntfn_data_to_ext_memory();
#ifdef DOZER_P_VER
		FuncfaultlogStringPrint(" Date, Time, "
		"Source_Name, Source_Address, Plug_ID, SPN, FMI, Occ_Count, Status, Lamp_Status, Fault,"
		"Engine Speed(RPM), "
		"Converter Oil Temperature(Degree), "
		"Transmission Oil Pressure(Bar), "
		"Engine Hours, "
		"Engine Oil Pressure(Bar), "
		"Battery Voltage(Volt), "
		"Engine Coolant Temperature(Degree), "
		"Engine Oil Temperature(Degree), "
		"Fuel Level(%), ");
#else
		FuncfaultlogStringPrint(" Date, Time, "
		"Source_Name, Source_Address, Plug_ID, SPN, FMI, Occ_Count, Status, Lamp_Status, Fault,"
		"Engine Speed(RPM), "
		"Engine Oil Pressure(Bar), "
		"Engine Oil Temperature(Degree), "
		"Engine Coolant Temperature(Degree), "
		"Engine Hours, "
		"Battery Voltage(Volt), "
		"FIP Rack Position(%), "
		"Fuel Level(%), "
		"Converter Oil Temperature(Degree), "
		"Transmission Oil Pressure(Bar), "
		"Hydraulic Oil Temperature(Degree), ");
#endif
		FuncfaultlogStringPrint("\n");
		/*
		uint8_t csv_header[] = {" Date, Time, "
				"Source_Name, Source_Address, Plug_ID, SPN, FMI, Occ_Count, Status, Lamp_Status, Fault,"
        		"Engine Speed(RPM), "
                "Engine Oil Pressure(Bar), "
        		"Engine Oil Temperature(Degree), "
                "Engine Coolant Temperature(Degree), "
        		"Engine Hours, "
        		"Battery Voltage(Volt), "
        		"FIP Rack Position(%), "
        		"Fuel Level(%), "
        		"Converter Oil Temperature(Degree), "
                "Transmission Oil Pressure(Bar), "
        		"Hydraulic Oil Temperature(Degree), "
        		"\n"};
		f_write(&g_fileObject1,csv_header, sizeof(csv_header),&bytesWritten); //csv_header
		//f_sync(&g_fileObject1);
		datapt+=sizeof(csv_header);
		*/
	}
	else{}

	if(Errorlog_frame.EL_Month != 0xFF)
	{
		year 			= Errorlog_frame.EL_Year;
		month 			= Errorlog_frame.EL_Month;
		date 			= Errorlog_frame.EL_Date;
		hour 			= Errorlog_frame.EL_Hour;
		minute 			= Errorlog_frame.EL_Minute;
		second  		= Errorlog_frame.EL_Seconds;
		meridien		= Errorlog_frame.EL_Merideian;
		source_addr     = Errorlog_frame.EL_Source_Addr;
		plugid          = Errorlog_frame.EL_Plug_ID;
		spn				= Errorlog_frame.EL_SPN;
		fmi				= Errorlog_frame.EL_FMI;
		occurence_count	= Errorlog_frame.EL_Occurance_cnt;
		status          = Errorlog_frame.EL_Err_status;
		lamp_status 	= Errorlog_frame.EL_Lamp_status;			//dmlog_frame_bytes[13];

		if(date < 10)
		{FuncfaultlogStringPrint("0");}
		write_value_to_Pendrv(date,"/");

		if(month < 10)
		{FuncfaultlogStringPrint("0");}
		write_value_to_Pendrv(month,"/");

		write_value_to_Pendrv(0x14,0);  //year 20
		write_value_to_Pendrv(year,",");

		if(hour < 10)
		{FuncfaultlogStringPrint("0");}
		write_value_to_Pendrv(hour,":");

		if(minute < 10)
		{FuncfaultlogStringPrint("0");}
		write_value_to_Pendrv(minute,":");

		if(second < 10)
		{FuncfaultlogStringPrint("0");}
		write_value_to_Pendrv(second," ");

		if(meridien == AM)
		{
			FuncfaultlogStringPrint("AM");
		}
		else
		{
			FuncfaultlogStringPrint("PM");
		}
		FuncfaultlogStringPrint(",");
		p_sa_str = source_addr_decode(source_addr);
		write_string_to_Pendrv(p_sa_str,",");
		write_value_to_Pendrv(source_addr,",");
		write_value_to_Pendrv(plugid,",");
		write_value_to_Pendrv(spn,",");
		write_value_to_Pendrv(fmi,",");
		write_value_to_Pendrv(occurence_count,",");

		if(status == 1)
		{
			memcpy(status_str,"Active",sizeof("Active"));
			write_string_to_Pendrv(status_str,",");
		}
		else
		{
			memcpy(status_str,"Inactive",sizeof("Inactive"));
			write_string_to_Pendrv(status_str,",");
		}
		write_value_to_Pendrv(lamp_status,",");

		fault_description = spn_fmi_decode(spn,fmi);
		write_string_to_Pendrv(fault_description,",");

#ifdef DOZER_P_VER
		/*ENGINE SPEED*/
		funcfaultTempHextoAscii(Errorlog_frame.EL_Engine_Speed);
		FuncfaultlogStringPrint(",");

		/*COT*/
		//lucTempLogData      = strfaultLoggingData.ConverterOiltempCurrentValue* 100;
		lucTempLogData      = Errorlog_frame.EL_COT;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*TOP*/
		//lucTempLogData      = strfaultLoggingData.TopCurrentValueKpa * 100;
		lucTempLogData      = Errorlog_frame.EL_TOP;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*Engine Hours*/
		//lucTempLogData      = strfaultLoggingData.DisplayHoursRunHrs * 10;
		lucTempLogData      = Errorlog_frame.EL_EngineHoursRunHrs;
		lulDecimalValues    = lucTempLogData/10;
		lucFloatValue       = lucTempLogData%10;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*EOP*/
		//lucTempLogData      = strfaultLoggingData.EopCurrentValueKpa * 100;
		lucTempLogData      = Errorlog_frame.EL_EOP;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*BATTERY VOLTS*/
		//lucTempLogData      = strfaultLoggingData.BatteryCurrentValueV * 100;
		lucTempLogData      = Errorlog_frame.EL_Battery_V;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*ECT*/
		//lucTempLogData      = strfaultLoggingData.CltTempCurrentValueDEG * 100;
		lucTempLogData      = Errorlog_frame.EL_ECT;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*EOT*/
		//lucTempLogData      = strfaultLoggingData.EotCurrentValueDEG * 100;
		lucTempLogData      = Errorlog_frame.EL_EOT;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*FUEL PERCENTAGE*/
		//lucTempLogData      = strfaultLoggingData.FuellvlCurrentValuePer * 100;
		lucTempLogData      = Errorlog_frame.EL_Fuel_Percentage;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");
#else
		/*ENGINE SPEED*/
		//lucTempLogData      = strfaultLoggingData.EngSpdCurrentValueRPM * 100;
		/*
		lucTempLogData      = Errorlog_frame.EL_Engine_Speed;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");
		*/
		funcfaultTempHextoAscii(Errorlog_frame.EL_Engine_Speed);
		FuncfaultlogStringPrint(",");

		/*EOP*/
		//lucTempLogData      = strfaultLoggingData.EopCurrentValueKpa * 100;
		lucTempLogData      = Errorlog_frame.EL_EOP;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*EOT*/
		//lucTempLogData      = strfaultLoggingData.EotCurrentValueDEG * 100;
		lucTempLogData      = Errorlog_frame.EL_EOT;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*ECT*/
		//lucTempLogData      = strfaultLoggingData.CltTempCurrentValueDEG * 100;
		lucTempLogData      = Errorlog_frame.EL_ECT;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*Engine Hours*/
		//lucTempLogData      = strfaultLoggingData.DisplayHoursRunHrs * 10;
		lucTempLogData      = Errorlog_frame.EL_EngineHoursRunHrs;
		lulDecimalValues    = lucTempLogData/10;
		lucFloatValue       = lucTempLogData%10;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");
		/*
		funcfaultTempHextoAscii(Datalog_frame.DL_EngineHoursRunHrs);
		FuncfaultlogStringPrint(",");
		*/

		/*BATTERY VOLTS*/
		//lucTempLogData      = strfaultLoggingData.BatteryCurrentValueV * 100;
		lucTempLogData      = Errorlog_frame.EL_Battery_V;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*FIP RACK POSITION*/
		//lucTempLogData      = strfaultLoggingData.TotCurrenrvalueDEG * 100;
		lucTempLogData      = Errorlog_frame.EL_FIP_rack_pos;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*FUEL PERCENTAGE*/
		//lucTempLogData      = strfaultLoggingData.FuellvlCurrentValuePer * 100;
		lucTempLogData      = Errorlog_frame.EL_Fuel_Percentage;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*COT*/
		//lucTempLogData      = strfaultLoggingData.ConverterOiltempCurrentValue* 100;
		lucTempLogData      = Errorlog_frame.EL_COT;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*TOP*/
		//lucTempLogData      = strfaultLoggingData.TopCurrentValueKpa * 100;
		lucTempLogData      = Errorlog_frame.EL_TOP;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");

		/*HOT*/
		//lucTempLogData      = strfaultLoggingData.VehSpdCurrentValueKmph * 100;
		lucTempLogData      = Errorlog_frame.EL_HOT;
		lulDecimalValues    = lucTempLogData/100;
		lucFloatValue       = lucTempLogData%100;

		funcfaultTempHextoAscii(lulDecimalValues);
		FuncfaultlogStringPrint(".");
		funcfaultTempHextoAscii(lucFloatValue);
		FuncfaultlogStringPrint(",");
#endif
		FuncfaultlogStringPrint("\n");

		f_sync(&g_fileObject1);

		DelayUs1(10);
	}

}
void write_one_datalog_frame_to_pendrive(struct DL_frame Datalog_frame)
{
    unsigned long  lulDecimalValues = 0;
    unsigned long lucTempLogData   	= 0;
    uint8_t lucFloatValue   = 0;
    uint8_t lucTempDataBuff = 0;
	uint8_t	year		= 0;
	uint8_t month			= 0;
	uint8_t date			= 0;
	uint8_t hour			= 0;
	uint8_t minute			= 0;
	uint8_t second			= 0;
	bool meridien           = 0;

	uint8_t vehicle_model[10] 			= {0};
	uint8_t display_date_code_no[13]	= {0};
	uint8_t io_mod_firm_ver[30] 		= {0};


	date 	= Datalog_frame.DL_Date;
	month 	= Datalog_frame.DL_Month;
	year 	= Datalog_frame.DL_Year;
	hour 	= Datalog_frame.DL_Hour;
	minute 	= Datalog_frame.DL_Minute;
	second  = Datalog_frame.DL_Seconds;
	meridien= Datalog_frame.DL_Merideian;

   if(Dataloggingheader==1)
   {
	    Dataloggingheader=0;
	    /*
        FuncStringPrint("VIN:\n");
        FuncStringPrint("MAKE:\n");
        FuncStringPrint("MODEL:\n");
        FuncStringPrint("SERIAL NUMBER:\n");
        FuncStringPrint("UNIT NUMBER:\n");
        FuncStringPrint("DISPLAY DATE CODE\n");
        FuncStringPrint("IO MODULE FIRMWARE:\n");
        FuncStringPrint("DATE DOWNLOADED(DD/MM/YYYY):\n");
	    */
	    datalog_write_idntfn_data_to_ext_memory();
#ifdef DOZER_P_VER
	    FuncStringPrint(", Date, Time, "
		"Engine Speed(RPM), "
	    "Converter Oil Temperature(Degree), "
		"Transmission Oil Pressure(Bar), "
		"Engine Hours, "
		"Engine Oil Pressure(Bar), "
		"Battery Voltage(Volt), "
		"Engine Coolant Temperature(Degree), "
		"Engine Oil Temperature(Degree), "
		"Fuel Level(%), ");
#else
        FuncStringPrint(", Date, Time, "
		"Engine Speed(RPM), "
		"Engine Oil Pressure(Bar), "
		"Engine Oil Temperature(Degree), "
		"Engine Coolant Temperature(Degree), "
		"Engine Hours, "
		"Battery Voltage(Volt), "
		"FIP Rack Position(%), "
		"Fuel Level(%), "
		"Converter Oil Temperature(Degree), "
		"Transmission Oil Pressure(Bar), "
		"Hydraulic Oil Temperature(Degree), ");
#endif
        FuncStringPrint("\n");
   }

   if(Datalog_frame.DL_Month != 0xFF)
   {
	    log_no++;

	    FuncStringPrint("Log Entry: ");
	    funcTempHextoAscii(log_no);
	    FuncStringPrint("\n");
	    FuncStringPrint(",");

	    /* Date */
	    if(date<10){FuncStringPrint("0");}
	    funcTempHextoAscii(date);
	    FuncStringPrint("/");
	    if(month<10){FuncStringPrint("0");}
	    funcTempHextoAscii(month);
	    FuncStringPrint("/");
	    funcTempHextoAscii(year);
	    FuncStringPrint(",");

	    /* Time */
	    if(hour<10){FuncStringPrint("0");}
	    funcTempHextoAscii(hour);
	    FuncStringPrint(":");
	    if(minute<10){FuncStringPrint("0");}
	    funcTempHextoAscii(minute);
	    FuncStringPrint(":");
	    if(second<10){FuncStringPrint("0");}
	    funcTempHextoAscii(second);
	    if(meridien == AM)
	    FuncStringPrint("AM");
	    else
	    FuncStringPrint("PM");

	    FuncStringPrint(",");

#ifdef DOZER_P_VER
	    /*Engine speed*/
	    funcTempHextoAscii(Datalog_frame.DL_Engine_Speed);
	    FuncStringPrint(",");

	    /*COT*/
	    //lucTempLogData      = strDataLoggingData.ConverterOiltempCurrentValue* 100;
	    lucTempLogData      = Datalog_frame.DL_COT;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*TOP*/
	    //lucTempLogData      = strDataLoggingData.TopCurrentValueKpa * 100;
	    lucTempLogData      = Datalog_frame.DL_TOP;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /* Engine hours */
	    //lucTempLogData      = strDataLoggingData.DisplayHoursRunHrs * 10;
	    lucTempLogData      = Datalog_frame.DL_EngineHoursRunHrs;
	    lulDecimalValues    = lucTempLogData/10;
	    lucFloatValue       = lucTempLogData%10;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*EOP*/
	    //lucTempLogData      = strDataLoggingData.EopCurrentValueKpa * 100;
	    lucTempLogData      = Datalog_frame.DL_EOP;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*BATTERY*/
	    //lucTempLogData      = strDataLoggingData.BatteryCurrentValueV * 100;
	    lucTempLogData      = Datalog_frame.DL_Battery_V;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*ECT*/
	    //lucTempLogData      = strDataLoggingData.CltTempCurrentValueDEG * 100;
	    lucTempLogData      = Datalog_frame.DL_ECT;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*EOT*/
	    //lucTempLogData      = strDataLoggingData.EotCurrentValueDEG * 100;
	    lucTempLogData      = Datalog_frame.DL_EOT;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*FUEL*/
	    //lucTempLogData      = strDataLoggingData.FuellvlCurrentValuePer * 100;
	    lucTempLogData      = Datalog_frame.DL_Fuel_Percentage;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");
#else
	    /*ENGINE_SPEED*/
	    //lucTempLogData      = strDataLoggingData.EngSpdCurrentValueRPM * 100;
	    /*
	    lucTempLogData      = Datalog_frame.DL_Engine_Speed;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");
	    */
	    funcTempHextoAscii(Datalog_frame.DL_Engine_Speed);
	    FuncStringPrint(",");

	    /*EOP*/
	    //lucTempLogData      = strDataLoggingData.EopCurrentValueKpa * 100;
	    lucTempLogData      = Datalog_frame.DL_EOP;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*EOT*/
	    //lucTempLogData      = strDataLoggingData.EotCurrentValueDEG * 100;
	    lucTempLogData      = Datalog_frame.DL_EOT;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*ECT*/
	    //lucTempLogData      = strDataLoggingData.CltTempCurrentValueDEG * 100;
	    lucTempLogData      = Datalog_frame.DL_ECT;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /* Display hours */
	    //lucTempLogData      = strDataLoggingData.DisplayHoursRunHrs * 10;
	    lucTempLogData      = Datalog_frame.DL_EngineHoursRunHrs;
	    lulDecimalValues    = lucTempLogData/10;
	    lucFloatValue       = lucTempLogData%10;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");
	    /*
	    funcTempHextoAscii(Datalog_frame.DL_EngineHoursRunHrs);
	    FuncStringPrint(",");
	    */

	    /*BATTERY*/
	    //lucTempLogData      = strDataLoggingData.BatteryCurrentValueV * 100;
	    lucTempLogData      = Datalog_frame.DL_Battery_V;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*FIP RACK POSITION*/
	    //lucTempLogData      = strDataLoggingData.TotCurrenrvalueDEG * 100;
	    lucTempLogData      =  Datalog_frame.DL_FIP_rack_pos;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*FUEL*/
	    //lucTempLogData      = strDataLoggingData.FuellvlCurrentValuePer * 100;
	    lucTempLogData      = Datalog_frame.DL_Fuel_Percentage;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*COT*/
	    //lucTempLogData      = strDataLoggingData.ConverterOiltempCurrentValue* 100;
	    lucTempLogData      = Datalog_frame.DL_COT;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*TOP*/
	    //lucTempLogData      = strDataLoggingData.TopCurrentValueKpa * 100;
	    lucTempLogData      = Datalog_frame.DL_TOP;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");

	    /*HOT*/
	    //lucTempLogData      = strDataLoggingData.VehSpdCurrentValueKmph * 100;
	    lucTempLogData      = Datalog_frame.DL_HOT;
	    lulDecimalValues    = lucTempLogData/100;
	    lucFloatValue       = lucTempLogData%100;

	    funcTempHextoAscii(lulDecimalValues);
	    FuncStringPrint(".");
	    funcTempHextoAscii(lucFloatValue);
	    FuncStringPrint(",");
#endif
	    FuncStringPrint("\n");

	    f_sync(&g_fileObject1);
   }
}
void write_one_swwhlog_frame_to_pendrive(struct frame Swwhlog_frame)
{
    unsigned long  lulDecimalValues = 0;
    unsigned long lucTempLogData   	= 0;
    uint8_t lucFloatValue   = 0;
    uint8_t lucTempDataBuff = 0;

   if(Swwhloggingheader==1)
   {
	    Swwhloggingheader=0;
	    swwhlog_write_idntfn_data_to_ext_memory();
        SwwhStringPrint(", Sl No, Shift No, "
        		"Shift Starting Date, "
                "Shift Starting Time, "
        		"Shift Closing Date, "
                "Shift Closing Time, "
        		"Working Hours, ");
        SwwhStringPrint("\n");
   }

   if(Swwhlog_frame.ShiftStartDD != 0xFF)
   {
	   log_no++;
	    SwwhStringPrint(",");
		//SwwhStringPrint("Log Entry: ");
	    SwwhHextoAscii(log_no);
	    //SwwhStringPrint("\n");
	    SwwhStringPrint(",");

		SwwhHextoAscii(Swwhlog_frame.ShiftNo);
	    SwwhStringPrint(",");

	    /* Shift Start Date */
	    if(Swwhlog_frame.ShiftStartDD < 10)
	    {SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftStartDD);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint("/");

	    if(Swwhlog_frame.ShiftStartMM < 10)
	    {SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftStartMM);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint("/");
	    lucTempDataBuff = (Swwhlog_frame.ShiftStartYY);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint(",");

	    /* Shift Start Time */
	    if(Swwhlog_frame.ShiftStartHH < 10)
		{SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftStartHH);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint(":");

	    if(Swwhlog_frame.ShiftStartMIN < 10)
		{SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftStartMIN);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint(":");

	    if(Swwhlog_frame.ShiftStartSS < 10)
		{SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftStartSS);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint(" ");
	    if(Swwhlog_frame.ShiftStartMER == MER_AM)
	    SwwhStringPrint("AM");
	    else
	    SwwhStringPrint("PM");

	    SwwhStringPrint(",");

		/* Shift Closing Date */
	    if(Swwhlog_frame.ShiftCloseDD < 10)
	    {SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftCloseDD);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint("/");

	    if(Swwhlog_frame.ShiftCloseMM < 10)
	    {SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftCloseMM);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint("/");
	    lucTempDataBuff = (Swwhlog_frame.ShiftCloseYY);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint(",");

	    /* Shift Closing Time */
	    if(Swwhlog_frame.ShiftCloseHH < 10)
		{SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftCloseHH);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint(":");

	    if(Swwhlog_frame.ShiftCloseMIN < 10)
		{SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftCloseMIN);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint(":");

	    if(Swwhlog_frame.ShiftCloseSS < 10)
		{SwwhStringPrint("0");}

	    lucTempDataBuff = (Swwhlog_frame.ShiftCloseSS);
	    SwwhHextoAscii((lucTempDataBuff));
	    SwwhStringPrint(" ");
	    if(Swwhlog_frame.ShiftCloseMER == MER_AM)
	    SwwhStringPrint("AM");
	    else
	    SwwhStringPrint("PM");

	    SwwhStringPrint(",");

	    /*Shift working hours*/
	    lucTempLogData      = Swwhlog_frame.ShiftWorkingHrs;
	    lulDecimalValues    = lucTempLogData/10;
	    lucFloatValue       = lucTempLogData%10;

	    SwwhHextoAscii(lulDecimalValues);
	    SwwhStringPrint(".");
	    SwwhHextoAscii(lucFloatValue);
	    SwwhStringPrint(",");

	    SwwhStringPrint("\n");

	    f_sync(&g_fileObject1);
   }
}

void write_rawcan_frame_to_pendrive(void)
{
	volatile uint16_t frame_num = 0;
	uint16_t byte_cntr = 0;
	Uint32 pgn = 0;
	volatile uint8_t i = 0;
	uint8_t char_data = 0;
	Uint32 AddrAddTemp =0;
	uint8_t rawcan_data_bytes[RAWCANDATA_FRAME_SIZE] = {0};
	uint8_t raw_can_data_csv_header[] = {" PGN, D1, D2, D3, D4, D5, D6, D7, D8\n"};

	if(raw_data_header==1)
	{
		raw_data_header=0;
		rawcanlog_write_idntfn_data_to_ext_memory();
#ifdef PENDRIVE_USED
		f_write(&g_fileObject1,raw_can_data_csv_header,sizeof(raw_can_data_csv_header),&bytesWritten);
		//f_sync(&g_fileObject1);
		rawdatadatapt+=sizeof(raw_can_data_csv_header);
#else
		transmit_serial(raw_can_data_csv_header);
#endif
	}

	for (frame_num = 0;frame_num<guiLogFileSize;frame_num++)
	{
		for(byte_cntr = 0;byte_cntr<RAWCANDATA_FRAME_SIZE;byte_cntr++)
		{
			rawcan_data_bytes[byte_cntr] = TempArray[frame_num][byte_cntr];
		}

		pgn = rawcan_data_bytes[0];
		pgn <<=8;
		pgn |= rawcan_data_bytes[1];
		pgn <<=8;
		pgn |= rawcan_data_bytes[2];
		pgn <<=8;
		pgn |= rawcan_data_bytes[3];

		for(i =0;i<8;i++)
		{
			can_data[i] = rawcan_data_bytes[4+i];
		}

		hex_display(pgn);
#ifdef PENDRIVE_USED
		f_write(&g_fileObject1,hex_char,sizeof(hex_char),&bytesWritten);
		//f_sync(&g_fileObject1);

		//DelayUs1(10);
		rawdatadatapt+=sizeof(hex_char);

		f_write(&g_fileObject1,",", 1,&bytesWritten);
		//f_sync(&g_fileObject1);

		//DelayUs1(10);
		rawdatadatapt+=1;
#else
		transmit_serial(hex_char);
		transmit_serial(",");
#endif
		hex_buff(can_data);

		for(i=0;i<16;i++)
		{
			char_data = can_ascii_buff[i];
#ifdef PENDRIVE_USED
			f_write(&g_fileObject1,&char_data, 1,&bytesWritten);
			//f_sync(&g_fileObject1);

			//DelayUs1(10);
			rawdatadatapt+=1;
#else
			str_tx(char_data);
#endif
			if(i%2!=0)
			{
#ifdef PENDRIVE_USED
				f_write(&g_fileObject1,",", 1,&bytesWritten);
				//f_sync(&g_fileObject1);

				rawdatadatapt+=1;
#else
				transmit_serial(",");
#endif

			}
			//DelayUs1(10);
		}
#ifdef PENDRIVE_USED
		f_write(&g_fileObject1,"\n",sizeof("\n"),&bytesWritten);
		f_sync(&g_fileObject1);

		rawdatadatapt+=sizeof("\n");
		AddrAddTemp +=16;
		DelayUs1(10);
#else
		transmit_serial("\n");
#endif
	}
}
void Copy_datalog_file_to_pendrive(void)
{
#ifdef PENDRIVE_USED
	FATFS pendrive_fatfs;      /* Work area (filesystem object) for logical drives */
	DIR pendrive_dir;

	uint8_t *pendrive_filename;

    /* Register work area for logical drive 1*/
    error = f_mount(&pendrive_fatfs, "1:", 0);

    /* Create file on the pendrive */
    error = f_mkdir(_T("1:/EM"));

	if (error == FR_EXIST)
	{
		error = f_opendir(&pendrive_dir,_T("1:/EM"));
	}
	else
	{

	}
    pendrive_filename = pendrive_filename_creation("DataLogging");
    error = f_open(&g_fileObject1,_T(pendrive_filename), FA_WRITE | FA_CREATE_ALWAYS | FA_OPEN_EXISTING);

    if(error == FR_OK)
    {
        Dataloggingheader = 1;

        log_no = 0;

        Read_all_datalog_frames_from_winbond_table();
    }

    log_no = 0;

	f_close(&g_fileObject1);
	f_closedir(&pendrive_dir);

	/* Unregister work area prior to discard it */
	f_mount(0, "1:", 0);
#else
    Dataloggingheader = 1;
    log_no = 0;
    Read_all_datalog_frames_from_winbond_table();
#endif
}

void Copy_errorlog_file_to_pendrive(void)
{
#ifdef PENDRIVE_USED
	FATFS pendrive_fatfs;      /* Work area (filesystem object) for logical drives */
	DIR pendrive_dir;

	uint8_t *pendrive_filename;

    /* Register work area for logical drive 1*/
    error = f_mount(&pendrive_fatfs, "1:", 0);

    /* Create file on the pendrive */
    error = f_mkdir(_T("1:/EM"));

	if (error == FR_EXIST)
	{
		error = f_opendir(&pendrive_dir,_T("1:/EM"));
	}
	else
	{

	}
    pendrive_filename = pendrive_filename_creation("FaultLogging");
    error = f_open(&g_fileObject1,_T(pendrive_filename), FA_WRITE | FA_CREATE_ALWAYS | FA_OPEN_EXISTING);

    if(error == FR_OK)
    {
        created_new = 1;

        Read_all_errorlog_frames_from_winbond_table();
    }

	f_close(&g_fileObject1);
	f_closedir(&pendrive_dir);

	/* Unregister work area prior to discard it */
	f_mount(0, "1:", 0);
#else
    created_new = 1;
    Read_all_errorlog_frames_from_winbond_table();
#endif
}

void Copy_rawcanlog_file_to_pendrive(void)
{
#ifdef PENDRIVE_USED
	FATFS pendrive_fatfs;      /* Work area (filesystem object) for logical drives */
	DIR pendrive_dir;

	uint8_t *pendrive_filename;

    /* Register work area for logical drive 1*/
    error = f_mount(&pendrive_fatfs, "1:", 0);

    /* Create file on the pendrive */
    error = f_mkdir(_T("1:/EM"));

	if (error == FR_EXIST)
	{
		error = f_opendir(&pendrive_dir,_T("1:/EM"));
	}
	else
	{

	}
    pendrive_filename = pendrive_filename_creation("RawCanLogging");
    error = f_open(&g_fileObject1,_T(pendrive_filename), FA_WRITE | FA_CREATE_ALWAYS | FA_OPEN_EXISTING);

    if(error == FR_OK)
    {
    	raw_data_header = 1;
    	write_rawcan_frame_to_pendrive();
    }

	f_close(&g_fileObject1);
	f_closedir(&pendrive_dir);

	/* Unregister work area prior to discard it */
	f_mount(0, "1:", 0);
#else
	raw_data_header = 1;
	write_rawcan_frame_to_pendrive();
#endif
}

void Copy_WorkingHrslog_file_to_pendrive(void)
{
#ifdef PENDRIVE_USED
	FATFS pendrive_fatfs;      /* Work area (filesystem object) for logical drives */
	DIR pendrive_dir;

	uint8_t *pendrive_filename;

    /* Register work area for logical drive 1*/
    error = f_mount(&pendrive_fatfs, "1:", 0);

    /* Create file on the pendrive */
    error = f_mkdir(_T("1:/EM"));

	if (error == FR_EXIST)
	{
		error = f_opendir(&pendrive_dir,_T("1:/EM"));
	}
	else
	{

	}
    pendrive_filename = pendrive_filename_creation("WorkingHrsLogging");
    error = f_open(&g_fileObject1,_T(pendrive_filename), FA_WRITE | FA_CREATE_ALWAYS | FA_OPEN_EXISTING);

    if(error == FR_OK)
    {
        Swwhloggingheader = 1;

        log_no = 0;

        Read_all_swwhlog_frames_from_winbond_table();
    }

    log_no = 0;

	f_close(&g_fileObject1);
	f_closedir(&pendrive_dir);

	/* Unregister work area prior to discard it */
	f_mount(0, "1:", 0);
#else
    Swwhloggingheader = 1;
    log_no = 0;
    Read_all_swwhlog_frames_from_winbond_table();
#endif
}

void Logging(void)
{
	if(vms.flag.gauge_rotation_poweron != 1)
	{
		/*****************LOGGING*********************/
		Condition_to_datalog();

		/******Whenever the error comes log the error and data of parameters*****/
		Fault_logging();

    	workingHrsLogic();
	}
}

/*******copying of logged data in winbond memory to pendrive ***/
void Copying_of_logged_data(void)
{
	/******check whether Rawcan data is stored to TempArray[] and set gucRecordingStatus to 2 i.e COMPLETED***/
	if(store_raw_can_data_sd_card == 1)
	{
		store_raw_can_data_sd_card = 0;

		gucRecordingStatus  = 2;/*2:storing to TempArry[] completed */
	}

	/******************COPYING********************/
	USB_HostTaskFn(g_HostHandle);
	USB_HostMsdTask(&g_MsdFatfsInstance);

	/**********COPY Data_log, Fault_log data stored in the winbond memory to Pendrive and Raw_can data stored in the TempArray[] to Pendrive*********/
	if(bStartRawFrameUsb == 1 || bStartDataLogging == 1 || bStartFaultFrameUsb == 1 || bStrtWorkinghrsLogging == 1)
	{
		if(guiPendriveStatus == DETECTING_PENDRIVE)
		{

		}
		else if(guiPendriveStatus == PENDRIVE_DETECTED)
		{
			if(bStartRawFrameUsb == 1 && gucCopyStatus == COPYING)
			{
				/**This is added for rendering purpose
				 * i.e after user interface is completed
				 * then only copy the content to pendrive**/
				if(startcpy_to_pendrv == 1)
				{
					startcpy_to_pendrv = 0;
					Copy_rawcanlog_file_to_pendrive();
					gucCopyStatus = COMPLETED;
					bStartRawFrameUsb = 0;
				}else{}
			}
			else if(bStartDataLogging == 1 && gucCopyStatus == COPYING)
			{
				/**This is added for rendering purpose
				 * i.e after user interface is completed
				 * then only copy the content to pendrive**/
				if(startcpy_to_pendrv == 1)
				{
					startcpy_to_pendrv = 0;
					Copy_datalog_file_to_pendrive();
					gucCopyStatus = COMPLETED;
					bStartDataLogging = 0;
				}else{}
			}
			else if(bStartFaultFrameUsb == 1 && gucCopyStatus == COPYING)
			{
				/**This is added for rendering purpose
				 * i.e after user interface is completed
				 * then only copy the content to pendrive**/
				if(startcpy_to_pendrv == 1)
				{
					startcpy_to_pendrv = 0;
					Copy_errorlog_file_to_pendrive();
					gucCopyStatus = COMPLETED;
					bStartFaultFrameUsb = 0;
				}else{}
			}
			else if(bStrtWorkinghrsLogging == 1 && gucCopyStatus == COPYING)
			{
				/**This is added for rendering purpose
				 * i.e after user interface is completed
				 * then only copy the content to pendrive**/
				if(startcpy_to_pendrv == 1)
				{
					startcpy_to_pendrv = 0;
					Copy_WorkingHrslog_file_to_pendrive();
					gucCopyStatus = COMPLETED;
					bStrtWorkinghrsLogging = 0;
				}else{}
			}
			else{}

		}else{}

		if(usb_attached == 1 && gucCopyStatus == IDLE) /*CHECK PENDRIVE DETECTED OR NOT*/
		{
			guiPendriveStatus = PENDRIVE_DETECTED;
			gucCopyStatus = COPYING;
			pendrive_counter_timeout=0;
			pendrive_detected_timeout=0;
			start_pendrive_timeout=0;

			if(popeup_out_once==1)
			{
				popeup_out_once=0;
				pendrivestatusstrttimer=1;
			}

			Appwizard_rendering_pendrv_detect = 1;
		}else{}

	}else{}

	if(pendrive_removed==1)/*CHECK PENDRIVE REMOVED OR NOT */
	{
		pendrive_removed=0;
		guiPendrivePoPup=1;
		gucCopyStatus = IDLE;
		usb_attached=0;

		guiPendriveStatus = PENDRIVE_DETACHED;
		pendrivestatusstrttimer=1;
		popeup_out_once=0;
		gucRecordingStatus=0;

		bStartRawFrameUsb=0;
		bStartFaultFrameUsb=0;
		bStartDataLogging=0;
		bStrtWorkinghrsLogging = 0;
	}else{}

	if(pendrive_detected_timeout == 1)/*CHECK PENDRIVE DETECTION TIME OUT OR NOT */
	{
		pendrive_detected_timeout=0;
		guiPendriveStatus= PENDRIVE_NOT_DETECTED;
		gucCopyStatus = IDLE;
		usb_attached=0;

		popeup_out_once=0;
		gucRecordingStatus=0;

		bStartRawFrameUsb=0;
		bStartFaultFrameUsb=0;
		bStartDataLogging=0;
		bStrtWorkinghrsLogging = 0;
	}else{}
}

void Display_Errors(void)
{
	if(wait_donotlog_errs_immediately_during_pwron == 0)
	{
		ProcessDM1faultfromVMS();
	}

//	if(bDM1RxComplete == 1)
//	{
//		bDM1RxComplete = 0;
//		LoadFaultToStruct(gucSa);
//		memset(&strCanbTp,0,sizeof(strCanbTp));
//		store_dm1_mesg=1;
//		dm1_process_start = 0;
//	}
//	funcDm1ScreenScroll();

	if(bDM1RxComplete == 1)
	{
		LoadFaultToStruct(gucSa);
		memset(&DM1RecieveMsgBuffer,0,sizeof(DM1RecieveMsgBuffer));
		memset(&strCanbTp,0,sizeof(strCanbTp));
		bDM1RxComplete = 0;
		dm1_process_start = 0;
		//store_dm1_mesg=1;
	}
	Dm1ScreenScroll();
}

/**********Reassign the original source address of ECU, IO MODULE, transmission, aplms, abs/asr or etc, from DM1 array****/
uint16_t Re_asgn_Org_srs_addr_frm_dm1_array(uint16_t array_sa, uint16_t fault_no)
{
	uint16_t src_addrss = 0;

	if(strDM1Log[array_sa][fault_no].SourceAddress == ENGINE_ECU)
	{
		src_addrss = ENGINE_SA;
	}
	else if(strDM1Log[array_sa][fault_no].SourceAddress == TRANSMISSION_ECU)
	{
		src_addrss = TCM_SA;
	}
	else if(strDM1Log[array_sa][fault_no].SourceAddress == IOMODULE_ECU)
	{
		src_addrss = IO_MODULE_SA;
	}
	else if(strDM1Log[array_sa][fault_no].SourceAddress == VMS)
	{
		src_addrss = VMS;
	}
//	else if(strDM1Log[array_sa][fault_no].SourceAddress == ABS_ASR_MCU)
//	{
//		src_addrss = ABS_ASR_SA;
//	}
	else{}

	return(src_addrss);
}
uint16_t Re_asgn_Org_srs_addr_frm_dm1_array_2(uint16_t SA)
{
	uint16_t src_addrss = 0;

	if(SA == ENGINE_ECU)
	{
		src_addrss = ENGINE_SA;
	}
	else if(SA == TRANSMISSION_ECU)
	{
		src_addrss = TCM_SA;
	}
	else if(SA == IOMODULE_ECU)
	{
		src_addrss = IO_MODULE_SA;
	}
	else if(SA == VMS)
	{
		src_addrss = VMS_SA;
	}else{}

	return(src_addrss);
}
/*******Change screen, save data, send data, display data,,,,etc is based on the keypad interaction******/
void KeypadApplication(void)
{
	gucKeyPressed = strKeypadStatus.normalPress;

	ProcessDisplayData();

	gucKeyPressed = 0;
	strKeypadStatus.normalPress = 0;
}

void sendEngHrsRequest1(void)
{
	/*****Engine Hour request frame*******/
	Frame2.MailboxNumber = 2;
	Frame2.FrameId		 = 0x18EA00F2;
	Frame2.FramePriority = 6;
	Frame2.FrameData	 = 0x8CFE000000000000;
//	funcCanTransmitMailbox(CANA, Frame2);
	funcCanTransmitMailbox(CANB, Frame2);
}
void sendEngHrsRequest2(void)
{
	/*****Engine Hour request frame*******/
	Frame2.MailboxNumber = 2;
	Frame2.FrameId		 = 0x18EA00F2;
	Frame2.FramePriority = 6;
	Frame2.FrameData	 = 0xE5FE000000000000;
//	funcCanTransmitMailbox(CANA, Frame2);
	funcCanTransmitMailbox(CANB, Frame2);
}

void send_ToP_ToT(void)
{
	/* 4th byte spn:127, pgn:0xFEF8, transmission repetition rate: 1sec*/
	float ToP = 0;

	ToP = gfTop * 100;
	ToP = ToP / 16;

	/* 5th and 6th byte spn:177, pgn:0xFEF8, transmission repetition rate: 1sec*/
	float ToT = 0;

	ToT = gfCot+273;
	ToT = ToT * 32;

	unGeneralBufferFrame1.bytes.Byte1 = 0xFF;
	unGeneralBufferFrame1.bytes.Byte2 = 0xFF;
	unGeneralBufferFrame1.bytes.Byte3 = 0xFF;
	unGeneralBufferFrame1.bytes.Byte4 = ToP;
	unGeneralBufferFrame1.bytes.Byte5 = ToT;
	unGeneralBufferFrame1.bytes.Byte6 = (uint16_t)ToT >> 8;
	unGeneralBufferFrame1.bytes.Byte7 = 0xFF;
	unGeneralBufferFrame1.bytes.Byte8 = 0xFF;

	Frame1.MailboxNumber = 3;
	Frame1.FrameId		 = 0x18FEF8F2;
	Frame1.FramePriority = 6;
	Frame1.FrameData	 = unGeneralBufferFrame1.all;
	funcCanTransmitMailbox(CANB, Frame1);
}
void send_FueL_lvl(void)
{
	/* 2nd byte spn:96, pgn:0xFEFC, transmission repetition rate: 1sec*/
	float FueL_lvl = 0;

	FueL_lvl = gfFuel / 0.4;

	unGeneralBufferFrame2.bytes.Byte1 = 0xFF;
	unGeneralBufferFrame2.bytes.Byte2 = FueL_lvl;
	unGeneralBufferFrame2.bytes.Byte3 = 0xFF;
	unGeneralBufferFrame2.bytes.Byte4 = 0xFF;
	unGeneralBufferFrame2.bytes.Byte5 = 0xFF;
	unGeneralBufferFrame2.bytes.Byte6 = 0xFF;
	unGeneralBufferFrame2.bytes.Byte7 = 0xFF;
	unGeneralBufferFrame2.bytes.Byte8 = 0xFF;

	Frame2.MailboxNumber = 4;
	Frame2.FrameId		 = 0x18FEFCF2;
	Frame2.FramePriority = 6;
	Frame2.FrameData	 = unGeneralBufferFrame2.all;
	funcCanTransmitMailbox(CANB, Frame2);
}
/**Radiator water level*/
void send_ECL_EOP(void)
{
	/* 8th byte spn:111, pgn:0xFEEF, transmission repetition rate: 500ms*/
	uint8_t EcL = 0;

#ifdef DOZER_P_VER
	if(strReadInputs.bits.input1 == 0)
#else
	if(strReadInputs.bits.input5 == 1)
#endif
	{EcL = 0;}
	else
	{EcL = 250;}

	/* EOP
	 * no of byte: 1,
	 * byte position: 4th byte,
	 * spn:100, pgn:0xFEEF,
	 * transmission repetition rate: 500ms,
	 * priority: 6,
	 * Resolution: 4kpa/bit,
	 * offset: 0*/
	float E_O_P = 0;

	E_O_P = gfEop * 100;
	E_O_P = E_O_P / 4;

	unGeneralBufferFrame3.bytes.Byte1 = 0xFF;
	unGeneralBufferFrame3.bytes.Byte2 = 0xFF;
	unGeneralBufferFrame3.bytes.Byte3 = 0xFF;
	unGeneralBufferFrame3.bytes.Byte4 = E_O_P;
	unGeneralBufferFrame3.bytes.Byte5 = 0xFF;
	unGeneralBufferFrame3.bytes.Byte6 = 0xFF;
	unGeneralBufferFrame3.bytes.Byte7 = 0xFF;
	unGeneralBufferFrame3.bytes.Byte8 = EcL;

	Frame3.MailboxNumber = 5;
	Frame3.FrameId		 = 0x18FEEFF2;
	Frame3.FramePriority = 6;
	Frame3.FrameData	 = unGeneralBufferFrame3.all;
	funcCanTransmitMailbox(CANB, Frame3);
}
void send_ParkBrkSw_and_VehicleSpd(void)
{
	memset(&Frame4,0,sizeof(Frame4));

	/* Park brake switch
	 * SPN: 70, PGN: 0xFEF1, transmission repetition rate:100ms
	 * 1st byte 3rd & 4th bit position
		00 - Parking brake not set
		01 - Parking brake set
		10 - Error
		11 - Not available
	 * */
	if(diPrkbrk == 2)
	{unGeneralBufferFrame4.bytes.Byte1	 = 0xF7;}//01
	else if(diPrkbrk == 1)
	{unGeneralBufferFrame4.bytes.Byte1	 = 0xF3;}//00
	else if(diPrkbrk == 0)
	{unGeneralBufferFrame4.bytes.Byte1	 = 0xFF;}//11
	else
	{unGeneralBufferFrame4.bytes.Byte1	 = 0xFB;}//10

	/* Wheel based vehicle speed
	 * 2nd & 3rd byte position spn:84, pgn:0xFEF1, transmission repetition rate: 100
	 * 	Data Length: 2 bytes
		Resolution: 1/256 km/h per bit, 0 offset
		Data Range: 0 to 250.996 km/h Operational Range: same as data range
		Type: Measured
	 */
	uint16_t spd = 0;

	spd = giVehicleSpeed * 256;

	unGeneralBufferFrame4.bytes.Byte2 = 0xFF;//spd && 0x00FF;
	unGeneralBufferFrame4.bytes.Byte3 = 0xFF;//spd >> 8;
	unGeneralBufferFrame4.bytes.Byte4 = 0xFF;
	unGeneralBufferFrame4.bytes.Byte5 = 0xFF;
	unGeneralBufferFrame4.bytes.Byte6 = 0xFF;
	unGeneralBufferFrame4.bytes.Byte7 = 0xFF;
	unGeneralBufferFrame4.bytes.Byte8 = 0xFF;

	Frame4.MailboxNumber = 6;
	Frame4.FrameId		  = 0x18FEF1F2;
	Frame4.FramePriority = 6;
	Frame4.FrameData     = unGeneralBufferFrame4.all;
	funcCanTransmitMailbox(CANB, Frame4);
}

void send_AirFilClog(void)
{
	/* Engine Air Filter 1 Differential Pressure
	 * SPN: 107, PGN: 0xFEF6, transmission repetition rate:0.5sec
	 * 5th byte
	 * 	Data Length: 1 byte
		Resolution: 0.05 kPa/bit, 0 offset
		Data Range: 0 to 12.5 kPa Operational Range: same as data range
		Type: Measured
	 * */
	memset(&Frame5,0,sizeof(Frame5));

	if(strReadInputs.bits.input3 == 1)
	{Frame5.FrameData	 = 0xFFFFFFFFFAFFFFFF;}//250 i.e 12.5/0.05
	else if(strReadInputs.bits.input3 == 0)
	{Frame5.FrameData	 = 0xFFFFFFFF00FFFFFF;}//00
	else
	{Frame5.FrameData	 = 0xFFFFFFFFFFFFFFFF;}//255

	Frame5.MailboxNumber = 7;
	Frame5.FrameId		  = 0x18FEF6F2;
	Frame5.FramePriority = 6;

	funcCanTransmitMailbox(CANB, Frame5);
}

void send_SeatBeltSw(void)
{
	/* Seat belt switch
	 * SPN: 1856, PGN: 0xE000, transmission repetition rate:1sec
	 * 4th byte 7th & 8th bit position
		00 NOT Buckled
		01 OK - Seat Belt is buckled
		10 Error - Switch state cannot be determined
		11 Not Available
	 * */
	memset(&Frame6,0,sizeof(Frame6));

	if(strReadInputs.bits.input4 == 1)
	{Frame6.FrameData	 = 0x3FFFFFFFFFFFFFFF;}//00
	else if(strReadInputs.bits.input4 == 0)
	{Frame6.FrameData	 = 0x7FFFFFFFFFFFFFFF;}//01
	else if(diseatbelt == 0)
	{Frame6.FrameData	 = 0xFFFFFFFFFFFFFFFF;}//11
	else
	{Frame6.FrameData	 = 0xBFFFFFFFFFFFFFFF;}//10

	Frame6.MailboxNumber = 8;
	Frame6.FrameId		  = 0x18E000F2;
	Frame6.FramePriority = 6;

	funcCanTransmitMailbox(CANB, Frame6);
}

void send_ECT_EOT(void)
{
	/* ECT
	 * no of byte: 1,
	 * byte position: 1st byte,
	 * spn:110, pgn:0xFEEE,
	 * transmission repetition rate: 1s,
	 * priority: 6,
	 * Resolution: 1deg C/bit,
	 * offset: -40deg C*/
	float E_C_T = 0;

	E_C_T = gfEct + 40;

	/* EOT
	 * no of byte: 2,
	 * byte position: 3&4th byte,
	 * spn:175, pgn:0xFEEE,
	 * transmission repetition rate: 1s,
	 * priority: 6,
	 * Resolution: 0.03125deg C/bit,
	 * offset: -273 deg C*/
	float E_O_T = 0;

	E_O_T = gfEot + 273;
	E_O_T = E_O_T * 32;

	unGeneralBufferFrame5.bytes.Byte1 = E_C_T;
	unGeneralBufferFrame5.bytes.Byte2 = 0xFF;
	unGeneralBufferFrame5.bytes.Byte3 = E_O_T;
	unGeneralBufferFrame5.bytes.Byte4 = (uint16_t)E_O_T >> 8;
	unGeneralBufferFrame5.bytes.Byte5 = 0xFF;
	unGeneralBufferFrame5.bytes.Byte6 = 0xFF;
	unGeneralBufferFrame5.bytes.Byte7 = 0xFF;
	unGeneralBufferFrame5.bytes.Byte8 = 0xFF;

	Frame7.MailboxNumber = 9;
	Frame7.FrameId		 = 0x18FEEEF2;
	Frame7.FramePriority = 6;
	Frame7.FrameData	 = unGeneralBufferFrame5.all;
	funcCanTransmitMailbox(CANB, Frame7);
}

void send_E_N_G_SPD(void)
{
	/* Engine speed
	 * no of byte: 2,
	 * byte position: 4&5th byte,
	 * spn:190, pgn:0xF004,
	 * transmission repetition rate: 100ms(or engine dependent),
	 * priority: 3,
	 * Resolution: 0.125rpm/bit,
	 * offset: 0*/
	float E_N_G_SPD = 0;

	E_N_G_SPD = giEngineRpm * 8;

	unGeneralBufferFrame6.bytes.Byte1 = 0xFF;
	unGeneralBufferFrame6.bytes.Byte2 = 0xFF;
	unGeneralBufferFrame6.bytes.Byte3 = 0xFF;
	unGeneralBufferFrame6.bytes.Byte4 = E_N_G_SPD;
	unGeneralBufferFrame6.bytes.Byte5 = (uint16_t)E_N_G_SPD >> 8;
	unGeneralBufferFrame6.bytes.Byte6 = 0xFF;
	unGeneralBufferFrame6.bytes.Byte7 = 0xFF;
	unGeneralBufferFrame6.bytes.Byte8 = 0xFF;

	Frame8.MailboxNumber = 10;
	Frame8.FrameId		 = 0x0CF004F2;
	Frame8.FramePriority = 3;
	Frame8.FrameData	 = unGeneralBufferFrame6.all;
	funcCanTransmitMailbox(CANB, Frame8);
}

void send_TOFC(void)
{
	/* Transmission oil filter restriction switch
	 * no of byte: 1.1,
	 * bit position: 1&2nd bit,
	 * spn:3359, pgn:0xFD95,
	 * transmission repetition rate: 1s,
	 * priority: 6,
	 * Resolution:
	 * 00- No Restriction
	 * 01- Restriction exists on oil filter
	 * 10- Error
	 * 11-Not available
	 */
	memset(&Frame8,0,sizeof(Frame8));

	if(strReadInputs.bits.input2 == 0)
	{Frame8.FrameData	 = 0x3FFFFFFFFFFFFFFF;}//00
	else if(strReadInputs.bits.input2 == 1)
	{Frame8.FrameData	 = 0x7FFFFFFFFFFFFFFF;}//01
	else
	{Frame8.FrameData	 = 0xFFFFFFFFFFFFFFFF;}//11
//	else
//	{Frame8.FrameData	 = 0xBFFFFFFFFFFFFFFF;}//10

	Frame8.MailboxNumber = 11;
	Frame8.FrameId		  = 0x18FD95F2;
	Frame8.FramePriority = 6;

	funcCanTransmitMailbox(CANB, Frame8);
}

static unsigned int Filter_AIN1_counts(unsigned int Values_To_Read)
{
	static unsigned int Counter_10=0;
	unsigned long Average=0;
	unsigned char Counter_For=0;
	static unsigned char Zero_Speed_Occurence=0,Discarded_Value_Counter=0;

	static unsigned int Sensor_Val_Buffer[30]={0};
	static unsigned int Result=0;

	/*If previous result was greater than 50 then check the new samples tolerance with result*/
	if(Result>=50)
	{
		if(Values_To_Read<=(Result+3) && Values_To_Read>=(Result-3))
		{
			Sensor_Val_Buffer[Counter_10]=Values_To_Read;
			Counter_10++;
			if(Counter_10>=30)
			{
				Counter_10=0;
			}
			Discarded_Value_Counter=0;
		}
		/*If tolerance is greater than +/- 3 then validated the change in speed*/
		/*This validation checks that the change in speed is continuously available for next 25 samples of speed*/
		else
		{
			Discarded_Value_Counter++;
			if(Discarded_Value_Counter>=25)
			{
				Discarded_Value_Counter=0;
				/*Fill all buffer with new speed values*/
				for(Counter_For=0;Counter_For<=29;Counter_For++)
				{
					Sensor_Val_Buffer[Counter_For]=Values_To_Read;
				}
			}
		}
	}
	/*If speed is less than 50 then blindly buffer the speed values*/
	else
	{
		Sensor_Val_Buffer[Counter_10]=Values_To_Read;
		Counter_10++;
		if(Counter_10>=30)
		{
			Counter_10=0;
		}
	}


	/*Find average*/
	for(Counter_For=0;Counter_For<=29;Counter_For++)
	{
		Average+=Sensor_Val_Buffer[Counter_For];
	}
	Average/=30;

	/*If average goes zero for 2 samples validate it as zero speed*/
	if(Average!=0)
	{
		Result=Average;
	}
	else
	{
		Zero_Speed_Occurence++;
		if(Zero_Speed_Occurence==2)
		{
			Zero_Speed_Occurence=0;
			Result=0;
		}
	}
	return(Result);
}

static unsigned int Filter_AIN2_counts(unsigned int Values_To_Read)
{
	static unsigned int Counter_10=0;
	unsigned long Average=0;
	unsigned char Counter_For=0;
	static unsigned char Zero_Speed_Occurence=0,Discarded_Value_Counter=0;

	static unsigned int Sensor_Val_Buffer[30]={0};
	static unsigned int Result=0;

	/*If previous result was greater than 50 then check the new samples tolerance with result*/
	if(Result>=50)
	{
		if(Values_To_Read<=(Result+3) && Values_To_Read>=(Result-3))
		{
			Sensor_Val_Buffer[Counter_10]=Values_To_Read;
			Counter_10++;
			if(Counter_10>=30)
			{
				Counter_10=0;
			}
			Discarded_Value_Counter=0;
		}
		/*If tolerance is greater than +/- 3 then validated the change in speed*/
		/*This validation checks that the change in speed is continuously available for next 25 samples of speed*/
		else
		{
			Discarded_Value_Counter++;
			if(Discarded_Value_Counter>=25)
			{
				Discarded_Value_Counter=0;
				/*Fill all buffer with new speed values*/
				for(Counter_For=0;Counter_For<=29;Counter_For++)
				{
					Sensor_Val_Buffer[Counter_For]=Values_To_Read;
				}
			}
		}
	}
	/*If speed is less than 50 then blindly buffer the speed values*/
	else
	{
		Sensor_Val_Buffer[Counter_10]=Values_To_Read;
		Counter_10++;
		if(Counter_10>=30)
		{
			Counter_10=0;
		}
	}


	/*Find average*/
	for(Counter_For=0;Counter_For<=29;Counter_For++)
	{
		Average+=Sensor_Val_Buffer[Counter_For];
	}
	Average/=30;

	/*If average goes zero for 2 samples validate it as zero speed*/
	if(Average!=0)
	{
		Result=Average;
	}
	else
	{
		Zero_Speed_Occurence++;
		if(Zero_Speed_Occurence==2)
		{
			Zero_Speed_Occurence=0;
			Result=0;
		}
	}
	return(Result);
}

static unsigned int Filter_AIN3_counts(unsigned int Values_To_Read)
{
	static unsigned int Counter_10=0;
	unsigned long Average=0;
	unsigned char Counter_For=0;
	static unsigned char Zero_Speed_Occurence=0,Discarded_Value_Counter=0;

	static unsigned int Sensor_Val_Buffer[30]={0};
	static unsigned int Result=0;

	/*If previous result was greater than 50 then check the new samples tolerance with result*/
	if(Result>=50)
	{
		if(Values_To_Read<=(Result+3) && Values_To_Read>=(Result-3))
		{
			Sensor_Val_Buffer[Counter_10]=Values_To_Read;
			Counter_10++;
			if(Counter_10>=30)
			{
				Counter_10=0;
			}
			Discarded_Value_Counter=0;
		}
		/*If tolerance is greater than +/- 3 then validated the change in speed*/
		/*This validation checks that the change in speed is continuously available for next 25 samples of speed*/
		else
		{
			Discarded_Value_Counter++;
			if(Discarded_Value_Counter>=25)
			{
				Discarded_Value_Counter=0;
				/*Fill all buffer with new speed values*/
				for(Counter_For=0;Counter_For<=29;Counter_For++)
				{
					Sensor_Val_Buffer[Counter_For]=Values_To_Read;
				}
			}
		}
	}
	/*If speed is less than 50 then blindly buffer the speed values*/
	else
	{
		Sensor_Val_Buffer[Counter_10]=Values_To_Read;
		Counter_10++;
		if(Counter_10>=30)
		{
			Counter_10=0;
		}
	}


	/*Find average*/
	for(Counter_For=0;Counter_For<=29;Counter_For++)
	{
		Average+=Sensor_Val_Buffer[Counter_For];
	}
	Average/=30;

	/*If average goes zero for 2 samples validate it as zero speed*/
	if(Average!=0)
	{
		Result=Average;
	}
	else
	{
		Zero_Speed_Occurence++;
		if(Zero_Speed_Occurence==2)
		{
			Zero_Speed_Occurence=0;
			Result=0;
		}
	}
	return(Result);
}

static unsigned int Filter_Battery_counts(unsigned int Values_To_Read)
{
	static unsigned int Counter_10=0;
	unsigned long Average=0;
	unsigned char Counter_For=0;
	static unsigned char Zero_Speed_Occurence=0,Discarded_Value_Counter=0;

	static unsigned int Sensor_Val_Buffer[30]={0};
	static unsigned int Result=0;

	/*If previous result was greater than 50 then check the new samples tolerance with result*/
	if(Result>=50)
	{
		if(Values_To_Read<=(Result+3) && Values_To_Read>=(Result-3))
		{
			Sensor_Val_Buffer[Counter_10]=Values_To_Read;
			Counter_10++;
			if(Counter_10>=30)
			{
				Counter_10=0;
			}
			Discarded_Value_Counter=0;
		}
		/*If tolerance is greater than +/- 3 then validated the change in speed*/
		/*This validation checks that the change in speed is continuously available for next 25 samples of speed*/
		else
		{
			Discarded_Value_Counter++;
			if(Discarded_Value_Counter>=25)
			{
				Discarded_Value_Counter=0;
				/*Fill all buffer with new speed values*/
				for(Counter_For=0;Counter_For<=29;Counter_For++)
				{
					Sensor_Val_Buffer[Counter_For]=Values_To_Read;
				}
			}
		}
	}
	/*If speed is less than 50 then blindly buffer the speed values*/
	else
	{
		Sensor_Val_Buffer[Counter_10]=Values_To_Read;
		Counter_10++;
		if(Counter_10>=30)
		{
			Counter_10=0;
		}
	}


	/*Find average*/
	for(Counter_For=0;Counter_For<=29;Counter_For++)
	{
		Average+=Sensor_Val_Buffer[Counter_For];
	}
	Average/=30;

	/*If average goes zero for 2 samples validate it as zero speed*/
	if(Average!=0)
	{
		Result=Average;
	}
	else
	{
		Zero_Speed_Occurence++;
		if(Zero_Speed_Occurence==2)
		{
			Zero_Speed_Occurence=0;
			Result=0;
		}
	}
	return(Result);
}

void Decide_eng_on_or_not(void)
{
    if(Eng_rpm_present == 1)
    {
    	eng_on = 1;
    }
    else
    {
    	eng_on = 0;
    }
}

void CheckEngRpm_is_coming(void)
{
	if(giEngineRpm > 500)
	{
		Eng_rpm_present = 1;
	}
	else
	{
		Eng_rpm_present = 0;
	}
}

#ifdef SYSTICK_TIMER_USED
void tmr_display_hrs(void)
{
	/**************display hours calculation related timer******/
	if(start_tmr_for_disp_hrs_log == 1 && log_sec_counter != 1)
	{
		log_sec_counter = 1;
		disp_seconds_cntr++;
		if(disp_seconds_cntr >= 360)/*******For every 6 minutes*******/
		{
			disp_seconds_cntr = 0;
			log_display_hrs = 1;
		}
	}
    else if(start_tmr_for_disp_hrs_log == 0 && log_sec_counter == 0)
    {
        log_sec_counter = 2;
    }
}

uint32_t DisplayHours_calculation(void)
{
	uint32_t TotalDisplayHr = 0;

        if(display_on == 1)
        {
            if(log_sec_counter == 3)
            {
            	disp_seconds_cntr = MemoryReadVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, 2);
                if(disp_seconds_cntr == 0 || disp_seconds_cntr == 0xFFFF)
                {
                	disp_seconds_cntr = 0;
                    MemoryWriteVariable(PRIMARY_MEMORY,DISPLAY_SEC_CNTR,disp_seconds_cntr,2);
                }
            }
            start_tmr_for_disp_hrs_log = 1;
        }
        else
        {
        	start_tmr_for_disp_hrs_log = 0;
        }

        if(log_sec_counter == 1)
        {
            log_sec_counter = 0;
            MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, disp_seconds_cntr, 2);
        }
        else if(log_sec_counter == 2)
        {
            log_sec_counter = 3;
            if(disp_seconds_cntr != MemoryReadVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, 2))
            {
                MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, disp_seconds_cntr, 2);
            }
        }
/******FOR every 6minutes increment the fractional value of display hours**/
	if(log_display_hrs == 1)
	{
		log_display_hrs = 0;
		Display_fractn_hr++;
		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_FRACTN_HRS, Display_fractn_hr, 1);
	}else{}

/***whenever fractional value of display hours reaches greater than or equal to 10 increment Display actual hour**/
	if(Display_fractn_hr >= 10)
	{
		Display_fractn_hr = 0;
		Display_actual_hr++;
		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_ACTUAL_HRS, Display_actual_hr, 4);
	}

	TotalDisplayHr = Display_actual_hr;
	TotalDisplayHr = TotalDisplayHr * ONE_FRAC_DIGIT;
	TotalDisplayHr = TotalDisplayHr + Display_fractn_hr;

	return TotalDisplayHr;
}
#endif

void DisplayHrs(void)
{
//	CheckEngRpm_is_coming();
//	Decide_eng_on_or_not();

#ifdef SYSTICK_TIMER_USED
	DisplayHourMeter = DisplayHours_calculation();
#else
	DisplayHourMeter = DisplayHoursUsingRTC();
#endif

	if(DisplayHourMeter > 9999999)
	{
		disp_seconds_cntr = 0;
		Display_fractn_hr = 0;
		Display_actual_hr = 0;
		DisplayHourMeter  = 0;

		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR  , disp_seconds_cntr,2);
		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_FRACTN_HRS, Display_fractn_hr, 1);
		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_ACTUAL_HRS, Display_actual_hr, 4);
	}
	/**************************************************************/
}

uint32_t DisplayHoursUsingRTC(void)
{
	uint32_t TotalDisplayHr = 0;

	uint8_t prsnt_hr  = 0,prsnt_min = 0,prsnt_sec = 0;

	uint32_t present_time = 0,reference_time = 0,diff_time = 0,stored_ref_time = 0;

	prsnt_hr  = strDateTime.Hour;
	prsnt_min = strDateTime.Minute;
	prsnt_sec = strDateTime.Second;

	if(make_ref_time_as_prsnt_time == 1 || rtc_datetime_edited == 1)
	{
		ref_hr  = prsnt_hr;
		ref_min = prsnt_min;
		ref_sec = prsnt_sec;
		make_ref_time_as_prsnt_time = 0;
		rtc_datetime_edited = 0;
	}

	present_time = (prsnt_hr*60*60) + (prsnt_min*60) + prsnt_sec;//in seconds
	reference_time = (ref_hr*60*60) + (ref_min*60) + ref_sec;//in seconds

	if(reference_time > present_time)
	{
		diff_time = 0;
	}
	else
	{
		diff_time = present_time - reference_time;
	}

	stored_ref_time = MemoryReadVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, 2);
	diff_time = diff_time + stored_ref_time;

	if(diff_time >= SIX_MINUTE)//360seconds = 6minutes
	{
		if(diff_time > SIX_MINUTE)
		{
			diff_time = diff_time - SIX_MINUTE;
		}
		else
		{
			diff_time = 0;
		}
//		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, diff_time, 2);

		Display_fractn_hr++;
		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_FRACTN_HRS, Display_fractn_hr, 1);
	}
//	else if(diff_time != stored_ref_time)
//	{
//		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, diff_time, 2);
//	}
	MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_SEC_CNTR, diff_time, 2);

	ref_hr  = prsnt_hr;
	ref_min = prsnt_min;
	ref_sec = prsnt_sec;

/***whenever fractional value of display hours reaches greater than or equal to 10 increment Display actual hour**/
	if(Display_fractn_hr >= 10)
	{
		Display_fractn_hr = 0;
		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_FRACTN_HRS, Display_fractn_hr, 1);
		Display_actual_hr++;
		MemoryWriteVariable(PRIMARY_MEMORY, DISPLAY_ACTUAL_HRS, Display_actual_hr, 4);
	}

	TotalDisplayHr = Display_actual_hr;
	TotalDisplayHr = TotalDisplayHr * ONE_FRAC_DIGIT;
	TotalDisplayHr = TotalDisplayHr + Display_fractn_hr;

	return TotalDisplayHr;
}

void EngineHrs(void)
{
#ifdef SYSTICK_TIMER_USED
	CheckEngRpm_is_coming();
	Decide_eng_on_or_not();
	EngineHourMeter = EngineHours_calculation();
#else
	if(giEngineRpm > 500)
	{make_ref_tm_as_prsnt_tm_eng_hrs = 0;}
	else
	{make_ref_tm_as_prsnt_tm_eng_hrs = 1;}

	EngineHourMeter = EngineHoursUsingRTC();
#endif

	if(EngineHourMeter > 9999999)
	{
		eng_seconds_cntr = 0;
		eng_fractn_hr = 0;
		eng_actual_hr = 0;
		EngineHourMeter  = 0;

		MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_SEC_CNTR  , eng_seconds_cntr,2);
		MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_FRACTN_HRS, eng_fractn_hr, 1);
		MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_ACTUAL_HRS, eng_actual_hr, 4);
	}
}

uint32_t EngineHoursUsingRTC(void)
{
	uint32_t TotalEngineHr = 0;

	uint8_t prsnt_hr  = 0,prsnt_min = 0,prsnt_sec = 0;

	uint32_t present_time = 0,reference_time = 0,diff_time = 0,stored_ref_time = 0;

	prsnt_hr  = strDateTime.Hour;
	prsnt_min = strDateTime.Minute;
	prsnt_sec = strDateTime.Second;

	if(make_ref_tm_as_prsnt_tm_eng_hrs == 1 || rtc_datetime_edited_enghrs == 1)
	{
		reference_hr  = prsnt_hr;
		reference_min = prsnt_min;
		reference_sec = prsnt_sec;
		make_ref_tm_as_prsnt_tm_eng_hrs = 0;
		rtc_datetime_edited_enghrs = 0;
	}

	present_time = (prsnt_hr*60*60) + (prsnt_min*60) + prsnt_sec;//in seconds
	reference_time = (reference_hr*60*60) + (reference_min*60) + reference_sec;//in seconds

	if(reference_time > present_time)
	{
		diff_time = 0;
	}
	else
	{
		diff_time = present_time - reference_time;
	}

	stored_ref_time = MemoryReadVariable(PRIMARY_MEMORY, ENGINE_SEC_CNTR, 2);
	diff_time = diff_time + stored_ref_time;

	if(diff_time >= SIX_MINUTE)//360seconds = 6minutes
	{
		if(diff_time > SIX_MINUTE)
		{
			diff_time = diff_time - SIX_MINUTE;
		}
		else
		{
			diff_time = 0;
		}
//		MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_SEC_CNTR, diff_time, 2);

		eng_fractn_hr++;
		MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_FRACTN_HRS, eng_fractn_hr, 1);
	}
//	else if(diff_time != stored_ref_time)
//	{
//		MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_SEC_CNTR, diff_time, 2);
//	}
	MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_SEC_CNTR, diff_time, 2);

	reference_hr  = prsnt_hr;
	reference_min = prsnt_min;
	reference_sec = prsnt_sec;

/***whenever fractional value of display hours reaches greater than or equal to 10 increment Display actual hour**/
	if(eng_fractn_hr >= 10)
	{
		eng_fractn_hr = 0;
		MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_FRACTN_HRS, eng_fractn_hr, 1);
		eng_actual_hr++;
		MemoryWriteVariable(PRIMARY_MEMORY, ENGINE_ACTUAL_HRS, eng_actual_hr, 4);
	}

	TotalEngineHr = eng_actual_hr;
	TotalEngineHr = TotalEngineHr * ONE_FRAC_DIGIT;
	TotalEngineHr = TotalEngineHr + eng_fractn_hr;

	return TotalEngineHr;
}
void ADC_channel_processing(uint8_t adc_channel_no, uint32_t raw_adc_counts)
{
    switch(adc_channel_no)
    {
    case CH_A1_R1:
    		a1_cnts = raw_adc_counts;
            if(a1_cnts >= CH1_OPEN_CNTS)
            {
                a1_conv_val = 0;
                a1_type = 60000;
            }
            else if(a1_cnts <= CH1_SHORT_CNTS)
            {
                a1_conv_val = 0;
                a1_type = 0;
            }
            else
            {
            	a1_conv_val = LoadProcessedValue(CH_A1_R1, a1_cnts);
            }
            gfCot = a1_conv_val;
            break;

     case CH_A2_I1:
    	 	a2_cnts = raw_adc_counts;
          	if(a2_cnts >= CH2_OPEN_CNTS)
            {
            	a2_conv_val = 0;
            	a2_type = 0;
            }
            else if(a2_cnts <= CH2_SHORT_CNTS)
            {
            	a2_conv_val = 0;
            	a2_type = 0;
            }
            else
            {
            	a2_conv_val = LoadProcessedValue(CH_A2_I1, a2_cnts);
            }
            gfTop = a2_conv_val;
            break;

     case CH_A3_R1://E Version
    	 	a3_cnts = raw_adc_counts;
            if(a3_cnts >= CH3_OPEN_CNTS)
            {
            	a3_conv_val = 0;
            	a3_type = 60000;
            }
            else if(a3_cnts <= CH3_SHORT_CNTS)
            {
            	a3_conv_val = 0;
            	a3_type = 0;
            }
            else
            {
            	a3_conv_val = LoadProcessedValue(CH_A3_R1, a3_cnts);
            }
            gfFuel = a3_conv_val;
            break;

     case CH_A3_I1://P Version
    	 	a3_cnts = raw_adc_counts;
            if(a3_cnts >= CH3_OPEN_CNTS)
            {
            	a3_conv_val = 0;
            	a3_type = 0;
            }
            else if(a3_cnts <= CH3_SHORT_CNTS)
            {
            	a3_conv_val = 0;
            	a3_type = 0;
            }
            else
            {
            	a3_conv_val = LoadProcessedValue(CH_A3_I1, a3_cnts);
            }
            gfEop = a3_conv_val;
            break;

	case CH_BATT_IN:
			battery_cnts = raw_adc_counts;
			battery_conv_val = LoadProcessedValue(CH_BATT_IN, battery_cnts);
			if(battery_conv_val > 8 && battery_conv_val <= 24)
			{gfVolt= battery_conv_val - 0.3;}
			else if(battery_conv_val > 24 && battery_conv_val <= 30)
			{gfVolt= battery_conv_val - 0.5;}
			else if(battery_conv_val > 30 && battery_conv_val <= 36)
			{gfVolt= battery_conv_val - 0.6;}
			else
			{gfVolt= battery_conv_val;}

			break;

     default :
            break;
    }

//    guicotadcvalue = a1_cnts;
//    guitopadcvalue = a2_cnts;
//    guieopadcvalue = a3_cnts;
//    guibatteryadcvalue = battery_cnts;

//    guicotresistancevalue = a1_type;
//    gftopcurrentvalue = a2_type;
//    gfeopcurrentvalue = a3_type;
}
void All_CAN_disconnected_counter(void)
{
	if(Can_Comm.strt_tmr_entirecan_discnctd == 1)
	{
		/*Entire CAN*/
		Can_Comm.Can_Disconnected_Counter++;
		if(Can_Comm.Can_Disconnected_Counter >= TEN_SEC)
		{
			Can_Comm.strt_tmr_entirecan_discnctd = 0;
			Can_Comm.Can_Disconnected_Counter = 0;
			Can_Comm.Reset_AllCanParameters = 1;
		}
	}

	if(Can_Comm.strt_tmr_engcan_discnctd == 1)
	{
		/*Engine CAN*/
		Can_Comm.EngCanDisconnectedCntr++;
		if(Can_Comm.EngCanDisconnectedCntr >= TEN_SEC)
		{
			Can_Comm.strt_tmr_engcan_discnctd = 0;
			Can_Comm.EngCanDisconnectedCntr = 0;
			Can_Comm.Reset_EngCanParameters = 1;
		}
	}

	if(Can_Comm.strt_tmr_transcan_discnctd == 1)
	{
		/*Transmission CAN*/
		Can_Comm.TransCanDisconnectedCntr++;
		if(Can_Comm.TransCanDisconnectedCntr >= TEN_SEC)
		{
			Can_Comm.strt_tmr_transcan_discnctd = 0;
			Can_Comm.TransCanDisconnectedCntr = 0;
			Can_Comm.Reset_TransCanParameters = 1;
		}
	}

	if(Can_Comm.strt_tmr_iomcan_discnctd == 1)
	{
		/*IO module CAN*/
		Can_Comm.IomCanDisconnectedCntr++;
		if(Can_Comm.IomCanDisconnectedCntr >= TEN_SEC)
		{
			Can_Comm.strt_tmr_iomcan_discnctd = 0;
			Can_Comm.IomCanDisconnectedCntr = 0;
			Can_Comm.Reset_IomCanParameters = 1;
		}
	}

	if(Can_Comm.strt_tmr_sendercan_discnctd = 1)
	{
		/*Sender CAN*/
		Can_Comm.SenderCanDisconnectedCntr++;
		if(Can_Comm.SenderCanDisconnectedCntr >= TEN_SEC)
		{
			Can_Comm.strt_tmr_sendercan_discnctd = 0;
			Can_Comm.SenderCanDisconnectedCntr = 0;
			Can_Comm.Reset_SenderCanParameters = 1;
		}
	}
}

void Reset_all_CAN_parameters(void)
{
	if(Can_Comm.Reset_AllCanParameters == 1 )
	{
		//Can_Comm.Reset_AllCanParameters = 0;
		memset(&Can_Comm,0,sizeof(Can_Comm));

/*
		memset(&strDM1LogPrev,	0,	sizeof(strDM1LogPrev));
		memset(&strDM1Log,	0,	sizeof(strDM1Log));
		memset(&DM1_Error,0,sizeof(DM1_Error));
		memset(&ScrollError,0,sizeof(ScrollError));

		memset(&gucFaultLogs,0,sizeof(gucFaultLogs));
		memset(&faultsymbols,	0,	sizeof(faultsymbols));
*/

		memset(&DM1RecieveMsgBuffer,0,sizeof(DM1RecieveMsgBuffer));
		memset(&strCanbTp,0,sizeof(strCanbTp));

		Reset_Engine_CAN_parameters();
		Reset_Transmission_CAN_parameters();
		Reset_Io_module_CAN_parameters();
		Reset_Sender_CAN_parameters();
	}

	if(Can_Comm.Reset_EngCanParameters == 1)
	{
		Can_Comm.Reset_EngCanParameters = 0;
		Reset_Engine_CAN_parameters();
	}

	if(Can_Comm.Reset_TransCanParameters== 1)
	{
		Can_Comm.Reset_TransCanParameters = 0;
		Reset_Transmission_CAN_parameters();
	}

	if(Can_Comm.Reset_IomCanParameters== 1)
	{
		Can_Comm.Reset_IomCanParameters = 0;
		Reset_Io_module_CAN_parameters();
	}
	if(Can_Comm.Reset_SenderCanParameters== 1)
	{
		Can_Comm.Reset_SenderCanParameters = 0;
		Reset_Sender_CAN_parameters();
	}
}

void Reset_Engine_CAN_parameters(void)
{
#ifdef DOZER_P_VER
#else
	for(uint8_t i = 0; i < NO_OF_DM1_MESSAGES; i++)
	{
		strDM1Log[ENGINE_ECU][i].MessageId = 0;
		strDM1Log[ENGINE_ECU][i].OccuranceCount = 0;
		strDM1Log[ENGINE_ECU][i].PlugId = 0;
		strDM1Log[ENGINE_ECU][i].SourceAddress = 0;
		strDM1Log[ENGINE_ECU][i].SpnFmi = 0;
		strDM1Log[ENGINE_ECU][i].Status = 0;

		strDM1LogPrev[ENGINE_ECU][i].MessageId = 0;
		strDM1LogPrev[ENGINE_ECU][i].OccuranceCount = 0;
		strDM1LogPrev[ENGINE_ECU][i].PlugId = 0;
		strDM1LogPrev[ENGINE_ECU][i].SourceAddress = 0;
		strDM1LogPrev[ENGINE_ECU][i].SpnFmi = 0;
		strDM1LogPrev[ENGINE_ECU][i].Status = 0;
	}
	gucFaultLogs[ENGINE_ECU] = 0;

	for(uint8_t k = 0;k <= 45;k++)
	{
		DM1_Error[k].SourceAddress 	= 0;
		DM1_Error[k].SpnFmi 		= 0;
		DM1_Error[k].Status 		= 0;
		DM1_Error[k].MessageId 		= 0;
		DM1_Error[k].OccuranceCount	= 0;
		DM1_Error[k].PlugId 		= 0;

		ScrollError[k] = ERROR_INACTIVE;
	}

	DiagPage2[ENGINE_ECU].Address = 0;
	DiagPage2[ENGINE_ECU].CurrentCount = 0;
	DiagPage2[ENGINE_ECU].DeviceId = 0;
	DiagPage2[ENGINE_ECU].FMI = 0;
	DiagPage2[ENGINE_ECU].MaximumCount = 0;
	DiagPage2[ENGINE_ECU].Message = 0;
	DiagPage2[ENGINE_ECU].OccCount = 0;
	DiagPage2[ENGINE_ECU].SPN = 0;
	DiagPage2[ENGINE_ECU].Status = 0;

	/**Engine speed**/
	EngRpmCan = 0;
	/**ECT**/
	gfEct = 0;
	/**EOT**/
	gfEot = 0;
	/**EOP**/
	gfEop = 0;
	/**Engine Battery voltage**/
	gfEng_battry_volt = 0;
	/**FIP Rack position**/
	gfFIP_RackPosition = 0;
	/**Engine Hours**/
	//EngineHourMeter = 0;
	/**Boost Pressure**/
	gfBoostPressure = 0;
	/**Engine Fuel Rate**/
	//gfFuel_rate = 0;

	/*******gauge icons****/
	faultsymbols.rpm = 0;
	faultsymbols.ect = 0;
	faultsymbols.eot = 0;
	faultsymbols.eop = 0;
#endif
}
void Reset_Transmission_CAN_parameters(void)
{
#ifdef DOZER_P_VER
#else
	for(uint8_t i = 0; i < NO_OF_DM1_MESSAGES; i++)
	{
		strDM1Log[TRANSMISSION_ECU][i].MessageId = 0;
		strDM1Log[TRANSMISSION_ECU][i].OccuranceCount = 0;
		strDM1Log[TRANSMISSION_ECU][i].PlugId = 0;
		strDM1Log[TRANSMISSION_ECU][i].SourceAddress = 0;
		strDM1Log[TRANSMISSION_ECU][i].SpnFmi = 0;
		strDM1Log[TRANSMISSION_ECU][i].Status = 0;

		strDM1LogPrev[TRANSMISSION_ECU][i].MessageId = 0;
		strDM1LogPrev[TRANSMISSION_ECU][i].OccuranceCount = 0;
		strDM1LogPrev[TRANSMISSION_ECU][i].PlugId = 0;
		strDM1LogPrev[TRANSMISSION_ECU][i].SourceAddress = 0;
		strDM1LogPrev[TRANSMISSION_ECU][i].SpnFmi = 0;
		strDM1LogPrev[TRANSMISSION_ECU][i].Status = 0;
	}
	gucFaultLogs[TRANSMISSION_ECU] = 0;
/*
	for(uint8_t n = 78;n <= 155;n++)
	{
		DM1_Error[n].SourceAddress 	= 0;
		DM1_Error[n].SpnFmi 		= 0;
		DM1_Error[n].Status 		= 0;
		DM1_Error[n].MessageId 		= 0;
		DM1_Error[n].OccuranceCount	= 0;
		DM1_Error[n].PlugId 		= 0;

		ScrollError[n] = ERROR_INACTIVE;
	}
	DiagPage2[TRANSMISSION_ECU].Address = 0;
	DiagPage2[TRANSMISSION_ECU].CurrentCount = 0;
	DiagPage2[TRANSMISSION_ECU].DeviceId = 0;
	DiagPage2[TRANSMISSION_ECU].FMI = 0;
	DiagPage2[TRANSMISSION_ECU].MaximumCount = 0;
	DiagPage2[TRANSMISSION_ECU].Message = 0;
	DiagPage2[TRANSMISSION_ECU].OccCount = 0;
	DiagPage2[TRANSMISSION_ECU].SPN = 0;
	DiagPage2[TRANSMISSION_ECU].Status = 0;
*/
#endif
}
void Reset_Io_module_CAN_parameters(void)
{
#ifdef DOZER_P_VER
#else
	for(uint8_t i = 0; i < NO_OF_DM1_MESSAGES; i++)
	{
		strDM1Log[IOMODULE_ECU][i].MessageId = 0;
		strDM1Log[IOMODULE_ECU][i].OccuranceCount = 0;
		strDM1Log[IOMODULE_ECU][i].PlugId = 0;
		strDM1Log[IOMODULE_ECU][i].SourceAddress = 0;
		strDM1Log[IOMODULE_ECU][i].SpnFmi = 0;
		strDM1Log[IOMODULE_ECU][i].Status = 0;

		strDM1LogPrev[IOMODULE_ECU][i].MessageId = 0;
		strDM1LogPrev[IOMODULE_ECU][i].OccuranceCount = 0;
		strDM1LogPrev[IOMODULE_ECU][i].PlugId = 0;
		strDM1LogPrev[IOMODULE_ECU][i].SourceAddress = 0;
		strDM1LogPrev[IOMODULE_ECU][i].SpnFmi = 0;
		strDM1LogPrev[IOMODULE_ECU][i].Status = 0;
	}
	gucFaultLogs[IOMODULE_ECU] = 0;
/*
	for(uint8_t k = 0;k <= 15;k++)
	{
		DM1_Error[k].SourceAddress 	= 0;
		DM1_Error[k].SpnFmi 		= 0;
		DM1_Error[k].Status 		= 0;
		DM1_Error[k].MessageId 		= 0;
		DM1_Error[k].OccuranceCount	= 0;
		DM1_Error[k].PlugId 		= 0;

		ScrollError[k] = ERROR_INACTIVE;
	}
	DiagPage2[IOMODULE_ECU].Address = 0;
	DiagPage2[IOMODULE_ECU].CurrentCount = 0;
	DiagPage2[IOMODULE_ECU].DeviceId = 0;
	DiagPage2[IOMODULE_ECU].FMI = 0;
	DiagPage2[IOMODULE_ECU].MaximumCount = 0;
	DiagPage2[IOMODULE_ECU].Message = 0;
	DiagPage2[IOMODULE_ECU].OccCount = 0;
	DiagPage2[IOMODULE_ECU].SPN = 0;
	DiagPage2[IOMODULE_ECU].Status = 0;
*/
#endif
}
void Reset_Sender_CAN_parameters(void)
{
	Sender_CAN_Alive = 0;

	ain1_s_cnts = 0;
	ain2_s_cnts = 0;
	ain3_s_cnts = 0;
	ain4_s_cnts = 0;

	ain1_s_type = 0;
	ain2_s_type = 0;
	ain3_s_type = 0;
	ain4_s_type = 0;

	ain1_s_value = 0;
	ain3_s_value = 0;
	ain4_s_value = 0;

#ifdef DOZER_P_VER
	ain2_s_value = 0;//EOT
	faultsymbols.ect=0;
	faultsymbols.eot=0;
	faultsymbols.fuel=0;
#else
	ain2_s_value = -45;//HOT Minimum value is -45
#endif

//	di_hol = 0;/*digital input*/
//	Hol_Resistance = 0;
//	guiHolCounts = 0;
//	gfHol = 0;
//
//	Hot_Resistance = 0;
//	guiHotCounts = 0;
//	gfHot = -45;
}
void SeatBeltFlow(void)
{
	if(strReadInputs.bits.input4 == 1)
	{
		if(giEngineRpm > 500)
		{
			strt_tmr_for_seatbelt_symbol_toggle = 1;
		}
		else
		{
			strt_tmr_for_seatbelt_symbol_toggle = 1;
		}
	}
	else
	{
		strt_tmr_for_seatbelt_symbol_toggle = 0;

		if(diseatbelt == 1)
		{
			giIcon07 = 1;/*Transparent*/
		}
//		else
//		{
//			diseatbelt = 1;/*Gray if(giIcon08 == 1)*/
//		}
	}
}

void SeatbeltIconToggle(void)
{
	if(strt_tmr_for_seatbelt_symbol_toggle == 1)
	{
		toggle_seatbelt_cntr++;

		if(toggle_seatbelt_cntr == 100)
		{
			giIcon07 = 2;//diseatbelt = 2;/*Red*/
		}
		else if(toggle_seatbelt_cntr == 200)
		{
			toggle_seatbelt_cntr = 0;

			giIcon07 = 1;//diseatbelt = 1;/*Gray*/
		}
	}
	else
	{
		toggle_seatbelt_cntr = 0;
	}
}
void ErrorIconToggle(void)
{
	if(strt_tmr_for_err_icon_toggle == 1)
	{
		toggle_err_icon_cntr++;
		if(toggle_err_icon_cntr == 100)
		{
			giIcon16 = 1;/*Recall*/
		}
		else if(toggle_err_icon_cntr == 200)
		{
			toggle_err_icon_cntr = 0;

			giIcon16 = 0;/*Transparent*/
		}
	}
	else
	{
		toggle_err_icon_cntr = 0;
	}
}

void id_notset_Toggle(void)
{
	if(strt_tmr_for_idntset_toggle == 1)
	{
		toggle_idntset_cntr++;
		if(toggle_idntset_cntr == 200)
		{
			id_not_set = 1;/*Identification Not Set!*/
		}
		else if(toggle_idntset_cntr == 400)
		{
			toggle_idntset_cntr = 0;

			id_not_set = 0;/*Transparent*/
		}
	}
	else
	{
		toggle_idntset_cntr = 0;
	}
}

void Condition_to_datalog(void)
{
	if((datalog_pwron == 1) && (giScreenSwitch == 6 || giScreenSwitch == 7 || giScreenSwitch == 8 || giScreenSwitch == 9 ||
	   giScreenSwitch == 26 || giScreenSwitch == 27 || giScreenSwitch == 36 || giScreenSwitch == 37))
	{
		Data_logging();
		datalog_pwron = 2;
	}else{}

	if(giEngineRpm > 500 && datalog_pwron == 2)
	{
		Data_logging();
		datalog_pwron = 3;
	}else{}

	if(giEngineRpm == 0 && datalog_pwron == 3)
	{
		Data_logging();
		datalog_pwron = 2;

		//avgflrt();
	}else{}


	/*********For Every 10minutes log the data of the parameters*******/
	if(data_logging_10min==1)/*mdfd by Rajashekhar on 05.09.2022*/
	{
		Data_logging();

		data_logging_10min=0;
		dataloggingcounter=0;
		start_data_logging_for_every_10min=1;
	}
}

void BUZZER_ENABLE(void)
{
	if(faultsymbols.eop == 1)
	{
		BUZZER_ON;
	}
	else if(faultsymbols.ect == 1)
	{
		BUZZER_ON;
	}
	else if(faultsymbols.eot == 1)
	{
		BUZZER_ON;
	}
	else if((faultsymbols.top == 1) && (giEngineRpm > 500) && (gfTop <= 10))/*TOP warnings are dependent on Engine RPM > 500*/
	{
		BUZZER_ON;
	}
	else if(faultsymbols.cot == 1)
	{
		BUZZER_ON;
	}
	else if(diRwl == 2)
	{
		BUZZER_ON;
	}
	else if(strReadInputs.bits.input3 == 1)/*Air Filter clogged*/
	{
		BUZZER_ON;
	}
	else if(strReadInputs.bits.input2 == 1)/*Parking brake on*/
	{
		BUZZER_ON;
	}
	else if(strReadInputs.bits.input4 == 1)/*Seat belt*/
	{
		BUZZER_ON;
	}
	else if(strReadInputs.bits.input5 == 1)/*EOFC*/
	{
		BUZZER_ON;
	}
	else if(gucFaultsActive == 1)
	{
		BUZZER_ON;
	}
	else
	{
		BUZZER_OFF;
	}
}
void EopIconToggle(void)
{
	if(faultsymbols.eop == 1)
	{strt_tmr_for_eop_icon_toggle = 1;}
	else
	{strt_tmr_for_eop_icon_toggle = 0;}

	if(strt_tmr_for_eop_icon_toggle == 1)
	{
		toggle_eop_icon_cntr++;
		if(toggle_eop_icon_cntr == 100)
		{
			giIcon02 = 2;/*red*/
		}
		else if(toggle_eop_icon_cntr == 200)
		{
			toggle_eop_icon_cntr = 0;

			giIcon02 = 1;/*grey*/
		}
	}
	else
	{
		toggle_eop_icon_cntr = 0;
	}
}

void EctIconToggle(void)
{
	if(faultsymbols.ect == 1)
	{strt_tmr_for_ect_icon_toggle = 1;}
	else
	{strt_tmr_for_ect_icon_toggle = 0;}

	if(strt_tmr_for_ect_icon_toggle == 1)
	{
		toggle_ect_icon_cntr++;
		if(toggle_ect_icon_cntr == 100)
		{
			giIcon03 = 2;/*Red*/
		}
		else if(toggle_ect_icon_cntr == 200)
		{
			toggle_ect_icon_cntr = 0;

			giIcon03 = 1;/*Grey*/
		}
	}
	else
	{
		toggle_ect_icon_cntr = 0;
	}
}

void EotIconToggle(void)
{
	if(faultsymbols.eot == 1)
	{strt_tmr_for_eot_icon_toggle = 1;}
	else
	{strt_tmr_for_eot_icon_toggle = 0;}

	if(strt_tmr_for_eot_icon_toggle == 1)
	{
		toggle_eot_icon_cntr++;
		if(toggle_eot_icon_cntr == 100)
		{
			giIcon04 = 2;/*Red*/
		}
		else if(toggle_eot_icon_cntr == 200)
		{
			toggle_eot_icon_cntr = 0;

			giIcon04 = 1;/*Grey*/
		}
	}
	else
	{
		toggle_eot_icon_cntr = 0;
	}
}

void FuelIconToggle(void)
{
	if(faultsymbols.fuel == 1)
	{strt_tmr_for_fuel_icon_toggle = 1;}
	else
	{strt_tmr_for_fuel_icon_toggle = 0;}

	if(strt_tmr_for_fuel_icon_toggle == 1)
	{
		toggle_fuel_icon_cntr++;
		if(toggle_fuel_icon_cntr == 100)
		{
			giIcon06 = 2;/*Red*/
		}
		else if(toggle_fuel_icon_cntr == 200)
		{
			toggle_fuel_icon_cntr = 0;

			giIcon06 = 1;/*Grey*/
		}
	}
	else
	{
		toggle_fuel_icon_cntr = 0;
	}
}

void TopIconToggle(void)
{
	if(faultsymbols.top == 1)
	{strt_tmr_for_top_icon_toggle = 1;}
	else
	{strt_tmr_for_top_icon_toggle = 0;}

	if(strt_tmr_for_top_icon_toggle == 1)
	{
		toggle_top_icon_cntr++;
		if(toggle_top_icon_cntr == 100)
		{
			giIcon08 = 2;/*Red*/
		}
		else if(toggle_top_icon_cntr == 200)
		{
			toggle_top_icon_cntr = 0;

			giIcon08 = 1;/*Grey*/
		}
	}
	else
	{
		toggle_top_icon_cntr = 0;
	}
}

void TotIconToggle(void)
{
	if(faultsymbols.cot == 1)
	{strt_tmr_for_tot_icon_toggle = 1;}
	else
	{strt_tmr_for_tot_icon_toggle = 0;}

	if(strt_tmr_for_tot_icon_toggle == 1)
	{
		toggle_tot_icon_cntr++;
		if(toggle_tot_icon_cntr == 100)
		{
			giIcon09 = 2;/*Red*/
		}
		else if(toggle_tot_icon_cntr == 200)
		{
			toggle_tot_icon_cntr = 0;

			giIcon09 = 1;/*Grey*/
		}
	}
	else
	{
		toggle_tot_icon_cntr = 0;
	}
}

void EngOvrSpdIconToggle(void)
{
	if(faultsymbols.rpm == 1)
	{strt_tmr_for_ovrspd_toggle = 1;}
	else
	{strt_tmr_for_ovrspd_toggle = 0;}

	if(strt_tmr_for_ovrspd_toggle == 1)
	{
		toggle_ovrpsd_cntr++;
		if(toggle_ovrpsd_cntr == 100)
		{
			engovrspd = 1;
		}
		else if(toggle_ovrpsd_cntr == 200)
		{
			toggle_ovrpsd_cntr = 0;

			engovrspd = 0;
		}
	}
	else
	{
		toggle_tot_icon_cntr = 0;
		engovrspd = 0;
	}
}
void workingHrsLogic(void)
{
//	uint8_t temp_hr  = 0;
//	uint8_t prsnt_hr  = 0,prsnt_min = 0,prsnt_sec = 0;
//	uint32_t prsnt_time = 0,
//			shift1_start_total_time = 0, shift1_stop_total_time = 0,
//			shift2_start_total_time = 0, shift2_stop_total_time = 0,
//			shift3_start_total_time = 0, shift3_stop_total_time = 0;
	ReadRTC();
	prsnt_hr  = strDateTime.Hour;
	prsnt_min = strDateTime.Minute;
	prsnt_sec = strDateTime.Second;

	if(strDateTime.Meredian == MER_AM)
	{
		if(prsnt_hr == 12)
		{prsnt_hr-=12;/*Convert to 24hrs format*/}
	}
	else if(strDateTime.Meredian == MER_PM)
	{
		if(prsnt_hr < 12)
		{prsnt_hr+=12;/*Convert to 24hrs format*/}
	}
	else
	{}

	/***************Calculate Present and stored Shift Timings in seconds for better comparision********/
	prsnt_time = (prsnt_hr*60*60) + (prsnt_min*60) + prsnt_sec;

	shift1_start_total_time = (values_of_swcs[0]*60*60) + (values_of_swcs[1]*60) + 00;
	shift1_stop_total_time = (values_of_swcs[3]*60*60) + (values_of_swcs[4]*60) + 00;

	shift2_start_total_time = (values_of_swcs[6]*60*60) + (values_of_swcs[7]*60) + 00;
	shift2_stop_total_time = (values_of_swcs[9]*60*60) + (values_of_swcs[10]*60) + 00;

	shift3_start_total_time = (values_of_swcs[12]*60*60) + (values_of_swcs[13]*60) + 00;
	shift3_stop_total_time = (values_of_swcs[15]*60*60) + (values_of_swcs[16]*60) + 00;

	/************************Error Checking(if memory has been erased)********************/
	if((shift1_start_total_time == 0 && shift1_stop_total_time == 0) &&
	   (shift2_start_total_time == 0 && shift2_stop_total_time == 0) &&
	   (shift3_start_total_time == 0 && shift3_stop_total_time == 0))
	{
		   memcpy(swcs_values,swcs_def_values,sizeof(swcs_values));
		   store_swcs_data();
		   read_swcs_data();
	}
	/**************************************************************************************/
	/*****************If the Engine is ON, then only count hours****************/
	if(giEngineRpm > 500)
	{
		whrs_make_ref_time_as_prsnt_time = 0;
	}
	else
	{
		whrs_make_ref_time_as_prsnt_time = 1;
	}

	/*******************Check start time is less than stop time of all shifts****************/
	if((shift1_start_total_time < shift1_stop_total_time) && (shift2_start_total_time < shift2_stop_total_time) && (shift3_start_total_time < shift3_stop_total_time))
	{
		shift1_stop_total_time+=59;
		shift2_stop_total_time+=59;
		shift3_stop_total_time+=59;

		/*************************/
		if((prsnt_time >= shift1_start_total_time) && (prsnt_time < shift1_stop_total_time))
		{
			if(ShiftNo == 2 || ShiftNo == 3)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
			else if(ShiftNo == 0)
			{
				ShiftNo = 1;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				total_whrs = WorkingHrsCalculation(1);
				Swwh_logging(1,0,ShiftNo,total_whrs);

				Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
			}
			else if(ShiftNo == 1)
			{
				WorkingHrsCalculation(0);
			}
		}
		else if((prsnt_time >= shift1_stop_total_time) && (prsnt_time < shift2_start_total_time))
		{
			if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
		}
		else if((prsnt_time >= shift2_start_total_time) && (prsnt_time < shift2_stop_total_time))
		{
			if(ShiftNo == 1 || ShiftNo == 3)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
			else if(ShiftNo == 0)
			{
				ShiftNo = 2;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				total_whrs = WorkingHrsCalculation(1);
				Swwh_logging(1,0,ShiftNo,total_whrs);

				Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
			}
			else if(ShiftNo == 2)
			{
				WorkingHrsCalculation(0);
			}
		}
		else if((prsnt_time >= shift2_stop_total_time) && (prsnt_time < shift3_start_total_time))
		{
			if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
		}
		else if((prsnt_time >= shift3_start_total_time) && (prsnt_time < shift3_stop_total_time))
		{
			if(ShiftNo == 1 || ShiftNo == 2)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
			else if(ShiftNo == 0)
			{
				ShiftNo = 3;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				total_whrs = WorkingHrsCalculation(1);
				Swwh_logging(1,0,ShiftNo,total_whrs);

				Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
			}
			else if(ShiftNo == 3)
			{
				WorkingHrsCalculation(0);
			}
		}
		else if(prsnt_time >= shift3_stop_total_time)
		{
			if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
		}
		/**************************/
	}
	else/*******************Check start time is less than stop time of every single shift****************/
	{
		shift1_stop_total_time+=59;
		shift2_stop_total_time+=59;
		shift3_stop_total_time+=59;

		/******************************************************************/
		if((shift1_start_total_time < shift1_stop_total_time) && ((prsnt_time >= shift1_start_total_time) && (prsnt_time < shift1_stop_total_time)))
		{
			if(ShiftNo == 2 || ShiftNo == 3)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
			else if(ShiftNo == 0)
			{
				ShiftNo = 1;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				total_whrs = WorkingHrsCalculation(1);
				Swwh_logging(1,0,ShiftNo,total_whrs);

				Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
			}
			else if(ShiftNo == 1)
			{
				WorkingHrsCalculation(0);
			}
		}
		else if((shift1_start_total_time < shift1_stop_total_time) && (prsnt_time >= shift1_stop_total_time) && (prsnt_time < shift2_start_total_time))
		{
			//if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
			if(ShiftNo == 1)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
		}
		else if((shift2_start_total_time < shift2_stop_total_time) && ((prsnt_time >= shift2_start_total_time) && (prsnt_time < shift2_stop_total_time)))
		{
			if(ShiftNo == 1 || ShiftNo == 3)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
			else if(ShiftNo == 0)
			{
				ShiftNo = 2;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				total_whrs = WorkingHrsCalculation(1);
				Swwh_logging(1,0,ShiftNo,total_whrs);

				Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
			}
			else if(ShiftNo == 2)
			{
				WorkingHrsCalculation(0);
			}
		}
	    else if((shift2_start_total_time < shift2_stop_total_time) && (prsnt_time >= shift2_stop_total_time) && (prsnt_time < shift3_start_total_time))
		{
			//if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
			if(ShiftNo == 2)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
		}
	    else if((shift3_start_total_time < shift3_stop_total_time) && ((prsnt_time >= shift3_start_total_time) && (prsnt_time < shift3_stop_total_time)))
		{
			if(ShiftNo == 1 || ShiftNo == 2)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				funcDelayUs(1000);
			}
			else if(ShiftNo == 0)
			{
				ShiftNo = 3;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
				total_whrs = WorkingHrsCalculation(1);
				Swwh_logging(1,0,ShiftNo,total_whrs);

				Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
			}
			else if(ShiftNo == 3)
			{
				WorkingHrsCalculation(0);
			}
		}
		else if((shift3_start_total_time < shift3_stop_total_time) && (prsnt_time >= shift3_stop_total_time) && (prsnt_time < shift1_start_total_time))
		{
			//if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
			if(ShiftNo == 3)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			}
		}
		else/*******************Check start time is more than stop time of every single shift****************/
		{
			shift1_stop_total_time-=59;
			shift2_stop_total_time-=59;
			shift3_stop_total_time-=59;

			//if((shift1_start_total_time >= shift1_stop_total_time) && (shift2_start_total_time < shift2_stop_total_time) && (shift3_start_total_time < shift3_stop_total_time))
			if(shift1_start_total_time >= shift1_stop_total_time)
			{
				Prev_Day = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME, 1);
				Prev_Mon = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME+1, 1);
				Prev_Year= MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME+2, 1);

				curDay = strDateTime.Date;
				curMon = strDateTime.Month;
				curYear= (strDateTime.Year - 2000);

				DifferenceinDays = getDifference(Prev_Day,Prev_Mon,Prev_Year,curDay,curMon,curYear);

				if(DifferenceinDays > 0)
				{
					prsnt_hr = 24*DifferenceinDays + prsnt_hr;
					shift1_stop_total_time = ((values_of_swcs[3]+24)*60*60) + (values_of_swcs[4]*60) + 59;//in seconds
				}
				else if(prsnt_hr >= values_of_swcs[3])
				{
					shift1_stop_total_time = ((values_of_swcs[3]+24)*60*60) + (values_of_swcs[4]*60) + 59;//in seconds
				}
				else if(prsnt_hr < values_of_swcs[3])
				{
					shift1_stop_total_time = (values_of_swcs[3]*60*60) + (values_of_swcs[4]*60) + 59;//in seconds
				}

				prsnt_time = (prsnt_hr*60*60) + (prsnt_min*60) + prsnt_sec;//in seconds

				if((prsnt_time >= shift1_start_total_time) && (prsnt_time < shift1_stop_total_time))
				{
					if(ShiftNo == 2 || ShiftNo == 3)
					{
						Store_Shifts_Started_Date(ShiftNo,0,0,0);

						total_whrs = WorkingHrsCalculation(0);
						Swwh_logging(0,1,ShiftNo,total_whrs);
						ShiftNo = 0;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
						funcDelayUs(1000);
					}
					else if(ShiftNo == 0)
					{
						ShiftNo = 1;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
						total_whrs = WorkingHrsCalculation(1);
						Swwh_logging(1,0,ShiftNo,total_whrs);

						Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
					}
					else if(ShiftNo == 1)
					{
						WorkingHrsCalculation(0);
					}
				}
				else if(prsnt_time >= shift1_stop_total_time)
				{
					if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
					{
						Store_Shifts_Started_Date(ShiftNo,0,0,0);

						total_whrs = WorkingHrsCalculation(0);
						Swwh_logging(0,1,ShiftNo,total_whrs);
						ShiftNo = 0;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
						funcDelayUs(1000);
					}
				}
			}
			//else if((shift2_start_total_time >= shift2_stop_total_time) && (shift1_start_total_time < shift1_stop_total_time))
			else if(shift2_start_total_time >= shift2_stop_total_time)
			{
				Prev_Day = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME, 1);
				Prev_Mon = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME+1, 1);
				Prev_Year= MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME+2, 1);

				curDay = strDateTime.Date;
				curMon = strDateTime.Month;
				curYear= (strDateTime.Year - 2000);

				DifferenceinDays = getDifference(Prev_Day,Prev_Mon,Prev_Year,curDay,curMon,curYear);

				if(DifferenceinDays > 0)
				{
					prsnt_hr = 24*DifferenceinDays + prsnt_hr;
					shift2_stop_total_time = ((values_of_swcs[9]+24)*60*60) + (values_of_swcs[10]*60) + 59;//in seconds
				}
				else if(prsnt_hr >= values_of_swcs[9])
				{
					shift2_stop_total_time = ((values_of_swcs[9]+24)*60*60) + (values_of_swcs[10]*60) + 59;//in seconds
				}
				else if(prsnt_hr < values_of_swcs[9])
				{
					shift2_stop_total_time = (values_of_swcs[9]*60*60) + (values_of_swcs[10]*60) + 59;//in seconds
				}
				prsnt_time = (prsnt_hr*60*60) + (prsnt_min*60) + prsnt_sec;//in seconds

				if((prsnt_time >= shift2_start_total_time) && (prsnt_time < shift2_stop_total_time))
				{
					if(ShiftNo == 1 || ShiftNo == 3)
					{
						Store_Shifts_Started_Date(ShiftNo,0,0,0);

						total_whrs = WorkingHrsCalculation(0);
						Swwh_logging(0,1,ShiftNo,total_whrs);
						ShiftNo = 0;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
						funcDelayUs(1000);
					}
					else if(ShiftNo == 0)
					{
						ShiftNo = 2;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
						total_whrs = WorkingHrsCalculation(1);
						Swwh_logging(1,0,ShiftNo,total_whrs);

						Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
					}
					else if(ShiftNo == 2)
					{
						WorkingHrsCalculation(0);
					}
				}
				else if(prsnt_time >= shift2_stop_total_time)
				{
					if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
					{
						Store_Shifts_Started_Date(ShiftNo,0,0,0);

						total_whrs = WorkingHrsCalculation(0);
						Swwh_logging(0,1,ShiftNo,total_whrs);
						ShiftNo = 0;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
						funcDelayUs(1000);
					}
				}
			}
			//else if((shift3_start_total_time >= shift3_stop_total_time) && (shift1_start_total_time < shift1_stop_total_time) && (shift2_start_total_time < shift2_stop_total_time))
			else if(shift3_start_total_time >= shift3_stop_total_time)
			{
				Prev_Day = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME, 1);
				Prev_Mon = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME+1, 1);
				Prev_Year= MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME+2, 1);

				curDay = strDateTime.Date;
				curMon = strDateTime.Month;
				curYear= (strDateTime.Year - 2000);

				DifferenceinDays = getDifference(Prev_Day,Prev_Mon,Prev_Year,curDay,curMon,curYear);

				if(DifferenceinDays > 0)
				{
					prsnt_hr = 24*DifferenceinDays + prsnt_hr;
					shift3_stop_total_time = ((values_of_swcs[15]+24)*60*60) + (values_of_swcs[16]*60) + 59;//in seconds
				}
				else if(prsnt_hr >= values_of_swcs[15])
				{
					shift3_stop_total_time = ((values_of_swcs[15]+24)*60*60) + (values_of_swcs[16]*60) + 59;//in seconds
				}
				else if(prsnt_hr < values_of_swcs[15])
				{
					shift3_stop_total_time = (values_of_swcs[15]*60*60) + (values_of_swcs[16]*60) + 59;//in seconds
				}

				prsnt_time = (prsnt_hr*60*60) + (prsnt_min*60) + prsnt_sec;//in seconds

				if((prsnt_time >= shift3_start_total_time) && (prsnt_time < shift3_stop_total_time))
				{
					if(ShiftNo == 1 || ShiftNo == 2)
					{
						Store_Shifts_Started_Date(ShiftNo,0,0,0);

						total_whrs = WorkingHrsCalculation(0);
						Swwh_logging(0,1,ShiftNo,total_whrs);
						ShiftNo = 0;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);

						funcDelayUs(1000);
					}
					else if(ShiftNo == 0)
					{
						ShiftNo = 3;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
						total_whrs = WorkingHrsCalculation(1);
						Swwh_logging(1,0,ShiftNo,total_whrs);
						Store_Shifts_Started_Date(ShiftNo,strDateTime.Date,strDateTime.Month,(strDateTime.Year-2000));
					}
					else if(ShiftNo == 3)
					{
						WorkingHrsCalculation(0);
					}
				}
				else if(prsnt_time >= shift3_stop_total_time)
				{
					if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
					{
						Store_Shifts_Started_Date(ShiftNo,0,0,0);

						total_whrs = WorkingHrsCalculation(0);
						Swwh_logging(0,1,ShiftNo,total_whrs);
						ShiftNo = 0;
						MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
						funcDelayUs(1000);
					}
				}
			}
		}
		/******************************************************************/
	}
  /*
   else if(prsnt_time >= shift3_stop_total_time)
	{
		if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
		{
			Store_Shifts_Started_Date(ShiftNo,0,0,0);

			total_whrs = WorkingHrsCalculation(0);
			Swwh_logging(0,1,ShiftNo,total_whrs);
			ShiftNo = 0;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
		}
	}
	*/
}
int getDifference(uint8_t Prev_Day, uint8_t Prev_Mon, uint8_t Prev_Year,uint8_t curDay,uint8_t curMon,uint8_t curYear)
{
	if(Prev_Day != 0 && Prev_Mon != 0 && Prev_Year != 0 && curDay != 0 && curMon != 0 &&curYear !=0)
	{
		const char monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	    long int n1 = Prev_Year*365 + Prev_Day;
	    int i;

	    for (i=0; i<Prev_Mon - 1; i++)
	    {
	    	n1 += monthDays[i];
	    }

	    n1 += countLeapYears(Prev_Day,Prev_Mon,Prev_Year);

	    long int n2 = curYear*365 + curDay;

	    for (i=0; i<curMon - 1; i++)
	    {
	    	n2 += monthDays[i];
	    }

	    n2 += countLeapYears(curDay,curMon,curYear);

	    // return difference between two counts
	    return (n2 - n1);
	}
	else{return 0;}
}
int countLeapYears(uint8_t day, uint8_t mon, uint8_t year)
{
    int years = year;

    // Check if the current year needs to be considered
    // for the count of leap years or not
    if (mon <= 2)
        years--;

    // An year is a leap year if it is a multiple of 4,
    // multiple of 400 and not a multiple of 100.
    return years / 4 - years / 100 + years / 400;
}
void Store_Shifts_Started_Date(uint8_t shiftno,uint8_t Date,uint8_t Month,uint8_t Year)
{
	switch(shiftno)
	{
	case 1:
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME,  Date, 1);
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME+1,Month, 1);
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME+2,Year, 1);
		break;
	case 2:
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME,  Date, 1);
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME+1,Month, 1);
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME+2,Year, 1);
		break;
	case 3:
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME,  Date, 1);
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME+1,Month, 1);
		MemoryWriteVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME+2,Year, 1);
		break;
	default:
		break;
	}
	funcDelayUs(1000);
}
#if 0
void ShiftHrsLogic(uint32_t prsnt_time)
{
	if((prsnt_time >= shift1_start_total_time) && (prsnt_time < shift1_stop_total_time))
	{
		if(ShiftNo == 2 || ShiftNo == 3)
		{
			total_whrs = WorkingHrsCalculation(0);
			Swwh_logging(0,1,ShiftNo,total_whrs);
			ShiftNo = 0;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
		}
		else if(ShiftNo == 0)
		{
			ShiftNo = 1;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			total_whrs = WorkingHrsCalculation(1);
			Swwh_logging(1,0,ShiftNo,total_whrs);
		}
		else if(ShiftNo == 1)
		{
			WorkingHrsCalculation(0);
		}
	}
	else if((prsnt_time >= shift1_stop_total_time) && (prsnt_time < shift2_start_total_time))
	{
		if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
		{
			total_whrs = WorkingHrsCalculation(0);
			Swwh_logging(0,1,ShiftNo,total_whrs);
			ShiftNo = 0;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
		}
	}
	else if((prsnt_time >= shift2_start_total_time) && (prsnt_time < shift2_stop_total_time))
	{
		if(ShiftNo == 1 || ShiftNo == 3)
		{
			total_whrs = WorkingHrsCalculation(0);
			Swwh_logging(0,1,ShiftNo,total_whrs);
			ShiftNo = 0;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
		}
		else if(ShiftNo == 0)
		{
			ShiftNo = 2;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			total_whrs = WorkingHrsCalculation(1);
			Swwh_logging(1,0,ShiftNo,total_whrs);
		}
		else if(ShiftNo == 2)
		{
			WorkingHrsCalculation(0);
		}
	}
	else if((prsnt_time >= shift2_stop_total_time) && (prsnt_time < shift3_start_total_time))
	{
		if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
		{
			total_whrs = WorkingHrsCalculation(0);
			Swwh_logging(0,1,ShiftNo,total_whrs);
			ShiftNo = 0;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
		}
	}
	else if((prsnt_time >= shift3_start_total_time) && (prsnt_time < shift3_stop_total_time))
	{
		if(ShiftNo == 1 || ShiftNo == 2)
		{
			total_whrs = WorkingHrsCalculation(0);
			Swwh_logging(0,1,ShiftNo,total_whrs);
			ShiftNo = 0;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
		}
		else if(ShiftNo == 0)
		{
			ShiftNo = 3;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			total_whrs = WorkingHrsCalculation(1);
			Swwh_logging(1,0,ShiftNo,total_whrs);
		}
		else if(ShiftNo == 3)
		{
			WorkingHrsCalculation(0);
		}
	}
	else if(prsnt_time >= shift3_stop_total_time)
	{
		if(ShiftNo == 1 || ShiftNo == 2 || ShiftNo == 3)
		{
			total_whrs = WorkingHrsCalculation(0);
			Swwh_logging(0,1,ShiftNo,total_whrs);
			ShiftNo = 0;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
		}
	}
}
#endif
uint32_t WorkingHrsCalculation(bool eraseall)
{
	uint32_t TotalWhrs = 0;
	uint8_t prsnt_hr  = 0,prsnt_min = 0,prsnt_sec = 0;

	uint32_t present_time = 0,reference_time = 0,diff_time = 0,stored_ref_time = 0;

	prsnt_hr  = strDateTime.Hour;
	prsnt_min = strDateTime.Minute;
	prsnt_sec = strDateTime.Second;

	if(strDateTime.Meredian == MER_AM)
	{
		if(prsnt_hr == 12)
		{prsnt_hr-=12;/*Convert to 24hrs format*/}
	}
	else if(strDateTime.Meredian == MER_PM)
	{
		if(prsnt_hr < 12)
		{prsnt_hr+=12;/*Convert to 24hrs format*/}
	}
	else
	{}

//	if(DifferenceinDays > 0)
//	{
//		prsnt_hr = 24*DifferenceinDays;
//	}

	if(eraseall != 1)
	{
		if(whrs_make_ref_time_as_prsnt_time == 1 || rtc_edited == 1)
		{
			whrs_make_ref_time_as_prsnt_time = 0;
			rtc_edited = 0;
			whrs_ref_hr  = prsnt_hr;
			whrs_ref_min = prsnt_min;
			whrs_ref_sec = prsnt_sec;
		}

		present_time = (prsnt_hr*60*60) + (prsnt_min*60) + prsnt_sec;//in seconds
		reference_time = (whrs_ref_hr*60*60) + (whrs_ref_min*60) + whrs_ref_sec;//in seconds

		if(reference_time > present_time)
		{
			diff_time = 0;
		}
		else
		{
			diff_time = present_time - reference_time;
		}

		stored_ref_time = MemoryReadVariable(PRIMARY_MEMORY, SH_WRK_HRS_IN_SEC, 2);

		diff_time = diff_time + stored_ref_time;

		if(diff_time >= SIX_MINUTE)//360seconds = 6minutes
		{
			if(diff_time > SIX_MINUTE)
			{
				diff_time = diff_time - SIX_MINUTE;
			}
			else
			{
				diff_time = 0;
			}
			Whrs_fractn_hr++;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_FRACTN_HRS, Whrs_fractn_hr, 1);
		}

		MemoryWriteVariable(PRIMARY_MEMORY, SH_WRK_HRS_IN_SEC, diff_time, 2);

		whrs_ref_hr  = prsnt_hr;
		whrs_ref_min = prsnt_min;
		whrs_ref_sec = prsnt_sec;

		/***whenever fractional value of Working hours reaches greater than or equal to 10, increment Working actual hour**/
		if(Whrs_fractn_hr >= 10)
		{
			Whrs_fractn_hr = 0;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_FRACTN_HRS, Whrs_fractn_hr, 1);
			Whrs_actual_hr++;
			MemoryWriteVariable(PRIMARY_MEMORY, WHRS_ACTUAL_HRS, Whrs_actual_hr, 2);
		}
	}
	else
	{
		whrs_ref_hr  = prsnt_hr;
		whrs_ref_min = prsnt_min;
		whrs_ref_sec = prsnt_sec;

		diff_time = 0;
		MemoryWriteVariable(PRIMARY_MEMORY, SH_WRK_HRS_IN_SEC, diff_time, 2);
		Whrs_fractn_hr = 0;
		MemoryWriteVariable(PRIMARY_MEMORY, WHRS_FRACTN_HRS, Whrs_fractn_hr, 1);
		Whrs_actual_hr = 0;
		MemoryWriteVariable(PRIMARY_MEMORY, WHRS_ACTUAL_HRS, Whrs_actual_hr, 2);
	}

	TotalWhrs = Whrs_actual_hr;
	TotalWhrs = TotalWhrs * ONE_FRAC_DIGIT;
	TotalWhrs = TotalWhrs + Whrs_fractn_hr;

	return TotalWhrs;
}

void CBCReportPrint(void)
{
	float string = 23.66;
	PRINTF("%c",0x40);
	PRINTF("       Hello World");
	transmit_serial("Em Electronix");
	//LPUART_WriteByte(DEMO_LPUART, gUch_uart_recived_data);
//	PRINTF("%c",string);
	Serial_TX(LPUART1, 49);
	PRINTF("%c",0x03);
	PRINTF("%c",0x04);
}

void Serial_TX(LPUART_Type *base, uint8_t data)
{
    base->DATA = data;
	DelayUs1(5000);
}
void transmit_serial(const uint8_t *str)//(const uint8_t *str)
{
	while(*str != '\0' && kLPUART_TxDataRegEmptyFlag && LPUART_GetStatusFlags(LPUART1))
	{
		str_tx(*str);
		str++;
	}
}
void str_tx(uint8_t str)
{
	Serial_TX(LPUART1, str);
}
//void linefeed(void)
//{
//	str_tx(LINEFEED);
//}

//void dec_val_for_print(uint32_t value_temp,uint8_t no_of_digits)
//{
//	uint32_t mul_var[7] = {1,10,100,1000,10000,100000,1000000};
//	uint8_t digits = 0;
//	uint32_t temp_cal = 0;
//
//	for(digits = no_of_digits;digits > 0; digits--)
//	{
//		temp_cal = value_temp/mul_var[digits-1];
//		temp_char2 = ((temp_cal%10)| 0x30);
//		str_tx(temp_char2);
//	}
//}

void PowerOnReadForShiftHrs(void)
{
	whrs_make_ref_time_as_prsnt_time = 1;

	Whrs_fractn_hr = MemoryReadVariable(PRIMARY_MEMORY, WHRS_FRACTN_HRS, 1);
    if(Whrs_fractn_hr == 0 || Whrs_fractn_hr == 0xFF)
    {
    	Whrs_fractn_hr = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,WHRS_FRACTN_HRS,Whrs_fractn_hr,1);
    }

    Whrs_actual_hr = MemoryReadVariable(PRIMARY_MEMORY, WHRS_ACTUAL_HRS, 2);
    if(Whrs_actual_hr == 0 || Whrs_actual_hr == 0xFFFF)
    {
    	Whrs_actual_hr = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,WHRS_ACTUAL_HRS,Whrs_actual_hr,2);
    }

	ShiftNo = MemoryReadVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, 1);
    if(ShiftNo == 0 || ShiftNo == 0xFF)
    {
    	ShiftNo = 0;
    	MemoryWriteVariable(PRIMARY_MEMORY,WHRS_SHIFT_NO,ShiftNo,1);
    }

	read_swcs_data();

	shift1_start_total_time = (values_of_swcs[0]*60*60) + (values_of_swcs[1]*60) + 00;//in seconds
	shift1_stop_total_time = (values_of_swcs[3]*60*60) + (values_of_swcs[4]*60) + 00;//59;//in seconds

	shift2_start_total_time = (values_of_swcs[6]*60*60) + (values_of_swcs[7]*60) + 00;//in seconds
	shift2_stop_total_time = (values_of_swcs[9]*60*60) + (values_of_swcs[10]*60) + 00;//59;//in seconds

	shift3_start_total_time = (values_of_swcs[12]*60*60) + (values_of_swcs[13]*60) + 00;//in seconds
	shift3_stop_total_time = (values_of_swcs[15]*60*60) + (values_of_swcs[16]*60) + 00;//59;//in seconds

	if(ShiftNo == 1)
	{
		Prev_Day = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME, 1);
		Prev_Mon = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME+1, 1);
		Prev_Year= MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT1_TIME+2, 1);

		curDay = strDateTime.Date;
		curMon = strDateTime.Month;
		curYear= (strDateTime.Year - 2000);

		DifferenceinDays = getDifference(Prev_Day,Prev_Mon,Prev_Year,curDay,curMon,curYear);

		if(shift1_start_total_time < shift1_stop_total_time)
		{
			if(DifferenceinDays > 0)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			}
		}
		else
		{
			if(DifferenceinDays > 1)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			}
		}
	}
	else if(ShiftNo == 2)
	{
		Prev_Day = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME, 1);
		Prev_Mon = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME+1, 1);
		Prev_Year= MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT2_TIME+2, 1);

		curDay = strDateTime.Date;
		curMon = strDateTime.Month;
		curYear= (strDateTime.Year - 2000);

		DifferenceinDays = getDifference(Prev_Day,Prev_Mon,Prev_Year,curDay,curMon,curYear);

		if(shift2_start_total_time < shift2_stop_total_time)
		{
			if(DifferenceinDays > 0)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			}
		}
		else
		{
			if(DifferenceinDays > 1)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			}
		}
	}
	else if(ShiftNo == 3)
	{
		Prev_Day = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME, 1);
		Prev_Mon = MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME+1, 1);
		Prev_Year= MemoryReadVariable(PRIMARY_MEMORY, PREVIOUS_SHIFT3_TIME+2, 1);

		curDay = strDateTime.Date;
		curMon = strDateTime.Month;
		curYear= (strDateTime.Year - 2000);

		DifferenceinDays = getDifference(Prev_Day,Prev_Mon,Prev_Year,curDay,curMon,curYear);

		if(shift3_start_total_time < shift3_stop_total_time)
		{
			if(DifferenceinDays > 0)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			}
		}
		else
		{
			if(DifferenceinDays > 1)
			{
				Store_Shifts_Started_Date(ShiftNo,0,0,0);

				total_whrs = WorkingHrsCalculation(0);
				Swwh_logging(0,1,ShiftNo,total_whrs);
				ShiftNo = 0;
				MemoryWriteVariable(PRIMARY_MEMORY, WHRS_SHIFT_NO, ShiftNo, 1);
			}
		}
	}

	if((shift1_start_total_time == 0 && shift1_stop_total_time == 0) &&
	   (shift2_start_total_time == 0 && shift2_stop_total_time == 0) &&
	   (shift3_start_total_time == 0 && shift3_stop_total_time == 0))
	{
		   memcpy(swcs_values,swcs_def_values,sizeof(swcs_values));
		   store_swcs_data();
		   read_swcs_data();
	}
}
