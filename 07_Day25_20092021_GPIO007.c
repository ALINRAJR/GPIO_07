/*
===============================================================================
 Name        : 07_Day25_20092021_GPIO007.c

 Description : GPIO Input using a push button




 Layered Architecture used for this project
 ************************************
 Application layer-07_Day25_20092021_GPIO007.c
 ************************************
 Board layer - led.c/.h, button.c/.h
 ************************************
 Low level drivers or chip level - gpio.c/.h
 ************************************
 Hardware
 ************************************

===============================================================================
*/

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/
#include "led.h"
#include "button.h"
/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  Initialize all the hardware connected
  * @retval none
  */
void vAppHardwareInit(void)
{
	vLedInitialize();
	vButtonInitialize();
}

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* MCU Configuration--------------------------------------------------------*/

  /* Initialize all configured peripherals */
   vAppHardwareInit();

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)  // for(;;)
  {
	  if(ucButtonState(BUTTON_0)==BUTTON_PRESSED)
		  vLedOn(LED_0);
	  else if (ucButtonState(BUTTON_0)==BUTTON_NOTPRESSED)
		  vLedOff(LED_0);
  }
  /* End of Application entry point */
}




