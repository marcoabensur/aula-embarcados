/*
 * bluetooth.c
 *
 *  Created on: May 3, 2024
 *      Author: marco
 */


#include "bluetooth.h"
#include "usart.h"
#include <string.h>


#define BUFFER_LEN  1


uint8_t rx_buffer[BUFFER_LEN] = {0};


void bluetooth_init()
{
	HAL_UART_Receive_IT(&huart1, rx_buffer, BUFFER_LEN);
}

int bluetooth_last_data(uint8_t* data, uint16_t size)
{
	if (size < BUFFER_LEN){
		return -1;
	}

	memcpy(data, rx_buffer, BUFFER_LEN);

	return 0;
}


void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
    if(huart->Instance == huart1.Instance){
    	HAL_UART_Receive_IT(&huart1, rx_buffer, BUFFER_LEN);
    }
}
