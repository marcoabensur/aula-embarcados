/*
 * button.c
 *
 *  Created on: May 10, 2024
 *      Author: marco
 */


#include "button.h"
#include "gpio.h"

mode_t current_mode = MODE_OPERATION;

mode_t button_current_mode(){
	return current_mode;
}


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{

	if (GPIO_Pin == GPIO_PIN_0){
		if (current_mode == MODE_OPERATION){
			current_mode = MODE_MENU;
		} else {
			current_mode = MODE_OPERATION;
		}
	}

}
