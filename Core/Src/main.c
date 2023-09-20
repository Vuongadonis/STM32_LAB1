/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  void TurnLED1() {
	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
  }
  void TurnLED2() {
  	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
    }
  void TurnLED3() {
  	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
    }
void TurnLED4() {
  	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
    }
  void TurnLED5() {
  	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
    }
  void TurnLED6() {
  	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
    }
  void TurnLED7() {
	  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
      }
  void TurnLED8() {
	  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
        }
  void TurnLED9() {
	  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
        }
  void TurnLED10() {
	  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
        }
  void TurnLED11() {
	  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
          }
  void TurnLED0() {
	  HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
          }
  void clearAllClock() {
	  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
	  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
	  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
	  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
	  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
	  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
	  HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
  }
  void clearNumberOnClock(int num) {
	  switch(num) {
	  case 0:
		  HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
		  break;
	  case 10:
		  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
		  break;
	  case 11:
		  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
		  break;
	  default:
		  clearAllClock();
		  break;
	  }
  }
  void setNumberOnClock(int num) {
	  switch(num){
	  case 1:
		  TurnLED1();
		  break;
	  case 2:
		  TurnLED2();
		  break;
	  case 3:
		  TurnLED3();
		  break;
	  case 4:
		  TurnLED4();
		  break;
	  case 5:
		  TurnLED5();
		  break;
	  case 6:
		  TurnLED6();
		  break;
	  case 7:
		  TurnLED7();
		  break;
	  case 8:
		  TurnLED8();
		  break;
	  case 9:
		  TurnLED9();
		  break;
	  case 10:
		  TurnLED10();
		  break;
	  case 11:
		  TurnLED11();
		  break;
	  case 0:
		  TurnLED0();
		  break;
	  default:
		  clearAllClock();
		  break;
	  }
  }
#define DELAY 10
  int time_counter = 100;
  int time_counter_2 = 150;
  int countSecond = 0;
  int countMinute = 0;
  int countHour = 0;
  clearAllClock();
//  TurnLED0();
  while (1)
  {
	  if(time_counter > 0) {
		  time_counter--;
	  }else {
		  countSecond++;
		  if(countSecond > 11) {
			  countSecond = 0;
		  }
		  setNumberOnClock(countSecond);
		  time_counter = 100;
	  }
	  if(time_counter_2 > 0) {
		  time_counter_2--;
	  }else {
		  clearNumberOnClock(countSecond);
		  time_counter_2 = 100;
	  }
	  HAL_Delay(DELAY);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
                          |LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin
                          |LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_0_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_1_Pin LED_2_Pin LED_3_Pin LED_4_Pin
                           LED_5_Pin LED_6_Pin LED_7_Pin LED_8_Pin
                           LED_9_Pin LED_10_Pin LED_11_Pin LED_0_Pin */
  GPIO_InitStruct.Pin = LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
                          |LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin
                          |LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_0_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
