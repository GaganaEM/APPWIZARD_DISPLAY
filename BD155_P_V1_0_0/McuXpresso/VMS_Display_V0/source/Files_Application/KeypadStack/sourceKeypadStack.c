#include "../../Files_Header/sourceMacro.h"
#include "../../Files_Header/sourceInclude.h"
#include "../../Files_Header/sourceExternVariable.h"

#include "sourceKeypadStack.h"

void OutputRow(uint8_t lucRowPin)
{
	ROW1_LOW;
	ROW2_LOW;
	ROW3_LOW;
	ROW4_LOW;

	switch(lucRowPin)
	{
		case 0: /* Set Pin for Row 1 */
				ROW1_HIGH;
				break;
		case 1: /* Set Pin for Row 2 */
				ROW2_HIGH;
				break;
		case 2: /* Set Pin for Row 3 */
				ROW3_HIGH;
				break;
		case 3: /* Set Pin for Row 4 */
				ROW4_HIGH;
				break;
		default :
				break;
	}
}

void funcOutputCol(uint8_t lucColPin)
{

//	ROW3_LOW;
//	ROW4_LOW;

	switch(lucColPin)
	{
		case 0: /* Set Pin for Row 1 */
			    COL2_LOW;
			    COL1_HIGH;
				break;
		case 1: /* Set Pin for Row 2 */
			    COL1_LOW;
			    COL2_HIGH;
				break;
//		case 2: /* Set Pin for Row 3 */
//				ROW3_HIGH;
//				break;
//		case 3: /* Set Pin for Row 4 */
//				ROW4_HIGH;
//				break;
		default :
				break;
	}
}

uint8_t ReadColumn(uint8_t lucColumnPin)
{
	uint8_t lucStatus = 0;

	switch(lucColumnPin)
	{
		case 0: /* Read Pin for Column 1 */
				lucStatus = COL1_READ;
				break;
		case 1: /* Read Pin for Column 2 */
				lucStatus = COL2_READ;
				break;
		case 2: /* Read Pin for Column 3 */
				lucStatus = COL3_READ;
				break;
		default :
				break;
	}
	return(lucStatus);
}

uint8_t funcReadRow(uint8_t lucRowPin)
{
	uint8_t lucStatus = 0;

	switch(lucRowPin)
	{
		case 0: /* Read Pin for Column 1 */
				lucStatus = ROW1_READ;
				break;
		case 1: /* Read Pin for Column 2 */
				lucStatus = ROW2_READ;
				break;
		case 2: /* Read Pin for Column 3 */
				lucStatus = ROW3_READ;
				break;
		case 3: /* Read Pin for Column 3 */
				lucStatus = ROW4_READ;
				break;
		case 4: /* Read Pin for Column 3 */
				lucStatus = ROW5_READ;
				break;
		default :
				break;
	}
	return(lucStatus);
}


void ReadKey(void)
{
	uint8_t lucR = 0;
	uint8_t lucC = 0;

	uint8_t lucReadVal = 0;
	gucButtonPressed = 0;

	for(lucC = 0; lucC < COL; lucC++)
	{
		//OutputRow(lucR);
		funcOutputCol(lucC);

		for(lucR = 0; lucR < ROW; lucR++)
		{
			lucReadVal = funcReadRow(lucR);
			//lucReadVal = ReadColumn(lucC);
			if(lucReadVal == 0)
			{
				continue;
			}
			else
			{
				gucKeyPressedArr[lucR][lucC] = 1;
				gucButtonPressed = gucKeypadMatrix[lucR][lucC];
				break;
			}
		}
	}

	CheckKeyDebounce(gucButtonPressed);
}

