/*
 * software_timer.c
 *
 *  Created on: Sep 22, 2023
 *      Author: Nhat Khai
 */

#include "software_timer.h"

int timer0_counter = 0;
int timer0_flag = 0;

void setTimer0(int duration) {
	timer0_counter = duration;
	timer0_flag = 0;
}

void runTimer() {
	if (timer0_counter > 0) {
		timer0_counter --;
		if (timer0_counter <= 0) {
			timer0_flag = 1;
		}
	}
}
