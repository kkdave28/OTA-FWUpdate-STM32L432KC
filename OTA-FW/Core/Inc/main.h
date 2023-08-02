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
#include <string.h>
#include <stdlib.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
#define LED_PORT GPIOB
#define LED_PIN GPIO_PIN_3
#define C_ACK 0
#define C_FAI 1
#define C_ERR 2
#define MAX_BLOCK_SZ ( 2048 ) // 2Kb Pages each, transmit and get the firmware page by page.
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define APP_INFO_ADDR  0x08008000 // Address where checksum/sha-hash/version info etc will be stored.
#define APP_START_ADDR 0x08008800 // Starting address of the application


#define APP_INFO_PAGE_NUM   16  // Page where the checksum/hash/version info etc will be stored.
#define APP_PAGE_NUM_LOW    17  // Page where application will start from
#define APP_PAGE_NUM_HIGH   127 // Last page of the application
#define BL_PAGE_LOW         0   // Page where the bootloader starts from
#define BL_PAGE_HIGH        15  // Last page of the bootloader
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
