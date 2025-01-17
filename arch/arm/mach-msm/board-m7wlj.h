/* Copyright (c) 2011-2012, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_MSM_BOARD_M7WLJ_H
#define __ARCH_ARM_MACH_MSM_BOARD_M7WLJ_H

#include <linux/regulator/msm-gpio-regulator.h>
#include <linux/mfd/pm8xxx/pm8921.h>
#include <linux/mfd/pm8xxx/pm8821.h>
#include <mach/msm_memtypes.h>
#include <mach/irqs.h>
#include <mach/rpm-regulator.h>

#define EVM	0x99
#define EVM1	99
#define XA	0
#define XB	1
#define XC	2
#define XD	3
#define PVT	0x80

#define GPIO(x) (x)
#define PMGPIO(x) (x)

int __init m7wl_init_keypad(void);


#define LCD_TE			GPIO(0)
#define RAW_RSTz		GPIO(1)
#define CAM2_RSTz		GPIO(2)
#define APQ2MDM_IPC2	GPIO(3)
#define IO_EXT_RSTz		GPIO(4)
#define CAM_MCLK0		GPIO(5)
#define CPU_CIR_TX		GPIO(6)
#define CPU_CIR_RX		GPIO(7)
#define TP_I2C_SDA		GPIO(8)
#define TP_I2C_SCL		GPIO(9)
#define FEL_RX			GPIO(10)
#define FEL_TX			GPIO(11)
#define CAM_I2C_SDA		GPIO(12)
#define CAM_I2C_SCL		GPIO(13)
#define BT_UART_TX		GPIO(14)
#define BT_UART_RX		GPIO(15)
#define BT_UART_CTSz		GPIO(16)
#define BT_UART_RTSz		GPIO(17)
#define AP2MDM_ERR_FATAL	GPIO(18)
#define MDM2AP_ERR_FATAL	GPIO(19)
#define AUD_I2C_SDA		GPIO(20)
#define AUD_I2C_SCL		GPIO(21)
#define CPU_1WIRE_TX		GPIO(22)
#define CPU_1WIRE_RX		GPIO(23)
#define SR_I2C_SDA		GPIO(24)
#define SR_I2C_SCL		GPIO(25)
#define PWR_KEY_MSMz		GPIO(26)
#define AUD_CPU_RX_I2S_WS	GPIO(27)
#define AUD_CPU_RX_I2S_SCK	GPIO(28)
#define AUD_TFA_DO_A		GPIO(29)
#define AP2MDM_VDDMIN		GPIO(30)
#define LCD_RST			GPIO(31)
#define AUD_CPU_RX_I2S_SD1	GPIO(32)
#define RAW_INTR1		GPIO(33)
#define TP_ATTz			GPIO(34)
#define AUD_FM_I2S_CLK		GPIO(35)
#define AUD_FM_I2S_WS		GPIO(36)
#define AUD_FM_I2S_DO		GPIO(37)
#define MHL_INT			GPIO(38)
#define AUD_CPU_MCLK		GPIO(39)
#define AUD_CPU_SB_CLK		GPIO(40)
#define AUD_CPU_SB_DATA		GPIO(41)
#define AUD_WCD_INTR_OUT	GPIO(42)
#define AUD_BTPCM_DIN		GPIO(43)
#define AUD_BTPCM_DOUT		GPIO(44)
#define AUD_BTPCM_SYNC		GPIO(45)
#define AUD_BTPCM_CLK		GPIO(46)
#define AP2MDM_SOFT_RESET	GPIO(47)
#define AP2MDM_STATUS		GPIO(48)
#define MDM2AP_STATUS		GPIO(49)
#define VOL_UPz			GPIO(50)
#define MCAM_SPI_DO		GPIO(51)
#define MCAM_SPI_DI		GPIO(52)
#define MCAM_SPI_CS0		GPIO(53)
#define MCAM_SPI_CLK		GPIO(54)
#define CAM_BTN_STEP2z		GPIO(55)
#define CIR_LS_EN_XB	GPIO(55)
#define RAW_INTR0		GPIO(56)
#define CAM_BTN_STEP1z		GPIO(57)
#define SIR_SD_XB		GPIO(57)
#define TS_SYNC			GPIO(58)
#define TS_CLK			GPIO(59)
#define TS_EN			GPIO(60)
#define TS_DATA			GPIO(61)
#define AP2MDM_PON_RESET_N	GPIO(62)
#define SDMC_SD_D3		GPIO(63)
#define SDMC_SD_D2		GPIO(64)
#define SDMC_SD_D1		GPIO(65)
#define SDMC_SD_D0		GPIO(66)
#define SDMC_SD_CMD		GPIO(67)
#define SDMC_SD_CLK		GPIO(68)
#define NC_GPIO_69		GPIO(69)
#define HDMI_DDC_CLK		GPIO(70)
#define HDMI_DDC_DATA		GPIO(71)
#define HDMI_HPLG_DET		GPIO(72)
#define PM8921_APC_SEC_IRQ_N	GPIO(73)
#define PM8921_APC_USR_IRQ_N	GPIO(74)
#define PM8921_MDM_IRQ_N	GPIO(75)
#define PM8821_APC_SEC_IRQ_N	GPIO(76)
#define VOL_DOWNz		GPIO(77)
#define PS_HOLD_APQ		GPIO(78)
#define SSBI_PM8821		GPIO(79)
#define MDM2AP_VDDMIN		GPIO(80)
#define APQ2MDM_IPC1		GPIO(81)
#define UART_TX			GPIO(82)
#define UART_RX			GPIO(83)
#define MDM2AP_HSIC_READY		GPIO(84)
#define TP_RSTz			GPIO(85)
#define AP2MDM_WAKEUP		GPIO(86)
#define PWR_MISTOUCH		GPIO(87)
#define HSIC_STROBE		GPIO(88)
#define HSIC_DATA		GPIO(89)

#define CAM_VCM_PD		PMGPIO(1)
#define MHL_RSTz		PMGPIO(2)
#define GYRO_INT		PMGPIO(3)
#define G_SENSOR_INT	PMGPIO(4)
#define AUD_RECEIVER_SEL	PMGPIO(5)
#define COMPASS_AKM_INT		PMGPIO(6)
#define USB1_HS_ID_GPIO		PMGPIO(7)
#define BT_SHUTDOWNz		PMGPIO(8)
#define V_AUD_HSMIC_2V85_EN	PMGPIO(9)
#define AUD_HP_EN		PMGPIO(10)
#define AUD_DMIC2_SEL		PMGPIO(11)
#define BL_HW_EN		PMGPIO(12)
#define FEL_INTU		PMGPIO(13)
#define FEL_INT			PMGPIO(14)
#define MHL_USBz_SW		PMGPIO(15)
#define WL_REG_ON		PMGPIO(16)
#define PROXIMITY_INT		PMGPIO(17)
#define TORCH_FLASHz		PMGPIO(18)
#define FLASH_EN		PMGPIO(19)
#define EARPHONE_DETz		PMGPIO(20)
#define LCD_ID0			PMGPIO(21)
#define SEG_INT			PMGPIO(22)
#define BT_WAKE			PMGPIO(23)
#define AUD_RECEIVER_EN	PMGPIO(24)
#define SDC3_CD			PMGPIO(25)
#define V_CAM_D1V2_EN		PMGPIO(26)
#define CHARGER_STAT		PMGPIO(27)
#define FEL_PON			PMGPIO(28)
#define FEL_CEN			PMGPIO(29)
#define FEL_RFS			PMGPIO(30)
#define FELICA_CEN		PMGPIO(31)
#define FELICA_LOCK		PMGPIO(32)
#define BT_HOST_WAKE		PMGPIO(33)
#define AUD_WCD_RESET_N		PMGPIO(34)
#define CIR_RSTz			PMGPIO(35)
#define V_LCM_N5V_EN		PMGPIO(36)
#define V_LCM_P5V_EN		PMGPIO(37)
#define WL_HOST_WAKE		PMGPIO(38)
#define WW_IRQ			PMGPIO(38)
#define SSBI_PMIC_FWD_CLK	PMGPIO(39)
#define REGION_ID		PMGPIO(40)
#define AUD_UART_OEz		PMGPIO(41)
#define CAM_PWDN		PMGPIO(42)
#define WIFI_32K_CLK		PMGPIO(43)
#define LCD_ID1			PMGPIO(44)
#define PM8921_GPIO_BASE		NR_GPIO_IRQS
#define PM8921_GPIO_PM_TO_SYS(pm_gpio)	(pm_gpio - 1 + PM8921_GPIO_BASE)
#define PM8921_MPP_BASE			(PM8921_GPIO_BASE + PM8921_NR_GPIOS)
#define PM8921_MPP_PM_TO_SYS(pm_mpp)	(pm_mpp - 1 + PM8921_MPP_BASE)
#define PM8921_IRQ_BASE			(NR_MSM_IRQS + NR_GPIO_IRQS)

#define PM8821_MPP_BASE			(PM8921_MPP_BASE + PM8921_NR_MPPS)
#define PM8821_MPP_PM_TO_SYS(pm_mpp)	(pm_mpp - 1 + PM8821_MPP_BASE)
#define PM8821_IRQ_BASE			(PM8921_IRQ_BASE + PM8921_NR_IRQS)

extern struct pm8xxx_regulator_platform_data
	m7wl_pm8921_regulator_pdata[] __devinitdata;

extern int m7wl_pm8921_regulator_pdata_len __devinitdata;

#define GPIO_VREG_ID_EXT_5V		0
#define GPIO_VREG_ID_EXT_3P3V		1
#define GPIO_VREG_ID_EXT_TS_SW		2
#define GPIO_VREG_ID_EXT_MPP8		3

extern struct gpio_regulator_platform_data
	m7wl_gpio_regulator_pdata[] __devinitdata;

extern struct rpm_regulator_platform_data
	m7wl_rpm_regulator_pdata __devinitdata;

extern struct regulator_init_data m7wl_saw_regulator_pdata_8921_s5;
extern struct regulator_init_data m7wl_saw_regulator_pdata_8921_s6;
extern struct regulator_init_data m7wl_saw_regulator_pdata_8821_s0;
extern struct regulator_init_data m7wl_saw_regulator_pdata_8821_s1;

struct mmc_platform_data;
int __init apq8064_add_sdcc(unsigned int controller,
		struct mmc_platform_data *plat);

void m7wlj_init_mmc(void);
int m7wl_wifi_init(void);
void m7wlj_init_gpiomux(void);
void m7wl_init_pmic(void);
void m7wlj_init_pmic_register_cam_cb(void *cam_vcm_on_cb, void *cam_vcm_off_cb);

#if 1	
extern struct platform_device m7wlj_msm_rawchip_device;
#endif
void m7wlj_init_cam(void);

#define APQ_8064_GSBI1_QUP_I2C_BUS_ID 0
#define APQ_8064_GSBI3_QUP_I2C_BUS_ID 3
#define APQ_8064_GSBI4_QUP_I2C_BUS_ID 4

void m7wl_init_fb(void);
void m7wl_allocate_fb_region(void);
void m7wl_mdp_writeback(struct memtype_reserve *reserve_table);

void m7wl_init_gpu(void);
void m7wl_pm8xxx_gpio_mpp_init(void);
void m7wl_usb_uart_switch(int nvbus);

#ifdef CONFIG_RESET_BY_CABLE_IN
void reset_dflipflop(void);
#endif

#endif
