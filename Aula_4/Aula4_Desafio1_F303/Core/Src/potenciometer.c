/*
 * potenciometer.c
 *
 *  Created on: Apr 17, 2024
 *      Author: marco
 */

#include "potentiometer.h"
#include "adc.h"


float read_potentiometer_percentage(){

	HAL_ADC_Start(&hadc1); // start the adc
	HAL_ADC_PollForConversion(&hadc1, 100); // poll for conversion
	uint32_t adc_val = HAL_ADC_GetValue(&hadc1); // get the adc value
	HAL_ADC_Stop(&hadc1); // stop adc

	float percentage = (adc_val / 4095.0) * 100;

	return percentage;
}
