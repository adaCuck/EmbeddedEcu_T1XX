/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDD7.c
* Module Description: 0xFDD7 - Motor Angle 0 Coefficient Table Read/Write
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         2 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 10/14/15  1        JWJ       Initial file creation                                                        EA4#2034
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvFct.h"
#include "Crc.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDD7Rd
 * Description:  0xFDD7: Coefficient Table 0 Read
 *          ID:  0xFDD7
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  106 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDD7ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDD7Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) MotAgCoeffTbl_Cnt_T_f32[26U];
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) CRCCalcd_Cnt_T_u16;

	/* Read data from Motor Angle 0 component */
	(void)Rte_Call_MotAg0MeasMotAg0CoeffTblRead_Oper(MotAgCoeffTbl_Cnt_T_f32);

	/* Convert array of float32's to array of uint8's */
	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 26U; Idx_Cnt_T_u08 += 1U)
	{
		CmnMfgSrvFct_DecomposeFloat(MotAgCoeffTbl_Cnt_T_f32[Idx_Cnt_T_u08], &DataBuf_Uls_T_u08[Idx_Cnt_T_u08 * 4U]);
	}

	/* Compute CRC16 over array of bytes and append to end of array */
	CRCCalcd_Cnt_T_u16 = Crc_CalculateCRC16(DataBuf_Uls_T_u08, 104U, 0xFDD7U, FALSE);
	CmnMfgSrvFct_Decompose16(CRCCalcd_Cnt_T_u16, &DataBuf_Uls_T_u08[104U]);

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDD7Wr
 * Description:  0xFDD7: Coefficient Table 0 Write
 *          ID:  0xFDD7
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  106 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDD7ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDD7Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) MotAgCoeffTbl_Cnt_T_f32[26U];
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) CRCRxd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) CRCCalcd_Cnt_T_u16;

	CRCCalcd_Cnt_T_u16 = Crc_CalculateCRC16(DataBuf_Uls_T_u08, 104U, 0xFDD7U, FALSE);
	CRCRxd_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[104U]);
	if (CRCCalcd_Cnt_T_u16 == CRCRxd_Cnt_T_u16)
	{
		/* Convert array of uint8's to array of float32's */
		for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 26U; Idx_Cnt_T_u08 += 1U)
		{
			MotAgCoeffTbl_Cnt_T_f32[Idx_Cnt_T_u08] = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[Idx_Cnt_T_u08 * 4U]);
		}

		(void)Rte_Call_MotAg0MeasMotAg0CoeffTblWr_Oper(MotAgCoeffTbl_Cnt_T_f32);
		
	}
	else
	{
		RspCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}


	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDD7.c */
