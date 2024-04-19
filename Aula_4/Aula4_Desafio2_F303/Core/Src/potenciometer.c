/*
 * potenciometer.c
 *
 *  Created on: Apr 17, 2024
 *      Author: marco
 */

#include "potentiometer.h"
#include "adc.h"

#define ADC_BUFFER_SIZE 32

uint32_t adc_val;
uint32_t adc_1_dma_buffer[ADC_BUFFER_SIZE];

void potentiometer_init() {
	HAL_ADC_Start_DMA(&hadc1, adc_1_dma_buffer, ADC_BUFFER_SIZE);
}

float read_potentiometer_percentage(){

	float percentage = (adc_val / 4095.0) * 100;

	return percentage;
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
	uint32_t adc_sum = 0;
	for (int i = 0; i < ADC_BUFFER_SIZE; i++) {
		adc_sum += adc_1_dma_buffer[i];
	}

	adc_val = adc_sum / ADC_BUFFER_SIZE;

}


