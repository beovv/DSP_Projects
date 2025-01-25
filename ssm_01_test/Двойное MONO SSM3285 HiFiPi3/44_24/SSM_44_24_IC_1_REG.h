/*
 * File:           C:\Users\oleg.tetushkin\Documents\Двойное MONO SSM3285\44_24\SSM_44_24_IC_1_REG.h
 *
 * Created:        Thursday, February 25, 2021 10:05:48 AM
 * Description:    SSM_44_24:IC 1 control register definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2021 Analog Devices, Inc. All rights reserved.
 */
#ifndef __SSM_44_24_IC_1_REG_H__
#define __SSM_44_24_IC_1_REG_H__


/* VENDOR_ID  - Registers (IC 1) */
#define REG_VENDOR_ID_IC_1_ADDR                   0x0
#define REG_VENDOR_ID_IC_1_BYTE                   0
#define REG_VENDOR_ID_IC_1_VALUE                  0x41

/* DEVICE_ID1  - Registers (IC 1) */
#define REG_DEVICE_ID1_IC_1_ADDR                  0x1
#define REG_DEVICE_ID1_IC_1_BYTE                  0
#define REG_DEVICE_ID1_IC_1_VALUE                 0x35

/* DEVICE_ID2  - Registers (IC 1) */
#define REG_DEVICE_ID2_IC_1_ADDR                  0x2
#define REG_DEVICE_ID2_IC_1_BYTE                  0
#define REG_DEVICE_ID2_IC_1_VALUE                 0x82

/* REVISION  - Registers (IC 1) */
#define REG_REVISION_IC_1_ADDR                    0x3
#define REG_REVISION_IC_1_BYTE                    0
#define REG_REVISION_IC_1_VALUE                   0x3

/* POWER_CTRL  - Registers (IC 1) */
#define REG_POWER_CTRL_IC_1_ADDR                  0x4
#define REG_POWER_CTRL_IC_1_BYTE                  1
#define REG_POWER_CTRL_IC_1_VALUE                 0x90

/* AMP_DAC_CTRL  - Registers (IC 1) */
#define REG_AMP_DAC_CTRL_IC_1_ADDR                0x5
#define REG_AMP_DAC_CTRL_IC_1_BYTE                1
#define REG_AMP_DAC_CTRL_IC_1_VALUE               0x83

/* DAC_CTRL  - Registers (IC 1) */
#define REG_DAC_CTRL_IC_1_ADDR                    0x6
#define REG_DAC_CTRL_IC_1_BYTE                    1
#define REG_DAC_CTRL_IC_1_VALUE                   0x12

/* VOL_LEFT_CTRL  - Registers (IC 1) */
#define REG_VOL_LEFT_CTRL_IC_1_ADDR               0x7
#define REG_VOL_LEFT_CTRL_IC_1_BYTE               1
#define REG_VOL_LEFT_CTRL_IC_1_VALUE              0xAB

/* VOL_RIGHT_CTRL  - Registers (IC 1) */
#define REG_VOL_RIGHT_CTRL_IC_1_ADDR              0x8
#define REG_VOL_RIGHT_CTRL_IC_1_BYTE              1
#define REG_VOL_RIGHT_CTRL_IC_1_VALUE             0xAB

/* SAI_CTRL1  - Registers (IC 1) */
#define REG_SAI_CTRL1_IC_1_ADDR                   0x9
#define REG_SAI_CTRL1_IC_1_BYTE                   1
#define REG_SAI_CTRL1_IC_1_VALUE                  0x51

/* SAI_CTRL2  - Registers (IC 1) */
#define REG_SAI_CTRL2_IC_1_ADDR                   0xA
#define REG_SAI_CTRL2_IC_1_BYTE                   1
#define REG_SAI_CTRL2_IC_1_VALUE                  0x7

/* SLOT_LEFT_CTRL  - Registers (IC 1) */
#define REG_SLOT_LEFT_CTRL_IC_1_ADDR              0xB
#define REG_SLOT_LEFT_CTRL_IC_1_BYTE              1
#define REG_SLOT_LEFT_CTRL_IC_1_VALUE             0x0

