#ifndef APP_EXAMPLE_H
#define APP_EXAMPLE_H

#ifdef ENABLE_EXAMPLEAPP

#include <stdint.h>
#include "audio.h"

enum ExampleAppState_t {
    BEEPING_OFF = 0,
    BEEPING_ON
};

extern enum ExampleAppState_t gExampleAppState;
// extern volatile uint16_t      gExampleAppCounter;

/*
 *  This function gets called regularly by the firmware. It must be non-blocking
 */
void ExampleAppTimeSlice(void);

/*
 *  This function acts as entry point to the example app: Whenever a user action
 *  (like i.e. pressing a button) should induce something, this function gets
 *  called.
 */
void ACTION_ExampleApp(void);

#endif

#endif
