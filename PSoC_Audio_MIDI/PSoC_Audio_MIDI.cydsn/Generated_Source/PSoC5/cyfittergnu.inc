/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Rx_1 */
.set Rx_1__0__INTTYPE, CYREG_PICU12_INTTYPE6
.set Rx_1__0__MASK, 0x40
.set Rx_1__0__PC, CYREG_PRT12_PC6
.set Rx_1__0__PORT, 12
.set Rx_1__0__SHIFT, 6
.set Rx_1__AG, CYREG_PRT12_AG
.set Rx_1__BIE, CYREG_PRT12_BIE
.set Rx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Rx_1__BYP, CYREG_PRT12_BYP
.set Rx_1__DM0, CYREG_PRT12_DM0
.set Rx_1__DM1, CYREG_PRT12_DM1
.set Rx_1__DM2, CYREG_PRT12_DM2
.set Rx_1__DR, CYREG_PRT12_DR
.set Rx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Rx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Rx_1__MASK, 0x40
.set Rx_1__PORT, 12
.set Rx_1__PRT, CYREG_PRT12_PRT
.set Rx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Rx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Rx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Rx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Rx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Rx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Rx_1__PS, CYREG_PRT12_PS
.set Rx_1__SHIFT, 6
.set Rx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Rx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Rx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Rx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Rx_1__SLW, CYREG_PRT12_SLW

/* Tx_1 */
.set Tx_1__0__INTTYPE, CYREG_PICU12_INTTYPE7
.set Tx_1__0__MASK, 0x80
.set Tx_1__0__PC, CYREG_PRT12_PC7
.set Tx_1__0__PORT, 12
.set Tx_1__0__SHIFT, 7
.set Tx_1__AG, CYREG_PRT12_AG
.set Tx_1__BIE, CYREG_PRT12_BIE
.set Tx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Tx_1__BYP, CYREG_PRT12_BYP
.set Tx_1__DM0, CYREG_PRT12_DM0
.set Tx_1__DM1, CYREG_PRT12_DM1
.set Tx_1__DM2, CYREG_PRT12_DM2
.set Tx_1__DR, CYREG_PRT12_DR
.set Tx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Tx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Tx_1__MASK, 0x80
.set Tx_1__PORT, 12
.set Tx_1__PRT, CYREG_PRT12_PRT
.set Tx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Tx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Tx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Tx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Tx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Tx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Tx_1__PS, CYREG_PRT12_PS
.set Tx_1__SHIFT, 7
.set Tx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Tx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Tx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Tx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Tx_1__SLW, CYREG_PRT12_SLW