void CheckKeyDebounce(uint8_t lucKeyValue)
{
//	static uint8_t lucPrevKeyValue = 0;

	if(lucKeyValue != gucPrevKeyValue && lucKeyValue != 0)
	{
		gucPrevKeyValue = lucKeyValue;
		strDebounce.tmrStart = 1;
		strDebounce.tmrCount = 0;
	}
	else if(lucKeyValue == 0)
	{
		if(strDebounce.tmrCount >= NORMAL_DB && strDebounce.tmrCount < MAX_DB)//LONG_DB)
		{
			strKeypadStatus.normalPress = gucPrevKeyValue;
		}
		strDebounce.tmrStart = 0;
		strDebounce.tmrCount = 0;
		gucPrevKeyValue = 0;
	}

	if(strDebounce.tmrStart == 1)
	{
		strDebounce.tmrCount++;
		if(strDebounce.tmrCount > MAX_DB)
		{
			strDebounce.tmrCount = MAX_DB;
		}
		else
		{}
	}
	else
	{}


//	if(lucKeyValue != 0 && lucKeyValue != lucPrevKeyValue)
//	{
//		memset(&strKeypadStatus,'\0',sizeof(strKeypadStatus));
//		lucPrevKeyValue = lucKeyValue;
//		strDebounce.tmrStart = 1;
//		strDebounce.tmrCount = 0;
//	}
//	else
//	{}
//
//	if(lucKeyValue == 0 && lucKeyValue != lucPrevKeyValue)
//	{
//		if(strDebounce.tmrCount < SHORT_DB)
//		{
//			strKeypadStatus.noPress = lucPrevKeyValue;
//		}
//		else if(strDebounce.tmrCount >= SHORT_DB && strDebounce.tmrCount < NORMAL_DB)
//		{
//			strKeypadStatus.shortPress = lucPrevKeyValue;
//		}
//		else if(strDebounce.tmrCount >= NORMAL_DB && strDebounce.tmrCount < MAX_DB)//LONG_DB)
//		{
//			strKeypadStatus.normalPress = lucPrevKeyValue;
//		}
////		else if(strDebounce.tmrCount >= LONG_DB && strDebounce.tmrCount < MAX_DB)
////		{
////			strKeypadStatus.longPress = lucPrevKeyValue;
////		}
////		else
////		{
////			strKeypadStatus.errorPress = lucPrevKeyValue;
////		}
//
//		strDebounce.tmrStart = 0;
//		strDebounce.tmrCount = 0;
//	}
//	else
//	{}
//
//
//	if(strDebounce.tmrStart == 1)
//	{
//		strDebounce.tmrCount++;
//		if(strDebounce.tmrCount > MAX_DB)
//		{
//			strDebounce.tmrCount = MAX_DB;
//		}
//		else
//		{}
//	}
//	else
//	{}
}

uint8_t IsKeyPressed(uint8_t lucKeyValue)
{
	uint8_t lucR = 0;
	uint8_t lucC = 0;
	uint8_t lucStatus = 0;

	for(lucR = 0; lucR < ROW; lucR++)
	{
		for(lucC = 0; lucC < COL; lucC++)
		{
			if(lucKeyValue == gucKeypadMatrix[lucR][lucC])
			{
				lucStatus = 1;
				break;
			}
		}
		if(lucStatus == 1)
		{
			break;
		}
	}

	OutputRow(lucR);
	lucStatus = ReadColumn(lucC);

	return(lucStatus);
}

uint8_t WasKeyPressed(uint8_t lucKeyValue)
{
	uint8_t lucR = 0;
	uint8_t lucC = 0;
	uint8_t lucStatus = 0;

	for(lucR = 0; lucR < ROW; lucR++)
	{
		for(lucC = 0; lucC < COL; lucC++)
		{
			if(lucKeyValue == gucKeyPressedArr[lucR][lucC])
			{
				lucStatus = gucKeyPressedArr[lucR][lucC];
				gucKeyPressedArr[lucR][lucC] = 0;
			}
		}
	}
	return(lucStatus);
}

void KeypadPeriodicTimeCall(void)
{
	ReadKey();
}
