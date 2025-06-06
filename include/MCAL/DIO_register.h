/**
 * @file    DIO_register.h
 * @author  Mohamed Moaaz
 * @brief   DIO register file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __DIO_REGISTER_H__
#define __DIO_REGISTER_H__

//==============================================================================
// Macros & Defines
//==============================================================================
#define PORTA *((volatile uint8_t*)0x3b)
#define DDRA  *((volatile uint8_t*)0x3a)      
#define PINA  *((volatile uint8_t*)0x39)

#define PORTB *((volatile uint8_t*)0x38)
#define DDRB  *((volatile uint8_t*)0x37)
#define PINB  *((volatile uint8_t*)0x36)

#define PORTC *((volatile uint8_t*)0x35)
#define DDRC  *((volatile uint8_t*)0x34)
#define PINC  *((volatile uint8_t*)0x33)

#define PORTD *((volatile uint8_t*)0x32)
#define DDRD  *((volatile uint8_t*)0x31)
#define PIND  *((volatile uint8_t*)0x30)

//==============================================================================
// Typedefs
//==============================================================================


//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================


#endif /* __DIO_REGISTER_H__ */