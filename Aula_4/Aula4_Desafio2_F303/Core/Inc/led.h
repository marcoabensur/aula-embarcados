/*
 * led.h
 *
 *  Created on: Apr 17, 2024
 *      Author: marco
 */

#ifndef INC_LED_H_
#define INC_LED_H_

/**
  Initializes the LED

**/
void led_init();


/**
  Sets the brightness of the led to a certain percentage

  @param[in]  percentage     Desired percentage of the led, between 0 and 100

**/

void set_led_percentage(float percentage);

#endif /* INC_LED_H_ */
