/*
 * Copyright (C) 2021 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

/* This file is generated by GenLP_setting.pl v1.5.7 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

const unsigned int AP_CG_Golden_Setting_tcl_gs_dpidle_data[] = {
/*  Address     Mask        Golden Setting Value */
	0x0D0A002C, 0x00000001, 0x00000001,/* DBGBUSCLK_EN */
	0x0D0A0030, 0x00000001, 0x00000001,/* DBGSYSCLK_EN */
	0x0D0A0070, 0x00000001, 0x00000001,/* ATB_CON */
	0x10000000, 0x00000700, 0x00000000,/* CLK_MODE */
	0x10000040, 0x80808000, 0x80808000,/* CLK_CFG_0 */
	0x10000050, 0x80808080, 0x80808080,/* CLK_CFG_1 */
	0x10000060, 0x80808080, 0x80808080,/* CLK_CFG_2 */
	0x10000070, 0x80808080, 0x80808080,/* CLK_CFG_3 */
	0x10000080, 0x80808080, 0x80808080,/* CLK_CFG_4 */
	0x10000090, 0x80808080, 0x80800080,/* CLK_CFG_5 */
	0x100000A0, 0x80800080, 0x80000080,/* CLK_CFG_6 */
	0x100000B0, 0x80808080, 0x80808080,/* CLK_CFG_7 */
	0x100000C0, 0x80808080, 0x80808080,/* CLK_CFG_8 */
	0x100000D0, 0x80808080, 0x80808080,/* CLK_CFG_9 */
	0x100000E0, 0x00808080, 0x00008080,/* CLK_CFG_10 */
	0x100000EC, 0x80808080, 0x80808080,/* CLK_CFG_11 */
	0x10000130, 0x00000080, 0x00000080,/* CLK_CFG_20 */
	0x10000140, 0x00003030, 0x00003000,/* CLK_MISC_CFG_0 */
	0x10000320, 0x000000FC, 0x000000FC,/* CLK_AUDDIV_0 */
	0x10000328, 0x00010000, 0x00010000,/* CLK_AUDDIV_2 */
	0x10001080, 0x99FFFF7F, 0x99FFFF60,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x99FFFF7F, 0x0000001F,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0xBF9C7F9E, 0x3B140B1E,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0xBF9C7F9E, 0x84887480,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0xFFFCBFDD, 0xFFFCBFDD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0xFFFCBFDD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x0FFF87DB, 0x0CC387DB,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x0FFF87DB, 0x033C0000,/* MODULE_SW_CG_3_CLR */
	0x10001200, 0x80000000, 0x00000000,/* INFRA_TOPAXI_SI0_CTL */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C008, 0x1FFE0000, 0x1FFE0000,/* AP_PLL_CON2 */
	0x1000C00C, 0x7FFFFFFF, 0x7FFD5550,/* AP_PLL_CON3 */
	0x1000C010, 0x0003F50F, 0x0002A405,/* AP_PLL_CON4 */
	0x1000C020, 0x00036BF0, 0x000022A0,/* AP_PLL_CON8 */
	0x1000C200, 0x01000001, 0x01000001,/* ARMPLL_LL_CON0 */
	0x1000C20C, 0x00000003, 0x00000001,/* ARMPLL_LL_PWR_CON0 */
	0x1000C210, 0x01000001, 0x01000001,/* ARMPLL_BL_CON0 */
	0x1000C21C, 0x00000003, 0x00000001,/* ARMPLL_BL_PWR_CON0 */
	0x1000C220, 0x01000001, 0x01000001,/* ARMPLL_BB_CON0 */
	0x1000C22C, 0x00000003, 0x00000001,/* ARMPLL_BB_PWR_CON0 */
	0x1000C230, 0x01000001, 0x01000001,/* MAINPLL_CON0 */
	0x1000C23C, 0x00000003, 0x00000001,/* MAINPLL_PWR_CON0 */
	0x1000C240, 0x00000001, 0x00000000,/* UNIVPLL_CON0 */
	0x1000C24C, 0x00000003, 0x00000002,/* UNIVPLL_PWR_CON0 */
	0x1000C250, 0x00000001, 0x00000000,/* MFGPLL_CON0 */
	0x1000C25C, 0x00000003, 0x00000002,/* MFGPLL_PWR_CON0 */
	0x1000C260, 0x00000001, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C26C, 0x00000003, 0x00000002,/* MSDCPLL_PWR_CON0 */
	0x1000C270, 0x00000001, 0x00000000,/* TVDPLL_CON0 */
	0x1000C27C, 0x00000003, 0x00000002,/* TVDPLL_PWR_CON0 */
	0x1000C280, 0x00000001, 0x00000000,/* MMPLL_CON0 */
	0x1000C28C, 0x00000003, 0x00000002,/* MMPLL_PWR_CON0 */
	0x1000C290, 0x00000001, 0x00000000,/* MPLL_CON0 */
	0x1000C29C, 0x00000003, 0x00000002,/* MPLL_PWR_CON0 */
	0x1000C2A0, 0x01000001, 0x01000001,/* CCIPLL_CON0 */
	0x1000C2AC, 0x00000003, 0x00000001,/* CCIPLL_PWR_CON0 */
	0x1000C2B0, 0x00000001, 0x00000000,/* ADSPPLL_CON0 */
	0x1000C2BC, 0x00000003, 0x00000002,/* ADSPPLL_PWR_CON0 */
	0x1000C2C0, 0x00000001, 0x00000000,/* APLL1_CON0 */
	0x1000C2D0, 0x00000003, 0x00000002,/* APLL1_PWR_CON0 */
	0x1000C2D4, 0x00000001, 0x00000000,/* APLL2_CON0 */
	0x1000C2E4, 0x00000003, 0x00000002,/* APLL2_PWR_CON0 */
	0x1000C2EC, 0x00000001, 0x00000000,/* APUPLL_CON0 */
	0x1000C2F8, 0x00000003, 0x00000002,/* APUPLL_PWR_CON0 */
	0x1000D0F0, 0x00000001, 0x00000001,/* TIMER_CTRL */
	0x10012000, 0x00000001, 0x00000000,/* DVFSRC_BASIC_CONTROL */
	0x10219834, 0x00000003, 0x00000000,/* EMI_THRO_PRD0 */
	0x10219838, 0x00FF0000, 0x00000000,/* EMI_THRO_PRD1 */
	0x10219858, 0x00000800, 0x00000000,/* EMI_THRO_CTRL1 */
	0x1021D468, 0x000000FF, 0x00000022,/* CG_EN */
	0x1022C0F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x10443000, 0x001FEBFE, 0x00004000,/* SSPM_CK_EN */
	0x10443010, 0x00000001, 0x00000000,/* SSPM_UART_CTRL */
	0x10601000, 0x0000003B, 0x00000000,/* ADSP_CK_EN */
	0x10601010, 0x00000001, 0x00000000,/* ADSP_UART_CTRL */
	0x1100B0E4, 0x00000001, 0x00000000,/* LVTSCLKEN_0 */
	0x1100B1E4, 0x00000001, 0x00000000,/* LVTSCLKEN_1 */
	0x1100B2E4, 0x00000001, 0x00000000,/* LVTSCLKEN_2 */
	0x1100BF00, 0x80070000, 0x00000000,/* RST; BX; ACC; RAND */
	0x11017E00, 0x00000001, 0x00000001,/* AP_CLOCK_CG_RO */
	0x11210000, 0x1F1C0304, 0x1F1C0304,/* AUDIO_TOP_CON0 */
	0x11210004, 0xF033F0F0, 0xF033F0F0,/* AUDIO_TOP_CON1 */
	0x11210008, 0x01800000, 0x01800000,/* AUDIO_TOP_CON2 */
	0x112300B4, 0x00400000, 0x00000000,/* PATCH_BIT1 */
	0x11270144, 0x00000001, 0x00000000,/* UFS_ADDR_XOUFS_ST */
	0x11C9004C, 0x80000000, 0x00000000,/* MSDC_TOP_TEST_CFG2 */
	0x11CA0380, 0x00000001, 0x00000000,/* U2PHYBC12C */
	0x11CD004C, 0x80000000, 0x00000000,/* MSDC_TOP_TEST_CFG2 */
	0x13FBF004, 0x00000001, 0x00000001,/* MFG_CG_SET */
	0x13FBF008, 0x00000001, 0x00000000,/* MFG_CG_CLR */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x14000110, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON1 */
	0x140001A0, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON2 */
	0x15020000, 0x00001007, 0x00001007,/* IMG_CG_CON */
	0x15820000, 0x000011C3, 0x000011C3,/* IMG_CG_CON */
	0x1602F000, 0x00000111, 0x00000000,/* VDEC_CKEN_SET */
	0x1602F004, 0x00000001, 0x00000001,/* VDEC_CKEN_CLR */
	0x1602F008, 0x00000001, 0x00000000,/* LARB_CKEN_CON_SET */
	0x1602F00C, 0x00000001, 0x00000001,/* LARB_CKEN_CON_CLR */
	0x1602F190, 0x00000001, 0x00000000,/* MINI_MDP_CFG_0 */
	0x1602F200, 0x00000111, 0x00000000,/* LAT_CKEN_SET */
	0x1602F204, 0x00000001, 0x00000001,/* LAT_CKEN_CLR */
	0x17000000, 0x10000111, 0x00000000,/* VENCSYS_CG_CON */
	0x17000004, 0x10000111, 0x00000000,/* VENCSYS_CG_SET */
	0x17000008, 0x10000111, 0x10000111,/* VENCSYS_CG_CLR */
	0x1A000000, 0x000FFDCF, 0x000FFDCF,/* CAMSYS_CG_CON */
	0x1A04F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1A06F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1B000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON0 */
	0x1B000110, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON1 */
	0x1B000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON2 */
	0x1B000130, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON3 */
	0x1B000140, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON4 */
	0x1C000000, 0x0000017F, 0x0000017F /* IMG_CG_CON */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_dpidle =
		AP_CG_Golden_Setting_tcl_gs_dpidle_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_dpidle_len = 342;

