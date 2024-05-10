/*
 * adc_service.c
 *
 *  Created on: May 10, 2024
 *      Author: marco
 */


#include "adc.h"
#include "adc_service.h"

#define ADC_1_DMA_CHANNELS 2
#define ADC_1_DMA_BUFFER_SIZE 64

#define ADC_IDX_LDR	0
#define ADC_IDX_POTENTIOMETER 1


uint32_t adc_val[ADC_1_DMA_CHANNELS];
uint32_t adc_dma_buffer[ADC_1_DMA_BUFFER_SIZE];


void adc_start()
{
	HAL_ADC_Start_DMA(&hadc1, adc_dma_buffer, ADC_1_DMA_BUFFER_SIZE);
}

float get_potentiometer_percentage()
{
	return adc_val[ADC_IDX_POTENTIOMETER] / 4095.0;
}

float get_ldr_val()
{
	return adc_val[ADC_IDX_LDR];
}


void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
	uint32_t sum[ADC_1_DMA_CHANNELS] = { 0 };

	for (uint16_t i = 0; i < ADC_1_DMA_BUFFER_SIZE; i += ADC_1_DMA_CHANNELS) {
		for (uint16_t j = 0; j < ADC_1_DMA_CHANNELS; j++) {
			sum[j] += adc_dma_buffer[i + j];
		}
	}

	for (uint16_t i = 0; i < ADC_1_DMA_CHANNELS; i++) {
		adc_val[i] = sum[i] / (ADC_1_DMA_BUFFER_SIZE / ADC_1_DMA_CHANNELS);
	}

}