/* but1 */
.set but1__0__INTTYPE, CYREG_PICU2_INTTYPE2
.set but1__0__MASK, 0x04
.set but1__0__PC, CYREG_PRT2_PC2
.set but1__0__PORT, 2
.set but1__0__SHIFT, 2
.set but1__AG, CYREG_PRT2_AG
.set but1__AMUX, CYREG_PRT2_AMUX
.set but1__BIE, CYREG_PRT2_BIE
.set but1__BIT_MASK, CYREG_PRT2_BIT_MASK
.set but1__BYP, CYREG_PRT2_BYP
.set but1__CTL, CYREG_PRT2_CTL
.set but1__DM0, CYREG_PRT2_DM0
.set but1__DM1, CYREG_PRT2_DM1
.set but1__DM2, CYREG_PRT2_DM2
.set but1__DR, CYREG_PRT2_DR
.set but1__INP_DIS, CYREG_PRT2_INP_DIS
.set but1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set but1__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set but1__LCD_EN, CYREG_PRT2_LCD_EN
.set but1__MASK, 0x04
.set but1__PORT, 2
.set but1__PRT, CYREG_PRT2_PRT
.set but1__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set but1__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set but1__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set but1__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set but1__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set but1__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set but1__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set but1__PS, CYREG_PRT2_PS
.set but1__SHIFT, 2
.set but1__SLW, CYREG_PRT2_SLW
.set but1_isr_neg__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set but1_isr_neg__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set but1_isr_neg__INTC_MASK, 0x01
.set but1_isr_neg__INTC_NUMBER, 0
.set but1_isr_neg__INTC_PRIOR_NUM, 7
.set but1_isr_neg__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set but1_isr_neg__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set but1_isr_neg__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set but1_isr_pos__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set but1_isr_pos__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set but1_isr_pos__INTC_MASK, 0x02
.set but1_isr_pos__INTC_NUMBER, 1
.set but1_isr_pos__INTC_PRIOR_NUM, 7
.set but1_isr_pos__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set but1_isr_pos__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set but1_isr_pos__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* but2 */
.set but2__0__INTTYPE, CYREG_PICU2_INTTYPE3
.set but2__0__MASK, 0x08
.set but2__0__PC, CYREG_PRT2_PC3
.set but2__0__PORT, 2
.set but2__0__SHIFT, 3
.set but2__AG, CYREG_PRT2_AG
.set but2__AMUX, CYREG_PRT2_AMUX
.set but2__BIE, CYREG_PRT2_BIE
.set but2__BIT_MASK, CYREG_PRT2_BIT_MASK
.set but2__BYP, CYREG_PRT2_BYP
.set but2__CTL, CYREG_PRT2_CTL
.set but2__DM0, CYREG_PRT2_DM0
.set but2__DM1, CYREG_PRT2_DM1
.set but2__DM2, CYREG_PRT2_DM2
.set but2__DR, CYREG_PRT2_DR
.set but2__INP_DIS, CYREG_PRT2_INP_DIS
.set but2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set but2__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set but2__LCD_EN, CYREG_PRT2_LCD_EN
.set but2__MASK, 0x08
.set but2__PORT, 2
.set but2__PRT, CYREG_PRT2_PRT
.set but2__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set but2__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set but2__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set but2__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set but2__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set but2__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set but2__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set but2__PS, CYREG_PRT2_PS
.set but2__SHIFT, 3
.set but2__SLW, CYREG_PRT2_SLW
.set but2_isr_neg__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set but2_isr_neg__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set but2_isr_neg__INTC_MASK, 0x04
.set but2_isr_neg__INTC_NUMBER, 2
.set but2_isr_neg__INTC_PRIOR_NUM, 7
.set but2_isr_neg__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set but2_isr_neg__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set but2_isr_neg__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set but2_isr_pos__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set but2_isr_pos__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set but2_isr_pos__INTC_MASK, 0x08
.set but2_isr_pos__INTC_NUMBER, 3
.set but2_isr_pos__INTC_PRIOR_NUM, 7
.set but2_isr_pos__INTC_PRIOR_REG, CYREG_NVIC_PRI_3
.set but2_isr_pos__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set but2_isr_pos__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* but3 */
.set but3__0__INTTYPE, CYREG_PICU2_INTTYPE4
.set but3__0__MASK, 0x10
.set but3__0__PC, CYREG_PRT2_PC4
.set but3__0__PORT, 2
.set but3__0__SHIFT, 4
.set but3__AG, CYREG_PRT2_AG
.set but3__AMUX, CYREG_PRT2_AMUX
.set but3__BIE, CYREG_PRT2_BIE
.set but3__BIT_MASK, CYREG_PRT2_BIT_MASK
.set but3__BYP, CYREG_PRT2_BYP
.set but3__CTL, CYREG_PRT2_CTL
.set but3__DM0, CYREG_PRT2_DM0
.set but3__DM1, CYREG_PRT2_DM1
.set but3__DM2, CYREG_PRT2_DM2
.set but3__DR, CYREG_PRT2_DR
.set but3__INP_DIS, CYREG_PRT2_INP_DIS
.set but3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set but3__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set but3__LCD_EN, CYREG_PRT2_LCD_EN
.set but3__MASK, 0x10
.set but3__PORT, 2
.set but3__PRT, CYREG_PRT2_PRT
.set but3__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set but3__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set but3__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set but3__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set but3__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set but3__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set but3__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set but3__PS, CYREG_PRT2_PS
.set but3__SHIFT, 4
.set but3__SLW, CYREG_PRT2_SLW
.set but3_isr_neg__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set but3_isr_neg__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set but3_isr_neg__INTC_MASK, 0x10
.set but3_isr_neg__INTC_NUMBER, 4
.set but3_isr_neg__INTC_PRIOR_NUM, 7
.set but3_isr_neg__INTC_PRIOR_REG, CYREG_NVIC_PRI_4
.set but3_isr_neg__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set but3_isr_neg__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set but3_isr_pos__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set but3_isr_pos__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set but3_isr_pos__INTC_MASK, 0x20
.set but3_isr_pos__INTC_NUMBER, 5
.set but3_isr_pos__INTC_PRIOR_NUM, 7
.set but3_isr_pos__INTC_PRIOR_REG, CYREG_NVIC_PRI_5
.set but3_isr_pos__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set but3_isr_pos__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* isr_1 */
.set isr_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_1__INTC_MASK, 0x40
.set isr_1__INTC_NUMBER, 6
.set isr_1__INTC_PRIOR_NUM, 7
.set isr_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_6
.set isr_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* UART_1 */
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_REG, CYREG_B1_UDB09_CTL
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter__COUNT_REG, CYREG_B1_UDB09_CTL
.set UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter__PERIOD_REG, CYREG_B1_UDB09_MSK
.set UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG, CYREG_B1_UDB09_MSK
.set UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG, CYREG_B1_UDB09_ST
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB10_11_A0
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB10_11_A1
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB10_11_D0
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB10_11_D1
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB10_11_F0
.set UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB10_11_F1
.set UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG, CYREG_B1_UDB10_A0_A1
.set UART_1_BUART_sRX_RxShifter_u0__A0_REG, CYREG_B1_UDB10_A0
.set UART_1_BUART_sRX_RxShifter_u0__A1_REG, CYREG_B1_UDB10_A1
.set UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG, CYREG_B1_UDB10_D0_D1
.set UART_1_BUART_sRX_RxShifter_u0__D0_REG, CYREG_B1_UDB10_D0
.set UART_1_BUART_sRX_RxShifter_u0__D1_REG, CYREG_B1_UDB10_D1
.set UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG, CYREG_B1_UDB10_F0_F1
.set UART_1_BUART_sRX_RxShifter_u0__F0_REG, CYREG_B1_UDB10_F0
.set UART_1_BUART_sRX_RxShifter_u0__F1_REG, CYREG_B1_UDB10_F1
.set UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB09_10_ACTL
.set UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG, CYREG_B0_UDB09_10_ST
.set UART_1_BUART_sRX_RxSts__3__MASK, 0x08
.set UART_1_BUART_sRX_RxSts__3__POS, 3
.set UART_1_BUART_sRX_RxSts__4__MASK, 0x10
.set UART_1_BUART_sRX_RxSts__4__POS, 4
.set UART_1_BUART_sRX_RxSts__5__MASK, 0x20
.set UART_1_BUART_sRX_RxSts__5__POS, 5
.set UART_1_BUART_sRX_RxSts__MASK, 0x38
.set UART_1_BUART_sRX_RxSts__MASK_REG, CYREG_B0_UDB09_MSK
.set UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG, CYREG_B0_UDB09_ACTL
.set UART_1_BUART_sRX_RxSts__STATUS_REG, CYREG_B0_UDB09_ST
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B0_UDB08_09_A0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B0_UDB08_09_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B0_UDB08_09_D0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B0_UDB08_09_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B0_UDB08_09_F0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B0_UDB08_09_F1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B0_UDB08_A0_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B0_UDB08_A0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B0_UDB08_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B0_UDB08_D0_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B0_UDB08_D0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B0_UDB08_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B0_UDB08_F0_F1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B0_UDB08_F0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B0_UDB08_F1
.set UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B1_UDB11_A0_A1
.set UART_1_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B1_UDB11_A0
.set UART_1_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B1_UDB11_A1
.set UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B1_UDB11_D0_D1
.set UART_1_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B1_UDB11_D0
.set UART_1_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B1_UDB11_D1
.set UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B1_UDB11_F0_F1
.set UART_1_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B1_UDB11_F0
.set UART_1_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B1_UDB11_F1
.set UART_1_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_1_BUART_sTX_TxSts__0__POS, 0
.set UART_1_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_1_BUART_sTX_TxSts__1__POS, 1
.set UART_1_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_1_BUART_sTX_TxSts__2__POS, 2
.set UART_1_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_1_BUART_sTX_TxSts__3__POS, 3
.set UART_1_BUART_sTX_TxSts__MASK, 0x0F
.set UART_1_BUART_sTX_TxSts__MASK_REG, CYREG_B1_UDB11_MSK
.set UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set UART_1_BUART_sTX_TxSts__STATUS_REG, CYREG_B1_UDB11_ST
.set UART_1_IntClock__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set UART_1_IntClock__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set UART_1_IntClock__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set UART_1_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_1_IntClock__INDEX, 0x01
.set UART_1_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_1_IntClock__PM_ACT_MSK, 0x02
.set UART_1_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_1_IntClock__PM_STBY_MSK, 0x02

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x00
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x01
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x01

