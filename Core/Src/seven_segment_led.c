/*
 * seven_segment_led.c
 *
 *  Created on: Oct 17, 2022
 *      Author: pmt12
 */

#include "main.h"
#include "seven_segment_led.h"

extern int hour;
extern int minute;
extern int second;
extern int segment_index;

extern int led_buffer[4];
void display7Seg(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
		break;
	default:
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
		break;
	}
}

void update7SEG(int index){
//	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
	display7Seg(led_buffer[index]);
}

void updateClockBuffer(){
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = minute/10;
	led_buffer[3] = minute%10;
}

void clock(){
	second ++;
	if(second >= 60){
		second = 0;
		minute ++;
	}
	if(minute >= 60){
		minute = 0;
		hour ++;
	}
	if(hour >= 24) {
		hour = 0;
	}
	updateClockBuffer();
}

void change7Segment(){
	  update7SEG(segment_index);
	  segment_index++;
	  if(segment_index >= MAX_LED) segment_index = 0;
}
