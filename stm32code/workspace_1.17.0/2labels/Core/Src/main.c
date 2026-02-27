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
#define ADC_SCALE (3.0f / 4095.0f)  // ≈ 0.0007326
#define MIDPOINT  0.0f

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

UART_HandleTypeDef huart4;
UART_HandleTypeDef huart5;
UART_HandleTypeDef huart2;
DMA_HandleTypeDef hdma_uart4_tx;
DMA_HandleTypeDef hdma_uart5_rx;
DMA_HandleTypeDef hdma_uart5_tx;
DMA_HandleTypeDef hdma_usart2_tx;

/* USER CODE BEGIN PV */


/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_ADC1_Init(void);
static void MX_TIM3_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_UART4_Init(void);
static void MX_UART5_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
static uint32_t ADC_VAL1[300];


// Global receive buffers
uint8_t UART2_rxBuffer;
uint8_t UART4_rxBuffer;
uint8_t UART5_rxBuffer[1];



volatile uint8_t uart_flag = 0;
volatile uint8_t uart_flag2 = 0;
volatile uint8_t uart_flag3 = 0;

int flag = 0;
static int indext1 = 0;
static float TestData1[300];
static float Wg1[FEATURE_DIM * CLASS];
static float Cg1[CLASS];
static float xmean1[FEATURE_DIM];
static float xstd1[FEATURE_DIM];
volatile uint8_t uart2_tx_busy = 0;
volatile uint8_t uart4_tx_busy = 0;

int count1 =0;
int count2 =0;
int count3 =0;
int temp =0;
volatile uint8_t countwindow = 0;
volatile uint8_t temporyP = '?';



#define TESTDATA_SIZE 1000
uint32_t indext = 0;
float TestData3[TESTDATA_SIZE];
#define BUFFER_SIZE 5  // Number of recent predictions to keep
int decision_buffer[BUFFER_SIZE] = {0};  // Circular buffer
int buffer_index = 0;                    // Next position to write
int buffer_count = 0;                    // Number of valid entries
char TxData[2048];



void RunLDATest()
{
    int test_decision1 = LDA_test(TestData1, Wg1, Cg1, xmean1, xstd1);

    if (temp != test_decision1)
    {
        // Reset all counts on new decision
        count1 = 0;
        count2 = 0;
        count3 = 0;
        temp = test_decision1;
    }
    else
    {
        switch (test_decision1)
        {
            case 1:
                count1++;
                if (count1 > 5)
                {


                    	char message[32];
                    	sprintf(message, "%d", test_decision1);
                    	HAL_UART_Transmit_DMA(&huart4, (uint8_t *)message, strlen(message));
                        HAL_UART_Transmit_DMA(&huart2, (uint8_t *)message, strlen(message));
                        HAL_UART_Transmit_DMA(&huart5, (uint8_t *)message, strlen(message));
                    count1 = 0;
                }
                break;

            case 2:
                count2++;
                if (count2 > 2)
                {

                    	char message[32];
                    	sprintf(message, "%d", test_decision1);
                    	HAL_UART_Transmit_DMA(&huart4, (uint8_t *)message, strlen(message));
                        HAL_UART_Transmit_DMA(&huart2, (uint8_t *)message, strlen(message));
                        HAL_UART_Transmit_DMA(&huart5, (uint8_t *)message, strlen(message));

                    count2 = 0;
                }
                break;

            case 3:
                count3++;
                if (count3 > 2)
                {


                    	char message[32];
                    	sprintf(message, "%d", test_decision1);
                    	HAL_UART_Transmit_DMA(&huart4, (uint8_t *)message, strlen(message));
                        HAL_UART_Transmit_DMA(&huart2, (uint8_t *)message, strlen(message));
                        HAL_UART_Transmit_DMA(&huart5, (uint8_t *)message, strlen(message));

                    count3 = 0;
                }
                break;

            default:
                // Handle unexpected decision (e.g., out-of-range class)
                break;
        }
    }
}




/*

void RunLDATest()
{


    int test_decision1 = LDA_test(TestData1, Wg1, Cg1, xmean1, xstd1);

    // Store the prediction
    decision_buffer[buffer_index] = test_decision1;

    // Advance the circular buffer index
    buffer_index = (buffer_index + 1) % BUFFER_SIZE;

    // Keep track of how many entries have been added (max = BUFFER_SIZE)
    if (buffer_count < BUFFER_SIZE)
        buffer_count++;

    // Only run majority vote if buffer is full
    if (buffer_count == BUFFER_SIZE)
    {
        int stable_decision = majority_vote(decision_buffer, BUFFER_SIZE);

        // Send result over UART
        char message[32];
        sprintf(message, "$EMG,%d\r\n", stable_decision);

        // Start non-blocking DMA transmission
        HAL_UART_Transmit_DMA(&huart4, (uint8_t *)message, strlen(message));
        HAL_UART_Transmit_DMA(&huart2, (uint8_t *)message, strlen(message));

        buffer_count = 0;
        buffer_index = 0;
    }
}

*/



