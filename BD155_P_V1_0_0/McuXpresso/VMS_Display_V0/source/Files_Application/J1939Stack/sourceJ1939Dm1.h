/*
 * sourceJ1939Dm1.h
 *
 *  Created on: 19-Oct-2021
 *      Author: EME01-L-02D19
 */

#ifndef FILES_APPLICATION_J1939STACK_SOURCEJ1939DM1_H_
#define FILES_APPLICATION_J1939STACK_SOURCEJ1939DM1_H_

void StoreDiagnosticMessage(uint8_t lucSource, uint8_t StructureArray, struct strDiagnosticMessage strLocalDM1Log);
uint8_t CheckPrevDiagnosticMessage(uint8_t lucSource, Uint32 lulSpnFmi);
void LoadFaultToStruct(uint8_t lucSource);

extern uint8_t Find_Valid_spnfmi(Uint32 lulspn,uint8_t lucfmi);
#endif /* FILES_APPLICATION_J1939STACK_SOURCEJ1939DM1_H_ */
