/*
 * I2C.h
 *
 *  Created on: Feb. 20, 2024
 *      Author: kosta
 */

#ifndef SRC_DRIVERS_I2C_I2C_H_
#define SRC_DRIVERS_I2C_I2C_H_

#include <stdio.h>
#include <stdint.h>
#include "stm32l4xx_hal.h"
#include "stm32l4xx_hal_i2c.h"

typedef struct {
    I2C_HandleTypeDef   *handle;
    HAL_StatusTypeDef    status;
    HAL_I2C_StateTypeDef state;

} hcc_i2c_t;

HAL_StatusTypeDef hcc_i2c_init(hcc_i2c_t *i2c, I2C_HandleTypeDef *hi2c); // initialize the driver
HAL_StatusTypeDef hcc_i2c_write(hcc_i2c_t *i2c, uint16_t address, uint8_t *bytes, uint16_t len); // send data

#endif /* SRC_DRIVERS_I2C_I2C_H_ */
