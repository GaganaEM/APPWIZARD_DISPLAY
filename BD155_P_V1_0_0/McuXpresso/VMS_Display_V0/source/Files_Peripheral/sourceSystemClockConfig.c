//#include "sourceSerialA.h"
//
//#include "../Files_Header/sourceMacro.h"
//#include "../Files_Header/sourceExternVariable.h"
//
//void funcSystemSetup(void);
//
//void funcSystemSetup(void)
//{
//#ifdef TMS320F28335
//
//    // Step 1. Initialize System Control:
//    // PLL, WatchDog, enable Peripheral Clocks
//    // This example function is found in the DSP2833x_SysCtrl.c file.
//    InitSysCtrl();
//
//    //ADC module clock set
//    EALLOW;
//    #if (CPU_FRQ_150MHZ)            // Default - 150 MHz SYSCLKOUT
//    #define ADC_MODCLK 0x3      // HSPCLK = SYSCLKOUT/2*ADC_MODCLK = 150/(2*4)   = 18.75 MHz
//    #endif
//    EDIS;
//
//    // Define ADCCLK clock frequency ( less than or equal to 25 MHz )
//    // Assuming InitSysCtrl() has set SYSCLKOUT to 150 MHz
//    EALLOW;
//    SysCtrlRegs.HISPCP.all = ADC_MODCLK;
//    EDIS;
//
//
//    // Step 2. Clear all interrupts and initialize PIE vector table:
//    // Disable CPU interrupts
//    DINT;
//
//    // Step 3: initialize priority control register
//    // Initialize PIE control registers to their default state.
//    InitPieCtrl();
//
//    // Disable CPU interrupts and clear all CPU interrupt flags:
//    IER = 0x0000;
//    IFR = 0x0000;
//
//    // Initialize the PIE vector table with pointers to the shell Interrupt
//    // Service Routines (ISR).
//    InitPieVectTable();
//#endif
//
//#ifdef TMS320F28069
//
//    InitSysCtrl();
//    DINT;
//    InitPieCtrl();
//    IER = 0x0000;
//    IFR = 0x0000;
//    InitPieVectTable();
//
//#endif
//}
