#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* Rx */
#define Rx__0__MASK 0x20u
#define Rx__0__PC CYREG_PRT3_PC5
#define Rx__0__PORT 3u
#define Rx__0__SHIFT 5
#define Rx__AG CYREG_PRT3_AG
#define Rx__AMUX CYREG_PRT3_AMUX
#define Rx__BIE CYREG_PRT3_BIE
#define Rx__BIT_MASK CYREG_PRT3_BIT_MASK
#define Rx__BYP CYREG_PRT3_BYP
#define Rx__CTL CYREG_PRT3_CTL
#define Rx__DM0 CYREG_PRT3_DM0
#define Rx__DM1 CYREG_PRT3_DM1
#define Rx__DM2 CYREG_PRT3_DM2
#define Rx__DR CYREG_PRT3_DR
#define Rx__INP_DIS CYREG_PRT3_INP_DIS
#define Rx__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Rx__LCD_EN CYREG_PRT3_LCD_EN
#define Rx__MASK 0x20u
#define Rx__PORT 3u
#define Rx__PRT CYREG_PRT3_PRT
#define Rx__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Rx__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Rx__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Rx__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Rx__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Rx__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Rx__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Rx__PS CYREG_PRT3_PS
#define Rx__SHIFT 5
#define Rx__SLW CYREG_PRT3_SLW

/* Rx_Int */
#define Rx_Int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define Rx_Int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define Rx_Int__INTC_MASK 0x01u
#define Rx_Int__INTC_NUMBER 0u
#define Rx_Int__INTC_PRIOR_NUM 7u
#define Rx_Int__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define Rx_Int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define Rx_Int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Tx */
#define Tx__0__MASK 0x80u
#define Tx__0__PC CYREG_PRT3_PC7
#define Tx__0__PORT 3u
#define Tx__0__SHIFT 7
#define Tx__AG CYREG_PRT3_AG
#define Tx__AMUX CYREG_PRT3_AMUX
#define Tx__BIE CYREG_PRT3_BIE
#define Tx__BIT_MASK CYREG_PRT3_BIT_MASK
#define Tx__BYP CYREG_PRT3_BYP
#define Tx__CTL CYREG_PRT3_CTL
#define Tx__DM0 CYREG_PRT3_DM0
#define Tx__DM1 CYREG_PRT3_DM1
#define Tx__DM2 CYREG_PRT3_DM2
#define Tx__DR CYREG_PRT3_DR
#define Tx__INP_DIS CYREG_PRT3_INP_DIS
#define Tx__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Tx__LCD_EN CYREG_PRT3_LCD_EN
#define Tx__MASK 0x80u
#define Tx__PORT 3u
#define Tx__PRT CYREG_PRT3_PRT
#define Tx__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Tx__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Tx__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Tx__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Tx__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Tx__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Tx__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Tx__PS CYREG_PRT3_PS
#define Tx__SHIFT 7
#define Tx__SLW CYREG_PRT3_SLW

/* I2C_I2C_FF */
#define I2C_I2C_FF__ADR CYREG_I2C_ADR
#define I2C_I2C_FF__CFG CYREG_I2C_CFG
#define I2C_I2C_FF__CLK_DIV1 CYREG_I2C_CLK_DIV1
#define I2C_I2C_FF__CLK_DIV2 CYREG_I2C_CLK_DIV2
#define I2C_I2C_FF__CSR CYREG_I2C_CSR
#define I2C_I2C_FF__D CYREG_I2C_D
#define I2C_I2C_FF__MCSR CYREG_I2C_MCSR
#define I2C_I2C_FF__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define I2C_I2C_FF__PM_ACT_MSK 0x04u
#define I2C_I2C_FF__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define I2C_I2C_FF__PM_STBY_MSK 0x04u
#define I2C_I2C_FF__TMOUT_CFG0 CYREG_I2C_TMOUT_CFG0
#define I2C_I2C_FF__TMOUT_CFG1 CYREG_I2C_TMOUT_CFG1
#define I2C_I2C_FF__TMOUT_CSR CYREG_I2C_TMOUT_CSR
#define I2C_I2C_FF__TMOUT_SR CYREG_I2C_TMOUT_SR
#define I2C_I2C_FF__XCFG CYREG_I2C_XCFG

