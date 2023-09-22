/*
 * led7seg_display.c
 *
 *  Created on: Sep 22, 2023
 *      Author: Nhat Khai
 */

#include "led7seg_display.h"

uint16_t numbers[10] = {0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10};

void display7SEG0(int num) {
	switch (num) {
	case 0:
		GPIOB->ODR = numbers[0];
		break;
	case 1:
		GPIOB->ODR = numbers[1];
		break;
	case 2:
		GPIOB->ODR = numbers[2];
		break;
	case 3:
		GPIOB->ODR = numbers[3];
		break;
	case 4:
		GPIOB->ODR = numbers[4];
		break;
	case 5:
		GPIOB->ODR = numbers[5];
		break;
	case 6:
		GPIOB->ODR = numbers[6];
		break;
	case 7:
		GPIOB->ODR = numbers[7];
		break;
	case 8:
		GPIOB->ODR = numbers[8];
		break;
	case 9:
		GPIOB->ODR = numbers[9];
		break;
	default:
		break;
	}
}

void display7SEG1(int num) {
	switch (num) {
	case 0:
		GPIOB->ODR = numbers[0] << 8 | GPIOB->ODR;
		break;
	case 1:
		GPIOB->ODR = numbers[1] << 8 | GPIOB->ODR;
		break;
	case 2:
		GPIOB->ODR = numbers[2] << 8 | GPIOB->ODR;
		break;
	case 3:
		GPIOB->ODR = numbers[3] << 8 | GPIOB->ODR;
		break;
	case 4:
		GPIOB->ODR = numbers[4] << 8 | GPIOB->ODR;
		break;
	case 5:
		GPIOB->ODR = numbers[5] << 8 | GPIOB->ODR;
		break;
	case 6:
		GPIOB->ODR = numbers[6] << 8 | GPIOB->ODR;
		break;
	case 7:
		GPIOB->ODR = numbers[7] << 8 | GPIOB->ODR;
		break;
	case 8:
		GPIOB->ODR = numbers[8] << 8 | GPIOB->ODR;
		break;
	case 9:
		GPIOB->ODR = numbers[9] << 8 | GPIOB->ODR;
		break;
	default:
		break;
	}
}
