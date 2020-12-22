/*
 * (C) COPYRIGHT 2015-2017 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU licence.
 *
 * A copy of the licence is included with the program, and can also be obtained
 * from Free Software Foundation, Inc.
 */

/* AUTOMATICALLY GENERATED FILE. If you want to amend the issues/features,
 * please update base/tools/hwconfig_generator/hwc_{issues,features}.py
 * For more information see base/tools/hwconfig_generator/README
 */

#ifndef _BASE_HWCONFIG_FEATURES_H_
#define _BASE_HWCONFIG_FEATURES_H_

enum base_hw_feature {
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_33BIT_VA,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_OPTIMIZED_COVERAGE_MASK,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_WORKGROUP_ROUND_MULTIPLE_OF_4,
	BASE_HW_FEATURE_IMAGES_IN_FRAGMENT_SHADERS,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_V4,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_PROTECTED_DEBUG_MODE,
	BASE_HW_FEATURE_AARCH64_MMU,
	BASE_HW_FEATURE_TLS_HASHING,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_generic[] = {
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_t60x[] = {
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_V4,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_t62x[] = {
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_V4,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_t72x[] = {
	BASE_HW_FEATURE_33BIT_VA,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_OPTIMIZED_COVERAGE_MASK,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_WORKGROUP_ROUND_MULTIPLE_OF_4,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_V4,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_t76x[] = {
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_tFxx[] = {
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_t83x[] = {
	BASE_HW_FEATURE_33BIT_VA,
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_t82x[] = {
	BASE_HW_FEATURE_33BIT_VA,
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_tMIx[] = {
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_tHEx[] = {
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_PROTECTED_DEBUG_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_tSIx[] = {
	BASE_HW_FEATURE_33BIT_VA,
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_PROTECTED_DEBUG_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_END
};

static const enum base_hw_feature base_hw_features_tDVx[] = {
	BASE_HW_FEATURE_33BIT_VA,
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_PROTECTED_DEBUG_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_END
};

#ifdef MALI_INCLUDE_TNOX
static const enum base_hw_feature base_hw_features_tNOx[] = {
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_PROTECTED_DEBUG_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_AARCH64_MMU,
	BASE_HW_FEATURE_TLS_HASHING,
	BASE_HW_FEATURE_END
};

#endif /* MALI_INCLUDE_TNOX */

#ifdef MALI_INCLUDE_TGOX
static const enum base_hw_feature base_hw_features_tGOx[] = {
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_PROTECTED_DEBUG_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_AARCH64_MMU,
	BASE_HW_FEATURE_TLS_HASHING,
	BASE_HW_FEATURE_END
};

#endif /* MALI_INCLUDE_TGOX */

#ifdef MALI_INCLUDE_TKAX
static const enum base_hw_feature base_hw_features_tKAx[] = {
	BASE_HW_FEATURE_33BIT_VA,
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_PROTECTED_DEBUG_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_AARCH64_MMU,
	BASE_HW_FEATURE_END
};

#endif /* MALI_INCLUDE_TKAX */

#ifdef MALI_INCLUDE_TTRX
static const enum base_hw_feature base_hw_features_tTRx[] = {
	BASE_HW_FEATURE_33BIT_VA,
	BASE_HW_FEATURE_JOBCHAIN_DISAMBIGUATION,
	BASE_HW_FEATURE_PWRON_DURING_PWROFF_TRANS,
	BASE_HW_FEATURE_XAFFINITY,
	BASE_HW_FEATURE_WARPING,
	BASE_HW_FEATURE_INTERPIPE_REG_ALIASING,
	BASE_HW_FEATURE_32_BIT_UNIFORM_ADDRESS,
	BASE_HW_FEATURE_ATTR_AUTO_TYPE_INFERRAL,
	BASE_HW_FEATURE_BRNDOUT_CC,
	BASE_HW_FEATURE_BRNDOUT_KILL,
	BASE_HW_FEATURE_LD_ST_LEA_TEX,
	BASE_HW_FEATURE_LD_ST_TILEBUFFER,
	BASE_HW_FEATURE_LINEAR_FILTER_FLOAT,
	BASE_HW_FEATURE_MRT,
	BASE_HW_FEATURE_MSAA_16X,
	BASE_HW_FEATURE_NEXT_INSTRUCTION_TYPE,
	BASE_HW_FEATURE_OUT_OF_ORDER_EXEC,
	BASE_HW_FEATURE_T7XX_PAIRING_RULES,
	BASE_HW_FEATURE_TEST4_DATUM_MODE,
	BASE_HW_FEATURE_FLUSH_REDUCTION,
	BASE_HW_FEATURE_PROTECTED_MODE,
	BASE_HW_FEATURE_PROTECTED_DEBUG_MODE,
	BASE_HW_FEATURE_COHERENCY_REG,
	BASE_HW_FEATURE_AARCH64_MMU,
	BASE_HW_FEATURE_END
};

#endif /* MALI_INCLUDE_TTRX */

#endif /* _BASE_HWCONFIG_FEATURES_H_ */
