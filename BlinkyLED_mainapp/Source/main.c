/*
* Copyright YOUR COMPANY, THE YEAR
* All Rights Reserved
* UNPUBLISHED, LICENSED SOFTWARE.
*
* CONFIDENTIAL AND PROPRIETARY INFORMATION
* WHICH IS THE PROPERTY OF your company.
*/

#include "cy_device_headers.h"
#include "cycfg.h"

int main(void)
{
    /* Set up the device based on configurator selections */
    init_cycfg_all();

    __enable_irq();

    Cy_TCPWM_PWM_Init(PWM_2Hz_HW, PWM_2Hz_NUM, &PWM_2Hz_config);
    Cy_TCPWM_PWM_Enable(PWM_2Hz_HW, PWM_2Hz_NUM);
    Cy_TCPWM_TriggerStart(PWM_2Hz_HW, PWM_2Hz_MASK);

    for(;;)
    {
    }
}
