/*
 * bluetooth.c
 *
 *  Created on: May 3, 2024
 *      Author: marco
 */


#include "bluetooth.h"
#include "usart.h"
#include <string.h>
#include <stdio.h>


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


void bluetooth_send_time(uint32_t time)
{

	char send_data[20] = {0};

	sprintf(send_data, "Time = %ld \r\n", time);

	HAL_UART_Transmit(&huart1, (uint8_t *) send_data, strlen(send_data), 1000);
}


void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
    if(huart->Instance == huart1.Instance){
    	HAL_UART_Receive_IT(&huart1, rx_buffer, BUFFER_LEN);
    }
}