/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */
	// Auto-generated LDA model parameters

	// Auto-generated LDA model parameters


	float Wg_init[24] = {
	    -0.781279, 0.781282,
	    -0.179909, 0.179852,
	    -0.000000, -0.000000,
	    0.000000, 0.000000,
	    0.468908, 0.468908,
	    0.230957, 0.230957,
	    0.164355, 0.164355,
	    0.247018, 0.247018,
	    0.027606, 0.027606,
	    0.079867, 0.079867,
	    0.000000, 0.000000,
	    0.258418, 0.258418,
	};

	float Cg_init[2] = {
	    -0.412458, -0.144572
	};

	float xstd_init[12] = {
	    0.000316, 0.000015, 1.000000, 0.012427, 0.002320, 0.000796, 0.076431, 0.133261, 0.002066, 0.000541, 0.072712, 0.195106
	};

	float xmean_init[12] = {
	    0.002584, -0.007913, 0.000000, 0.004286, 0.008301, -0.006610, 0.145714, 0.460000, 0.006334, -0.007069, 0.091190, 0.348572
	};







  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  for (int i = 0; i < FEATURE_DIM * CLASS; i++)
  {
            Wg1[i] = Wg_init[i];
        }
        for (int i = 0; i < CLASS; i++) {
            Cg1[i] = Cg_init[i];
        }
        for (int i = 0; i < FEATURE_DIM; i++)
        {
            xmean1[i] = xmean_init[i];
            xstd1[i] = xstd_init[i];
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
  MX_UART4_Init();
  MX_UART5_Init();
  /* USER CODE BEGIN 2 */

  if (HAL_ADCEx_Calibration_Start(&hadc1, ADC_SINGLE_ENDED) != HAL_OK)
   {
       Error_Handler();
   }
  HAL_UART_Receive_DMA (&huart5, UART5_rxBuffer, 1);
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
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_MSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 40;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV7;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
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
  sConfig.Channel = ADC_CHANNEL_9;
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
  sConfig.Channel = ADC_CHANNEL_12;
  sConfig.Rank = ADC_REGULAR_RANK_2;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_14;
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
  htim3.Init.Prescaler = 79;
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
  * @brief UART4 Initialization Function
  * @param None
  * @retval None
  */
static void MX_UART4_Init(void)
{

  /* USER CODE BEGIN UART4_Init 0 */

  /* USER CODE END UART4_Init 0 */

  /* USER CODE BEGIN UART4_Init 1 */

  /* USER CODE END UART4_Init 1 */
  huart4.Instance = UART4;
  huart4.Init.BaudRate = 115200;
  huart4.Init.WordLength = UART_WORDLENGTH_8B;
  huart4.Init.StopBits = UART_STOPBITS_1;
  huart4.Init.Parity = UART_PARITY_NONE;
  huart4.Init.Mode = UART_MODE_TX_RX;
  huart4.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart4.Init.OverSampling = UART_OVERSAMPLING_16;
  huart4.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart4.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart4) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN UART4_Init 2 */

  /* USER CODE END UART4_Init 2 */

}

/**
  * @brief UART5 Initialization Function
  * @param None
  * @retval None
  */
static void MX_UART5_Init(void)
{

  /* USER CODE BEGIN UART5_Init 0 */

  /* USER CODE END UART5_Init 0 */

  /* USER CODE BEGIN UART5_Init 1 */

  /* USER CODE END UART5_Init 1 */
  huart5.Instance = UART5;
  huart5.Init.BaudRate = 500000;
  huart5.Init.WordLength = UART_WORDLENGTH_8B;
  huart5.Init.StopBits = UART_STOPBITS_1;
  huart5.Init.Parity = UART_PARITY_NONE;
  huart5.Init.Mode = UART_MODE_TX_RX;
  huart5.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart5.Init.OverSampling = UART_OVERSAMPLING_16;
  huart5.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart5.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart5) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN UART5_Init 2 */

  /* USER CODE END UART5_Init 2 */

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
  huart2.Init.BaudRate = 500000;
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
  __HAL_RCC_DMA2_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA1_Channel1_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);
  /* DMA1_Channel7_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel7_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel7_IRQn);
  /* DMA2_Channel1_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Channel1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA2_Channel1_IRQn);
  /* DMA2_Channel2_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Channel2_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA2_Channel2_IRQn);
  /* DMA2_Channel3_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Channel3_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA2_Channel3_IRQn);

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
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin : PB13 */
  GPIO_InitStruct.Pin = GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI15_10_IRQn, 14, 0);
  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if (GPIO_Pin == GPIO_PIN_13)
    {
        countwindow = (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_13) == GPIO_PIN_SET) ? 1 : 0;
    }
}



