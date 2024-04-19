/*
 * potentiometer.h
 *
 *  Created on: Apr 17, 2024
 *      Author: marco
 */

#ifndef INC_POTENTIOMETER_H_
#define INC_POTENTIOMETER_H_


void potentiometer_init();

/**
  Returns a float value between 0 and 100 indicating the potentiometer percentage

  @return  A value between 0 and 100 indicating the potentiometer percentage

**/
float read_potentiometer_percentage();

#endif /* INC_POTENTIOMETER_H_ */
