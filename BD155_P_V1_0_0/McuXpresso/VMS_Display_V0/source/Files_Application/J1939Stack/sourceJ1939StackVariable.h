#ifndef FILES_APPLICATION_SOURCEJ1939STACKVARIABLE_H_
#define FILES_APPLICATION_SOURCEJ1939STACKVARIABLE_H_

bool bSingleDm1Frame = 0;
unsigned char gucSourceAddress = 0xFF;
struct CanDataBit
{
    uint16_t Mailbox0                 :   1;
    uint16_t Mailbox1                 :   1;
    uint16_t Mailbox2                 :   1;
    uint16_t Mailbox3                 :   1;
    uint16_t Mailbox4                 :   1;
    uint16_t Mailbox5                 :   1;
    uint16_t Mailbox6                 :   1;
    uint16_t Mailbox7                 :   1;
    uint16_t Mailbox8                 :   1;
    uint16_t Mailbox9                 :   1;
    uint16_t Mailbox10                :   1;
    uint16_t Mailbox11                :   1;
    uint16_t Mailbox12                :   1;
    uint16_t Mailbox13                :   1;
    uint16_t Mailbox14                :   1;
    uint16_t Mailbox15                :   1;
    uint16_t Mailbox16                :   1;
    uint16_t Mailbox17                :   1;
    uint16_t Mailbox18                :   1;
    uint16_t Mailbox19                :   1;
    uint16_t Mailbox20                :   1;
    uint16_t Mailbox21                :   1;
    uint16_t Mailbox22                :   1;
    uint16_t Mailbox23                :   1;
    uint16_t Mailbox24                :   1;
    uint16_t Mailbox25                :   1;
    uint16_t Mailbox26                :   1;
    uint16_t Mailbox27                :   1;
    uint16_t Mailbox28                :   1;
    uint16_t Mailbox29                :   1;
    uint16_t Mailbox30                :   1;
    uint16_t Mailbox31                :   1;
};

union CanDataReg {
    Uint32             all;
    struct CanDataBit  bit;
};

struct CanStatusReg
{
    union  CanDataReg       Transmit;
    union  CanDataReg       Recieve;
};

struct CanStatusReg strCanFlag;

struct CanMessage
{
    uint16_t  MailboxNumber;
    uint16_t  FramePriority;
    Uint32  FrameId;
    uint64_t  FrameData;
};

struct CanMessage Frame1;
struct CanMessage Frame2;
struct CanMessage Frame3;
struct CanMessage Frame4;
struct CanMessage Frame5;
struct CanMessage Frame6;
struct CanMessage Frame7;
struct CanMessage Frame8;
struct CanMessage Frame9;
struct CanMessage TpFrame;
struct CanMessage Frame10;
struct CanMessage Frame11;
struct CanMessage Frame12;
struct CanMessage Frame13;
struct CanMessage Frame14;
struct CanMessage Frame15;
struct CanMessage Frame16;
struct CanMessage Frame17;
struct CanMessage Frame18;
struct CanMessage Frame19;
struct CanMessage Frame20;
struct CanMessage Frame21;
struct CanMessage Frame22;
struct CanMessage Frame23;
struct CanMessage Frame24;
struct CanMessage Frame25;
struct CanMessage Frame26;
struct CanMessage Frame27;
struct CanMessage Frame28;
struct CanMessage Frame29;
struct CanMessage Frame30;
struct CanMessage Frame31;

struct StructCanFrame
{
    uint8_t  RxCanLength         ;
    uint8_t  RxCanPriority       ;
    uint8_t  RxCanAddress        ;
    Uint32  RxCanPgn            ;
    uint64_t  RxCanData           ;
};

struct StructCanFrame CanJ1939Frame;

struct CanBroadcastMsgByte
{
    uint64_t
    MsgByte8               : 8,
    MsgByte7               : 8,
    MsgByte6               : 8,
    MsgByte5               : 8,
    MsgByte4               : 8,
    MsgByte3               : 8,
    MsgByte2               : 8,
    MsgByte1               : 8;
};

union CanBroadcastMsgRegister {
    uint64_t              all;
    struct CanBroadcastMsgByte  byte;
}CanMsgByte;

