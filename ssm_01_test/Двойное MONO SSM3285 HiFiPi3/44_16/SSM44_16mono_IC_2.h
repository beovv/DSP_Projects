/*
 * File:           C:\Users\oleg.tetushkin\Documents\Двойное MONO SSM3285\44_16\SSM44_16mono_IC_2.h
 *
 * Created:        Wednesday, February 24, 2021 2:36:58 PM
 * Description:    SSM44_16mono:IC 2 program data.
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
#ifndef __SSM44_16MONO_IC_2_H__
#define __SSM44_16MONO_IC_2_H__

#include "SigmaStudioFW.h"
#include "SSM44_16mono_IC_2_REG.h"

#define DEVICE_ARCHITECTURE_IC_2                  "SSM3582"
#define DEVICE_ADDR_IC_2                          0x22


/* Register Default - IC 2.POWER_CTRL Register.POWER_CTRL */
ADI_REG_TYPE R0_POWER_CTRL_IC_2_Default[REG_POWER_CTRL_IC_2_BYTE] = {
0x90
};

/* Register Default - IC 2.AMP_DAC_CTRL Register.AMP_DAC_CTRL */
ADI_REG_TYPE R1_AMP_DAC_CTRL_IC_2_Default[REG_AMP_DAC_CTRL_IC_2_BYTE] = {
0x83
};

/* Register Default - IC 2.DAC_CTRL Register.DAC_CTRL */
ADI_REG_TYPE R2_DAC_CTRL_IC_2_Default[REG_DAC_CTRL_IC_2_BYTE] = {
0x13
};

/* Register Default - IC 2.VOL_LEFT_CTRL Register.VOL_LEFT_CTRL */
ADI_REG_TYPE R3_VOL_LEFT_CTRL_IC_2_Default[REG_VOL_LEFT_CTRL_IC_2_BYTE] = {
0xAB
};

/* Register Default - IC 2.VOL_RIGHT_CTRL Register.VOL_RIGHT_CTRL */
ADI_REG_TYPE R4_VOL_RIGHT_CTRL_IC_2_Default[REG_VOL_RIGHT_CTRL_IC_2_BYTE] = {
0xAB
};

/* Register Default - IC 2.SAI_CTRL1 Register.SAI_CTRL1 */
ADI_REG_TYPE R5_SAI_CTRL1_IC_2_Default[REG_SAI_CTRL1_IC_2_BYTE] = {
0x41
};

/* Register Default - IC 2.SAI_CTRL2 Register.SAI_CTRL2 */
ADI_REG_TYPE R6_SAI_CTRL2_IC_2_Default[REG_SAI_CTRL2_IC_2_BYTE] = {
0x16
};

/* Register Default - IC 2.SLOT_LEFT_CTRL Register.SLOT_LEFT_CTRL */
ADI_REG_TYPE R7_SLOT_LEFT_CTRL_IC_2_Default[REG_SLOT_LEFT_CTRL_IC_2_BYTE] = {
0x01
};

/* Register Default - IC 2.SLOT_RIGHT_CTRL Register.SLOT_RIGHT_CTRL */
ADI_REG_TYPE R8_SLOT_RIGHT_CTRL_IC_2_Default[REG_SLOT_RIGHT_CTRL_IC_2_BYTE] = {
0x01
};

/* Register Default - IC 2.LIM_LEFT_CTRL1 Register.LIM_LEFT_CTRL1 */
ADI_REG_TYPE R9_LIM_LEFT_CTRL1_IC_2_Default[REG_LIM_LEFT_CTRL1_IC_2_BYTE] = {
0xA5
};

/* Register Default - IC 2.LIM_LEFT_CTRL2 Register.LIM_LEFT_CTRL2 */
ADI_REG_TYPE R10_LIM_LEFT_CTRL2_IC_2_Default[REG_LIM_LEFT_CTRL2_IC_2_BYTE] = {
0x09
};

/* Register Default - IC 2.LIM_LEFT_CTRL3 Register.LIM_LEFT_CTRL3 */
ADI_REG_TYPE R11_LIM_LEFT_CTRL3_IC_2_Default[REG_LIM_LEFT_CTRL3_IC_2_BYTE] = {
0x22
};

/* Register Default - IC 2.LIM_RIGHT_CTRL1 Register.LIM_RIGHT_CTRL1 */
ADI_REG_TYPE R12_LIM_RIGHT_CTRL1_IC_2_Default[REG_LIM_RIGHT_CTRL1_IC_2_BYTE] = {
0xA9
};

/* Register Default - IC 2.LIM_RIGHT_CTRL2 Register.LIM_RIGHT_CTRL2 */
ADI_REG_TYPE R13_LIM_RIGHT_CTRL2_IC_2_Default[REG_LIM_RIGHT_CTRL2_IC_2_BYTE] = {
0x09
};

/* Register Default - IC 2.LIM_RIGHT_CTRL3 Register.LIM_RIGHT_CTRL3 */
ADI_REG_TYPE R14_LIM_RIGHT_CTRL3_IC_2_Default[REG_LIM_RIGHT_CTRL3_IC_2_BYTE] = {
0x22
};

