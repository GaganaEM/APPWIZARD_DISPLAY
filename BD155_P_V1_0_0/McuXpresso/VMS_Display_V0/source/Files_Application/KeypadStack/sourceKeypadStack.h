#ifndef FILES_APPLICATION_SOURCEKEYPADSTACK_H_
#define FILES_APPLICATION_SOURCEKEYPADSTACK_H_

void OutputRow(uint8_t lucRowPin);
uint8_t ReadColumn(uint8_t lucColumnPin);
void ReadKey(void);
void CheckKeyDebounce(uint8_t lucKeyValue);
uint8_t IsKeyPressed(uint8_t lucKeyValue);
uint8_t WasKeyPressed(uint8_t lucKeyValue);
void KeypadPeriodicTimeCall(void);

#endif /* FILES_APPLICATION_SOURCEJ1939STACK_H_ */
