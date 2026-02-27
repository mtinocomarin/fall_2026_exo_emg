/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <assert.h>
#include <math.h>
#include "function.h"

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
ADC_HandleTypeDef hadc1;
DMA_HandleTypeDef hdma_adc1;

TIM_HandleTypeDef htim3;

UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_ADC1_Init(void);
static void MX_TIM3_Init(void);
static void MX_USART2_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

uint32_t ADC_VAL[40];
uint8_t UART2_rxBuffer;
int indext = 0;

float *TrainData;
float *TestData;
int *TrainClass;
float *Feature_matrix;
FILE *TraindataFile=NULL;
FILE *TestdataFile=NULL;
FILE *PSFile=NULL;
FILE *WgCgFile=NULL;
FILE *FeatureMatrixFile=NULL;
int i,j,m;
float *Wg;
float *Cg;
float accuracy;
float test_accuracy = 0.0;
int num_correct;
int total_win_num;
int test_decision;
float *xmean;
float *xstd;
int trial_idx=0;
int class_idx=0;
int feature_matrix_idx=0;

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

	Wg=(float*)malloc(FEATURE_DIM*CLASS*sizeof(float));
	Cg=(float*)malloc(1*CLASS*sizeof(float));
	xmean=(float*)malloc(1*FEATURE_DIM*sizeof(float));
	xstd=(float*)malloc(1*FEATURE_DIM*sizeof(float));
	TrainData = (float*)malloc(CHANNEL*DATA_PER_TRIAL*sizeof(float));  //raw EMG data of the training dataset
	TestData = (float*)malloc(CHANNEL*DATA_PER_TRIAL*sizeof(float));  //raw EMG data of the training dataset
	TrainClass = (int*)malloc(CLASS*WIN_PER_TRIAL*TRIAL_PER_CLASS*sizeof(int));     //class label for the training dataset
	Feature_matrix = (float*)malloc(CLASS*WIN_PER_TRIAL*TRIAL_PER_CLASS*FEATURE_DIM*sizeof(float));

	// Initialize dynamically allocated memory
	float Wg_init[FEATURE_DIM * CLASS] = {
	-39.865700, 38.494923, 1.370464,
	9.822060, -5.708473, -4.113415,
	-18.450970, 12.169329, 6.281702,
	-53.120068, 30.987568, 22.132446,
	-29.518837, 22.895094, 6.623897,
	26.794121, -22.134504, -4.659643,
	10.020878, -1.226090, -8.794820,
	-30.046625, 22.034584, 8.012098,
	-20.616077, 21.666063, -1.050015,
	-7.809905, 12.735570, -4.925624,
	-22.981161, 15.353989, 7.627159,
	-9.838930, 4.600960, 5.238039
	};

	float Cg_init[CLASS] = { -114.407043 ,-79.437294 ,-18.518524 };

	float xmean_init[FEATURE_DIM] = {0.028282, 0.016302, 0.281820, 0.597252, 0.009159, -0.000722, 0.163879, 0.506750, 0.038467, 0.031548, 0.411250, 0.871206};

	float xstd_init[FEATURE_DIM] = {0.026960, 0.022577, 0.206790, 0.364972, 0.005131, 0.002215, 0.159099, 0.324362, 0.038447, 0.043558, 0.198841, 0.211047};

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  for (i = 0; i < FEATURE_DIM * CLASS; i++) {
          Wg[i] = Wg_init[i];
      }
      for (i = 0; i < CLASS; i++) {
          Cg[i] = Cg_init[i];
      }
      for (i = 0; i < FEATURE_DIM; i++) {
          xmean[i] = xmean_init[i];
          xstd[i] = xstd_init[i];
      }



  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_ADC1_Init();
  MX_TIM3_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */
  HAL_UART_Receive_IT (&huart2, &UART2_rxBuffer, 1);
   //HAL_TIM_Base_Start(&htim3);
   //HAL_ADC_Start_DMA(&hadc1,ADC_VAL, 3);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
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

  /** Configure the main internal regulator output voltage
  */
  if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.MSICalibrationValue = 0;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_6;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_MSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_MultiModeTypeDef multimode = {0};
  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */

  /** Common config
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.ScanConvMode = ADC_SCAN_ENABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  hadc1.Init.LowPowerAutoWait = DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.NbrOfConversion = 3;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConv = ADC_EXTERNALTRIG_T3_TRGO;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_RISING;
  hadc1.Init.DMAContinuousRequests = ENABLE;
  hadc1.Init.Overrun = ADC_OVR_DATA_PRESERVED;
  hadc1.Init.OversamplingMode = DISABLE;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure the ADC multi-mode
  */
  multimode.Mode = ADC_MODE_INDEPENDENT;
  if (HAL_ADCEx_MultiModeConfigChannel(&hadc1, &multimode) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_1;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_2CYCLES_5;
  sConfig.SingleDiff = ADC_SINGLE_ENDED;
  sConfig.OffsetNumber = ADC_OFFSET_NONE;
  sConfig.Offset = 0;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_2;
  sConfig.Rank = ADC_REGULAR_RANK_2;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_3;
  sConfig.Rank = ADC_REGULAR_RANK_3;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief TIM3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM3_Init(void)
{

  /* USER CODE BEGIN TIM3_Init 0 */

  /* USER CODE END TIM3_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM3_Init 1 */

  /* USER CODE END TIM3_Init 1 */
  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 3;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 999;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim3) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim3, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM3_Init 2 */

  /* USER CODE END TIM3_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  huart2.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart2.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA1_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA1_Channel1_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);

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
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin : PC1 */
  GPIO_InitStruct.Pin = GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG_ADC_CONTROL;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{


    char message[] = "Character received: ";
    HAL_UART_Transmit(&huart2, (uint8_t *)message, strlen(message), 100);  // Send message
    HAL_UART_Transmit(&huart2, &UART2_rxBuffer, 1, 100);  // Send received character
    HAL_UART_Transmit(&huart2, (uint8_t *)"\r\n", 2, 100);  // Newline for readability
    //Restart reception for the next character

    if (UART2_rxBuffer == 'a'){
    		HAL_TIM_Base_Start(&htim3);
    		HAL_ADC_Start_DMA(&hadc1,ADC_VAL, 40);

    }
	else if (UART2_rxBuffer == 's'){
		HAL_TIM_Base_Stop(&htim3);
		HAL_ADC_Stop_DMA(&hadc1);
	}


    HAL_UART_Receive_IT(&huart2, &UART2_rxBuffer, 1);

}

void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef *hadc)
{
    // Called when half of the buffer is filled
    // Process first half of the buffer here
	if ( indext < 160 )
	{
		for (int i = 0; i < 20; i++)
		{
			TestData[indext + i] = ADC_VAL[i];
		}
		indext += 20;
	}
	else
	{
		// Shift TestData left by 20 samples to remove the oldest data
		for (int i = 0; i < 140; i++)
		{
			TestData[i] = TestData[i + 20];
		}

		// Add new 20 samples at the end
		for (int i = 0; i < 20; i++)
		{
			TestData[140 + i] = ADC_VAL[i];
		}

		// If TestData is now full, run LDA_test
		if (indext >= 160)
		{
			RunLDATest();
		}


	}
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc)
{
    // Called when second half of ADC_Buffer is filled (20-39)
    if (indext < 160)
    {
        // Add second 20 samples from ADC_Buffer to TestData
        for (int i = 0; i < 20; i++)
        {
            TestData[indext + i] = ADC_VAL[20 + i];
        }
        indext += 20;
    }
    else
    {
        // Shift TestData left by 20 samples to remove the oldest data
        for (int i = 0; i < 140; i++)
        {
            TestData[i] = TestData[i + 20];
        }

        // Add new 20 samples at the end
        for (int i = 0; i < 20; i++)
        {
            TestData[140 + i] = ADC_VAL[20 + i];
        }
    }

    // If TestData is now full, run LDA_test
    if (indext >= 160)
    {
        RunLDATest();
    }
}

void RunLDATest()
{
	  int test_decision = LDA_test(TestData, Wg, Cg, xmean, xstd);

	    // Convert integer to string
	    char message[30];  // Buffer to hold the message
	    sprintf(message, "test_decision: %d\r\n", test_decision);

	    // Send message over UART
	    HAL_UART_Transmit(&huart2, (uint8_t *)message, strlen(message), 100);
}





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
