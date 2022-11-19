/*
 * matrix8x8.h
 *
 *  Created on: Nov 19, 2022
 *      Author: pmt12
 */


#ifndef INC_MATRIX8X8_H_
#define INC_MATRIX8X8_H_
#include "main.h"

#define MAX_LED_MATRIX 8

void shiftingLedMatrixVeritcally(uint8_t data, int shiftIndex);
void writeLEDMatrixRow(uint8_t data);
void updateLEDMatrix(int index);
void clearLEDMatrixCol();
void clearLEDMatrixRow();

#endif /* INC_MATRIX8X8_H_ */