/* I2C_I2C_IRQ */
#define I2C_I2C_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define I2C_I2C_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define I2C_I2C_IRQ__INTC_MASK 0x8000u
#define I2C_I2C_IRQ__INTC_NUMBER 15u
#define I2C_I2C_IRQ__INTC_PRIOR_NUM 7u
#define I2C_I2C_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_15
#define I2C_I2C_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define I2C_I2C_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* LCD_LCDPort */
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2u
#define LCD_LCDPort__0__SHIFT 0
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2u
#define LCD_LCDPort__1__SHIFT 1
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2u
#define LCD_LCDPort__2__SHIFT 2
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2u
#define LCD_LCDPort__3__SHIFT 3
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2u
#define LCD_LCDPort__4__SHIFT 4
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2u
#define LCD_LCDPort__5__SHIFT 5
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2u
#define LCD_LCDPort__6__SHIFT 6
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2u
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* SCL */
#define SCL__0__MASK 0x01u
#define SCL__0__PC CYREG_PRT12_PC0
#define SCL__0__PORT 12u
#define SCL__0__SHIFT 0
#define SCL__AG CYREG_PRT12_AG
#define SCL__BIE CYREG_PRT12_BIE
#define SCL__BIT_MASK CYREG_PRT12_BIT_MASK
#define SCL__BYP CYREG_PRT12_BYP
#define SCL__DM0 CYREG_PRT12_DM0
#define SCL__DM1 CYREG_PRT12_DM1
#define SCL__DM2 CYREG_PRT12_DM2
#define SCL__DR CYREG_PRT12_DR
#define SCL__INP_DIS CYREG_PRT12_INP_DIS
#define SCL__MASK 0x01u
#define SCL__PORT 12u
#define SCL__PRT CYREG_PRT12_PRT
#define SCL__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SCL__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SCL__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SCL__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SCL__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SCL__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SCL__PS CYREG_PRT12_PS
#define SCL__SHIFT 0
#define SCL__SIO_CFG CYREG_PRT12_SIO_CFG
#define SCL__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SCL__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SCL__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SCL__SLW CYREG_PRT12_SLW

/* SDA */
#define SDA__0__MASK 0x02u
#define SDA__0__PC CYREG_PRT12_PC1
#define SDA__0__PORT 12u
#define SDA__0__SHIFT 1
#define SDA__AG CYREG_PRT12_AG
#define SDA__BIE CYREG_PRT12_BIE
#define SDA__BIT_MASK CYREG_PRT12_BIT_MASK
#define SDA__BYP CYREG_PRT12_BYP
#define SDA__DM0 CYREG_PRT12_DM0
#define SDA__DM1 CYREG_PRT12_DM1
#define SDA__DM2 CYREG_PRT12_DM2
#define SDA__DR CYREG_PRT12_DR
#define SDA__INP_DIS CYREG_PRT12_INP_DIS
#define SDA__MASK 0x02u
#define SDA__PORT 12u
#define SDA__PRT CYREG_PRT12_PRT
#define SDA__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SDA__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SDA__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SDA__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SDA__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SDA__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SDA__PS CYREG_PRT12_PS
#define SDA__SHIFT 1
#define SDA__SIO_CFG CYREG_PRT12_SIO_CFG
#define SDA__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SDA__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SDA__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SDA__SLW CYREG_PRT12_SLW

/* SW2 */
#define SW2__0__MASK 0x02u
#define SW2__0__PC CYREG_PRT6_PC1
#define SW2__0__PORT 6u
#define SW2__0__SHIFT 1
#define SW2__AG CYREG_PRT6_AG
#define SW2__AMUX CYREG_PRT6_AMUX
#define SW2__BIE CYREG_PRT6_BIE
#define SW2__BIT_MASK CYREG_PRT6_BIT_MASK
#define SW2__BYP CYREG_PRT6_BYP
#define SW2__CTL CYREG_PRT6_CTL
#define SW2__DM0 CYREG_PRT6_DM0
#define SW2__DM1 CYREG_PRT6_DM1
#define SW2__DM2 CYREG_PRT6_DM2
#define SW2__DR CYREG_PRT6_DR
#define SW2__INP_DIS CYREG_PRT6_INP_DIS
#define SW2__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define SW2__LCD_EN CYREG_PRT6_LCD_EN
#define SW2__MASK 0x02u
#define SW2__PORT 6u
#define SW2__PRT CYREG_PRT6_PRT
#define SW2__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define SW2__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define SW2__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define SW2__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define SW2__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define SW2__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define SW2__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define SW2__PS CYREG_PRT6_PS
#define SW2__SHIFT 1
#define SW2__SLW CYREG_PRT6_SLW

