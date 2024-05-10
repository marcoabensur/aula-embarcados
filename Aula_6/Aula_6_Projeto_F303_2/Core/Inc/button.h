/*
 * button.h
 *
 *  Created on: May 10, 2024
 *      Author: marco
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

typedef enum {
	MODE_OPERATION,
	MODE_MENU,
} mode_t;

mode_t button_current_mode();

#endif /* INC_BUTTON_H_ */
