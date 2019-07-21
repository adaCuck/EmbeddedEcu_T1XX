/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_CustDiagc.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_CustDiagc_Rte_Read_BattVltg_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_EcuTFild_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_EngSpd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MissMsg0C9_Logl(boolean *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_ThermLimFlgCntr_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_ApaSt_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_SteerWhlAgReqTarAg_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MotCurrPeakEstimd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MotCurrDaxCmd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_StrtStopSt_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_LkaCmd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_LkaSt_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MotTqCmd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_PinionAg_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MissMsg1F1_Logl(boolean *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_ApaSt_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_BattVltg_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_CtrlrTRng_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_CustMfgEnaSt_Val(MfgEnaSt1 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_DesRtIdx_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_EcuTFild_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_EngRunActv_Logl(boolean *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_EngSpd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgCcwDetd_Logl(boolean *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgCwDetd_Logl(boolean *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgEotCcw_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgEotCw_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_HwAgTrimPrfmd_Logl(boolean *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_HwTq_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_HwTqIdptSig_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_LkaCmd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_LkaSt_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MissMsg0C9_Logl(boolean *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MotCurrDaxCmd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MotCurrPeakEstimd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_MotTqCmd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_PinionAg_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_PinionAgConf_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_SteerWhlAgReqTarAg_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_StrtStopSt_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_SysPwrMod_Val(GmSysPwrMod1 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_SysSt_Val(SysSt1 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_ThermLimFlgCntr_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_VehSpd_Val(float32 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_VehSpdVld_Logl(boolean *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_VltgRng_Val(uint8 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_GmFctDiSts_Val(GmFctDiArbnSts1 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_GmSysPwrMod_Val(GmSysPwrMod1 *data);
Std_ReturnType TSC_CustDiagc_Rte_Read_SysStReqEnaOvrdNxtr_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CustDiagc_Rte_Write_MfgOvrlDi_Logl(boolean data);
Std_ReturnType TSC_CustDiagc_Rte_Write_SerlComDi_Logl(boolean data);
Std_ReturnType TSC_CustDiagc_Rte_Write_GmIgnCntr_Val(uint16 data);
Std_ReturnType TSC_CustDiagc_Rte_Write_SysStReqEnaOvrdCombd_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_CustDiagc_Rte_Call_GetNtcActv_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_GetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_ClrAllDiagc_Oper(void);
Std_ReturnType TSC_CustDiagc_Rte_Call_ClrHwAgTrimVal_Oper(void);
Std_ReturnType TSC_CustDiagc_Rte_Call_ClrTrigStsAry_Oper(void);
Std_ReturnType TSC_CustDiagc_Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt);
Std_ReturnType TSC_CustDiagc_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, uint32 *BufPtr_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_GmFctDiReq_Oper(void);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(uint8 *BasMdlPartNrAlphaCod);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrBasMdlPartNrRd_Oper(uint8 *BasMdlPartNr);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCalProgdStsRd_Oper(uint8 *CalProgdSts);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCalProgdStsWr_Oper(uint8 CalProgdSts);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCcaMfgTrakgRd_Oper(uint8 *CcaMfgTrakg);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCmpdVehPartnProdtStructRd_Oper(uint8 *CmpdVehPartnProdtStruct);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCtrlPidKeyChk_Oper(const uint8 *CtrlPidKey);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCtrlPidKeyWr_Oper(const uint8 *CtrlPidKey);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCtrlPidSeedRd_Oper(uint8 *CtrlPidSeed);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCtrlPidSeedUpprByteWr_Oper(uint8 CtrlPidSeedUpprByte);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCustMfgEnaCntrRd_Oper(uint8 *CustMfgEnaCntr);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrCustMfgEnaCntrWr_Oper(uint8 CustMfgEnaCntr);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrDataUniversalNrSysIdRd_Oper(uint8 *DataUniversalNrSysId);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEcuIdRd_Oper(uint8 *EcuId_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEndMdlPartNrAlphaCodRd_Oper(uint8 *EndMdlPartNrAlphaCod);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEndMdlPartNrAlphaCodWr_Oper(const uint8 *EndMdlPartNrAlphaCod);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEndMdlPartNrRd_Oper(uint8 *EndMdlPartNr);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrEndMdlPartNrWr_Oper(const uint8 *EndMdlPartNr);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrGmLanIdRd_Oper(uint8 *GmLanId);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrLstRepairShopCodRd_Oper(uint8 *RepairShopCod);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrNxtrMfgTrakgRd_Oper(uint8 *NxtrMfgTrakg);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrNxtrMfgTrakgWr_Oper(const uint8 *NxtrMfgTrakg);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrProgmDateRd_Oper(uint8 *ProgmDate);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrProgmDateWr_Oper(const uint8 *ProgmDate);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrProgmSessionKeyChk_Oper(const uint8 *ProgmSessionKey);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrProgmSessionSeedRd_Oper(uint8 *ProgmSessionSeed);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrRepairShopCodRd_Oper(uint8 *RepairShopCod);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrRepairShopCodWr_Oper(const uint8 *RepairShopCod);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSecuBypAuthnRd_Oper(uint8 *SecuBypAuthn_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSecuBypAuthnWr_Oper(const uint8 *SecuBypAuthn_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSysCodVersNrRd_Oper(uint8 *SysCodVersNr);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSysCodVersNrWr_Oper(const uint8 *SysCodVersNr);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSysNameRd_Oper(uint8 *SysName);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrSysNameWr_Oper(const uint8 *SysName);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrVinDataRd_Oper(uint8 *VinData);
Std_ReturnType TSC_CustDiagc_Rte_Call_PartNrVinDataWr_Oper(const uint8 *VinData);
Std_ReturnType TSC_CustDiagc_Rte_Call_RtnMaxHwAgCwAndCcw_Oper(float32 *HwAgCcwMax_Arg, float32 *HwAgCwMax_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_UpdHwAgTrimVal_Oper(uint8 *UpdHwAgTrimValSrvResp_Arg);

/** Service interfaces */
Std_ReturnType TSC_CustDiagc_Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CustDiagc_Rte_Call_CustDiagcGmIgnCntr_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
float32  TSC_CustDiagc_Rte_Prm_EotLrngRackTrvlMin_Val(void);
boolean  TSC_CustDiagc_Rte_Prm_GmOvrlStMgrApaMfgEna_Logl(void);
boolean  TSC_CustDiagc_Rte_Prm_GmOvrlStMgrEscMfgEna_Logl(void);
boolean  TSC_CustDiagc_Rte_Prm_GmOvrlStMgrLkaMfgEna_Logl(void);
boolean  TSC_CustDiagc_Rte_Prm_GmStrtStopEna_Logl(void);
boolean  TSC_CustDiagc_Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl(void);
boolean  TSC_CustDiagc_Rte_Prm_PullCmpActvEna_Logl(void);
boolean  TSC_CustDiagc_Rte_Prm_WhlImbRejctnFctEna_Logl(void);
Ary1D_u32_512 * TSC_CustDiagc_Rte_Prm_DiagcMgrFltResp_Ary1D(void);

/** Per Instance Memories */
uint32 *TSC_CustDiagc_Rte_Pim_CustDiagcCtrlPidSeedKeyTmr(void);
uint32 *TSC_CustDiagc_Rte_Pim_CustDiagcProgmSessionSeedKeyTmr(void);
uint32 *TSC_CustDiagc_Rte_Pim_DtcNr(void);
uint32 *TSC_CustDiagc_Rte_Pim_MsgCntxt(void);
uint16 *TSC_CustDiagc_Rte_Pim_GmIgnCntr(void);
uint8 *TSC_CustDiagc_Rte_Pim_CustDiagcCtrlPidKeyAtmptCntr(void);
uint8 *TSC_CustDiagc_Rte_Pim_CustDiagcProgmSessionKeyAtmptCntr(void);
GmFctDiArbnSts1 *TSC_CustDiagc_Rte_Pim_PrevGmFctDiArbnSts(void);
uint8 *TSC_CustDiagc_Rte_Pim_Srv12LoopCntr(void);
uint8 *TSC_CustDiagc_Rte_Pim_SrvCntxt(void);
boolean *TSC_CustDiagc_Rte_Pim_CpidActv(void);
boolean *TSC_CustDiagc_Rte_Pim_CustDiagcCtrlPidSeedReqd(void);
boolean *TSC_CustDiagc_Rte_Pim_CustDiagcCtrlPidSeedTmrActvd(void);
boolean *TSC_CustDiagc_Rte_Pim_CustDiagcProgmSessionSeedReqd(void);
boolean *TSC_CustDiagc_Rte_Pim_CustDiagcProgmSessionSeedTmrActvd(void);
boolean *TSC_CustDiagc_Rte_Pim_GmDiCtrlPidTstRunng(void);
boolean *TSC_CustDiagc_Rte_Pim_PrevSysPwrModRun(void);
boolean *TSC_CustDiagc_Rte_Pim_SysStReqEnaOvrdCust(void);



