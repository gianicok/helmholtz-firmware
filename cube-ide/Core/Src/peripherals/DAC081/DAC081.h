/*
 * DAC081.h
 *
 *  Created on: Feb 20, 2024
 *      Author: kosta
 */

#ifndef SRC_PERIPHERALS_DAC081_DAC081_H_
#define SRC_PERIPHERALS_DAC081_DAC081_H_

#include <stdio.h>
#include <stdint.h>
#include "stm32l4xx_hal.h"

#include "I2C/I2C.h"

uint8_t hcc_dac_packet(uint8_t volt_sp);
void hcc_dac_set_output(hcc_i2c_t *i2c, uint16_t dac, uint8_t volt_sp);

#endif /* SRC_PERIPHERALS_DAC081_DAC081_H_ */
