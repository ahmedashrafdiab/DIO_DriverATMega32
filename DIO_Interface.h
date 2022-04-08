#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"

typedef enum{
	OUTPUT,
	INFREE,
	INPULL
	}DIO_Status_type;
	
typedef enum{
	PA,
	PB,
	PC,
	PD
}DIO_Port_type;

typedef enum{
	LOW=0,
	HIGH
}DIO_Voltage_type;

// Name for every pin in ENUM
typedef enum{
	PINA0=0,
}DIO_Pin_type;


	
void DIO_InitPin(DIO_Pin_type pin ,DIO_Status_type status);

void DIO_WritePin(DIO_Pin_type pin ,DIO_Voltage_type volt );

DIO_Voltage_type DIO_ReadPin(DIO_Pin_type pin);

//-------------------------------------------------

void DIO_WritePort(DIO_Port_type port , u8 value);

u8 DIO_ReadPort(DIO_Port_type port);

void DIO_ToggelPin(DIO_Pin_type pin);


void DIO_Init(void);


#endif /* DIO_INTERFACE_H_ */