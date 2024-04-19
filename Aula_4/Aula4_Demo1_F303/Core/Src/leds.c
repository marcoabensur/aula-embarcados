/*
 * leds.c
 *
 *  Created on: Apr 16, 2024
 *      Author: marco
 */


#include "leds.h"
#include "main.h"

void board_led_toggle()
{
	HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_3);
}

void board_led_loop()
{
	for (int i = 0; i < 4; i++){
		board_led_toggle();
		HAL_Delay(200);
	}

	HAL_Delay(1000);
}