/* SW3 */
#define SW3__0__MASK 0x20u
#define SW3__0__PC CYREG_IO_PC_PRT15_PC5
#define SW3__0__PORT 15u
#define SW3__0__SHIFT 5
#define SW3__AG CYREG_PRT15_AG
#define SW3__AMUX CYREG_PRT15_AMUX
#define SW3__BIE CYREG_PRT15_BIE
#define SW3__BIT_MASK CYREG_PRT15_BIT_MASK
#define SW3__BYP CYREG_PRT15_BYP
#define SW3__CTL CYREG_PRT15_CTL
#define SW3__DM0 CYREG_PRT15_DM0
#define SW3__DM1 CYREG_PRT15_DM1
#define SW3__DM2 CYREG_PRT15_DM2
#define SW3__DR CYREG_PRT15_DR
#define SW3__INP_DIS CYREG_PRT15_INP_DIS
#define SW3__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define SW3__LCD_EN CYREG_PRT15_LCD_EN
#define SW3__MASK 0x20u
#define SW3__PORT 15u
#define SW3__PRT CYREG_PRT15_PRT
#define SW3__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define SW3__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define SW3__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define SW3__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define SW3__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define SW3__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define SW3__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define SW3__PS CYREG_PRT15_PS
#define SW3__SHIFT 5
#define SW3__SLW CYREG_PRT15_SLW

/* UART_BUART */
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB07_08_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB07_08_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB07_08_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B1_UDB07_08_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B1_UDB07_08_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B1_UDB07_08_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B1_UDB07_08_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB07_08_MSK
#define UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B1_UDB07_CTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B1_UDB07_ST_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B1_UDB07_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B1_UDB07_ST_CTL
#define UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B1_UDB07_MSK
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B1_UDB07_08_ST
#define UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B1_UDB07_MSK
#define UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B1_UDB07_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B1_UDB07_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B1_UDB07_ST
#define UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B1_UDB04_05_A0
#define UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B1_UDB04_05_A1
#define UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B1_UDB04_05_D0
#define UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B1_UDB04_05_D1
#define UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B1_UDB04_05_F0
#define UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B1_UDB04_05_F1
#define UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B1_UDB04_A0_A1
#define UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B1_UDB04_A0
#define UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B1_UDB04_A1
#define UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B1_UDB04_D0_D1
#define UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B1_UDB04_D0
#define UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B1_UDB04_D1
#define UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B1_UDB04_F0_F1
#define UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B1_UDB04_F0
#define UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B1_UDB04_F1
#define UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B1_UDB04_05_ST
#define UART_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_BUART_sRX_RxSts__3__POS 3
#define UART_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_BUART_sRX_RxSts__4__POS 4
#define UART_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_BUART_sRX_RxSts__5__POS 5
#define UART_BUART_sRX_RxSts__MASK 0x38u
#define UART_BUART_sRX_RxSts__MASK_REG CYREG_B1_UDB04_MSK
#define UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define UART_BUART_sRX_RxSts__STATUS_REG CYREG_B1_UDB04_ST
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB07_08_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB07_08_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB07_08_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB07_08_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB07_08_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB07_08_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB07_A0_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB07_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB07_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB07_D0_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB07_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB07_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB07_F0_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB07_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB07_F1
#define UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB06_07_A0
#define UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB06_07_A1
#define UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB06_07_D0
#define UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB06_07_D1
#define UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB06_07_F0
#define UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB06_07_F1
#define UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB06_A0_A1
#define UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB06_A0
#define UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB06_A1
#define UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB06_D0_D1
#define UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB06_D0
#define UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB06_D1
#define UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB06_F0_F1
#define UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB06_F0
#define UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB06_F1
#define UART_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_BUART_sTX_TxSts__0__POS 0
#define UART_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_BUART_sTX_TxSts__1__POS 1
#define UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB06_07_ST
#define UART_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_BUART_sTX_TxSts__2__POS 2
#define UART_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_BUART_sTX_TxSts__3__POS 3
#define UART_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB06_MSK
#define UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define UART_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB06_ST

/* UART_IntClock */
#define UART_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define UART_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define UART_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_IntClock__INDEX 0x00u
#define UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_IntClock__PM_ACT_MSK 0x01u
#define UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_IntClock__PM_STBY_MSK 0x01u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_VERSION "PSoC Creator  3.1 SP2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 6u
#define CYDEV_CHIP_DIE_PSOC4A 3u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 3u
#define CYDEV_CHIP_MEMBER_4D 2u
#define CYDEV_CHIP_MEMBER_4F 4u
#define CYDEV_CHIP_MEMBER_5A 6u
#define CYDEV_CHIP_MEMBER_5B 5u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00008001u
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */