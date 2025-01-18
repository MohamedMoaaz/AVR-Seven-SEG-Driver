/**
 * @file    SSD_interface.h
 * @author  Mohamed Moaaz
 * @brief   Seven Segments interface file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __SSD_INTERFACE_H__
#define __SSD_INTERFACE_H__

#include "HAL/SSD_config.h"
//==============================================================================
// Macros & Defines
//==============================================================================


//==============================================================================
// Typedefs
//==============================================================================


//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================
void SSD_voidEnable(SSD_t* SSD);

void SSD_voidDisable(SSD_t* SSD);

void SSD_voidDisplayNumber(uint8_t num, SSD_t* SSD);


#endif /* __SSD_INTERFACE_H__ */