/* analogX */
.set analogX__0__INTTYPE, CYREG_PICU2_INTTYPE7
.set analogX__0__MASK, 0x80
.set analogX__0__PC, CYREG_PRT2_PC7
.set analogX__0__PORT, 2
.set analogX__0__SHIFT, 7
.set analogX__AG, CYREG_PRT2_AG
.set analogX__AMUX, CYREG_PRT2_AMUX
.set analogX__BIE, CYREG_PRT2_BIE
.set analogX__BIT_MASK, CYREG_PRT2_BIT_MASK
.set analogX__BYP, CYREG_PRT2_BYP
.set analogX__CTL, CYREG_PRT2_CTL
.set analogX__DM0, CYREG_PRT2_DM0
.set analogX__DM1, CYREG_PRT2_DM1
.set analogX__DM2, CYREG_PRT2_DM2
.set analogX__DR, CYREG_PRT2_DR
.set analogX__INP_DIS, CYREG_PRT2_INP_DIS
.set analogX__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set analogX__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set analogX__LCD_EN, CYREG_PRT2_LCD_EN
.set analogX__MASK, 0x80
.set analogX__PORT, 2
.set analogX__PRT, CYREG_PRT2_PRT
.set analogX__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set analogX__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set analogX__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set analogX__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set analogX__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set analogX__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set analogX__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set analogX__PS, CYREG_PRT2_PS
.set analogX__SHIFT, 7
.set analogX__SLW, CYREG_PRT2_SLW

