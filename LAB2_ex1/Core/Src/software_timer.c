/*
 * software_timer.c
 *
 *  Created on: Oct 23, 2023
 *      Author: khoitran
 */

#include "software_timer.h"

#define TIMER_CYCLE_1 1

uint16_t flag_timer1 = 0;
uint16_t timer1_counter = 0;
uint16_t timer1_MUL = 0;

void setTimer1(uint16_t duration) {
	timer1_MUL = duration / TIMER_CYCLE_1;
	timer1_counter = timer1_MUL;
	flag_timer1 = 0;
}

void timerRun(){
	if (timer1_counter > 0) {
		timer1_counter --;
		if (timer1_counter == 0) {
			flag_timer1 = 1;
			timer1_counter = timer1_MUL;
		}
	}
}
