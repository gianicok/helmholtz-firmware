/*
 * MAX222.h
 *
 *  Created on: Feb 20, 2024
 *      Author: kosta
 */

#ifndef SRC_PERIPHERALS_MAX222_MAX222_H_
#define SRC_PERIPHERALS_MAX222_MAX222_H_

#include <stdio.h>
#include <stdint.h>
#include "stm32l4xx_hal.h"

#include "main.h"

void hcc_bridge_wake();
void hcc_set_x(uint8_t dir);
void hcc_set_y(uint8_t dir);
void hcc_set_z(uint8_t dir);

#endif /* SRC_PERIPHERALS_MAX222_MAX222_H_ */