struct strCanMsgFlags
{
    Uint32
    CommunicationActive         : 1,
    BroadcastInitilize          : 1,
    BamInitTransmit             : 1,
    BamInitReception            : 1,
    SpecificInitilize           : 1,
    TransmitRts                 : 1,
    RecievedCts                 : 1,
    RecievedEof                 : 1,
    RecievedAbort               : 1,
    RecievedRts                 : 1,
    TransmitCts                 : 1,
    TransmitEof                 : 1,
    TransmitAbort               : 1,
    SpecificInitReception       : 1,
    TransmissionFail            : 1,
    RecievedPgnRequest          : 1,
    DataTransmit                : 1,
    BamTxCompleted              : 1;
};

struct CanMsgStatusTp
{
    struct strCanMsgFlags CanStatusFlags;
    Uint32  Pgn;
    Uint32  RequestedPgn;
    uint16_t  DataLength;
    uint8_t  TotalFrame;
    uint8_t  FrameNumber;
    uint8_t  CtsFrames;
};

struct CanMsgStatusTp strCanaTp;
struct CanMsgStatusTp strCanbTp;

struct TpBuffer
{
    uint64_t
    TpMsgByte8               : 8,
    TpMsgByte7               : 8,
    TpMsgByte6               : 8,
    TpMsgByte5               : 8,
    TpMsgByte4               : 8,
    TpMsgByte3               : 8,
    TpMsgByte2               : 8,
    TpMsgByte1               : 8;
};

union TpBufferRegister{
    uint64_t              all;
    struct TpBuffer  byte;
};

union TpBufferRegister CanaTransmitMsgBuffer[255];
union TpBufferRegister CanbTransmitMsgBuffer[255];
union TpBufferRegister CanaRecieveMsgBuffer[255];
union TpBufferRegister CanbRecieveMsgBuffer[255];

/**DM1 RELATED**/
union TpBufferRegister DM1RecieveMsgBuffer[DM1_SA][255];

struct CanJ1939IdStructure
{
    Uint32
    CanJ1939SourceAddress       : 8,
    CanJ1939PduSpecific         : 8,
    CanJ1939PduFormat           : 8,
    CanJ1939DataPage            : 1,
    CanJ1939ExtendedDataPage    : 1,
    CanJ1939Priority            : 3,
    CanJ1939Reserved            : 3;
};

union CanJ1939Id
{
    Uint32 Unit;
    struct CanJ1939IdStructure Id;
};

struct CanJ1939DataStructure
{
    uint64_t
    CanJ1939Byte8           : 8,
    CanJ1939Byte7           : 8,
    CanJ1939Byte6           : 8,
    CanJ1939Byte5           : 8,
    CanJ1939Byte4           : 8,
    CanJ1939Byte3           : 8,
    CanJ1939Byte2           : 8,
    CanJ1939Byte1           : 8;
};

union CanJ1939Data
{
    uint64_t Unit;
    struct CanJ1939DataStructure part;
};

struct CanJ1939Frame
{
    uint8_t  CanJ1939Dlc;
    union   CanJ1939Id      CanId;
    union   CanJ1939Data    CanData;
};

struct CanJ1939Frame CanbDM1RxFrame;
struct CanJ1939Frame CanaJ1939RxFrame;
struct CanJ1939Frame CanbJ1939RxFrame;

uint16_t  giItterateTree;
uint16_t  giItterateBranchA5;
uint16_t  giItterateBranchA6;
uint16_t  giItterateBranchA7;
uint16_t  giItterateBranchA8;
uint16_t  giItterateBranchA8B1;
uint16_t  giItterateBranchA8B2;
uint16_t  giItterateBranchA8B3;
uint16_t  giItterateBranchA8B3C1;
uint16_t  giItterateBranchA8B3C2;
uint16_t  giItterateBranchA8B4C1;
uint16_t  giItterateBranchA8B4C2;
uint16_t  giItterateBranchA8B4;
uint16_t  giItterateBranchA8B5;
uint16_t  giItterateBranchA8B5C4;
uint16_t  giItterateBranchA8B5C5;
uint16_t  giItterateBranchA8B5C5D1;

