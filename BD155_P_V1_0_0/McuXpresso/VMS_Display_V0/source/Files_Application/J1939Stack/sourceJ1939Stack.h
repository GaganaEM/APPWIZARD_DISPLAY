#ifndef FILES_APPLICATION_SOURCEJ1939STACK_H_
#define FILES_APPLICATION_SOURCEJ1939STACK_H_

void funcCheckItterateBranchA1(void);
void funcCheckItterateBranchA2(void);
void funcCheckItterateBranchA3(void);
void funcCheckItterateBranchA4(void);
void funcCheckItterateBranchA5(void);
void funcCheckItterateBranchA6(void);
void funcCheckItterateBranchA7(void);
void funcCheckItterateBranchA8(void);
void funcCheckItterateBranchA8B1(void);
void funcCheckItterateBranchA8B2(void);
void funcCheckItterateBranchA8B3(void);
void funcCheckItterateBranchA8B4(void);
void funcCheckItterateBranchA8B5(void);
void funcCheckItterateBranchA8B4C1(void);
void funcCheckItterateBranchA8B4C2(void);
void funcCheckItterateBranchA8B5C1(void);
void funcCheckItterateBranchA8B5C2(void);
void funcCheckItterateBranchA8B5C3(void);
void funcCheckItterateBranchA8B5C4(void);
void funcCheckItterateBranchA8B5C5(void);
void funcCheckItterateBranchA8B5C5D1(void);

void CanaFrameConfigure(void);
void funcExtractCanRecievedData(unsigned char lcCanPort, uint32_t llJ1939RxFlags);
void funcCanaTransmitMailbox(struct CanMessage strTxCanaFrame);
void funcDecodeCanRecievedData(uint16_t liCanPort, uint32_t llCanJ1939Pgn);
void funcDecodeCanRxData(unsigned char liCanPort, uint32_t llCanJ1939Pgn);
void funcInitiateTransportProtocol(uint16_t liCanPort, uint16_t liCommunicationType, uint16_t liMessageLength, uint32_t liMessagePgn);
void funcCanTransmitMailbox(unsigned char lcCanPort, struct CanMessage strTxCanFrame);
void funcRecieveCanTPFrame(unsigned char lcCanPort, uint32_t llCanJ1939Pgn);
void funcSelectCanFrameToTransmit(void);

void ConfigureMailBox(uint16_t liCanChannel);
void MailBoxConfiguration(unsigned char lcCanPort, uint16_t liMailboxNo, unsigned char lcMbDirection, uint32_t llMessageId, uint32_t llMaskId);

struct CanMsgStatusTp funcTransmitCanTPFrame(unsigned char lcCanPort, struct CanMsgStatusTp strCanTp);
extern void LoadFaultToStruct(uint8_t lucSource);
unsigned int Roundoff(float value);

extern void sendEngHrsRequest1(void);
extern void sendEngHrsRequest2(void);
extern void send_ToP_ToT(void);
extern void send_FueL_lvl(void);
extern void send_ECL_EOP(void);
extern void send_ParkBrkSw_and_VehicleSpd(void);
extern void send_AirFilClog(void);
extern void send_SeatBeltSw(void);
extern void send_ECT_EOT(void);
extern void send_E_N_G_SPD(void);
extern void send_TOFC(void);
#endif /* FILES_APPLICATION_SOURCEJ1939STACK_H_ */
