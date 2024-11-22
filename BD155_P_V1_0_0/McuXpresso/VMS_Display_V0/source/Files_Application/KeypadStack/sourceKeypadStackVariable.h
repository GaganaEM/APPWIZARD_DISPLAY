#ifndef FILES_APPLICATION_SOURCEKEYPADSTACKVARIABLE_H_
#define FILES_APPLICATION_SOURCEKEYPADSTACKVARIABLE_H_

enum enumKeypad {one = 1, two, three, four, menu, five, six, seven, eight, enter, na1, na2};

uint8_t gucKeypadMatrix[ROW][COL] = {{one,   five},
					        	    {two,   six},
									{three, seven},
									{four,  eight},
									{menu,  enter},
};

uint8_t gucKeyPressedArr[ROW][COL] = {0};
uint8_t gucButtonPressed = 0;

struct
{
	uint16_t
	tmrStart : 1,
	tmrStop  : 1,
	tmrTout	 : 1,
	tmrCount : 12;
}strDebounce;

struct
{
	uint64_t
	noPress 	: 8,
	shortPress  : 8,
	normalPress : 8,
	longPress	: 8,
	errorPress  : 8;
}strKeypadStatus;

#endif