/* SLOT_RIGHT_CTRL  - Registers (IC 1) */
#define REG_SLOT_RIGHT_CTRL_IC_1_ADDR             0xC
#define REG_SLOT_RIGHT_CTRL_IC_1_BYTE             1
#define REG_SLOT_RIGHT_CTRL_IC_1_VALUE            0x0

/* LIM_LEFT_CTRL1  - Registers (IC 1) */
#define REG_LIM_LEFT_CTRL1_IC_1_ADDR              0xE
#define REG_LIM_LEFT_CTRL1_IC_1_BYTE              1
#define REG_LIM_LEFT_CTRL1_IC_1_VALUE             0xA5

/* LIM_LEFT_CTRL2  - Registers (IC 1) */
#define REG_LIM_LEFT_CTRL2_IC_1_ADDR              0xF
#define REG_LIM_LEFT_CTRL2_IC_1_BYTE              1
#define REG_LIM_LEFT_CTRL2_IC_1_VALUE             0x9

/* LIM_LEFT_CTRL3  - Registers (IC 1) */
#define REG_LIM_LEFT_CTRL3_IC_1_ADDR              0x10
#define REG_LIM_LEFT_CTRL3_IC_1_BYTE              1
#define REG_LIM_LEFT_CTRL3_IC_1_VALUE             0x22

/* LIM_RIGHT_CTRL1  - Registers (IC 1) */
#define REG_LIM_RIGHT_CTRL1_IC_1_ADDR             0x11
#define REG_LIM_RIGHT_CTRL1_IC_1_BYTE             1
#define REG_LIM_RIGHT_CTRL1_IC_1_VALUE            0xA9

/* LIM_RIGHT_CTRL2  - Registers (IC 1) */
#define REG_LIM_RIGHT_CTRL2_IC_1_ADDR             0x12
#define REG_LIM_RIGHT_CTRL2_IC_1_BYTE             1
#define REG_LIM_RIGHT_CTRL2_IC_1_VALUE            0x9

/* LIM_RIGHT_CTRL3  - Registers (IC 1) */
#define REG_LIM_RIGHT_CTRL3_IC_1_ADDR             0x13
#define REG_LIM_RIGHT_CTRL3_IC_1_BYTE             1
#define REG_LIM_RIGHT_CTRL3_IC_1_VALUE            0x22

/* CLIP_LEFT_CTRL  - Registers (IC 1) */
#define REG_CLIP_LEFT_CTRL_IC_1_ADDR              0x14
#define REG_CLIP_LEFT_CTRL_IC_1_BYTE              1
#define REG_CLIP_LEFT_CTRL_IC_1_VALUE             0xFF

/* CLIP_RIGHT_CTRL  - Registers (IC 1) */
#define REG_CLIP_RIGHT_CTRL_IC_1_ADDR             0x15
#define REG_CLIP_RIGHT_CTRL_IC_1_BYTE             1
#define REG_CLIP_RIGHT_CTRL_IC_1_VALUE            0xFF

/* FAULT_CTRL1  - Registers (IC 1) */
#define REG_FAULT_CTRL1_IC_1_ADDR                 0x16
#define REG_FAULT_CTRL1_IC_1_BYTE                 1
#define REG_FAULT_CTRL1_IC_1_VALUE                0x22

/* FAULT_CTRL2  - Registers (IC 1) */
#define REG_FAULT_CTRL2_IC_1_ADDR                 0x17
#define REG_FAULT_CTRL2_IC_1_BYTE                 1
#define REG_FAULT_CTRL2_IC_1_VALUE                0x30

/* STATUS1  - Registers (IC 1) */
#define REG_STATUS1_IC_1_ADDR                     0x18
#define REG_STATUS1_IC_1_BYTE                     0
#define REG_STATUS1_IC_1_VALUE                    0x0

/* STATUS2  - Registers (IC 1) */
#define REG_STATUS2_IC_1_ADDR                     0x19
#define REG_STATUS2_IC_1_BYTE                     0
#define REG_STATUS2_IC_1_VALUE                    0x0

