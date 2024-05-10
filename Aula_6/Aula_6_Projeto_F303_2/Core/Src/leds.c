/*
 * led.c
 *
 *  Created on: May 10, 2024
 *      Author: marco
 */


#include "gpio.h"
#include "tim.h"
#include "leds.h"

#define LED_PWM_PERIOD	1000

void led_init(){
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
}

void set_board_led(bool set){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, set);
}

void set_led(float percentage){
	__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, percentage * LED_PWM_PERIOD);
}
