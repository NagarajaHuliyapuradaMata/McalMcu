/******************************************************************************/
/* File   : McalMcu.c                                                         */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"

#include "infMcalMcuSwcApplEcuM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
/* static */ Type_McalMcu_eReasonReset McalMcu_eReasonReset = McalMcu_eReasonReset_OnPower; //TBD: Make static after integration

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void Mcu_ReleaseIoBuffers(void);

FUNC(Type_McalMcu_eReasonReset, MCALMCU_CODE) McalMcu_eGetReasonReset(void){
   return McalMcu_eReasonReset;
}

Type_McalMcu_eReasonReset McalMcu_PerformReasonReset(void){
   Type_McalMcu_eReasonReset ucRetVal = McalMcu_eReasonReset_Undefined;

   McalMcu_eReasonReset = ucRetVal;

   return ucRetVal;
}

FUNC(void, MCALMCU_CODE) infMcalMcuSwcApplEcuM_InitFunction(void){
   (void)McalMcu_PerformReasonReset();
   Mcu_ReleaseIoBuffers();
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/