/* analogY */
.set analogY__0__INTTYPE, CYREG_PICU2_INTTYPE1
.set analogY__0__MASK, 0x02
.set analogY__0__PC, CYREG_PRT2_PC1
.set analogY__0__PORT, 2
.set analogY__0__SHIFT, 1
.set analogY__AG, CYREG_PRT2_AG
.set analogY__AMUX, CYREG_PRT2_AMUX
.set analogY__BIE, CYREG_PRT2_BIE
.set analogY__BIT_MASK, CYREG_PRT2_BIT_MASK
.set analogY__BYP, CYREG_PRT2_BYP
.set analogY__CTL, CYREG_PRT2_CTL
.set analogY__DM0, CYREG_PRT2_DM0
.set analogY__DM1, CYREG_PRT2_DM1
.set analogY__DM2, CYREG_PRT2_DM2
.set analogY__DR, CYREG_PRT2_DR
.set analogY__INP_DIS, CYREG_PRT2_INP_DIS
.set analogY__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set analogY__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set analogY__LCD_EN, CYREG_PRT2_LCD_EN
.set analogY__MASK, 0x02
.set analogY__PORT, 2
.set analogY__PRT, CYREG_PRT2_PRT
.set analogY__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set analogY__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set analogY__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set analogY__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set analogY__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set analogY__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set analogY__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set analogY__PS, CYREG_PRT2_PS
.set analogY__SHIFT, 1
.set analogY__SLW, CYREG_PRT2_SLW

/* P00_Vout */
.set P00_Vout__0__INTTYPE, CYREG_PICU3_INTTYPE6
.set P00_Vout__0__MASK, 0x40
.set P00_Vout__0__PC, CYREG_PRT3_PC6
.set P00_Vout__0__PORT, 3
.set P00_Vout__0__SHIFT, 6
.set P00_Vout__AG, CYREG_PRT3_AG
.set P00_Vout__AMUX, CYREG_PRT3_AMUX
.set P00_Vout__BIE, CYREG_PRT3_BIE
.set P00_Vout__BIT_MASK, CYREG_PRT3_BIT_MASK
.set P00_Vout__BYP, CYREG_PRT3_BYP
.set P00_Vout__CTL, CYREG_PRT3_CTL
.set P00_Vout__DM0, CYREG_PRT3_DM0
.set P00_Vout__DM1, CYREG_PRT3_DM1
.set P00_Vout__DM2, CYREG_PRT3_DM2
.set P00_Vout__DR, CYREG_PRT3_DR
.set P00_Vout__INP_DIS, CYREG_PRT3_INP_DIS
.set P00_Vout__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set P00_Vout__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set P00_Vout__LCD_EN, CYREG_PRT3_LCD_EN
.set P00_Vout__MASK, 0x40
.set P00_Vout__PORT, 3
.set P00_Vout__PRT, CYREG_PRT3_PRT
.set P00_Vout__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set P00_Vout__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set P00_Vout__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set P00_Vout__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set P00_Vout__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set P00_Vout__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set P00_Vout__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set P00_Vout__PS, CYREG_PRT3_PS
.set P00_Vout__SHIFT, 6
.set P00_Vout__SLW, CYREG_PRT3_SLW

/* Clock_Mode */
.set Clock_Mode__CFG0, CYREG_CLKDIST_DCFG3_CFG0
.set Clock_Mode__CFG1, CYREG_CLKDIST_DCFG3_CFG1
.set Clock_Mode__CFG2, CYREG_CLKDIST_DCFG3_CFG2
.set Clock_Mode__CFG2_SRC_SEL_MASK, 0x07
.set Clock_Mode__INDEX, 0x03
.set Clock_Mode__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_Mode__PM_ACT_MSK, 0x08
.set Clock_Mode__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_Mode__PM_STBY_MSK, 0x08

