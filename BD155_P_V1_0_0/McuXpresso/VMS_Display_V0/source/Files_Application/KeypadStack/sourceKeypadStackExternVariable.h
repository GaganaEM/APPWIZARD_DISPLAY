#ifndef FILES_APPLICATION_KEYPADSTACK_SOURCEJ1939STACKEXTERNVARIABLE_H_
#define FILES_APPLICATION_KEYPADSTACK_SOURCEJ1939STACKEXTERNVARIABLE_H_

enum enumKeypad;

extern uint8_t gucKeypadMatrix[ROW][COL];
extern uint8_t gucKeyPressedArr[ROW][COL];
extern uint8_t gucButtonPressed;

extern struct
{
	uint16_t
	tmrStart : 1,
	tmrStop  : 1,
	tmrTout	 : 1,
	tmrCount : 12;
}strDebounce;

extern struct
{
	uint64_t
	noPress 	: 8,
	shortPress  : 8,
	normalPress : 8,
	longPress	: 8,
	errorPress  : 8;
}strKeypadStatus;


#endif