/* Register Default - IC 2.CLIP_LEFT_CTRL Register.CLIP_LEFT_CTRL */
ADI_REG_TYPE R15_CLIP_LEFT_CTRL_IC_2_Default[REG_CLIP_LEFT_CTRL_IC_2_BYTE] = {
0xFF
};

/* Register Default - IC 2.CLIP_RIGHT_CTRL Register.CLIP_RIGHT_CTRL */
ADI_REG_TYPE R16_CLIP_RIGHT_CTRL_IC_2_Default[REG_CLIP_RIGHT_CTRL_IC_2_BYTE] = {
0xFF
};

/* Register Default - IC 2.FAULT_CTRL1 Register.FAULT_CTRL1 */
ADI_REG_TYPE R17_FAULT_CTRL1_IC_2_Default[REG_FAULT_CTRL1_IC_2_BYTE] = {
0x22
};

/* Register Default - IC 2.FAULT_CTRL2 Register.FAULT_CTRL2 */
ADI_REG_TYPE R18_FAULT_CTRL2_IC_2_Default[REG_FAULT_CTRL2_IC_2_BYTE] = {
0x30
};

/* Register Default - IC 2.SOFT_RESET Register.SOFT_RESET */
ADI_REG_TYPE R19_SOFT_RESET_IC_2_Default[REG_SOFT_RESET_IC_2_BYTE] = {
0x00
};


/*
 * Default Download
 */
#define DEFAULT_DOWNLOAD_SIZE_IC_2 20

void default_download_IC_2() {
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_POWER_CTRL_IC_2_ADDR, REG_POWER_CTRL_IC_2_BYTE, R0_POWER_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_AMP_DAC_CTRL_IC_2_ADDR, REG_AMP_DAC_CTRL_IC_2_BYTE, R1_AMP_DAC_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_DAC_CTRL_IC_2_ADDR, REG_DAC_CTRL_IC_2_BYTE, R2_DAC_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_VOL_LEFT_CTRL_IC_2_ADDR, REG_VOL_LEFT_CTRL_IC_2_BYTE, R3_VOL_LEFT_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_VOL_RIGHT_CTRL_IC_2_ADDR, REG_VOL_RIGHT_CTRL_IC_2_BYTE, R4_VOL_RIGHT_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_SAI_CTRL1_IC_2_ADDR, REG_SAI_CTRL1_IC_2_BYTE, R5_SAI_CTRL1_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_SAI_CTRL2_IC_2_ADDR, REG_SAI_CTRL2_IC_2_BYTE, R6_SAI_CTRL2_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_SLOT_LEFT_CTRL_IC_2_ADDR, REG_SLOT_LEFT_CTRL_IC_2_BYTE, R7_SLOT_LEFT_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_SLOT_RIGHT_CTRL_IC_2_ADDR, REG_SLOT_RIGHT_CTRL_IC_2_BYTE, R8_SLOT_RIGHT_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_LIM_LEFT_CTRL1_IC_2_ADDR, REG_LIM_LEFT_CTRL1_IC_2_BYTE, R9_LIM_LEFT_CTRL1_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_LIM_LEFT_CTRL2_IC_2_ADDR, REG_LIM_LEFT_CTRL2_IC_2_BYTE, R10_LIM_LEFT_CTRL2_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_LIM_LEFT_CTRL3_IC_2_ADDR, REG_LIM_LEFT_CTRL3_IC_2_BYTE, R11_LIM_LEFT_CTRL3_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_LIM_RIGHT_CTRL1_IC_2_ADDR, REG_LIM_RIGHT_CTRL1_IC_2_BYTE, R12_LIM_RIGHT_CTRL1_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_LIM_RIGHT_CTRL2_IC_2_ADDR, REG_LIM_RIGHT_CTRL2_IC_2_BYTE, R13_LIM_RIGHT_CTRL2_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_LIM_RIGHT_CTRL3_IC_2_ADDR, REG_LIM_RIGHT_CTRL3_IC_2_BYTE, R14_LIM_RIGHT_CTRL3_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_CLIP_LEFT_CTRL_IC_2_ADDR, REG_CLIP_LEFT_CTRL_IC_2_BYTE, R15_CLIP_LEFT_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_CLIP_RIGHT_CTRL_IC_2_ADDR, REG_CLIP_RIGHT_CTRL_IC_2_BYTE, R16_CLIP_RIGHT_CTRL_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_FAULT_CTRL1_IC_2_ADDR, REG_FAULT_CTRL1_IC_2_BYTE, R17_FAULT_CTRL1_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_FAULT_CTRL2_IC_2_ADDR, REG_FAULT_CTRL2_IC_2_BYTE, R18_FAULT_CTRL2_IC_2_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_2, REG_SOFT_RESET_IC_2_ADDR, REG_SOFT_RESET_IC_2_BYTE, R19_SOFT_RESET_IC_2_Default );
}

#endif