/* Pin_Dice_1 */
.set Pin_Dice_1__0__INTTYPE, CYREG_PICU1_INTTYPE7
.set Pin_Dice_1__0__MASK, 0x80
.set Pin_Dice_1__0__PC, CYREG_PRT1_PC7
.set Pin_Dice_1__0__PORT, 1
.set Pin_Dice_1__0__SHIFT, 7
.set Pin_Dice_1__AG, CYREG_PRT1_AG
.set Pin_Dice_1__AMUX, CYREG_PRT1_AMUX
.set Pin_Dice_1__BIE, CYREG_PRT1_BIE
.set Pin_Dice_1__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Pin_Dice_1__BYP, CYREG_PRT1_BYP
.set Pin_Dice_1__CTL, CYREG_PRT1_CTL
.set Pin_Dice_1__DM0, CYREG_PRT1_DM0
.set Pin_Dice_1__DM1, CYREG_PRT1_DM1
.set Pin_Dice_1__DM2, CYREG_PRT1_DM2
.set Pin_Dice_1__DR, CYREG_PRT1_DR
.set Pin_Dice_1__INP_DIS, CYREG_PRT1_INP_DIS
.set Pin_Dice_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set Pin_Dice_1__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Pin_Dice_1__LCD_EN, CYREG_PRT1_LCD_EN
.set Pin_Dice_1__MASK, 0x80
.set Pin_Dice_1__PORT, 1
.set Pin_Dice_1__PRT, CYREG_PRT1_PRT
.set Pin_Dice_1__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Pin_Dice_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Pin_Dice_1__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Pin_Dice_1__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Pin_Dice_1__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Pin_Dice_1__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Pin_Dice_1__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Pin_Dice_1__PS, CYREG_PRT1_PS
.set Pin_Dice_1__SHIFT, 7
.set Pin_Dice_1__SLW, CYREG_PRT1_SLW

/* Pin_Dice_2 */
.set Pin_Dice_2__0__INTTYPE, CYREG_PICU1_INTTYPE5
.set Pin_Dice_2__0__MASK, 0x20
.set Pin_Dice_2__0__PC, CYREG_PRT1_PC5
.set Pin_Dice_2__0__PORT, 1
.set Pin_Dice_2__0__SHIFT, 5
.set Pin_Dice_2__AG, CYREG_PRT1_AG
.set Pin_Dice_2__AMUX, CYREG_PRT1_AMUX
.set Pin_Dice_2__BIE, CYREG_PRT1_BIE
.set Pin_Dice_2__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Pin_Dice_2__BYP, CYREG_PRT1_BYP
.set Pin_Dice_2__CTL, CYREG_PRT1_CTL
.set Pin_Dice_2__DM0, CYREG_PRT1_DM0
.set Pin_Dice_2__DM1, CYREG_PRT1_DM1
.set Pin_Dice_2__DM2, CYREG_PRT1_DM2
.set Pin_Dice_2__DR, CYREG_PRT1_DR
.set Pin_Dice_2__INP_DIS, CYREG_PRT1_INP_DIS
.set Pin_Dice_2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set Pin_Dice_2__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Pin_Dice_2__LCD_EN, CYREG_PRT1_LCD_EN
.set Pin_Dice_2__MASK, 0x20
.set Pin_Dice_2__PORT, 1
.set Pin_Dice_2__PRT, CYREG_PRT1_PRT
.set Pin_Dice_2__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Pin_Dice_2__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Pin_Dice_2__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Pin_Dice_2__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Pin_Dice_2__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Pin_Dice_2__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Pin_Dice_2__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Pin_Dice_2__PS, CYREG_PRT1_PS
.set Pin_Dice_2__SHIFT, 5
.set Pin_Dice_2__SLW, CYREG_PRT1_SLW