struct CanTransmissionSpeed
{
    uint64_t
    flMs10_1                                                : 1,
    flMs10_2                                                : 1,
    flMs10_3                                                : 1,
    flMs10_4                                                : 1,
    flMs10_5                                                : 1,
    flMs20_1                                                : 1,
    flMs20_2                                                : 1,
    flMs20_3                                                : 1,
    flMs20_4                                                : 1,
    flMs50_1                                                : 1,
    flMs50_2                                                : 1,
    flMs50_3                                                : 1,
    flMs50_4                                                : 1,
    flMs50_5                                                : 1,
    flMs100_1                                               : 1,
    flMs100_2                                               : 1,
    flMs100_3                                               : 1,
    flMs100_4                                               : 1,
    flMs100_5                                               : 1,
    flMs100_6                                               : 1,
    flMs200_1                                               : 1,
    flMs200_2                                               : 1,
    flMs200_3                                               : 1,
    flMs200_4                                               : 1,
    flMs250_1                                               : 1,
    flMs250_2                                               : 1,
    flMs250_3                                               : 1,
    flMs500_1                                               : 1,
    flMs500_2                                               : 1,
    flMs500_3                                               : 1,
    flMs1000_1                                              : 1,
    flMs1000_2                                              : 1;
};

struct CanTransmissionSpeed strCanaTx;

struct strSystemFlags
{
    uint16_t
    flI2cReadComplete                                       : 1,
    flAdcReadComplete                                       : 1,
    flSciaTxComplete                                        : 1,
    flScibTxComplete                                        : 1,
    flScicTxComplete                                        : 1,
    flAdcReadstart                                          : 1,
    flPeriodicDataLog                                       : 1,
    flStartCanDiscardTimer                                  : 1,
    flCanDiscardSpecBam                                     : 1,
    flDigitalByte1Changed                                   : 1;
//    flDigitalByte2Changed                                   : 1;
};

struct strSystemFlags strSystem;

uint16_t CANATimeoutCounter=0;
uint8_t  CANAStartTimer=0;
uint8_t  CANATimeout=0;

uint16_t CANBTimeoutCounter=0;
uint8_t  CANBStartTimer=0;
uint8_t  CANBTimeout=0;

uint32_t glCanaFlagTxFlag;
uint32_t glCanbFlagTxFlag;

uint8_t  noOfFramesReceived;
uint32_t gulNoOfStoredDataRcvd;

uint8_t  sendLog;
uint8_t  sendLogSerially;
uint16_t rx_complete;

flexcan_handle_t flexcanHandle;
volatile bool txComplete = false;
volatile bool rxComplete;
volatile bool wakenUp    = false;
flexcan_mb_transfer_t txXfer, rxXfer;
flexcan_frame_t frame;
flexcan_config_t flexcanConfig;

struct dataFromIomudule
{
	unsigned int
	analogPeriodic				: 1,
	digitalperiodic				: 1,
	analogError					: 1,
	digitalError				: 1,
	analogPeriodicWithDate		: 1,
	digitalperiodicWithDate		: 1,
	analogErrorWithDate			: 1,
	digitalErrorWithDate		: 1,
	analogActiveError			: 1,
	digitalActiveError			: 1,
	reserved					: 1;
};

struct dataFromIomudule strDataDownloadFlags;

struct dataDownloadRelatedFlags
{
	uint64_t
	DataDownload						: 1,
	DataDownloadWithDate				: 1,
	AnalogErrorDataDownloadWithDate		: 1,
	DateEditPage1stTime					: 1,
	dataDownlodingStarted				: 1,
	dataDownlodInProcess				: 1,
	dataDownloadCompleted				: 1,
	DigitalErrorRecvdNoOfLogs			: 1,
	AnalogErrorRecvdNoOfLogs			: 1,
	DigitalPeriodicRecvdNoOfLogs		: 1,
	AnalogPeriodicRecvdNoOfLogs			: 1,
	RecvdNoOfLogs						: 1;
};

struct dataDownloadRelatedFlags strDataMonitorFlags;

struct strDiagnosticMessage
{
	uint64_t
	SourceAddress 	: 8,
	PlugId		  	: 8,
	SpnFmi		  	: 32,
	OccuranceCount  : 7,
	Status			: 1,
	MessageId	  	: 8;
};

struct strDiagnosticMessage strDM1Log[DM1_SA][NO_OF_DM1_MESSAGES];  //3
struct strDiagnosticMessage strDM1LogPrev[DM1_SA][NO_OF_DM1_MESSAGES]; //3
uint8_t gucFaultLogs[DM1_SA] = {0}; //3

struct strDiagnosticMessage DM1_Error[NO_OF_DM1_MESSAGES];
struct strDiagnosticMessage DM1_ErrorPrev[NO_OF_DM1_MESSAGES];

uint8_t ScrollError[NO_OF_DM1_MESSAGES] = {0};
#endif