/* VBAT  - Registers (IC 1) */
#define REG_VBAT_IC_1_ADDR                        0x1A
#define REG_VBAT_IC_1_BYTE                        0
#define REG_VBAT_IC_1_VALUE                       0xED

/* TEMP  - Registers (IC 1) */
#define REG_TEMP_IC_1_ADDR                        0x1B
#define REG_TEMP_IC_1_BYTE                        0
#define REG_TEMP_IC_1_VALUE                       0x5E

/* SOFT_RESET  - Registers (IC 1) */
#define REG_SOFT_RESET_IC_1_ADDR                  0x1C
#define REG_SOFT_RESET_IC_1_BYTE                  1
#define REG_SOFT_RESET_IC_1_VALUE                 0x0


/*
 *
 * Control register's field descriptions
 *
 */

/* VENDOR_ID (IC 1) */
#define R0_VENDOR_ID_VENDOR_IC_1                  0x41   /* 01000001b	[7:0] */
#define R0_VENDOR_ID_VENDOR_IC_1_MASK             0xFF
#define R0_VENDOR_ID_VENDOR_IC_1_SHIFT            0

/* DEVICE_ID1 (IC 1) */
#define R1_DEVICE_ID1_DEVICE1_IC_1                0x35   /* 00110101b	[7:0] */
#define R1_DEVICE_ID1_DEVICE1_IC_1_MASK           0xFF
#define R1_DEVICE_ID1_DEVICE1_IC_1_SHIFT          0

/* DEVICE_ID2 (IC 1) */
#define R2_DEVICE_ID2_DEVICE2_IC_1                0x82   /* 10000010b	[7:0] */
#define R2_DEVICE_ID2_DEVICE2_IC_1_MASK           0xFF
#define R2_DEVICE_ID2_DEVICE2_IC_1_SHIFT          0

/* REVISION (IC 1) */
#define R3_REVISION_REV_IC_1                      0x03   /* 00000011b	[7:0] */
#define R3_REVISION_REV_IC_1_MASK                 0xFF
#define R3_REVISION_REV_IC_1_SHIFT                0

/* POWER_CTRL (IC 1) */
#define R4_POWER_CTRL_SPWDN_IC_1                  0x0    /* 0b	[0] */
#define R4_POWER_CTRL_L_PWDN_IC_1                 0x0    /* 0b	[2] */
#define R4_POWER_CTRL_R_PWDN_IC_1                 0x0    /* 0b	[3] */
#define R4_POWER_CTRL_MONO_IC_1                   0x1    /* 1b	[4] */
#define R4_POWER_CTRL_TEMP_PWDN_IC_1              0x0    /* 0b	[5] */
#define R4_POWER_CTRL_APWDN_EN_IC_1               0x1    /* 1b	[7] */
#define R4_POWER_CTRL_SPWDN_IC_1_MASK             0x1
#define R4_POWER_CTRL_SPWDN_IC_1_SHIFT            0
#define R4_POWER_CTRL_L_PWDN_IC_1_MASK            0x4
#define R4_POWER_CTRL_L_PWDN_IC_1_SHIFT           2
#define R4_POWER_CTRL_R_PWDN_IC_1_MASK            0x8
#define R4_POWER_CTRL_R_PWDN_IC_1_SHIFT           3
#define R4_POWER_CTRL_MONO_IC_1_MASK              0x10
#define R4_POWER_CTRL_MONO_IC_1_SHIFT             4
#define R4_POWER_CTRL_TEMP_PWDN_IC_1_MASK         0x20
#define R4_POWER_CTRL_TEMP_PWDN_IC_1_SHIFT        5
#define R4_POWER_CTRL_APWDN_EN_IC_1_MASK          0x80
#define R4_POWER_CTRL_APWDN_EN_IC_1_SHIFT         7