void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
    /* ===== USART2: commands from PC (z, x, c, etc.) ===== */
    if (huart->Instance == USART2)
    {
        HAL_UART_Transmit(&huart2, (uint8_t *)"UART2 received: ", 16, 100);
        HAL_UART_Transmit(&huart2, &UART2_rxBuffer, 1, 100);
        HAL_UART_Transmit(&huart2, (uint8_t *)"\r\n", 2, 100);

        if (UART2_rxBuffer == 'z') {
            HAL_TIM_Base_Start(&htim3);
            HAL_ADC_Start_DMA(&hadc1, ADC_VAL1, 300);
            indext1    = 0;
            uart_flag  = 1;
            uart_flag2 = 0;
            uart_flag3 = 0;

        }
        else if (UART2_rxBuffer == 'x') {
            HAL_TIM_Base_Start(&htim3);
            HAL_ADC_Start_DMA(&hadc1, ADC_VAL1, 300);
            indext1    = 0;
            uart_flag  = 0;
            uart_flag2 = 1;
            uart_flag3 = 0;

        }
        else if (UART2_rxBuffer == 'c') {
            HAL_TIM_Base_Start(&htim3);
            HAL_ADC_Start_DMA(&hadc1, ADC_VAL1, 300);
            indext1    = 0;
            uart_flag  = 0;
            uart_flag2 = 0;
            uart_flag3 = 1;



            // Start UART5 DMA RX (first time)
            HAL_UART_Receive_DMA(&huart5, UART5_rxBuffer, 1);
        }
        else {
            HAL_TIM_Base_Stop(&htim3);
            HAL_ADC_Stop_DMA(&hadc1);
            indext1    = 0;
            uart_flag  = 0;
            uart_flag2 = 0;
            uart_flag3 = 0;

        }

        // Re-arm RX on USART2
        HAL_UART_Receive_IT(&huart2, &UART2_rxBuffer, 1);
    }

    /* ===== UART5: predictions coming from the other board ===== */
    else if (huart->Instance == UART5)
    {
        // Now it's safe: DMA finished for UART5, new byte is valid
    	uint8_t c = UART5_rxBuffer[0];
        if (c >= '0' && c <= '9')   // or (c == '1' || c == '2' || c == '3')
          {
              temporyP = c;
          }

        // (Optional) debug to PC:
        // char dbg[32];
        // int len = sprintf(dbg, "Got P%c\r\n", (char)temporyP);
        // HAL_UART_Transmit(&huart2, (uint8_t*)dbg, len, 100);

        // Re-arm RX DMA so we can get the next prediction
        HAL_UART_Receive_DMA(&huart5, UART5_rxBuffer, 1);
    }
}




