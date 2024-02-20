/*
 * I2C.c
 *
 *  Created on: Feb. 20, 2024
 *      Author: kosta
 */

#include "I2C.h"

HAL_StatusTypeDef hcc_i2c_init(hcc_i2c_t *i2c, I2C_HandleTypeDef *hi2c){

    i2c->handle = hi2c;
    i2c->status = HAL_I2C_Init(i2c->handle);
    i2c->state = HAL_I2C_GetState(i2c->handle);

    return i2c->status;
}

HAL_StatusTypeDef hcc_i2c_write(hcc_i2c_t *i2c, uint16_t address, uint8_t *bytes, uint16_t len){

    i2c->state = HAL_I2C_GetState(i2c->handle);
	i2c->status = HAL_I2C_Master_Transmit(i2c->handle, address, bytes, len, HAL_MAX_DELAY);

	return i2c->status;
}
