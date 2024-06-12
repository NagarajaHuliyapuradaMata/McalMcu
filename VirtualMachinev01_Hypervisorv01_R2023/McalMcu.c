/******************************************************************************/
/* File   : McalMcu.c                                                         */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"

#include "infMcalMcuSwcApplStartUp.h"
#include "uC_Mcu.h"

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
/* OBJECTS                                                                    */
/******************************************************************************/
static volatile VAR(uint32, MCALMCU_VAR_FAST) lvu32RegisterWakeupFactor;
static volatile VAR(uint32, MCALMCU_VAR_FAST) lvu32RegisterWakeupFactorControl;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(uint32, MCALMCU_CODE) infMcalMcuSwcApplStartUp_u32GetWakeupFactor(void){
   return lvu32RegisterWakeupFactor;
}

FUNC(void, MCALMCU_CODE) infMcalMcuSwcApplStartUp_vSetWakeupFactor(void){
   lvu32RegisterWakeupFactor        = WUF0;
   lvu32RegisterWakeupFactorControl = !lvu32RegisterWakeupFactor;
}

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

