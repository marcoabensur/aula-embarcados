/*
 * led.c
 *
 *  Created on: Apr 17, 2024
 *      Author: marco
 */


#include "led.h"
#include "tim.h"

void led_init(){
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
}
void set_led_percentage(float percentage){
	uint32_t duty_cycle = (percentage / 100.0) * 1000;
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, duty_cycle);
}
