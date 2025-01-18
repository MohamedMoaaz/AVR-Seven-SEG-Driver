/**
 * @file    SSD_program.c
 * @author  Mohamed Moaaz
 * @brief   Seven Segments program file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

//==============================================================================
// Includes
//==============================================================================
#include "STD_TYPES.h"
#include "MCAL/DIO_interface.h"
#include "HAL/SSD_interface.h"
#include "HAL/SSD_private.h"
#include "HAL/SSD_config.h"

//==============================================================================
// Extern Variables
//==============================================================================

//==============================================================================
// Private Macros & Defines
//==============================================================================

//==============================================================================
// Private Typedefs
//==============================================================================

//==============================================================================
// Static Variables
//==============================================================================

//==============================================================================
// Global Variables
//==============================================================================
uint8_t sev_seg[10] = { ~0b00111111,
                        ~0b00000110,
                        ~0b01011011,
                        ~0b01001111,
                        ~0b01100110,
                        ~0b01101101,
                        ~0b01111101,
                        ~0b00000111,
                        ~0b01111111,
                        ~0b01101111};
//==============================================================================
// Exported Values
//==============================================================================

//==============================================================================
// Static Functions Prototypes
//==============================================================================

//==============================================================================
// Static Functions
//==============================================================================

//==============================================================================
// Global Functions
//==============================================================================
void SSD_voidEnable(SSD_t* SSD)
{
    DIO_u8SetPinDirection(SSD->enable_port, SSD->enable_pin, DIO_u8PIN_OUTPUT);
    if(SSD->common_type == COM_Anode)
    {
        DIO_u8SetPinValue(SSD->enable_port, SSD->enable_pin, DIO_u8PIN_HIGH);
    }

    else if(SSD->common_type == COM_Cathode)
    {
        DIO_u8SetPinValue(SSD->enable_port, SSD->enable_pin, DIO_u8PIN_LOW);
    }
}

void SSD_voidDisable(SSD_t* SSD)
{
    DIO_u8SetPinDirection(SSD->enable_port, SSD->enable_pin, DIO_u8PIN_OUTPUT);
    if(SSD->common_type == COM_Anode)
    {
        DIO_u8SetPinValue(SSD->enable_port, SSD->enable_pin, DIO_u8PIN_LOW);
    }
    
    else if(SSD->common_type == COM_Cathode)
    {
        DIO_u8SetPinValue(SSD->enable_port, SSD->enable_pin, DIO_u8PIN_HIGH);
    }
}

void SSD_voidDisplayNumber(uint8_t num, SSD_t* SSD)
{
    DIO_u8SetPortDirection(SSD->port, DIO_u8PORT_OUTPUT);
    DIO_u8SetPortValue(SSD->port, sev_seg[num]);
}