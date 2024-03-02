/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DBG_1_Pin GPIO_PIN_14
#define DBG_1_GPIO_Port GPIOC
#define DBG_2_Pin GPIO_PIN_15
#define DBG_2_GPIO_Port GPIOC
#define DBG_3_Pin GPIO_PIN_0
#define DBG_3_GPIO_Port GPIOH
#define X_DIR2_Pin GPIO_PIN_12
#define X_DIR2_GPIO_Port GPIOB
#define Y_DIR2_Pin GPIO_PIN_14
#define Y_DIR2_GPIO_Port GPIOB
#define Z_DIR_Pin GPIO_PIN_6
#define Z_DIR_GPIO_Port GPIOC
#define Y_DIR_Pin GPIO_PIN_7
#define Y_DIR_GPIO_Port GPIOC
#define X_DIR_Pin GPIO_PIN_8
#define X_DIR_GPIO_Port GPIOC
#define Z_DIR2_Pin GPIO_PIN_9
#define Z_DIR2_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
