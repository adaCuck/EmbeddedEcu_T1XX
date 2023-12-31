/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_CDD_FlsMem.h
 *     SW-C Type:  CDD_FlsMem
 *  Generated at:  Sat Aug 20 14:52:57 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FlsMem> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FLSMEM_H
# define _RTE_CDD_FLSMEM_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_FlsMem_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_FlsMem
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CodFlsCrcChkStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CodFlsSngBitErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CrcHwIdxKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrOnRstCrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_FlsMem, RTE_CONST, RTE_CONST) Rte_Inst_CDD_FlsMem; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_FlsMem, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CodFlsCrcChkCmpl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FlsMem_CodFlsCrcChkCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_FLSMEM_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_FLSMEM_APPL_VAR) CrcHwInRegAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_FLSMEM_APPL_VAR) CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_FLSMEM_APPL_VAR) ResvKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CodFlsCrcChkCmpl_Logl Rte_Write_CDD_FlsMem_CodFlsCrcChkCmpl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_CDD_FlsMem_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_ResvCrcHwUnit_Oper Rte_Call_CDD_FlsMem_ResvCrcHwUnit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_FlsMem_SetNtcSts_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CodFlsCrcChkStrtTi() (Rte_Inst_CDD_FlsMem->Pim_CodFlsCrcChkStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CrcHwIdxKey() (Rte_Inst_CDD_FlsMem->Pim_CrcHwIdxKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CodFlsSngBitErr() (Rte_Inst_CDD_FlsMem->Pim_CodFlsSngBitErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CrcChkCmpl() (Rte_Inst_CDD_FlsMem->Pim_CrcChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrOnRstCrcChkCmpl() (Rte_Inst_CDD_FlsMem->Pim_PwrOnRstCrcChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_CodFlsCrcChkStrtTi(void)
 *   uint16 *Rte_Pim_CrcHwIdxKey(void)
 *   boolean *Rte_Pim_CodFlsSngBitErr(void)
 *   boolean *Rte_Pim_CrcChkCmpl(void)
 *   boolean *Rte_Pim_PwrOnRstCrcChkCmpl(void)
 *
 *********************************************************************************************************************/


# define CDD_FlsMem_START_SEC_CODE
# include "CDD_FlsMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FlsMemInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FlsMemInit1 FlsMemInit1
FUNC(void, CDD_FlsMem_CODE) FlsMemInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FlsMemPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CodFlsCrcChkCmpl_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 *CrcHwInRegAdr_Arg, uint32 *CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, uint16 *ResvKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ResvCrcHwUnit_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FlsMemPer2 FlsMemPer2
FUNC(void, CDD_FlsMem_CODE) FlsMemPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_FlsMem_STOP_SEC_CODE
# include "CDD_FlsMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_ResvCrcHwUnit_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1471711636
#    error "The magic number of the generated file <C:/Component/CM102A_FlsMem_Impl/tools/contract/Rte_CDD_FlsMem.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1471711636
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_FLSMEM_H */
