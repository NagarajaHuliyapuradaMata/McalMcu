#pragma once
/******************************************************************************/
/* File   : infMcalMcuSwcApplEcuM.hpp                                         */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "MemMap_McalMcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      McalMcu_eReasonReset_OnPower
   ,  McalMcu_eReasonReset_Wdg
   ,  McalMcu_eReasonReset_Sw
   ,  McalMcu_eReasonReset_AddressIllegal
   ,  McalMcu_eReasonReset_LowVoltage
   ,  McalMcu_eReasonReset_Ext
   ,  McalMcu_eReasonReset_MonitorClock
   ,  McalMcu_eReasonReset_Undefined
   ,  McalMcu_eReasonReset_WakeupCan
   ,  McalMcu_eReasonReset_WakeupTimer
}Type_McalMcu_eReasonReset; //TBD: move to Types_McalMcu.hpp

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern Type_McalMcu_eReasonReset McalMcu_eReasonReset; //TBD: Make static after integration

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern FUNC(void,     MCALMCU_CODE) infMcalMcuSwcApplEcuM_InitFunction (void);
extern FUNC(Type_McalMcu_eReasonReset, MCALMCU_CODE) McalMcu_eGetReasonReset            (void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