/* AMP_DAC_CTRL (IC 1) */
#define R5_AMP_DAC_CTRL_ANA_GAIN_IC_1             0x3    /* 11b	[1:0] */
#define R5_AMP_DAC_CTRL_EDGE_IC_1                 0x0    /* 0b	[3] */
#define R5_AMP_DAC_CTRL_DAC_POL_L_IC_1            0x0    /* 0b	[4] */
#define R5_AMP_DAC_CTRL_DAC_POL_R_IC_1            0x0    /* 0b	[5] */
#define R5_AMP_DAC_CTRL_DAC_LPM_IC_1              0x1    /* 1b	[7] */
#define R5_AMP_DAC_CTRL_ANA_GAIN_IC_1_MASK        0x3
#define R5_AMP_DAC_CTRL_ANA_GAIN_IC_1_SHIFT       0
#define R5_AMP_DAC_CTRL_EDGE_IC_1_MASK            0x8
#define R5_AMP_DAC_CTRL_EDGE_IC_1_SHIFT           3
#define R5_AMP_DAC_CTRL_DAC_POL_L_IC_1_MASK       0x10
#define R5_AMP_DAC_CTRL_DAC_POL_L_IC_1_SHIFT      4
#define R5_AMP_DAC_CTRL_DAC_POL_R_IC_1_MASK       0x20
#define R5_AMP_DAC_CTRL_DAC_POL_R_IC_1_SHIFT      5
#define R5_AMP_DAC_CTRL_DAC_LPM_IC_1_MASK         0x80
#define R5_AMP_DAC_CTRL_DAC_LPM_IC_1_SHIFT        7

/* DAC_CTRL (IC 1) */
#define R6_DAC_CTRL_DAC_FS_IC_1                   0x2    /* 010b	[2:0] */
#define R6_DAC_CTRL_DAC_HPF_IC_1                  0x1    /* 1b	[4] */
#define R6_DAC_CTRL_DAC_MUTE_L_IC_1               0x0    /* 0b	[5] */
#define R6_DAC_CTRL_DAC_MUTE_R_IC_1               0x0    /* 0b	[6] */
#define R6_DAC_CTRL_DAC_HV_IC_1                   0x0    /* 0b	[7] */
#define R6_DAC_CTRL_DAC_FS_IC_1_MASK              0x7
#define R6_DAC_CTRL_DAC_FS_IC_1_SHIFT             0
#define R6_DAC_CTRL_DAC_HPF_IC_1_MASK             0x10
#define R6_DAC_CTRL_DAC_HPF_IC_1_SHIFT            4
#define R6_DAC_CTRL_DAC_MUTE_L_IC_1_MASK          0x20
#define R6_DAC_CTRL_DAC_MUTE_L_IC_1_SHIFT         5
#define R6_DAC_CTRL_DAC_MUTE_R_IC_1_MASK          0x40
#define R6_DAC_CTRL_DAC_MUTE_R_IC_1_SHIFT         6
#define R6_DAC_CTRL_DAC_HV_IC_1_MASK              0x80
#define R6_DAC_CTRL_DAC_HV_IC_1_SHIFT             7

/* VOL_LEFT_CTRL (IC 1) */
#define R7_VOL_LEFT_CTRL_VOL_L_IC_1               0xAB   /* 10101011b	[7:0] */
#define R7_VOL_LEFT_CTRL_VOL_L_IC_1_MASK          0xFF
#define R7_VOL_LEFT_CTRL_VOL_L_IC_1_SHIFT         0

/* VOL_RIGHT_CTRL (IC 1) */
#define R8_VOL_RIGHT_CTRL_VOL_R_IC_1              0xAB   /* 10101011b	[7:0] */
#define R8_VOL_RIGHT_CTRL_VOL_R_IC_1_MASK         0xFF
#define R8_VOL_RIGHT_CTRL_VOL_R_IC_1_SHIFT        0

