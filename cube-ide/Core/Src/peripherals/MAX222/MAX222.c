/*
 * MAX222.c
 *
 *  Created on: Feb 20, 2024
 *      Author: kosta
 */

#include <MAX222/MAX222.h>

void hcc_bridge_wake(){

	// SET ALL H-BRIDGES TO SLEEP
	HAL_GPIO_WritePin(X_DIR_GPIO_Port, X_DIR_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(X_DIR2_GPIO_Port,X_DIR2_Pin,GPIO_PIN_RESET);

	HAL_GPIO_WritePin(Y_DIR_GPIO_Port, Y_DIR_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Y_DIR2_GPIO_Port,Y_DIR2_Pin,GPIO_PIN_RESET);

	HAL_GPIO_WritePin(Z_DIR_GPIO_Port, Z_DIR_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Z_DIR2_GPIO_Port,Z_DIR2_Pin,GPIO_PIN_RESET);

	//WAIT
	HAL_Delay(1000);

	// WAKE THEM UP
	HAL_GPIO_WritePin(X_DIR_GPIO_Port, X_DIR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(X_DIR2_GPIO_Port,X_DIR2_Pin,GPIO_PIN_SET);

	HAL_GPIO_WritePin(Y_DIR_GPIO_Port, Y_DIR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Y_DIR2_GPIO_Port,Y_DIR2_Pin,GPIO_PIN_SET);

	HAL_GPIO_WritePin(Z_DIR_GPIO_Port, Z_DIR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Z_DIR2_GPIO_Port,Z_DIR2_Pin,GPIO_PIN_SET);

	//WAIT
	HAL_Delay(1000);
}

void hcc_set_x(uint8_t dir){
	if (dir == 1){
		HAL_GPIO_WritePin(X_DIR_GPIO_Port, X_DIR_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(X_DIR2_GPIO_Port,X_DIR2_Pin,GPIO_PIN_RESET);
	}
	else{
		HAL_GPIO_WritePin(X_DIR_GPIO_Port ,X_DIR_Pin ,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(X_DIR2_GPIO_Port,X_DIR2_Pin,GPIO_PIN_SET);
	}
}

void hcc_set_y(uint8_t dir){
	if (dir == 1){
		HAL_GPIO_WritePin(Y_DIR_GPIO_Port, Y_DIR_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Y_DIR2_GPIO_Port,Y_DIR2_Pin,GPIO_PIN_RESET);
	}
	else{
		HAL_GPIO_WritePin(Y_DIR_GPIO_Port, Y_DIR_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Y_DIR2_GPIO_Port,Y_DIR2_Pin,GPIO_PIN_SET);
	}
}

void hcc_set_z(uint8_t dir){
	if (dir == 1){
		HAL_GPIO_WritePin(Z_DIR_GPIO_Port, Z_DIR_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Z_DIR2_GPIO_Port,Z_DIR2_Pin,GPIO_PIN_RESET);
	}
	else{
		HAL_GPIO_WritePin(Z_DIR_GPIO_Port, Z_DIR_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Z_DIR2_GPIO_Port,Z_DIR2_Pin,GPIO_PIN_SET);
	}
}
