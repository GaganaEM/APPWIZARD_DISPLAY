//#include "sourceTimer0.h"
//
//#include "../Files_Header/sourceMacro.h"
//#include "../Files_Header/sourceExternVariable.h"
//
//void funcTimer0Configure(Uint32 lluSTickCount);
//interrupt void isrTimer0(void);
//
//void funcTimer0Configure(Uint32 lluSTickCount)
//{
//#ifdef TMS320F28335
//
//    EALLOW;
//    PieVectTable.TINT0 = &isrTimer0;
//    EDIS;
//
//    CpuTimer0.RegsAddr = &CpuTimer0Regs;
//    CpuTimer0Regs.PRD.all  = 0xFFFFFFFFu;
//    CpuTimer0Regs.TPR.all  = 0;
//    CpuTimer0Regs.TPRH.all = 0;
//    CpuTimer0Regs.TCR.bit.TSS = 1;
//    CpuTimer0Regs.TCR.bit.TRB = 1;
//    CpuTimer0.InterruptCount = 0;
//    ConfigCpuTimer(&CpuTimer0, 150, lluSTickCount);
//    CpuTimer0Regs.TCR.all = 0x4001;
//    PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
//    IER |= M_INT1;
//
//#endif
//
//#ifdef TMS320F28069
//
//    EALLOW;
//    PieVectTable.TINT0 = &isrTimer0;
//    EDIS;
//    CpuTimer0.RegsAddr = &CpuTimer0Regs;
//    CpuTimer0Regs.PRD.all  = 0xFFFFFFFF;
//    CpuTimer0Regs.TPR.all  = 0;
//    CpuTimer0Regs.TPRH.all = 0;
//    CpuTimer0Regs.TCR.bit.TSS = 1;
//    CpuTimer0Regs.TCR.bit.TRB = 1;
//    ConfigCpuTimer(&CpuTimer0, 90, lluSTickCount);
//    CpuTimer0Regs.TCR.all = 0x4001;
//    PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
//    IER |= M_INT1;
//#endif
//}
//
//interrupt void isrTimer0(void)
//{
//#ifdef TMS320F28335
//
//    funcTimer0Process();
//
//    CpuTimer0.RegsAddr->TCR.bit.TIF = 1;
//    PieCtrlRegs.PIEACK.all |= PIEACK_GROUP1;
//#endif
//
//#ifdef TMS320F28069
//
//    funcTimer0Process();
//
//    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
//#endif
//}
