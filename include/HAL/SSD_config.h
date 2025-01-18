/**
 * @file    SSD_config.h
 * @author  Mohamed Moaaz
 * @brief   Seven Segments configuration file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __SSD_CONFIG_H__
#define __SSD_CONFIG_H__

#include "HAL/SSD_private.h"
//==============================================================================
// Macros & Defines
//==============================================================================


//==============================================================================
// Typedefs
//==============================================================================

/* Common options 
   1-COM_Anode
   2-COM_Cathode
   */
typedef struct 
{
    uint8_t port;
    uint8_t common_type;
    uint8_t enable_port;
    uint8_t enable_pin;
}SSD_t;

//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================


#endif /* __SSD_CONFIG_H__ */