/* Timer_Mode */
.set Timer_Mode_TimerHW__CAP0, CYREG_TMR0_CAP0
.set Timer_Mode_TimerHW__CAP1, CYREG_TMR0_CAP1
.set Timer_Mode_TimerHW__CFG0, CYREG_TMR0_CFG0
.set Timer_Mode_TimerHW__CFG1, CYREG_TMR0_CFG1
.set Timer_Mode_TimerHW__CFG2, CYREG_TMR0_CFG2
.set Timer_Mode_TimerHW__CNT_CMP0, CYREG_TMR0_CNT_CMP0
.set Timer_Mode_TimerHW__CNT_CMP1, CYREG_TMR0_CNT_CMP1
.set Timer_Mode_TimerHW__PER0, CYREG_TMR0_PER0
.set Timer_Mode_TimerHW__PER1, CYREG_TMR0_PER1
.set Timer_Mode_TimerHW__PM_ACT_CFG, CYREG_PM_ACT_CFG3
.set Timer_Mode_TimerHW__PM_ACT_MSK, 0x01
.set Timer_Mode_TimerHW__PM_STBY_CFG, CYREG_PM_STBY_CFG3
.set Timer_Mode_TimerHW__PM_STBY_MSK, 0x01
.set Timer_Mode_TimerHW__RT0, CYREG_TMR0_RT0
.set Timer_Mode_TimerHW__RT1, CYREG_TMR0_RT1
.set Timer_Mode_TimerHW__SR0, CYREG_TMR0_SR0

/* WaveDAC8_1 */
.set WaveDAC8_1_BuffAmp_ABuf__CR, CYREG_OPAMP1_CR
.set WaveDAC8_1_BuffAmp_ABuf__MX, CYREG_OPAMP1_MX
.set WaveDAC8_1_BuffAmp_ABuf__NPUMP_OPAMP_TR0, CYREG_NPUMP_OPAMP_TR0
.set WaveDAC8_1_BuffAmp_ABuf__PM_ACT_CFG, CYREG_PM_ACT_CFG4
.set WaveDAC8_1_BuffAmp_ABuf__PM_ACT_MSK, 0x02
.set WaveDAC8_1_BuffAmp_ABuf__PM_STBY_CFG, CYREG_PM_STBY_CFG4
.set WaveDAC8_1_BuffAmp_ABuf__PM_STBY_MSK, 0x02
.set WaveDAC8_1_BuffAmp_ABuf__RSVD, CYREG_OPAMP1_RSVD
.set WaveDAC8_1_BuffAmp_ABuf__SW, CYREG_OPAMP1_SW
.set WaveDAC8_1_BuffAmp_ABuf__TR0, CYREG_OPAMP1_TR0
.set WaveDAC8_1_BuffAmp_ABuf__TR1, CYREG_OPAMP1_TR1
.set WaveDAC8_1_VDAC8_viDAC8__CR0, CYREG_DAC3_CR0
.set WaveDAC8_1_VDAC8_viDAC8__CR1, CYREG_DAC3_CR1
.set WaveDAC8_1_VDAC8_viDAC8__D, CYREG_DAC3_D
.set WaveDAC8_1_VDAC8_viDAC8__PM_ACT_CFG, CYREG_PM_ACT_CFG8
.set WaveDAC8_1_VDAC8_viDAC8__PM_ACT_MSK, 0x08
.set WaveDAC8_1_VDAC8_viDAC8__PM_STBY_CFG, CYREG_PM_STBY_CFG8
.set WaveDAC8_1_VDAC8_viDAC8__PM_STBY_MSK, 0x08
.set WaveDAC8_1_VDAC8_viDAC8__STROBE, CYREG_DAC3_STROBE
.set WaveDAC8_1_VDAC8_viDAC8__SW0, CYREG_DAC3_SW0
.set WaveDAC8_1_VDAC8_viDAC8__SW2, CYREG_DAC3_SW2
.set WaveDAC8_1_VDAC8_viDAC8__SW3, CYREG_DAC3_SW3
.set WaveDAC8_1_VDAC8_viDAC8__SW4, CYREG_DAC3_SW4
.set WaveDAC8_1_VDAC8_viDAC8__TR, CYREG_DAC3_TR
.set WaveDAC8_1_VDAC8_viDAC8__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DAC3_M1
.set WaveDAC8_1_VDAC8_viDAC8__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DAC3_M2
.set WaveDAC8_1_VDAC8_viDAC8__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DAC3_M3
.set WaveDAC8_1_VDAC8_viDAC8__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DAC3_M4
.set WaveDAC8_1_VDAC8_viDAC8__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DAC3_M5
.set WaveDAC8_1_VDAC8_viDAC8__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DAC3_M6
.set WaveDAC8_1_VDAC8_viDAC8__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DAC3_M7
.set WaveDAC8_1_VDAC8_viDAC8__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DAC3_M8
.set WaveDAC8_1_VDAC8_viDAC8__TST, CYREG_DAC3_TST
.set WaveDAC8_1_Wave1_DMA__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set WaveDAC8_1_Wave1_DMA__DRQ_NUMBER, 0
.set WaveDAC8_1_Wave1_DMA__NUMBEROF_TDS, 0
.set WaveDAC8_1_Wave1_DMA__PRIORITY, 2
.set WaveDAC8_1_Wave1_DMA__TERMIN_EN, 0
.set WaveDAC8_1_Wave1_DMA__TERMIN_SEL, 0
.set WaveDAC8_1_Wave1_DMA__TERMOUT0_EN, 0
.set WaveDAC8_1_Wave1_DMA__TERMOUT0_SEL, 0
.set WaveDAC8_1_Wave1_DMA__TERMOUT1_EN, 0
.set WaveDAC8_1_Wave1_DMA__TERMOUT1_SEL, 0
.set WaveDAC8_1_Wave2_DMA__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set WaveDAC8_1_Wave2_DMA__DRQ_NUMBER, 1
.set WaveDAC8_1_Wave2_DMA__NUMBEROF_TDS, 0
.set WaveDAC8_1_Wave2_DMA__PRIORITY, 2
.set WaveDAC8_1_Wave2_DMA__TERMIN_EN, 0
.set WaveDAC8_1_Wave2_DMA__TERMIN_SEL, 0
.set WaveDAC8_1_Wave2_DMA__TERMOUT0_EN, 0
.set WaveDAC8_1_Wave2_DMA__TERMOUT0_SEL, 0
.set WaveDAC8_1_Wave2_DMA__TERMOUT1_EN, 0
.set WaveDAC8_1_Wave2_DMA__TERMOUT1_SEL, 0