/* SAI_CTRL1 (IC 1) */
#define R9_SAI_CTRL1_SAI_MODE_IC_1                0x1    /* 1b	[0] */
#define R9_SAI_CTRL1_SDATA_FMT_IC_1               0x0    /* 0b	[1] */
#define R9_SAI_CTRL1_FSYNC_MODE_IC_1              0x0    /* 0b	[2] */
#define R9_SAI_CTRL1_TDM_BCLKS_IC_1               0x2    /* 010b	[5:3] */
#define R9_SAI_CTRL1_BCLK_POL_IC_1                0x1    /* 1b	[6] */
#define R9_SAI_CTRL1_SAI_MODE_IC_1_MASK           0x1
#define R9_SAI_CTRL1_SAI_MODE_IC_1_SHIFT          0
#define R9_SAI_CTRL1_SDATA_FMT_IC_1_MASK          0x2
#define R9_SAI_CTRL1_SDATA_FMT_IC_1_SHIFT         1
#define R9_SAI_CTRL1_FSYNC_MODE_IC_1_MASK         0x4
#define R9_SAI_CTRL1_FSYNC_MODE_IC_1_SHIFT        2
#define R9_SAI_CTRL1_TDM_BCLKS_IC_1_MASK          0x38
#define R9_SAI_CTRL1_TDM_BCLKS_IC_1_SHIFT         3
#define R9_SAI_CTRL1_BCLK_POL_IC_1_MASK           0x40
#define R9_SAI_CTRL1_BCLK_POL_IC_1_SHIFT          6

/* SAI_CTRL2 (IC 1) */
#define R10_SAI_CTRL2_AUTO_SLOT_IC_1              0x1    /* 1b	[0] */
#define R10_SAI_CTRL2_VOL_LINK_IC_1               0x1    /* 1b	[1] */
#define R10_SAI_CTRL2_CLIP_LINK_IC_1              0x1    /* 1b	[2] */
#define R10_SAI_CTRL2_VOL_ZC_ONLY_IC_1            0x0    /* 0b	[3] */
#define R10_SAI_CTRL2_DATA_WIDTH_IC_1             0x0    /* 0b	[4] */
#define R10_SAI_CTRL2_SDATA_EDGE_IC_1             0x0    /* 0b	[7] */
#define R10_SAI_CTRL2_AUTO_SLOT_IC_1_MASK         0x1
#define R10_SAI_CTRL2_AUTO_SLOT_IC_1_SHIFT        0
#define R10_SAI_CTRL2_VOL_LINK_IC_1_MASK          0x2
#define R10_SAI_CTRL2_VOL_LINK_IC_1_SHIFT         1
#define R10_SAI_CTRL2_CLIP_LINK_IC_1_MASK         0x4
#define R10_SAI_CTRL2_CLIP_LINK_IC_1_SHIFT        2
#define R10_SAI_CTRL2_VOL_ZC_ONLY_IC_1_MASK       0x8
#define R10_SAI_CTRL2_VOL_ZC_ONLY_IC_1_SHIFT      3
#define R10_SAI_CTRL2_DATA_WIDTH_IC_1_MASK        0x10
#define R10_SAI_CTRL2_DATA_WIDTH_IC_1_SHIFT       4
#define R10_SAI_CTRL2_SDATA_EDGE_IC_1_MASK        0x80
#define R10_SAI_CTRL2_SDATA_EDGE_IC_1_SHIFT       7

/* SLOT_LEFT_CTRL (IC 1) */
#define R11_SLOT_LEFT_CTRL_TDM_SLOT_L_IC_1        0x0    /* 00000b	[4:0] */
#define R11_SLOT_LEFT_CTRL_TDM_SLOT_L_IC_1_MASK   0x1F
#define R11_SLOT_LEFT_CTRL_TDM_SLOT_L_IC_1_SHIFT  0

/* SLOT_RIGHT_CTRL (IC 1) */
#define R12_SLOT_RIGHT_CTRL_TDM_SLOT_R_IC_1       0x0    /* 00000b	[4:0] */
#define R12_SLOT_RIGHT_CTRL_TDM_SLOT_R_IC_1_MASK  0x1F
#define R12_SLOT_RIGHT_CTRL_TDM_SLOT_R_IC_1_SHIFT 0

/* LIM_LEFT_CTRL1 (IC 1) */
#define R13_LIM_LEFT_CTRL1_LIM_EN_L_IC_1          0x1    /* 01b	[1:0] */
#define R13_LIM_LEFT_CTRL1_VBAT_TRACK_L_IC_1      0x1    /* 1b	[2] */
#define R13_LIM_LEFT_CTRL1_LIM_ATR_L_IC_1         0x2    /* 10b	[5:4] */
#define R13_LIM_LEFT_CTRL1_LIM_RRT_L_IC_1         0x2    /* 10b	[7:6] */
#define R13_LIM_LEFT_CTRL1_LIM_EN_L_IC_1_MASK     0x3
#define R13_LIM_LEFT_CTRL1_LIM_EN_L_IC_1_SHIFT    0
#define R13_LIM_LEFT_CTRL1_VBAT_TRACK_L_IC_1_MASK 0x4
#define R13_LIM_LEFT_CTRL1_VBAT_TRACK_L_IC_1_SHIFT 2
#define R13_LIM_LEFT_CTRL1_LIM_ATR_L_IC_1_MASK    0x30
#define R13_LIM_LEFT_CTRL1_LIM_ATR_L_IC_1_SHIFT   4
#define R13_LIM_LEFT_CTRL1_LIM_RRT_L_IC_1_MASK    0xC0
#define R13_LIM_LEFT_CTRL1_LIM_RRT_L_IC_1_SHIFT   6

/* LIM_LEFT_CTRL2 (IC 1) */
#define R14_LIM_LEFT_CTRL2_SLOPE_L_IC_1           0x1    /* 01b	[1:0] */
#define R14_LIM_LEFT_CTRL2_LIM_THRES_L_IC_1       0x1    /* 00001b	[7:3] */
#define R14_LIM_LEFT_CTRL2_SLOPE_L_IC_1_MASK      0x3
#define R14_LIM_LEFT_CTRL2_SLOPE_L_IC_1_SHIFT     0
#define R14_LIM_LEFT_CTRL2_LIM_THRES_L_IC_1_MASK  0xF8
#define R14_LIM_LEFT_CTRL2_LIM_THRES_L_IC_1_SHIFT 3

/* LIM_LEFT_CTRL3 (IC 1) */
#define R15_LIM_LEFT_CTRL3_VBAT_INF_L_IC_1        0x22   /* 00100010b	[7:0] */
#define R15_LIM_LEFT_CTRL3_VBAT_INF_L_IC_1_MASK   0xFF
#define R15_LIM_LEFT_CTRL3_VBAT_INF_L_IC_1_SHIFT  0

/* LIM_RIGHT_CTRL1 (IC 1) */
#define R16_LIM_RIGHT_CTRL1_LIM_EN_R_IC_1         0x1    /* 01b	[1:0] */
#define R16_LIM_RIGHT_CTRL1_VBAT_TRACK_R_IC_1     0x0    /* 0b	[2] */
#define R16_LIM_RIGHT_CTRL1_LIM_LINK_IC_1         0x1    /* 1b	[3] */
#define R16_LIM_RIGHT_CTRL1_LIM_ATR_R_IC_1        0x2    /* 10b	[5:4] */
#define R16_LIM_RIGHT_CTRL1_LIM_RRT_R_IC_1        0x2    /* 10b	[7:6] */
#define R16_LIM_RIGHT_CTRL1_LIM_EN_R_IC_1_MASK    0x3
#define R16_LIM_RIGHT_CTRL1_LIM_EN_R_IC_1_SHIFT   0
#define R16_LIM_RIGHT_CTRL1_VBAT_TRACK_R_IC_1_MASK 0x4
#define R16_LIM_RIGHT_CTRL1_VBAT_TRACK_R_IC_1_SHIFT 2
#define R16_LIM_RIGHT_CTRL1_LIM_LINK_IC_1_MASK    0x8
#define R16_LIM_RIGHT_CTRL1_LIM_LINK_IC_1_SHIFT   3
#define R16_LIM_RIGHT_CTRL1_LIM_ATR_R_IC_1_MASK   0x30
#define R16_LIM_RIGHT_CTRL1_LIM_ATR_R_IC_1_SHIFT  4
#define R16_LIM_RIGHT_CTRL1_LIM_RRT_R_IC_1_MASK   0xC0
#define R16_LIM_RIGHT_CTRL1_LIM_RRT_R_IC_1_SHIFT  6

