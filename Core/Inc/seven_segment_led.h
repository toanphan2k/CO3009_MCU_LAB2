/*
 * seven_segment_led.h
 *
 *  Created on: Oct 17, 2022
 *      Author: pmt12
 */

#ifndef INC_SEVEN_SEGMENT_LED_H_
#define INC_SEVEN_SEGMENT_LED_H_
#include "main.h"
#define MAX_LED 4

void display7Seg(int num);
void update7SEG(int index);
void updateClockBuffer();
void change7Segment();
void clock();
#endif /* INC_SEVEN_SEGMENT_LED_H_ */