/* analogPress */
.set analogPress__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set analogPress__0__MASK, 0x01
.set analogPress__0__PC, CYREG_PRT0_PC0
.set analogPress__0__PORT, 0
.set analogPress__0__SHIFT, 0
.set analogPress__AG, CYREG_PRT0_AG
.set analogPress__AMUX, CYREG_PRT0_AMUX
.set analogPress__BIE, CYREG_PRT0_BIE
.set analogPress__BIT_MASK, CYREG_PRT0_BIT_MASK
.set analogPress__BYP, CYREG_PRT0_BYP
.set analogPress__CTL, CYREG_PRT0_CTL
.set analogPress__DM0, CYREG_PRT0_DM0
.set analogPress__DM1, CYREG_PRT0_DM1
.set analogPress__DM2, CYREG_PRT0_DM2
.set analogPress__DR, CYREG_PRT0_DR
.set analogPress__INP_DIS, CYREG_PRT0_INP_DIS
.set analogPress__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set analogPress__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set analogPress__LCD_EN, CYREG_PRT0_LCD_EN
.set analogPress__MASK, 0x01
.set analogPress__PORT, 0
.set analogPress__PRT, CYREG_PRT0_PRT
.set analogPress__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set analogPress__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set analogPress__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set analogPress__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set analogPress__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set analogPress__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set analogPress__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set analogPress__PS, CYREG_PRT0_PS
.set analogPress__SHIFT, 0
.set analogPress__SLW, CYREG_PRT0_SLW

/* isr_checkMode */
.set isr_checkMode__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_checkMode__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_checkMode__INTC_MASK, 0x20000
.set isr_checkMode__INTC_NUMBER, 17
.set isr_checkMode__INTC_PRIOR_NUM, 7
.set isr_checkMode__INTC_PRIOR_REG, CYREG_NVIC_PRI_17
.set isr_checkMode__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_checkMode__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Pin_Dice_LED_1 */
.set Pin_Dice_LED_1__0__INTTYPE, CYREG_PICU1_INTTYPE6
.set Pin_Dice_LED_1__0__MASK, 0x40
.set Pin_Dice_LED_1__0__PC, CYREG_PRT1_PC6
.set Pin_Dice_LED_1__0__PORT, 1
.set Pin_Dice_LED_1__0__SHIFT, 6
.set Pin_Dice_LED_1__AG, CYREG_PRT1_AG
.set Pin_Dice_LED_1__AMUX, CYREG_PRT1_AMUX
.set Pin_Dice_LED_1__BIE, CYREG_PRT1_BIE
.set Pin_Dice_LED_1__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Pin_Dice_LED_1__BYP, CYREG_PRT1_BYP
.set Pin_Dice_LED_1__CTL, CYREG_PRT1_CTL
.set Pin_Dice_LED_1__DM0, CYREG_PRT1_DM0
.set Pin_Dice_LED_1__DM1, CYREG_PRT1_DM1
.set Pin_Dice_LED_1__DM2, CYREG_PRT1_DM2
.set Pin_Dice_LED_1__DR, CYREG_PRT1_DR
.set Pin_Dice_LED_1__INP_DIS, CYREG_PRT1_INP_DIS
.set Pin_Dice_LED_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set Pin_Dice_LED_1__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Pin_Dice_LED_1__LCD_EN, CYREG_PRT1_LCD_EN
.set Pin_Dice_LED_1__MASK, 0x40
.set Pin_Dice_LED_1__PORT, 1
.set Pin_Dice_LED_1__PRT, CYREG_PRT1_PRT
.set Pin_Dice_LED_1__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Pin_Dice_LED_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Pin_Dice_LED_1__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Pin_Dice_LED_1__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Pin_Dice_LED_1__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Pin_Dice_LED_1__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Pin_Dice_LED_1__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Pin_Dice_LED_1__PS, CYREG_PRT1_PS
.set Pin_Dice_LED_1__SHIFT, 6
.set Pin_Dice_LED_1__SLW, CYREG_PRT1_SLW

