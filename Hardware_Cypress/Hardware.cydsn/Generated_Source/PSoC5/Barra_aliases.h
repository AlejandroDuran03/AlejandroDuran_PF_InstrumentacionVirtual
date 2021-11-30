/*******************************************************************************
* File Name: Barra.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Barra_ALIASES_H) /* Pins Barra_ALIASES_H */
#define CY_PINS_Barra_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Barra_0			(Barra__0__PC)
#define Barra_0_INTR	((uint16)((uint16)0x0001u << Barra__0__SHIFT))

#define Barra_1			(Barra__1__PC)
#define Barra_1_INTR	((uint16)((uint16)0x0001u << Barra__1__SHIFT))

#define Barra_2			(Barra__2__PC)
#define Barra_2_INTR	((uint16)((uint16)0x0001u << Barra__2__SHIFT))

#define Barra_3			(Barra__3__PC)
#define Barra_3_INTR	((uint16)((uint16)0x0001u << Barra__3__SHIFT))

#define Barra_4			(Barra__4__PC)
#define Barra_4_INTR	((uint16)((uint16)0x0001u << Barra__4__SHIFT))

#define Barra_5			(Barra__5__PC)
#define Barra_5_INTR	((uint16)((uint16)0x0001u << Barra__5__SHIFT))

#define Barra_6			(Barra__6__PC)
#define Barra_6_INTR	((uint16)((uint16)0x0001u << Barra__6__SHIFT))

#define Barra_7			(Barra__7__PC)
#define Barra_7_INTR	((uint16)((uint16)0x0001u << Barra__7__SHIFT))

#define Barra_INTR_ALL	 ((uint16)(Barra_0_INTR| Barra_1_INTR| Barra_2_INTR| Barra_3_INTR| Barra_4_INTR| Barra_5_INTR| Barra_6_INTR| Barra_7_INTR))

#endif /* End Pins Barra_ALIASES_H */


/* [] END OF FILE */