/* LIM_RIGHT_CTRL2 (IC 1) */
#define R17_LIM_RIGHT_CTRL2_SLOPE_R_IC_1          0x1    /* 01b	[1:0] */
#define R17_LIM_RIGHT_CTRL2_LIM_THRES_R_IC_1      0x1    /* 00001b	[7:3] */
#define R17_LIM_RIGHT_CTRL2_SLOPE_R_IC_1_MASK     0x3
#define R17_LIM_RIGHT_CTRL2_SLOPE_R_IC_1_SHIFT    0
#define R17_LIM_RIGHT_CTRL2_LIM_THRES_R_IC_1_MASK 0xF8
#define R17_LIM_RIGHT_CTRL2_LIM_THRES_R_IC_1_SHIFT 3

/* LIM_RIGHT_CTRL3 (IC 1) */
#define R18_LIM_RIGHT_CTRL3_VBAT_INF_R_IC_1       0x22   /* 00100010b	[7:0] */
#define R18_LIM_RIGHT_CTRL3_VBAT_INF_R_IC_1_MASK  0xFF
#define R18_LIM_RIGHT_CTRL3_VBAT_INF_R_IC_1_SHIFT 0

/* CLIP_LEFT_CTRL (IC 1) */
#define R19_CLIP_LEFT_CTRL_DAC_CLIP_L_IC_1        0xFF   /* 11111111b	[7:0] */
#define R19_CLIP_LEFT_CTRL_DAC_CLIP_L_IC_1_MASK   0xFF
#define R19_CLIP_LEFT_CTRL_DAC_CLIP_L_IC_1_SHIFT  0

/* CLIP_RIGHT_CTRL (IC 1) */
#define R20_CLIP_RIGHT_CTRL_DAC_CLIP_R_IC_1       0xFF   /* 11111111b	[7:0] */
#define R20_CLIP_RIGHT_CTRL_DAC_CLIP_R_IC_1_MASK  0xFF
#define R20_CLIP_RIGHT_CTRL_DAC_CLIP_R_IC_1_SHIFT 0

/* FAULT_CTRL1 (IC 1) */
#define R21_FAULT_CTRL1_OTW_GAIN_L_IC_1           0x2    /* 10b	[1:0] */
#define R21_FAULT_CTRL1_OTW_GAIN_R_IC_1           0x2    /* 10b	[5:4] */
#define R21_FAULT_CTRL1_OTW_GAIN_L_IC_1_MASK      0x3
#define R21_FAULT_CTRL1_OTW_GAIN_L_IC_1_SHIFT     0
#define R21_FAULT_CTRL1_OTW_GAIN_R_IC_1_MASK      0x30
#define R21_FAULT_CTRL1_OTW_GAIN_R_IC_1_SHIFT     4

/* FAULT_CTRL2 (IC 1) */
#define R22_FAULT_CTRL2_ARCV_OC_IC_1              0x0    /* 0b	[0] */
#define R22_FAULT_CTRL2_ARCV_OT_IC_1              0x0    /* 0b	[1] */
#define R22_FAULT_CTRL2_ARCV_UV_IC_1              0x0    /* 0b	[2] */
#define R22_FAULT_CTRL2_MAX_AR_IC_1               0x3    /* 11b	[5:4] */
#define R22_FAULT_CTRL2_MRCV_IC_1                 0x0    /* 0b	[7] */
#define R22_FAULT_CTRL2_ARCV_OC_IC_1_MASK         0x1
#define R22_FAULT_CTRL2_ARCV_OC_IC_1_SHIFT        0
#define R22_FAULT_CTRL2_ARCV_OT_IC_1_MASK         0x2
#define R22_FAULT_CTRL2_ARCV_OT_IC_1_SHIFT        1
#define R22_FAULT_CTRL2_ARCV_UV_IC_1_MASK         0x4
#define R22_FAULT_CTRL2_ARCV_UV_IC_1_SHIFT        2
#define R22_FAULT_CTRL2_MAX_AR_IC_1_MASK          0x30
#define R22_FAULT_CTRL2_MAX_AR_IC_1_SHIFT         4
#define R22_FAULT_CTRL2_MRCV_IC_1_MASK            0x80
#define R22_FAULT_CTRL2_MRCV_IC_1_SHIFT           7

