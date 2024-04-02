#ifdef ENABLE_EXAMPLEAPP

#include "exampleapp.h"

enum ExampleAppState_t gExampleAppState;

void ExampleAppTimeSlice()
{
    BEEP_Type_t beep = BEEP_440HZ_500MS;

    if (gExampleAppState == BEEPING_ON) {

        AUDIO_PlayBeep(beep);

        gExampleAppState = BEEPING_OFF;
    }

    return;
}


void ACTION_ExampleApp(void)
{
	switch (gExampleAppState) {
		case BEEPING_OFF:
			gExampleAppState = BEEPING_ON;
			break;
		case BEEPING_ON:
		default:
			gExampleAppState = BEEPING_OFF;
	}
}

#endif
