/*
 * hearbeat.h
 *
 *  Created on: 5 нояб. 2019 г.
 *      Author: S1ckret
 */

#ifndef INC_HEARBEAT_H_
#define INC_HEARBEAT_H_

#include "drvLeds.h"

void LedsQueue_d(uint32_t time);

void LedsQueue(led_color_t* leds_queue, uint32_t count, uint32_t time);

#endif /* INC_HEARBEAT_H_ */