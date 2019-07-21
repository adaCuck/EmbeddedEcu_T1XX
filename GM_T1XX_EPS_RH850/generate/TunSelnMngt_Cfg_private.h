/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   TunSelnMngt_Cfg_private.h
* Module Description: Private configuration header file for ES400A Tuning Selection Management
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          14 %
* %derived_by:       nz2654 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 10/08/15  1       KJS     Initial version of the private header template                                  EA4#1840
* 03/31/16  2       KJS     Updated template to follow ES400A Rev 1                                         EA4#5092
* 08/29/16  3       KJS     Updated template for XCP write region access and anomaly EA4#6672 corrections   EA4#7236
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef TUNSELNMNGT_CFG_PRIVATE_H
#define TUNSELNMNGT_CFG_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Rte_Type.h"
#include "CDD_XcpIf.h"


/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/
#define MAXINITIDXCNT_CNT_U08           10U
#define MAXRTIDXCNT_CNT_U08             25U
#define MAXONLINECALCFGCNT_CNT_U08      18U
#define ONLINECALGROUPS_CNT_U08         3U
#define ONLINECALRAMTBL_CNT_U16         5000U
#define PRMPTRTBLSIZEINWORD_CNT_U16     (sizeof(Rte_ParameterRefTabType) / 4U)

/* The following build constant controls write access to all RAM by XCP
 * STD_OFF  - (Default and Production setting) XCP writes are limited to the range defined by OnlineRamCalTbl_C and 
 *            the ranges defined in the Xcp Write Access Region container that are production only. 
 * STD_ON   - XCP writes are enabled for all of the regions defined in the Xcp Write Access Region container */
#define TUNSELNMNGTDEVLPMODENA         STD_OFF

/* The following error checks are to ensure that XCP and TunSelnMngt are configured properly */
#if ( ONLINECALGROUPS_CNT_U08 != XCPIF_MAXCALSEG_CNT_U08 )
    #error "TunselnMngt and XCP configurations do not match!"
#endif

typedef struct {
    /* Rte_ParameterRefTabType is generated by the RTE. This will change depending on the configuration
       of the application and the calibration component(s) used. */
    Rte_ParameterRefTabType PrmRefTblPtr;
    uint32                  PrmTblCrc_u32;
} TunSelnRamTblRec1;

/* Initialization, run-time and online constant tables */
typedef struct
{
    uint16 SrcIdx_u16;
    uint16 DestIdx_u16;
    uint8 SigIdx_u08;
} TunSelnIdxTblRec1;

typedef struct
{
    uint8*  RamStructPtr_u08;
    uint16  StructSize_u16;
    uint16  TblIdx_u16;
    uint8   GroupIdx_u08;
} TunSelnOnlineCalIdxTblRec1;

/* Enum for GetSegInfoReq_Oper */
typedef enum
{
    GETSEGMODSEGINFO_ADR = 0U,
    GETSEGMODSEGINFO_LEN = 1U
} GetSegModSegInfo1;

typedef enum
{
    GETSEGMODMPGIDX_SRCADR   = 0U,
    GETSEGMODMPGIDX_DESTADR  = 1U,
    GETSEGMODMPGIDX_LEN      = 2U
} GetSegModMpgIdx1;


/* The following structures and enumerations are generated for online calibration use */
typedef enum
{
    GroupA = 0U,
    GroupB = 1U,
    GroupC = 2U
} OnlineCalGroup1;

typedef struct
{
    Rte_Calprm_CalRegn03CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn03CmnGroupA;
    Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn02CmnGroupA;
    Rte_Calprm_CalRegn03Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn03Inin00GroupA;
    Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn02Inin00GroupA;
    Rte_Calprm_CalRegn03Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn03Rt00GroupA;
} GroupATyp;

typedef struct
{
    Rte_Calprm_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn03CmnGroupB;
    Rte_Calprm_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn01CmnGroupB;
    Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn02CmnGroupB;
    Rte_Calprm_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn03Inin00GroupB;
    Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn01Inin00GroupB;
    Rte_Calprm_CalRegn03Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn03Rt00GroupB;
} GroupBTyp;

typedef struct
{
    Rte_Calprm_CalRegn03CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn03CmnGroupC;
    Rte_Calprm_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn01CmnGroupC;
    Rte_Calprm_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn02CmnGroupC;
    Rte_Calprm_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn03Inin00GroupC;
    Rte_Calprm_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn01Inin00GroupC;
    Rte_Calprm_CalRegn02Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn02Inin00GroupC;
    Rte_Calprm_CalRegn02Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP_Type    CalRegn02Rt00GroupC;
} GroupCTyp;

typedef union
{
    uint8 byte[ONLINECALRAMTBL_CNT_U16];
    GroupATyp GroupA;
    GroupBTyp GroupB;
    GroupCTyp GroupC;
} OnlineCalTblRec1;


/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/* Declared in the TunSelnMngt_Cfg_private.c */
extern const VAR(TunSelnIdxTblRec1, AUTOMATIC) ININCALCFGTBL_REC[MAXINITIDXCNT_CNT_U08];
extern const VAR(TunSelnIdxTblRec1, AUTOMATIC) RTCALCFGTBL_REC[MAXRTIDXCNT_CNT_U08];
extern const VAR(TunSelnOnlineCalIdxTblRec1, AUTOMATIC) ONLINECALCFGTBL_REC[MAXONLINECALCFGCNT_CNT_U08];
extern const VAR(uint32, AUTOMATIC) ONLINECALSEGINFOTBL_U32[ONLINECALGROUPS_CNT_U08];

/* Declared in the TunSelnMngt_private.c */
extern VAR(TunSelnRamTblRec1, AUTOMATIC) MngtRamTbl_C[2];
extern VAR(OnlineCalTblRec1, AUTOMATIC) OnlineRamCalTbl_C;

/* Declared in RTE.c */
extern CONST(Rte_ParameterRefTabType, RTE_CONST) RteParameterRefTab;
extern VAR(Rte_ParameterBaseType, RTE_VAR_NOINIT) RteParameterBase;

/* Defined in TunSelnMngt_Cfg_private.c */
extern FUNC(boolean, TunSelnMngt_CODE) TunSelnMngt_ChkXcpWrAcs(uint32 ReqAdr_Cnt_T_u32);

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* TUNSELNMNGT_CFG_PRIVATE_H */
