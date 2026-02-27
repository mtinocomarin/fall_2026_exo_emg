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
#include "carray.h"

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

  	for (i = 0; i < CHANNEL*DATA_PER_TRIAL; i++)
  	{
        TestData[i] = data[i];
      }




  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  /* USER CODE BEGIN 2 */

	class_idx=0;
	total_win_num=0;
	num_correct=0;
	m=0;
	while(m<WIN_PER_TRIAL)
	{

	  test_decision = LDA_test(TestData+WINC*CHANNEL*m,Wg,Cg,xmean,xstd);
	  if(test_decision==class_idx+1)
	num_correct++;
	m++;
	total_win_num++;
	}

	test_accuracy=((float)num_correct)/total_win_num;
	free(TrainData);
	free(TestData);
	free(TrainClass);
	free(Feature_matrix);
	free(Wg);
	free(Cg);
	free(xmean);
	free(xstd);


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
