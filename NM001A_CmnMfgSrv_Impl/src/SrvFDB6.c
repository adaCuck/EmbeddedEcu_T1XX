/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDB6.c
* Module Description: Handwheel Torque Sensor 4 Read/Write Scale Service processing
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 12/13/16  1        JWJ       Initial file creation                                                        EA4#8626
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvFct.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDB6Rd
 * Description:  0xFDB6: Handwheel Torque Sensor 4 Scale Read
 *          ID:  0xFDB6
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDB6ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB6Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) HwTqReadScaData_VoltpDeg_T_f32;

	if (Rte_Call_HwTq4ReadSnsrSca_Oper(&HwTqReadScaData_VoltpDeg_T_f32) == E_OK)
	{
		CmnMfgSrvFct_DecomposeFloat(HwTqReadScaData_VoltpDeg_T_f32, &DataBuf_Uls_T_u08[0]);
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDB6Wr
 * Description:  0xFDB6: Handwheel Torque Sensor 4 Scale Write
 *          ID:  0xFDB6
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  4 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDB6ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB6Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) HwTqReadScaData_VoltpDeg_T_f32;

	HwTqReadScaData_VoltpDeg_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0]);

	if (Rte_Call_HwTq4WrSnsrSca_Oper(HwTqReadScaData_VoltpDeg_T_f32) != E_OK)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFDB6.c */