/* STATUS1 (IC 1) */
#define R23_STATUS1_OTW_IC_1                      0x0    /* 0b	[0] */
#define R23_STATUS1_OTF_IC_1                      0x0    /* 0b	[1] */
#define R23_STATUS1_UVLO_VREG_IC_1                0x0    /* 0b	[6] */
#define R23_STATUS1_UVLO_PVDD_IC_1                0x0    /* 0b	[7] */
#define R23_STATUS1_OTW_IC_1_MASK                 0x1
#define R23_STATUS1_OTW_IC_1_SHIFT                0
#define R23_STATUS1_OTF_IC_1_MASK                 0x2
#define R23_STATUS1_OTF_IC_1_SHIFT                1
#define R23_STATUS1_UVLO_VREG_IC_1_MASK           0x40
#define R23_STATUS1_UVLO_VREG_IC_1_SHIFT          6
#define R23_STATUS1_UVLO_PVDD_IC_1_MASK           0x80
#define R23_STATUS1_UVLO_PVDD_IC_1_SHIFT          7

/* STATUS2 (IC 1) */
#define R24_STATUS2_BAT_WARN_L_IC_1               0x0    /* 0b	[0] */
#define R24_STATUS2_AMP_OC_L_IC_1                 0x0    /* 0b	[1] */
#define R24_STATUS2_CLIP_L_IC_1                   0x0    /* 0b	[2] */
#define R24_STATUS2_LIM_EG_L_IC_1                 0x0    /* 0b	[3] */
#define R24_STATUS2_BAT_WARN_R_IC_1               0x0    /* 0b	[4] */
#define R24_STATUS2_AMP_OC_R_IC_1                 0x0    /* 0b	[5] */
#define R24_STATUS2_CLIP_R_IC_1                   0x0    /* 0b	[6] */
#define R24_STATUS2_LIM_EG_R_IC_1                 0x0    /* 0b	[7] */
#define R24_STATUS2_BAT_WARN_L_IC_1_MASK          0x1
#define R24_STATUS2_BAT_WARN_L_IC_1_SHIFT         0
#define R24_STATUS2_AMP_OC_L_IC_1_MASK            0x2
#define R24_STATUS2_AMP_OC_L_IC_1_SHIFT           1
#define R24_STATUS2_CLIP_L_IC_1_MASK              0x4
#define R24_STATUS2_CLIP_L_IC_1_SHIFT             2
#define R24_STATUS2_LIM_EG_L_IC_1_MASK            0x8
#define R24_STATUS2_LIM_EG_L_IC_1_SHIFT           3
#define R24_STATUS2_BAT_WARN_R_IC_1_MASK          0x10
#define R24_STATUS2_BAT_WARN_R_IC_1_SHIFT         4
#define R24_STATUS2_AMP_OC_R_IC_1_MASK            0x20
#define R24_STATUS2_AMP_OC_R_IC_1_SHIFT           5
#define R24_STATUS2_CLIP_R_IC_1_MASK              0x40
#define R24_STATUS2_CLIP_R_IC_1_SHIFT             6
#define R24_STATUS2_LIM_EG_R_IC_1_MASK            0x80
#define R24_STATUS2_LIM_EG_R_IC_1_SHIFT           7

/* VBAT (IC 1) */
#define R25_VBAT_VBAT_IC_1                        0xED   /* 11101101b	[7:0] */
#define R25_VBAT_VBAT_IC_1_MASK                   0xFF
#define R25_VBAT_VBAT_IC_1_SHIFT                  0

/* TEMP (IC 1) */
#define R26_TEMP_TEMP_IC_1                        0x5E   /* 01011110b	[7:0] */
#define R26_TEMP_TEMP_IC_1_MASK                   0xFF
#define R26_TEMP_TEMP_IC_1_SHIFT                  0

/* SOFT_RESET (IC 1) */
#define R27_SOFT_RESET_S_RST_IC_1                 0x0    /* 0b	[0] */
#define R27_SOFT_RESET_S_RST_IC_1_MASK            0x1
#define R27_SOFT_RESET_S_RST_IC_1_SHIFT           0

#endif
