/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file should not be modified. It was automatically generated by 
* ModusToolbox 1.0.0
* 
********************************************************************************
* Copyright (c) 2017-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "cycfg_peripherals.h"

#define PWM_2Hz_INPUT_DISABLED 0x7U

const cy_stc_tcpwm_pwm_config_t PWM_2Hz_config = 
{
	.pwmMode = CY_TCPWM_PWM_MODE_PWM,
	.clockPrescaler = CY_TCPWM_PWM_PRESCALER_DIVBY_1,
	.pwmAlignment = CY_TCPWM_PWM_LEFT_ALIGN,
	.deadTimeClocks = 0,
	.runMode = CY_TCPWM_PWM_CONTINUOUS,
	.period0 = 250000,
	.period1 = 32768,
	.enablePeriodSwap = false,
	.compare0 = 125000,
	.compare1 = 16384,
	.enableCompareSwap = false,
	.interruptSources = CY_TCPWM_INT_NONE,
	.invertPWMOut = CY_TCPWM_PWM_INVERT_DISABLE,
	.invertPWMOutN = CY_TCPWM_PWM_INVERT_DISABLE,
	.killMode = CY_TCPWM_PWM_STOP_ON_KILL,
	.swapInputMode = PWM_2Hz_INPUT_DISABLED & 0x3U,
	.swapInput = CY_TCPWM_INPUT_0,
	.reloadInputMode = PWM_2Hz_INPUT_DISABLED & 0x3U,
	.reloadInput = CY_TCPWM_INPUT_0,
	.startInputMode = PWM_2Hz_INPUT_DISABLED & 0x3U,
	.startInput = CY_TCPWM_INPUT_0,
	.killInputMode = PWM_2Hz_INPUT_DISABLED & 0x3U,
	.killInput = CY_TCPWM_INPUT_0,
	.countInputMode = PWM_2Hz_INPUT_DISABLED & 0x3U,
	.countInput = CY_TCPWM_INPUT_1,
};


void init_cycfg_peripherals(void)
{
	Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM0_CLOCKS1, CY_SYSCLK_DIV_8_BIT, 0U);
}
