/*******************************************************************************
* File Name: isrUART.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_isrUART_H)
#define CY_ISR_isrUART_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void isrUART_Start(void);
void isrUART_StartEx(cyisraddress address);
void isrUART_Stop(void);

CY_ISR_PROTO(isrUART_Interrupt);

void isrUART_SetVector(cyisraddress address);
cyisraddress isrUART_GetVector(void);

void isrUART_SetPriority(uint8 priority);
uint8 isrUART_GetPriority(void);

void isrUART_Enable(void);
uint8 isrUART_GetState(void);
void isrUART_Disable(void);

void isrUART_SetPending(void);
void isrUART_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the isrUART ISR. */
#define isrUART_INTC_VECTOR            ((reg32 *) isrUART__INTC_VECT)

/* Address of the isrUART ISR priority. */
#define isrUART_INTC_PRIOR             ((reg8 *) isrUART__INTC_PRIOR_REG)

/* Priority of the isrUART interrupt. */
#define isrUART_INTC_PRIOR_NUMBER      isrUART__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable isrUART interrupt. */
#define isrUART_INTC_SET_EN            ((reg32 *) isrUART__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the isrUART interrupt. */
#define isrUART_INTC_CLR_EN            ((reg32 *) isrUART__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the isrUART interrupt state to pending. */
#define isrUART_INTC_SET_PD            ((reg32 *) isrUART__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the isrUART interrupt. */
#define isrUART_INTC_CLR_PD            ((reg32 *) isrUART__INTC_CLR_PD_REG)


#endif /* CY_ISR_isrUART_H */


/* [] END OF FILE */
