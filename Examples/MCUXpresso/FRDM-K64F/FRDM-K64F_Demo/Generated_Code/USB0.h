/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : USB0.h
**     Project     : ProcessorExpert
**     Processor   : MK64FN1M0VLL12
**     Component   : Init_USB_OTG
**     Version     : Component 01.004, Driver 01.04, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-07-07, 09:41, # CodeGen: 159
**     Abstract    :
**          This file implements the USB_OTG (USB0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : USB0
**          Device                                         : USB0
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Clock settings                               : 
**              IRC48 clock setting                        : 
**                IRC48M module                            : Enabled
**                IRC48M regulator                         : Enabled
**                IRC48M clock recovery                    : Disabled
**                IRC48M Reset/resume to rough phase       : Disabled
**                Restart from IFR trim value              : Disabled
**              Clock divider                              : 
**                Clock divider source                     : PLL/FLL clock
**                Clock divider input frequency            : 120 MHz
**                Clock divider fraction                   : multiply by 2
**                Clock divider divisor                    : divide by 5
**              Module clock source                        : Clock divider output
**              Module clock frequency                     : 48 MHz
**            Pull-up/pull-down settings                   : 
**              Weak pulldowns                             : Enabled
**              Pull-up/pull-down control                  : Mode dependent
**              D+ pull-up                                 : Disabled
**              D+ pull-down                               : Disabled
**              D- pull-down                               : Disabled
**              D+ pull-up for non-OTG mode                : Disabled
**            Endpoints                                    : 
**              EP0                                        : Disabled
**                Direct low speed                         : Disabled
**                Retry                                    : Enabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP1                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP2                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP3                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP4                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP5                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP6                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP7                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP8                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP9                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP10                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP11                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP12                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP13                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP14                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP15                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**            Buffer descriptor table                      : 
**              External object declaration                : extern uint8_t g_Mem[];
**              Address                                    : ((uint32_t)&g_Mem[0])
**            SOF threshold                                : 0
**          Pins                                           : 
**            Alternate clock source                       : Disabled
**            SOF output                                   : Disabled
**            Data plus                                    : Disabled
**            Data minus                                   : Disabled
**          Interrupts                                     : 
**            USB                                          : 
**              Interrupt                                  : INT_USB0
**              Interrupt request                          : Disabled
**              Interrupt priority                         : default
**              ISR Name                                   : USB_ISR
**              Stall                                      : Enabled
**              Attach                                     : Enabled
**              Resume                                     : Enabled
**              Sleep                                      : Enabled
**              Token OK                                   : Enabled
**              Start of frame                             : Enabled
**              Error interrupt                            : Enabled
**              USB reset                                  : Enabled
**              Asynchronous Resume interrupt              : Enabled
**              Error interrupts                           : 
**                Bit stuff error                          : Disabled
**                DMA error                                : Disabled
**                Bus turnaround timeout                   : Disabled
**                Data length error                        : Disabled
**                CRC16 error                              : Disabled
**                CRC5 or EOF                              : Disabled
**                PID error                                : Disabled
**              OTG interrupts                             : 
**                ID pin changed                           : Disabled
**                1 ms interrupt                           : Disabled
**                Line stage change                        : Disabled
**                Session valid                            : Disabled
**                "B" session end                          : Disabled
**                "A" bus valid                            : Disabled
**          Initialization                                 : 
**            Mode                                         : Device
**            USB transceiver suspend state                : Enabled
**            Call Init method                             : yes
**            Utilize after reset values                   : default
**     Contents    :
**         Init - void USB0_Init(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file USB0.h
** @version 01.04
** @brief
**          This file implements the USB_OTG (USB0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup USB0_module USB0 module documentation
**  @{
*/         

#ifndef USB0_H_
#define USB0_H_

/* MODULE USB0. */

#include "USB0_Init.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Initialization method user name */
#define USB0_Init USB0_Init
/* PDD macros peripheral base address parameter */
#define USB0_DEVICE USB0_BASE_PTR
/*
** ===================================================================
** The interrupt service routine must be implemented by user in one
** of the user modules (see USB0.c file for more information).
** ===================================================================
*/
PE_ISR(USB_ISR);

#ifdef __cplusplus
}
#endif

/* END USB0. */
#endif /* #ifndef __USB0_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/

