/*
 * leds.h
 *
 *  Created on: May 10, 2024
 *      Author: marco
 */

#ifndef INC_LEDS_H_
#define INC_LEDS_H_

#include <stdbool.h>

void led_init();

void set_board_led(bool set);

void set_led(float percentage);

#endif /* INC_LEDS_H_ */
