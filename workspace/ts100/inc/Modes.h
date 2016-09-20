/*
 * Modes.h
 *
 *  Created on: 17 Sep 2016
 *      Author: Ralim
 */

#ifndef MODES_H_
#define MODES_H_
#include "Interrupt.h"
#include "S100V0_1.h"
#include "Oled.h"
#include "PID.h"
enum {
	STARTUP, //we are sitting on the prompt to push a button
	SOLDERING,
	TEMP_ADJ,
	SETTINGS,
	SLEEP,
} operatingMode;

enum {
	UVLO = 0, SLEEP_TEMP, SLEEP_TIME,

} settingsPage;

struct {
	uint32_t SolderingTemp; //current setpoint for the iron
	uint8_t SleepTime; //minutes to sleep
	uint32_t SleepTemp; //temp to drop to in sleep
	uint8_t cutoutVoltage; //X10 the voltage we cutout at for undervoltage
	uint8_t movementEnabled;
} systemSettings;

void ProcessUI();
void DrawUI();
#endif /* MODES_H_ */
