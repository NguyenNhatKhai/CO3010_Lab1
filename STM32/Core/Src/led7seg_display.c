/*
 * led7seg_display.c
 *
 *  Created on: Sep 22, 2023
 *      Author: Nhat Khai
 */

#include "led7seg_display.h"

uint16_t setPins[11] = {0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10, 0xFF};
uint16_t resetPins[11] = {0xBF, 0x86, 0xDB, 0xCF, 0xE6, 0xED, 0xFD, 0x87, 0xFF, 0xEF, 0x00};

void display7SEG(int num) {
	if (num >= 0 && num <= 9) {
		GPIOB->ODR = (GPIOB->ODR | setPins[num]) & ~resetPins[num];
	}
	else {
		GPIOB->ODR = (GPIOB->ODR | setPins[10]) & ~resetPins[10];
	}
}
