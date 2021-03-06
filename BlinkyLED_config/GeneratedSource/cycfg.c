/*******************************************************************************
* File Name: cycfg.c
*
* Description:
* Wrapper function to initialize all generated code.
* This file should not be modified. It was automatically generated by 
* ModusToolbox 1.0.0
* 
********************************************************************************
* Copyright (c) 2017-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "cycfg.h"

void init_cycfg_all()
{
	init_cycfg_pins();
	init_cycfg_platform();
	init_cycfg_connectivity();
}