const unsigned int AP_CG_Golden_Setting_tcl_gs_suspend_data[] = {
/*  Address     Mask        Golden Setting Value */
	0x0D0A002C, 0x00000001, 0x00000000,/* DBGBUSCLK_EN */
	0x0D0A0030, 0x00000001, 0x00000000,/* DBGSYSCLK_EN */
	0x0D0A0070, 0x00000001, 0x00000000,/* ATB_CON */
	0x10000000, 0x00000700, 0x00000000,/* CLK_MODE */
	0x10000040, 0x80808000, 0x80808000,/* CLK_CFG_0 */
	0x10000050, 0x80808080, 0x80808080,/* CLK_CFG_1 */
	0x10000060, 0x80808080, 0x80808080,/* CLK_CFG_2 */
	0x10000070, 0x80808080, 0x80808080,/* CLK_CFG_3 */
	0x10000080, 0x80808080, 0x80808080,/* CLK_CFG_4 */
	0x10000090, 0x80808080, 0x80808080,/* CLK_CFG_5 */
	0x100000A0, 0x80800080, 0x80000080,/* CLK_CFG_6 */
	0x100000B0, 0x80808080, 0x80808080,/* CLK_CFG_7 */
	0x100000C0, 0x80808080, 0x80808080,/* CLK_CFG_8 */
	0x100000D0, 0x80808080, 0x80808080,/* CLK_CFG_9 */
	0x100000E0, 0x00808080, 0x00808080,/* CLK_CFG_10 */
	0x100000EC, 0x80808080, 0x80808080,/* CLK_CFG_11 */
	0x10000130, 0x00000080, 0x00000000,/* CLK_CFG_20 */
	0x10000140, 0x00003030, 0x00003000,/* CLK_MISC_CFG_0 */
	0x10000320, 0x000000FC, 0x000000FC,/* CLK_AUDDIV_0 */
	0x10000328, 0x00010000, 0x00010000,/* CLK_AUDDIV_2 */
	0x10001080, 0x99FFFF7F, 0x99FFFF60,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x99FFFF7F, 0x0000001F,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0xBF9C7F9E, 0x3B140B1E,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0xBF9C7F9E, 0x84887480,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0xFFFCBFDD, 0xFFFCBFDD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0xFFFCBFDD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x0FFF87DB, 0x0CC387DB,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x0FFF87DB, 0x033C0000,/* MODULE_SW_CG_3_CLR */
	0x10001200, 0x80000000, 0x00000000,/* INFRA_TOPAXI_SI0_CTL */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C008, 0x1FFE0000, 0x1FFE0000,/* AP_PLL_CON2 */
	0x1000C00C, 0x7FFFFFFF, 0x7FFD5550,/* AP_PLL_CON3 */
	0x1000C010, 0x0003F50F, 0x0002A405,/* AP_PLL_CON4 */
	0x1000C020, 0x00036BF0, 0x000020A0,/* AP_PLL_CON8 */
	0x1000C200, 0x01000001, 0x01000001,/* ARMPLL_LL_CON0 */
	0x1000C20C, 0x00000003, 0x00000001,/* ARMPLL_LL_PWR_CON0 */
	0x1000C210, 0x01000001, 0x01000001,/* ARMPLL_BL_CON0 */
	0x1000C21C, 0x00000003, 0x00000001,/* ARMPLL_BL_PWR_CON0 */
	0x1000C220, 0x01000001, 0x01000001,/* ARMPLL_BB_CON0 */
	0x1000C22C, 0x00000003, 0x00000001,/* ARMPLL_BB_PWR_CON0 */
	0x1000C230, 0x01000001, 0x01000001,/* MAINPLL_CON0 */
	0x1000C23C, 0x00000003, 0x00000001,/* MAINPLL_PWR_CON0 */
	0x1000C240, 0x00000001, 0x00000000,/* UNIVPLL_CON0 */
	0x1000C24C, 0x00000003, 0x00000002,/* UNIVPLL_PWR_CON0 */
	0x1000C250, 0x00000001, 0x00000000,/* MFGPLL_CON0 */
	0x1000C25C, 0x00000003, 0x00000002,/* MFGPLL_PWR_CON0 */
	0x1000C260, 0x00000001, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C26C, 0x00000003, 0x00000002,/* MSDCPLL_PWR_CON0 */
	0x1000C270, 0x00000001, 0x00000000,/* TVDPLL_CON0 */
	0x1000C27C, 0x00000003, 0x00000002,/* TVDPLL_PWR_CON0 */
	0x1000C280, 0x00000001, 0x00000000,/* MMPLL_CON0 */
	0x1000C28C, 0x00000003, 0x00000002,/* MMPLL_PWR_CON0 */
	0x1000C290, 0x00000001, 0x00000000,/* MPLL_CON0 */
	0x1000C29C, 0x00000003, 0x00000002,/* MPLL_PWR_CON0 */
	0x1000C2A0, 0x01000001, 0x01000001,/* CCIPLL_CON0 */
	0x1000C2AC, 0x00000003, 0x00000001,/* CCIPLL_PWR_CON0 */
	0x1000C2B0, 0x00000001, 0x00000000,/* ADSPPLL_CON0 */
	0x1000C2BC, 0x00000003, 0x00000002,/* ADSPPLL_PWR_CON0 */
	0x1000C2C0, 0x00000001, 0x00000000,/* APLL1_CON0 */
	0x1000C2D0, 0x00000003, 0x00000002,/* APLL1_PWR_CON0 */
	0x1000C2D4, 0x00000001, 0x00000000,/* APLL2_CON0 */
	0x1000C2E4, 0x00000003, 0x00000002,/* APLL2_PWR_CON0 */
	0x1000C2EC, 0x00000001, 0x00000000,/* APUPLL_CON0 */
	0x1000C2F8, 0x00000003, 0x00000002,/* APUPLL_PWR_CON0 */
	0x1000D0F0, 0x00000001, 0x00000001,/* TIMER_CTRL */
	0x10012000, 0x00000001, 0x00000000,/* DVFSRC_BASIC_CONTROL */
	0x10219834, 0x00000003, 0x00000000,/* EMI_THRO_PRD0 */
	0x10219838, 0x00FF0000, 0x00000000,/* EMI_THRO_PRD1 */
	0x10219858, 0x00000800, 0x00000000,/* EMI_THRO_CTRL1 */
	0x1021D468, 0x000000FF, 0x00000022,/* CG_EN */
	0x1022C0F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x10443000, 0x001FEBFE, 0x00004000,/* SSPM_CK_EN */
	0x10443010, 0x00000001, 0x00000000,/* SSPM_UART_CTRL */
	0x10601000, 0x0000003B, 0x00000000,/* ADSP_CK_EN */
	0x10601010, 0x00000001, 0x00000000,/* ADSP_UART_CTRL */
	0x1100B0E4, 0x00000001, 0x00000000,/* LVTSCLKEN_0 */
	0x1100B1E4, 0x00000001, 0x00000000,/* LVTSCLKEN_1 */
	0x1100B2E4, 0x00000001, 0x00000000,/* LVTSCLKEN_2 */
	0x1100BF00, 0x80070000, 0x00000000,/* RST; BX; ACC; RAND */
	0x11017E00, 0x00000001, 0x00000001,/* AP_CLOCK_CG_RO */
	0x11210000, 0x1F1C0304, 0x1F1C0304,/* AUDIO_TOP_CON0 */
	0x11210004, 0xF033F0F0, 0xF033F0F0,/* AUDIO_TOP_CON1 */
	0x11210008, 0x01800000, 0x01800000,/* AUDIO_TOP_CON2 */
	0x112300B4, 0x00400000, 0x00000000,/* PATCH_BIT1 */
	0x11270144, 0x00000001, 0x00000000,/* UFS_ADDR_XOUFS_ST */
	0x11C9004C, 0x80000000, 0x00000000,/* MSDC_TOP_TEST_CFG2 */
	0x11CA0380, 0x00000001, 0x00000000,/* U2PHYBC12C */
	0x11CD004C, 0x80000000, 0x00000000,/* MSDC_TOP_TEST_CFG2 */
	0x13FBF004, 0x00000001, 0x00000001,/* MFG_CG_SET */
	0x13FBF008, 0x00000001, 0x00000000,/* MFG_CG_CLR */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x14000110, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON1 */
	0x140001A0, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON2 */
	0x14012000, 0x00000101, 0x00000000,/* DISP_DSC_CON */
	0x14012400, 0x00000101, 0x00000000,/* DISP_DSC1_CON */
	0x15020000, 0x00001007, 0x00001007,/* IMG_CG_CON */
	0x15820000, 0x000011C3, 0x000011C3,/* IMG_CG_CON */
	0x1602F000, 0x00000111, 0x00000000,/* VDEC_CKEN_SET */
	0x1602F004, 0x00000001, 0x00000001,/* VDEC_CKEN_CLR */
	0x1602F008, 0x00000001, 0x00000000,/* LARB_CKEN_CON_SET */
	0x1602F00C, 0x00000001, 0x00000001,/* LARB_CKEN_CON_CLR */
	0x1602F190, 0x00000001, 0x00000000,/* MINI_MDP_CFG_0 */
	0x1602F200, 0x00000111, 0x00000000,/* LAT_CKEN_SET */
	0x1602F204, 0x00000001, 0x00000001,/* LAT_CKEN_CLR */
	0x17000000, 0x10000111, 0x00000000,/* VENCSYS_CG_CON */
	0x17000004, 0x10000111, 0x00000000,/* VENCSYS_CG_SET */
	0x17000008, 0x10000111, 0x10000111,/* VENCSYS_CG_CLR */
	0x1A000000, 0x000FFDCF, 0x000FFDCF,/* CAMSYS_CG_CON */
	0x1A04F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1A06F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1B000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON0 */
	0x1B000110, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON1 */
	0x1B000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON2 */
	0x1B000130, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON3 */
	0x1B000140, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON4 */
	0x1C000000, 0x0000017F, 0x0000017F /* IMG_CG_CON */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_suspend =
		AP_CG_Golden_Setting_tcl_gs_suspend_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_suspend_len = 348;

/*NO CODEGEN FOR SODI */
const unsigned int AP_CG_Golden_Setting_tcl_gs_sodi_data[] = {
/*	Address		Mask		Golden Setting Value */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_sodi;

unsigned int AP_CG_Golden_Setting_tcl_gs_sodi_len;