/* Pin_Dice_LED_2 */
.set Pin_Dice_LED_2__0__INTTYPE, CYREG_PICU1_INTTYPE4
.set Pin_Dice_LED_2__0__MASK, 0x10
.set Pin_Dice_LED_2__0__PC, CYREG_PRT1_PC4
.set Pin_Dice_LED_2__0__PORT, 1
.set Pin_Dice_LED_2__0__SHIFT, 4
.set Pin_Dice_LED_2__AG, CYREG_PRT1_AG
.set Pin_Dice_LED_2__AMUX, CYREG_PRT1_AMUX
.set Pin_Dice_LED_2__BIE, CYREG_PRT1_BIE
.set Pin_Dice_LED_2__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Pin_Dice_LED_2__BYP, CYREG_PRT1_BYP
.set Pin_Dice_LED_2__CTL, CYREG_PRT1_CTL
.set Pin_Dice_LED_2__DM0, CYREG_PRT1_DM0
.set Pin_Dice_LED_2__DM1, CYREG_PRT1_DM1
.set Pin_Dice_LED_2__DM2, CYREG_PRT1_DM2
.set Pin_Dice_LED_2__DR, CYREG_PRT1_DR
.set Pin_Dice_LED_2__INP_DIS, CYREG_PRT1_INP_DIS
.set Pin_Dice_LED_2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set Pin_Dice_LED_2__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Pin_Dice_LED_2__LCD_EN, CYREG_PRT1_LCD_EN
.set Pin_Dice_LED_2__MASK, 0x10
.set Pin_Dice_LED_2__PORT, 1
.set Pin_Dice_LED_2__PRT, CYREG_PRT1_PRT
.set Pin_Dice_LED_2__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Pin_Dice_LED_2__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Pin_Dice_LED_2__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Pin_Dice_LED_2__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Pin_Dice_LED_2__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Pin_Dice_LED_2__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Pin_Dice_LED_2__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Pin_Dice_LED_2__PS, CYREG_PRT1_PS
.set Pin_Dice_LED_2__SHIFT, 4
.set Pin_Dice_LED_2__SLW, CYREG_PRT1_SLW

/* debouncerClock */
.set debouncerClock__CFG0, CYREG_CLKDIST_DCFG2_CFG0
.set debouncerClock__CFG1, CYREG_CLKDIST_DCFG2_CFG1
.set debouncerClock__CFG2, CYREG_CLKDIST_DCFG2_CFG2
.set debouncerClock__CFG2_SRC_SEL_MASK, 0x07
.set debouncerClock__INDEX, 0x02
.set debouncerClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set debouncerClock__PM_ACT_MSK, 0x04
.set debouncerClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set debouncerClock__PM_STBY_MSK, 0x04

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 26
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 26
.set CYDEV_CHIP_MEMBER_4AA, 25
.set CYDEV_CHIP_MEMBER_4AB, 30
.set CYDEV_CHIP_MEMBER_4AC, 14
.set CYDEV_CHIP_MEMBER_4AD, 15
.set CYDEV_CHIP_MEMBER_4AE, 16
.set CYDEV_CHIP_MEMBER_4D, 20
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 27
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 24
.set CYDEV_CHIP_MEMBER_4I, 32
.set CYDEV_CHIP_MEMBER_4J, 21
.set CYDEV_CHIP_MEMBER_4K, 22
.set CYDEV_CHIP_MEMBER_4L, 31
.set CYDEV_CHIP_MEMBER_4M, 29
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 28
.set CYDEV_CHIP_MEMBER_4Q, 17
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 23
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 18
.set CYDEV_CHIP_MEMBER_4Z, 19
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 33
.set CYDEV_CHIP_MEMBER_FM3, 37
.set CYDEV_CHIP_MEMBER_FM4, 38
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 34
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 35
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 36
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4AA_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AB_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AC_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AD_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AE_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Z_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x1000
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x0002007F
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x4000
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000003
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif