#pragma once
/*****************************************************/
/* File   : Mcu_EcuM.h                               */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_Mcu.h"

#include "EcuM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_Mcu_EcuM : public interface_EcuM_Client{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, MCU_CODE) InitFunction   (void);
      FUNC(void, MCU_CODE) DeInitFunction (void);
      FUNC(void, MCU_CODE) GetResetReason (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern interface_Mcu_EcuM *EcuM_Client_ptr_Mcu;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

