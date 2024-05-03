/*
 * bluetooth.h
 *
 *  Created on: May 3, 2024
 *      Author: marco
 */

#ifndef INC_BLUETOOTH_H_
#define INC_BLUETOOTH_H_

#include <stdint.h>

/**
 * @brief Initializes the Bluetooth module.
 *
 * This function should be called before using any other Bluetooth functions.
 * It performs necessary initialization tasks
 */

void bluetooth_init();

/**
 * @brief Retrieves the last data received from the Bluetooth module.
 *
 * @param data Pointer to a buffer where the received data will be stored.
 * @param size Maximum size of the buffer pointed to by `data`.
 * @return Result code. 0 for success and < 0 for errors.
 *
 */
int bluetooth_last_data(uint8_t* data, uint16_t size);

/**
 * @brief Sends time via bluetooth
 *
 */
void bluetooth_send_time(uint32_t time);

#endif /* INC_BLUETOOTH_H_ */
