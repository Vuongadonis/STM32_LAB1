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
  void led7seg_0(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, SET);
  }
  void led7seg_1(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, SET);
    }
  void led7seg_2(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, RESET);
    }
  void led7seg_3(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, RESET);
    }
  void led7seg_4(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, RESET);
    }
  void led7seg_5(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, SET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, RESET);
    }
  void led7seg_6(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, SET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, RESET);
    }
  void led7seg_7(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, SET);
    }
  void led7seg_8(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, RESET);
    }
  void led7seg_9(){
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_7_GPIO_Port, LED7_7_Pin, RESET);
    }
  void display7SEG(int num){
	  switch(num){
	  case 0:
		  led7seg_0();
		  break;
	  case 1:
		  led7seg_1();
		  break;
	  case 2:
		  led7seg_2();
		  break;
	  case 3:
		  led7seg_3();
		  break;
	  case 4:
		  led7seg_4();
		  break;
	  case 5:
		  led7seg_5();
		  break;
	  case 6:
		  led7seg_6();
		  break;
	  case 7:
		  led7seg_7();
		  break;
	  case 8:
		  led7seg_8();
		  break;
	  case 9:
		  led7seg_9();
		  break;
	  default:
		  break;
	  }
  }
  int count = 9;
  int time_counter = 100;
  while (1)
  {
	  if(time_counter > 0) {
		  time_counter--;
	  }else {
		  count--;
		  if(count < 0) {
			  count = 9;
		  }
		  display7SEG(count);
		  time_counter = 100;
	  }

	  HAL_Delay(10);
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
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED7_1_Pin|LED7_2_Pin|LED7_3_Pin|LED7_4_Pin
                          |LED7_5_Pin|LED7_6_Pin|LED7_7_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED7_1_Pin LED7_2_Pin LED7_3_Pin LED7_4_Pin
                           LED7_5_Pin LED7_6_Pin LED7_7_Pin */
  GPIO_InitStruct.Pin = LED7_1_Pin|LED7_2_Pin|LED7_3_Pin|LED7_4_Pin
                          |LED7_5_Pin|LED7_6_Pin|LED7_7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

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
