#include "sourceJ1939.h"

#include "../Files_Header/sourceMacro.h"
#include "../Files_Header/sourceExternVariable.h"

extern void EcanaConfigure(void);
extern void EcanbConfigure(void);
extern void ConfigureMailBox(uint16_t liCanChannel);

void J1939Config(void)
{
//    EcanaConfigure();
	EcanbConfigure();
}

void J1939MailboxConfigure(void)
{
	ConfigureMailBox(CANB);
//	ConfigureMailBox(CANA);
}
