/*
===========================================================================================================
Project      : Car-Cache System
File Name    : car_cache_system.c
Date Created : Jan 1, 2023
Description  : Vertical Rotary Car Parking System.
===========================================================================================================
*/


#ifndef APP_CAR_CACHE_SYSTEM_H_
#define APP_CAR_CACHE_SYSTEM_H_

/*===========================================================================================================
                                               < Includes >
===========================================================================================================*/

#include "../HAL/ir.h"
#include "../HAL/led.h"
#include "../HAL/lcd.h"
#include "../HAL/rfid.h"
#include "../HAL/servo.h"
#include "../HAL/buzzer.h"
#include "../HAL/ultrasonic.h"
#include "../HAL/stepper_motor.h"
#include "../MCAL/external_interrupts.h"
#include "../MCAL/internal_eeprom.h"
#include "../MCAL/timer0.h"
#include "../MCAL/gpio.h"
#include "../OTHERS/std_types.h"
#include "../OTHERS/common_macros.h"
#include <util/delay.h>
#include <avr/io.h>

/*===========================================================================================================
                                < Definitions and Static Configurations >
===========================================================================================================*/



/*===========================================================================================================
                                       < Shared Global Variables >
===========================================================================================================*/



/*===========================================================================================================
                                       < User-defined Data Types >
===========================================================================================================*/

typedef enum
{
	BUSY_SPACE,EMPTY_SPACE
}SYSTEM_parkingSpaceStateType;

typedef struct
{
	uint8 space_id;
	sint32 rfid_card_id;
	uint64 steps_to_gate;
	STEPPER_directionType direction_to_gate;
	SYSTEM_parkingSpaceStateType available_flag;
}SYSTEM_parkingSpaceData;

/*===========================================================================================================
                                         < Function-like Macros >
===========================================================================================================*/



/*===========================================================================================================
                                         < Functions Prototypes >
===========================================================================================================*/



#endif /* APP_CAR_CACHE_SYSTEM_H_ */
