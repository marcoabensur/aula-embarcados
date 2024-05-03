/*
 * led.c
 *
 *  Created on: May 3, 2024
 *      Author: marco
 */


#include "led.h"
#include "gpio.h"

void led_on(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
}

void led_off(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
}
