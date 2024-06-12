#pragma once
/******************************************************************************/
/* File   : McalMcu.hpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infMcalMcu_ServiceNvM_Types.hpp"
#include "CfgMcalMcu.hpp"
#include "McalMcu_core.hpp"
#include "infMcalMcu_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalMcu:
      INTERFACES_EXPORTED_MCALMCU
      public abstract_module
   ,  public infMcalMcu_ServiceEcuM
   ,  public class_McalMcu_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
   public:
      FUNC(void, MCALMCU_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALMCU_CONST,       MCALMCU_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALMCU_CONFIG_DATA, MCALMCU_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALMCU_CODE) DeInitFunction (void);
      FUNC(void, MCALMCU_CODE) MainFunction   (void);
      MCALMCU_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_McalMcu, MCALMCU_VAR) McalMcu;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