void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef *hadc)
{

    if (uart_flag == 1)
    {

    	for (int i = 0; i < 150; i++)
    	    {
    	        TestData3[i] = ADC_VAL1[i];
    	    }

    	    // --- 2. Format into comma-separated string triplets
    	    char *ptr = TxData;
    	    for (int i = 0; i < 150; i += 3)
    	    {
    	        if (i + 2 < 150)
    	        {
    	            int len = sprintf(ptr, "%d,%d,%d\r\n",
    	                              (int)TestData3[i],
    	                              (int)TestData3[i + 1],
    	                              (int)TestData3[i + 2]);

    	            ptr += len;
    	        }
    	    }

    	    // --- 3. Transmit formatted data over UART using DMA
    	    uint32_t data_len = ptr - TxData;

    	    HAL_UART_Transmit_DMA(&huart2, (uint8_t *)TxData, data_len);

    }

    if (uart_flag3 == 1)
    {


    	for (int i = 0; i < 150; i++)
    	    {
    	        TestData3[i] = ADC_VAL1[i];
    	    }

    	    // --- 2. Format into comma-separated string triplets
    	    char *ptr = TxData;
    	    for (int i = 0; i < 150; i += 3)
    	    {
    	        if (i + 2 < 150)
    	        {
    	        	int len = sprintf(ptr,
    	        	                  "%d,%d,%d,%c,%d\r\n",
    	        	                  (int)TestData3[i],
    	        	                  (int)TestData3[i + 1],
    	        	                  (int)TestData3[i + 2],
    	        	                  (char)temporyP,
    	        	                  (int)countwindow);

    	            ptr += len;
    	        }
    	    }

    	    // --- 3. Transmit formatted data over UART using DMA
    	    uint32_t data_len = ptr - TxData;
    	    HAL_UART_Transmit_DMA(&huart2, (uint8_t *)TxData, data_len);
    	    HAL_UART_Receive_DMA(&huart5, UART5_rxBuffer, 1);

    }

    if (uart_flag2 == 1)
        {

        // Store ADC values from first half of DMA buffer
        if (indext1 < 300)
        {
            for (int i = 0; i < 150; i++) {
                TestData1[indext1 + i] = ((float)ADC_VAL1[i] * ADC_SCALE) - MIDPOINT;

            }
            indext1 += 150;
        }
        else
        {
            // Shift old values
            for (int i = 0; i < 150; i++) {
                TestData1[i] = TestData1[i + 150];
            }

            // Add new samples to end
            for (int i = 0; i < 150; i++) {
                TestData1[150 + i] = ((float)ADC_VAL1[i] * ADC_SCALE) - MIDPOINT;
            }


            RunLDATest();  // Run your classifier here
        }
        }
}


void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc)
{

		  if (uart_flag == 1)
		      {

		      	for (int i = 0; i < 150; i++)
		      	    {
		      	        TestData3[i] = ADC_VAL1[i+150];
		      	    }

		      	    // --- 2. Format into comma-separated string triplets
		      	    char *ptr = TxData;
		      	    for (int i = 0; i < 150; i += 3)
		      	    {
		      	        if (i + 2 < 150)
		      	        {
		      	            int len = sprintf(ptr, "%d,%d,%d\r\n",
		      	                              (int)TestData3[i],
		      	                              (int)TestData3[i + 1],
		      	                              (int)TestData3[i + 2]);

		      	            ptr += len;
		      	        }
		      	    }

		      	    // --- 3. Transmit formatted data over UART using DMA
		      	    uint32_t data_len = ptr - TxData;
		      	    HAL_UART_Transmit_DMA(&huart2, (uint8_t *)TxData, data_len);


	    }

		  if (uart_flag3 == 1)
		 		      {


		 		      	for (int i = 0; i < 150; i++)
		 		      	    {
		 		      	        TestData3[i] = ADC_VAL1[i+150];
		 		      	    }

		 		      	    // --- 2. Format into comma-separated string triplets
		 		      	    char *ptr = TxData;
		 		      	    for (int i = 0; i < 150; i += 3)
		 		      	    {
		 		      	        if (i + 2 < 150)

		 		      	        {
		 		      	        	int len = sprintf(ptr, "%d,%d,%d,%c,%d\r\n",
									(int)TestData3[i],
									(int)TestData3[i + 1],
									(int)TestData3[i + 2],
									(char)temporyP,
									(int)countwindow);
		 		      	            ptr += len;
		 		      	        }
		 		      	    }

		 		      	    // --- 3. Transmit formatted data over UART using DMA
		 		      	    uint32_t data_len = ptr - TxData;
		 		      	    HAL_UART_Transmit_DMA(&huart2, (uint8_t *)TxData, data_len);
		 		      	    HAL_UART_Receive_DMA(&huart5, UART5_rxBuffer, 1);
		 	    }

	  if (uart_flag2 == 1)
	  	    {

	    	 if (indext1 <300)
	    	    {
	    	        for (int i = 0; i < 150; i++)
	    	        {
	    	            TestData1[indext1 + i] = ((float)ADC_VAL1[i + 150] * ADC_SCALE) - MIDPOINT; // Fix: Correct indexing
	    	        }

	    	        indext1 += 150;
	    	    }
	    	    else
	    	    {
	    	        // Shift left (remove oldest values)
	    	        for (int i = 0; i < 150; i++)  // Fix: Stop at index 21 to prevent out-of-bounds
	    	        {
	    	            TestData1[i] = TestData1[i + 150];
	    	        }

	    	        // Add new values to the end
	    	        for (int i = 0; i < 150; i++)
	    	        {
	    	            TestData1[150 + i] = ((float)ADC_VAL1[i + 150] * ADC_SCALE) - MIDPOINT;

	    	        }
	    	        RunLDATest();

	    	    }
	  	    }
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
