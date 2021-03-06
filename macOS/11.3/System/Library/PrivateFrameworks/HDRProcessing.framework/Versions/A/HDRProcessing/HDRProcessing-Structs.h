/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/Versions/A/HDRProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned BL_bit_depth_minus8;
	unsigned EL_bit_depth_minus8;
	unsigned vdr_bit_depth;
	unsigned EL_chroma_format_idc;
	unsigned BL_chroma_format_idc;
	unsigned mapping_chroma_format_idc;
	unsigned num_x_partitions;
	unsigned num_y_partitions;
	unsigned overlapped_prediction_method;
	unsigned el_spatial_resampling_filter_flag;
	unsigned coefficient_data_type;
	unsigned coefficient_log2_denom;
	3I num_pivots;
	318I pivot_value;
	1139I mapping_idc;
	1139I poly_order;
	1139I linear_interp_flag;
	1139I pred_linear_interp_value_int;
	1139I pred_linear_interp_value;
	11393i poly_coef_int;
	11393I poly_coef;
	11396q fp_poly_coef;
	11396f fp_poly_coef_float;
	1139I mmr_order;
	1139i mmr_constant_int;
	1139I mmr_constant;
	113947i mmr_coef_int;
	113947I mmr_coef;
	113947q fp_mmr_coef;
	113947f fp_mmr_coef_float;
	11396i pow_coef_int;
	11396I pow_coef;
	unsigned disable_residual_flag;
	unsigned nlq_method_idc;
	unsigned nlq_num_pivots;
	9I nlq_pivot_value;
	1193I nlq_offset;
	1193I vdr_in_max_int;
	1193I vdr_in_max;
	1193q fp_vdr_in_max;
	1193I linear_deadzone_slope_int;
	1193I linear_deadzone_slope;
	1193q linear_dz_slope;
	1193I linear_deadzone_threshold_int;
	1193I linear_deadzone_threshold;
	1193q linear_dz_th;
	1193I mu_law_levels;
	1193I mu_law_mu;
	11316384I pred_LUT_value_int;
	11316384I pred_LUT_value;
	unsigned el_frame_crop_bottom_offset;
} SCD_Struct_HD0;

typedef struct {
	unsigned short valid;
	unsigned short min_PQ;
	unsigned short max_PQ;
	unsigned short avg_PQ;
} SCD_Struct_HD1;

typedef struct {
	unsigned short valid;
	unsigned short target_max_PQ;
	unsigned short trim_slope;
	unsigned short trim_offset;
	unsigned short trim_power;
	unsigned short trim_chroma_weight;
	unsigned short trim_saturation_gain;
	short ms_weight;
} SCD_Struct_HD2;

typedef struct {
	unsigned short valid;
	unsigned short anchor_PQ;
	unsigned short anchor_power;
} SCD_Struct_HD3;

typedef struct {
	unsigned short valid;
	unsigned short active_area_left_offset;
	unsigned short active_area_right_offset;
	unsigned short active_area_top_offset;
	unsigned short active_area_bottom_offset;
} SCD_Struct_HD4;

typedef struct {
	unsigned short valid;
	unsigned short length;
	unsigned char target_display_index;
	unsigned short trim_slope;
	unsigned short trim_offset;
	unsigned short trim_power;
	unsigned short trim_chroma_weight;
	unsigned short trim_saturation_gain;
	unsigned short ms_weight;
	unsigned short target_mid_contrast;
	unsigned short clip_trim;
	6C saturation_vector_field;
	6C hue_vector_field;
} SCD_Struct_HD5;

typedef struct {
	unsigned short valid;
	unsigned short length;
	unsigned char source_primary_index;
	short source_primary_red_x;
	short source_primary_red_y;
	short source_primary_green_x;
	short source_primary_green_y;
	short source_primary_blue_x;
	short source_primary_blue_y;
	short source_primary_white_x;
	short source_primary_white_y;
} SCD_Struct_HD6;

typedef struct {
	unsigned short valid;
	unsigned short length;
	unsigned char target_display_index;
	unsigned short target_max_PQ;
	unsigned short target_min_PQ;
	unsigned char target_primary_index;
	short target_primary_red_x;
	short target_primary_red_y;
	short target_primary_green_x;
	short target_primary_green_y;
	short target_primary_blue_x;
	short target_primary_blue_y;
	short target_primary_white_x;
	short target_primary_white_y;
} SCD_Struct_HD7;

typedef struct {
	unsigned short valid;
	unsigned char content_type;
	unsigned char white_point;
	unsigned char L11_byte2;
	unsigned char L11_byte3;
} SCD_Struct_HD8;

typedef struct {
	unsigned short valid;
	unsigned char dm_mode;
	unsigned char dm_version_index;
} SCD_Struct_HD9;

typedef struct {
	unsigned short valid;
	unsigned char dm_run_mode;
	unsigned char dm_run_version;
	unsigned char dm_debug0;
	unsigned char dm_debug1;
	unsigned char dm_debug2;
	unsigned char dm_debug3;
} SCD_Struct_HD10;

typedef struct AuxData {
	int hdr10TmPreset;
	int hdr10TmCurveType;
	int hlgTmPreset;
	int doviTmPreset;
	float edrAdaptationGain;
	float ambAdaptationLux2nitsRatio;
	float targetDisplayContrastRatio;
	float targetDisplayReflectionRatio;
	int dpcMode;
	float dpcGain;
	float Send_nits;
	float tm_Send_nits;
	BOOL isDoViL2TrimAvailable;
} AuxData;

typedef struct TMData {
	int hdr10TmMode;
	int hdr10TmCurveType;
	int hlgTmMode;
	int hlgOOTFMixingMode;
	int doviTmMode;
	int edrAdaptationMode;
	float edrAdaptationGain;
	float edrFactor;
	float diffuseInNits;
	int ambAdaptationMode;
	float ambReflected_nits;
	float Smin_nits;
	float Smax_nits;
	float Tmin_nits;
	float Tmax_nits;
	float tm_Tmax_nits;
	float Cmin_nits;
	float Cmax_nits;
	float Cend_nits;
	float Capl_nits;
	float ambientPQ;
	float nominalPQ;
	float div_C_r;
	float Sdiv_nits;
	float SDRTmax_nits;
	int processingType;
	int gradingAmbientEnvironmentType;
	float adjMaxEDRValue;
	float adjTmax_nits;
} TMData;

typedef struct HDR10TMParam {
	float Smin_nits;
	float Smax_nits;
	float Tmin_nits;
	float Tmax_nits;
	float tm_Smin_nits;
	float tm_Smax_nits;
	float tm_Send_nits;
	float tm_Tmin_nits;
	float tm_Tmax_nits;
	float tm_Tend_nits;
	float tm_Smin_C;
	float tm_Smax_C;
	float tm_Send_C;
	float tm_Tmin_C;
	float tm_Tmax_C;
	float tm_Tend_C;
	int curveType;
	unsigned short n;
	4f XsC;
	4f YsC;
	4f MsC;
	3S ms;
	314f arrPsC;
	float linearOffset;
	float linearScaler;
} HDR10TMParam;

typedef struct DoViTMParam {
	float Smin_nits;
	float Smax_nits;
	float Tmin_nits;
	float Tmax_nits;
	float adjTmax_nits;
	float tm_Smin_nits;
	float tm_Smax_nits;
	float tm_Send_nits;
	float tm_Tmin_nits;
	float tm_Tmax_nits;
	float tm_Tend_nits;
	float tm_Smin_C;
	float tm_Smax_C;
	float tm_Send_C;
	float tm_Tmin_C;
	float tm_Tmax_C;
	float tm_Tend_C;
	float sl;
	float c1;
	float c2;
	float c3;
	float brightAdjBySat2;
	float systemGamma;
	float SDRTmax_nits;
	float OOTFMixingFactor;
	float linearOffset;
	float linearScaler;
} DoViTMParam;

typedef struct EdrAdaptationData {
	int mode;
	float edrFactor;
	float Smax_C;
	float tm_Tmin_C;
	float tm_Tend_C;
	float Sdiv_C;
	float div_C_r;
	float Sdiv_tm_C;
	float Tdiv_C;
	float k0Gain;
	float k1Gain;
	float k2Gain;
	BOOL applyAdaptiveKyGain;
	float adaptiveKyGainPower;
	float adaptiveKyGainLowerBase;
	float adaptiveKyGainUpperBase;
	float fixedKyGain;
	unsigned adjLUTID;
	float adjTdivGainLowerSlope;
	float adjTdivGainUpperSlope;
	float adjTdivX0;
	float adjTdivY0;
	float adjTdivX1;
	float adjTdivY1;
	float adjTdivPower;
	float YsOffset;
	float YsScale;
} EdrAdaptationData;

typedef struct EdrAdaptationParam {
	unsigned short n;
	3f Xs;
	3f Ys;
	3f Ms;
} EdrAdaptationParam;

typedef struct AmbAdaptationData {
	int mode;
	float edrFactor;
	float ambientNits;
	float tm_Tmin_nits;
	float tm_Tend_nits;
	float tm_Tmin_C;
	float tm_Tend_C;
} AmbAdaptationData;

typedef struct AmbAdaptationParam {
	unsigned short n;
	3f XsC;
	3f YsC;
	3f MsC;
	float aL;
	float bL;
} AmbAdaptationParam;

typedef struct DpcData {
	int mode;
	float edrFactor;
	float rangeMax;
	float gain;
} DpcData;

typedef struct {
	unsigned hdrContent;
	unsigned hwType;
	unsigned operation;
	unsigned convertType;
	unsigned hasRPU;
	unsigned inputFormatRaw;
	unsigned inputFormat;
	unsigned bitDepth;
	unsigned displayType;
	unsigned displayDiagonalSize;
	unsigned maxDisplayBrightnessNits;
	float minDisplayBrightnessNits;
	unsigned videoFullRangeFlag;
	unsigned colourPrimaries;
	unsigned matrixCoeffs;
	unsigned transferFunction;
	unsigned colorSpace;
	9f YCCtoRGB_coef;
	9f RGBtoLMS_coef;
	unsigned maxMasteringNits;
	float minMasteringNits;
	unsigned transferFunction_RGhA;
	unsigned source_RGhA;
	unsigned displayPipelineCompensationType;
	float displayPipelineGammaValue;
	BOOL mmrEnable;
	int gradingAmbientEnvironmentType;
} SCD_Struct_HD20;

typedef struct {
	unsigned short display_primaries_xg;
	unsigned short display_primaries_yg;
	unsigned short display_primaries_xb;
	unsigned short display_primaries_yb;
	unsigned short display_primaries_xr;
	unsigned short display_primaries_yr;
	unsigned short white_point_x;
	unsigned short white_point_y;
	unsigned max_display_mastering_luminance;
	unsigned min_display_mastering_luminance;
} SCD_Struct_HD21;

typedef struct {
	unsigned short max_content_light_level;
	unsigned short max_frame_average_light_level;
} SCD_Struct_HD22;

typedef struct {
	SCD_Struct_HD21 sei;
	SCD_Struct_HD22 ll;
} SCD_Struct_HD23;

typedef struct HLGTMParam {
	float systemGamma;
	HDR10TMParam artisticOOTFParam;
	BOOL applyArtisticOOTF;
	float OOTFMixingFactor;
	float SDRTmax_nits;
	float Tend_nits;
	float adjTmax_nits;
} HLGTMParam;

typedef struct ToneCurve_Control {
	double targetMaxLinear;
	double targetMinLinear;
	double maxForwardTargetInNits;
	float diffuseInNits;
	float maxEDRValue;
	float EDRFactor;
	float AmbientLight;
	float contrastRatio;
	float sdrMaxBrightnessInNits;
	BOOL HDRProcessingFullAmbientAdaptation;
	int HDRProcessingDisplayAdjustsBlackLevel;
	__CFString targetColorPrimaries;
	int targetMatrixCoeffs;
	int targetColorSpace;
	int targetTransferFunction;
	unsigned outputPixelFormatRaw;
	unsigned outputPixelFormat;
	unsigned operationFromDict;
	unsigned orientation;
	float forwardDM_tMaxPq;
	float forwardDM_tMinPq;
	float mid;
	float crush;
	float clip;
	unsigned dovi50toHDR10TVMode;
	unsigned ptvMode : 1;
	unsigned passThroughTM : 1;
	float Tmax_nits;
	AuxData auxData;
	TMData tmData;
	HDR10TMParam hdr10TmParam;
	HLGTMParam hlgTmParam;
	DoViTMParam doviTmParam;
	EdrAdaptationData edrAdaptationData;
	EdrAdaptationParam edrAdaptationParam;
	AmbAdaptationData ambAdaptationData;
	AmbAdaptationParam ambAdaptationParam;
	DpcData dpcData;
	int lowerTargetBrightnessAdjustmentMode;
} ToneCurve_Control;

typedef struct {
	unsigned vdr_dm_metadata_present_flag;
	unsigned affected_dm_metadata_id;
	unsigned current_dm_metadata_id;
	unsigned scene_refresh_flag;
	9i YCCtoRGB_coef;
	3I YCCtoRGB_offset;
	9i RGBtoLMS_coef;
	unsigned signal_eotf;
	unsigned signal_eotf_param0;
	unsigned signal_eotf_param1;
	unsigned signal_eotf_param2;
	unsigned signal_bit_depth;
	unsigned signal_color_space;
	unsigned signal_chroma_format;
	unsigned signal_full_range_flag;
	unsigned source_min_PQ;
	unsigned source_max_PQ;
	unsigned source_diagonal;
	unsigned num_ext_blocks;
	SCD_Struct_HD1 L1;
	16SCD_Struct_HD2 L2;
	SCD_Struct_HD1 L3;
	SCD_Struct_HD3 L4;
	SCD_Struct_HD4 L5;
	SCD_Struct_HD4 L6;
	16SCD_Struct_HD5 L8;
	SCD_Struct_HD6 L9;
	SCD_Struct_HD7 L10;
	SCD_Struct_HD8 L11;
	SCD_Struct_HD9 L254;
	SCD_Struct_HD10 L255;
} SCD_Struct_HD26;

typedef struct {
	SCD_Struct_HD0 composerData;
	SCD_Struct_HD26 dmData;
	ToneCurve_Control tcControl;
	SCD_Struct_HD20 hdrControl;
	SCD_Struct_HD23 infoFrameData;
} SCD_Struct_HD27;

typedef struct {
	unsigned width;
	unsigned height;
	unsigned usage;
	unsigned targetNits;
	unsigned outputPixelFormat;
	__CFString targetColorPrimaries;
	unsigned outputMetaDataFormat;
	unsigned hardwareType;
} SCD_Struct_HD28;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct __CFError* CFErrorRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	_ field6;
	_ field7;
	CFString field8;
	unsigned field9;
	unsigned field10;
} SCD_Struct_HD32;

typedef struct __CVBuffer* CVBufferRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	unsigned field1;
} SCD_Struct_HD35;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	int field6[3];
	int field7;
	int field8[3];
	unsigned field9[8];
} SCD_Struct_HD36;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
} SCD_Struct_HD37;

typedef struct {
	int field1;
	unsigned field2;
	HDRFrameProcessingControl_t field3;
} SCD_Struct_HD38;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	float field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
	unsigned field17;
	float field18[9];
	float field19[9];
	unsigned field20;
	float field21;
	unsigned field22;
	unsigned field23;
	unsigned field24;
	float field25;
	BOOL field26;
	int field27;
} SCD_Struct_HD40;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned char field3;
	unsigned short field4;
	unsigned short field5;
	unsigned short field6;
	unsigned short field7;
	unsigned short field8;
	unsigned short field9;
	unsigned short field10;
	unsigned short field11;
	unsigned char field12[6];
	unsigned char field13[6];
} SCD_Struct_HD41;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	int field5[9];
	unsigned field6[3];
	int field7[9];
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
	unsigned field17;
	unsigned field18;
	unsigned field19;
	SCD_Struct_HD1 field20;
	SCD_Struct_HD1 field21[16];
	SCD_Struct_HD1 field22;
	SCD_Struct_HD2 field23;
	SCD_Struct_HD3 field24;
	SCD_Struct_HD4 field25;
	SCD_Struct_HD41 field26[16];
	SCD_Struct_HD4 field27;
	SCD_Struct_HD6 field28;
	SCD_Struct_HD7 field29;
	SCD_Struct_HD8 field30;
	SCD_Struct_HD9 field31;
	0 field32;
} SCD_Struct_HD42;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13[3];
	unsigned field14[18];
	unsigned field15[3][9];
	unsigned field16[3][1][1][9];
	unsigned field17[3][1][1][9];
	unsigned field18[3][1][1][9];
	unsigned field19[3][1][1][9];
	int field20[3][1][1][3];
	unsigned field21[9][3][1][1][3];
	long long field22[9][3][1][1][6];
	float field23[9][3][1][1][6];
	unsigned field24[9][3][1][1][9];
	int field25[3][1][1][9];
	unsigned field26[3][1][1][9];
	int field27[3][1][1][7];
	unsigned field28[4][9][3][1][1][7];
	long long field29[4][9][3][1][1][7];
	float field30[4][9][3][1][1][7];
	int field31[4][9][3][1][1][6];
	unsigned field32[9][3][1][1][6];
	unsigned field33;
	unsigned field34;
	unsigned field35;
	unsigned field36[9][3][1][1][9];
	unsigned field37[3];
	unsigned field38[9][1][1][3];
	unsigned field39[9][1][1][3];
	long long field40[9][1][1][3];
	unsigned field41[9][1][1][3];
	unsigned field42[9][1][1][3];
	long long field43[9][1][1][3];
	unsigned field44[9][1][1][3];
	unsigned field45[9][1][1][3];
	long long field46[9][1][1][3];
	unsigned field47[9][1][1][3];
	unsigned field48[9][1][1][3];
	unsigned field49[9][1][1][16384];
	unsigned field50[3][1][1][16384];
	unsigned field51;
} SCD_Struct_HD43;

typedef struct {
	SCD_Struct_HD2 field1;
	3 field2;
	SCD_Struct_HD4 field3;
	2 field4;
	SCD_Struct_HD4 field5;
	SCD_Struct_HD4 field6;
	0 field7;
	ToneCurve_Control field8;
	3 field9;
} SCD_Struct_HD44;

typedef struct {
	unsigned x;
	unsigned y;
} SCD_Struct_HD45;

typedef struct {
	SCD_Struct_HD45 origin;
	SCD_Struct_HD45 size;
} SCD_Struct_HD46;

typedef struct {
	float parameter[3][3];
} SCD_Struct_HD47;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5[9];
	float field6[9];
	float field7[9];
	float field8[9];
	float field9[9];
	float field10[3];
	float field11[3];
	float field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	float field16;
	unsigned field17;
	float field18;
	SCD_Struct_HD2 field19;
	1 field20;
	SCD_Struct_HD2 field21;
	2 field22;
	unsigned field23;
	unsigned field24 : 1;
	int field25;
} SCD_Struct_HD48;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_HD49;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
} SCD_Struct_HD50;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned char field15;
	unsigned char field16;
	unsigned char field17;
	unsigned char field18;
	unsigned char field19;
	unsigned char field20;
	unsigned char field21;
	unsigned char field22;
	unsigned char field23;
	unsigned char field24;
	unsigned char field25;
	unsigned char field26;
	unsigned char field27;
	unsigned char field28;
	unsigned char field29;
	unsigned char field30;
	unsigned char field31;
	unsigned char field32;
	unsigned char field33;
	unsigned char field34;
	unsigned char field35;
	unsigned char field36;
	unsigned char field37;
	unsigned char field38;
	unsigned char field39;
	unsigned char field40;
	unsigned char field41;
	unsigned char field42;
	unsigned char field43;
	unsigned char field44;
	unsigned char field45;
	unsigned char field46;
	unsigned char field47;
	unsigned char field48;
	unsigned char field49;
	unsigned char field50;
	unsigned char field51;
	unsigned char field52;
	unsigned char field53;
	unsigned char field54;
	unsigned char field55;
	unsigned char field56;
	unsigned char field57;
	unsigned char field58;
	unsigned char field59;
	unsigned char field60;
	unsigned char field61;
	unsigned char field62;
	unsigned char field63;
	unsigned char field64;
	unsigned char field65;
	unsigned char field66;
	unsigned char field67;
	unsigned char field68;
	unsigned char field69;
	unsigned char field70;
	unsigned char field71;
	SCD_Struct_HD5 field72;
	0 field73;
	unsigned char field74[970];
} SCD_Struct_HD51;

typedef struct {
	float max_fp16;
	float additional_scaler;
} SCD_Struct_Do52;

typedef struct DpcParam {
	float alpha;
	float alphaPrime;
	float rangeMax;
	float gain;
	BOOL on;
} DpcParam;

typedef struct {
	float slope;
	float c1;
	float c2;
	float c3;
	float trim_slope;
	float trim_offset;
	float trim_power;
	float trim_sat;
	float s2t_ratio;
	float sat2_p1;
	float sat2_p2;
	float sat2_p3;
	float sat2_p4;
	float sat2_p5;
} SCD_Struct_Do54;

typedef struct {
	float gamma;
	char applyArtisticOOTF;
} SCD_Struct_Do55;

typedef struct {
	float ambientnits;
	float maxpq;
	float maxedr;
	HDR10TMParam tmParam;
	EdrAdaptationParam edrAdaptationParam;
	AmbAdaptationParam ambAdaptationParam;
	DpcParam dpcParam;
	/*function pointer*/void* ;
	SCD_Struct_Do54 dovi;
	SCD_Struct_Do55) hlg;
} SCD_Struct_Do56;

typedef struct {
	unsigned contentType;
	int processingType;
	SCD_Struct_Do52 degamma;
	SCD_Struct_Do56 tm;
} SCD_Struct_Do57;

typedef struct {
	float field1;
	float field2;
	unsigned field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	float field11;
	unsigned field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17;
	float field18;
	float field19;
	float field20;
	float field21;
	float field22;
	float field23;
	float field24;
	float field25;
	unsigned field26;
	float field27;
	float field28;
	float field29;
	float field30;
	float field31;
	float field32;
	float field33;
	float field34;
	float field35;
	float field36;
	float field37;
	float field38;
	float field39;
	float field40;
	float field41;
	float field42;
	float field43;
	float field44;
	BOOL field45;
	float field46;
	float field47;
	BOOL field48;
	float field49;
	int field50;
	BOOL field51;
	int field52;
	int field53;
	float field54;
	int field55;
	_ field56;
	DpcParam field57;
	int field58;
	BOOL field59;
	float field60;
	BOOL field61;
	BOOL field62;
} SCD_Struct_Do58;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_Do59;

typedef struct {
	unsigned field1;
	BOOL field2;
	unsigned field3;
	int field4;
	int field5;
	unsigned field6;
	unsigned field7;
	BOOL field8;
	BOOL field9;
	unsigned field10;
	float field11;
	float field12[22];
	float field13[22];
	float field14;
	SCD_Struct_Do59 field15[3];
	BOOL field16;
} SCD_Struct_Do60;

typedef struct {
	double trimSlope;
	double trimOffset;
	double trimPower;
	double trimChromaWeight;
	double trimSaturationGain;
	double msWeight;
	double targetMidContrast;
	double clipTrim;
	double saturationVector[6];
	double hueVector[6];
} SCD_Struct_Do61;

typedef struct {
	double Lw;
	double Lb;
	double a;
	double b;
	double gamma;
	double aR;
	double gammaR;
} SCD_Struct_Do62;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	float field11;
	float field12;
	float field13;
	float field14;
	float field15;
	float field16;
	char field17;
	BOOL field18;
	BOOL field19;
	BOOL field20;
	float field21;
} SCD_Struct_Do63;

typedef struct MSRHcuHeader_t {
	unsigned hcuCount;
	unsigned hcuSize;
} MSRHcuHeader_t;

typedef struct MSRHcuEntryHeader_t {
	unsigned hcuType;
	unsigned hcuSize;
} MSRHcuEntryHeader_t;

typedef struct DMAConfig_t {
	unsigned char inputBitDepth;
	int inputColorSpace;
	int inputChromaFmt;
	BOOL fp16RangeadjustEnable;
	float fp16Mult;
	float fp16Offset;
	unsigned char outputBitDepth;
	int outputColorSpace;
} DMAConfig_t;

typedef struct Reshaping_t {
	unsigned short mode;
	unsigned short reshapeData[3][1024];
} Reshaping_t;

typedef struct ChromaScaling_t {
	unsigned short hscaleMode;
	unsigned char hscaleNumTaps;
	float hscaleCoefficents[15][32];
	unsigned short vscaleMode;
	unsigned char vscaleNumTaps;
	float vscaleCoefficents[9][32];
} ChromaScaling_t;

typedef struct MSRCSC_t {
	unsigned precision;
	float inputMinClip[3];
	float inputMaxClip[3];
	float offsetIn[3];
	int coeff[3][3];
	float offsetOut[3];
	float outputMinClip[3];
	float outputMaxClip[3];
} MSRCSC_t;

typedef struct Linearization_t {
	unsigned mode;
	unsigned deGammaLUT[3][514];
} Linearization_t;

typedef struct {
	unsigned precision;
} SCD_Struct_MS71;

typedef struct {
	unsigned char type;
	unsigned char scaleShiftBits;
	unsigned char lumaShiftBits;
	unsigned char mixLookupBasis;
	unsigned char lumaOutputSel;
	int lumaAvgCoeff[3];
	int lumaAvgOffset;
	int lumaMaxCoeff[3];
	unsigned histBinLimit[8];
} SCD_Struct_MS72;

typedef struct {
	unsigned char msbPos0;
	unsigned char msbPos1;
	unsigned char msbPos2;
	unsigned char spacingComp0;
	unsigned char spacingComp1;
	unsigned char spacingComp2;
} SCD_Struct_MS73;

typedef struct GammaEncoding_t {
	unsigned mode;
	float gamma_LUT[3][706];
} GammaEncoding_t;

typedef struct SourceToRGB_t {
	unsigned mode;
	MSRCSC_t src2rgb;
} SourceToRGB_t;

typedef struct ColorspaceAToCommonColorspace_t {
	unsigned mode;
	MSRCSC_t a2c;
} ColorspaceAToCommonColorspace_t;

typedef struct CommonColorspaceToColorspaceB_t {
	unsigned mode;
	MSRCSC_t c2b;
} CommonColorspaceToColorspaceB_t;

typedef struct RGBtoYCC_t {
	unsigned mode;
	MSRCSC_t rgb2ycc;
} RGBtoYCC_t;

typedef struct ChromaticAdaptation_t {
	BOOL fixedPQRegamma_Enable;
	unsigned mode1;
	MSRCSC_t cacsc1;
	int toneMapMode_Enable;
	/*function pointer*/void* ;
	SCD_Struct_MS71 toneMapMode0;
	SCD_Struct_MS72 toneMapMode1;
	SCD_Struct_MS73) toneMapMode2;
	unsigned toneMapLUT[4][513];
	unsigned detailPres_Mode;
	float detailPrsvHCoeff[11];
	float detailPrsvVCoeff[5];
	float detailPrsvHV0Coeff[5];
	float detailPrsvHV1Coeff[5];
	float detailPrsvVHCoeff[11];
	float detailPrsvWeight;
	float detailPrsvEdgeWeight;
	unsigned mode2;
	MSRCSC_t cacsc2;
	BOOL fixedPQDegamma_Enable;
} ChromaticAdaptation_t;

typedef struct ProcessingControlV0_t {
	DMAConfig_t dmaConfig;
	Reshaping_t reshaping;
	ChromaScaling_t chormaScaling;
	SourceToRGB_t sourceToRGB;
	Linearization_t linearization;
	ColorspaceAToCommonColorspace_t colorAtoCommonSpace;
	ChromaticAdaptation_t chromaticAdaption;
	CommonColorspaceToColorspaceB_t commonSpaceToColorB;
	GammaEncoding_t gammaEncoding;
	RGBtoYCC_t rgb2ycc;
} ProcessingControlV0_t;

typedef struct HDRFrameProcessingControl_t {
	/*function pointer*/void* ;
	unsigned all[9216];
	ProcessingControlV0_t) processingControl;
} HDRFrameProcessingControl_t;

typedef struct {
	int version;
	unsigned size;
	HDRFrameProcessingControl_t hdrFrameControl;
} SCD_Struct_MS82;

typedef struct {
	MSRHcuHeader_t hcuHeader;
	MSRHcuEntryHeader_t colorConfigHeader;
	SCD_Struct_MS82 hcuApiColorConfig;
	MSRHcuEntryHeader_t linearizationHeader;
	float linearizationLut[1281];
} SCD_Struct_MS83;

typedef struct MSRHDRContext {
	unsigned contentType;
	unsigned displayType;
	int processingType;
	unsigned operation;
	unsigned convertType;
	unsigned inputFormatRaw;
	unsigned outputFormatRaw;
	unsigned inputFormat;
	unsigned outputFormat;
	unsigned inputColorSpace;
	unsigned outputColorSpace;
	unsigned inputTransferFunction;
	unsigned outputTransferFunction;
	unsigned long long inputWidth;
	unsigned long long inputHeight;
	unsigned long long outputWidth;
	unsigned long long outputHeight;
	char enableReshaping;
	char enableToneMapping;
	char enableConverting;
	DpcParam dpcParam;
} MSRHDRContext;

typedef struct {
	 ycc_to_rgb_offset;
	 r_scale;
	 g_scale;
	 b_scale;
	 LMStoRGB_coef0;
	 LMStoRGB_coef1;
	 LMStoRGB_coef2;
	 RGBtoLMS_coef0;
	 RGBtoLMS_coef1;
	 RGBtoLMS_coef2;
	float rangeInv;
	float rangeMinTimesInvRange;
	unsigned signal_eotf;
	float signal_eotf_gamma;
	float signal_eotf_a;
	float signal_eotf_b;
	float signal_eotf_cbt;
	float sl;
	float c_1;
	float c_2;
	float c_3;
	unsigned signal_oetf;
	float signal_oetf_gamma;
	float signal_oetf_a;
	float signal_oetf_b;
	float signal_oetf_cbt;
	float l2pq_mid_point;
	float l2pq_max_point;
	float l2pq_normalize_low;
	float l2pq_normalize_high;
	float OutputScale;
	float narrow_range_scale;
	float narrow_range_offset;
	float Saturation;
	float maxEDRValue;
	unsigned maxMasteringNits;
	float maxForwardTargetInNits;
	float minForwardTargetInNits;
	float targetMaxNits;
	float targetMaxPq;
	float trim_slope;
	float trim_offset;
	float trim_power;
	float trim_sat;
	float s2t_ratio;
	float sat2_p1;
	float sat2_p2;
	float sat2_p3;
	float sat2_p4;
	float sat2_p5;
	float brightAdjBySat2;
	float tonemap_target_brightness;
	float gamma;
	float ambientNits;
	BOOL apply_macos_gamma;
	float macos_gamma;
	float edrFactor;
	BOOL target_p3_d65;
	float sourceContentSDRMaxBrightnessInNits;
	int transfer_function_input;
	BOOL force_passthrough;
	int src_content_type;
	int input_texture_format;
	float extraScaling;
	int orientation;
	 preRGBtoRGB_coef0;
	 preRGBtoRGB_coef1;
	 preRGBtoRGB_coef2;
	 RGBtoY_coefs;
	 postRGBtoRGB_coef0;
	 postRGBtoRGB_coef1;
	 postRGBtoRGB_coef2;
	DpcParam dpcParam;
	int dmVersion;
	BOOL blackLevelCompensation;
	float blackLevelCompensationGain;
	 passThroughRGBtoRGB_coef0;
	 passThroughRGBtoRGB_coef1;
	 passThroughRGBtoRGB_coef2;
	BOOL enableDoViLowerLimitScalingFactor;
	BOOL LSINPQ;
} SCD_Struct_MS85;

typedef struct {
	unsigned char ext_block1_length_byte3;
	unsigned char ext_block1_length_byte2;
	unsigned char ext_block1_length_byte1;
	unsigned char ext_block1_length_byte0;
	unsigned char ext_block1_level;
	unsigned char min_PQ_hi;
	unsigned char min_PQ_lo;
	unsigned char max_PQ_hi;
	unsigned char max_PQ_lo;
	unsigned char avg_PQ_hi;
	unsigned char avg_PQ_lo;
} SCD_Struct_MS86;

typedef struct {
	unsigned char dm_metadata_id;
	unsigned char scene_refresh_flag;
	unsigned char YCCtoRGB_coef0_hi;
	unsigned char YCCtoRGB_coef0_lo;
	unsigned char YCCtoRGB_coef1_hi;
	unsigned char YCCtoRGB_coef1_lo;
	unsigned char YCCtoRGB_coef2_hi;
	unsigned char YCCtoRGB_coef2_lo;
	unsigned char YCCtoRGB_coef3_hi;
	unsigned char YCCtoRGB_coef3_lo;
	unsigned char YCCtoRGB_coef4_hi;
	unsigned char YCCtoRGB_coef4_lo;
	unsigned char YCCtoRGB_coef5_hi;
	unsigned char YCCtoRGB_coef5_lo;
	unsigned char YCCtoRGB_coef6_hi;
	unsigned char YCCtoRGB_coef6_lo;
	unsigned char YCCtoRGB_coef7_hi;
	unsigned char YCCtoRGB_coef7_lo;
	unsigned char YCCtoRGB_coef8_hi;
	unsigned char YCCtoRGB_coef8_lo;
	unsigned char YCCtoRGB_offset0_byte3;
	unsigned char YCCtoRGB_offset0_byte2;
	unsigned char YCCtoRGB_offset0_byte1;
	unsigned char YCCtoRGB_offset0_byte0;
	unsigned char YCCtoRGB_offset1_byte3;
	unsigned char YCCtoRGB_offset1_byte2;
	unsigned char YCCtoRGB_offset1_byte1;
	unsigned char YCCtoRGB_offset1_byte0;
	unsigned char YCCtoRGB_offset2_byte3;
	unsigned char YCCtoRGB_offset2_byte2;
	unsigned char YCCtoRGB_offset2_byte1;
	unsigned char YCCtoRGB_offset2_byte0;
	unsigned char RGBtoLMS_coef0_hi;
	unsigned char RGBtoLMS_coef0_lo;
	unsigned char RGBtoLMS_coef1_hi;
	unsigned char RGBtoLMS_coef1_lo;
	unsigned char RGBtoLMS_coef2_hi;
	unsigned char RGBtoLMS_coef2_lo;
	unsigned char RGBtoLMS_coef3_hi;
	unsigned char RGBtoLMS_coef3_lo;
	unsigned char RGBtoLMS_coef4_hi;
	unsigned char RGBtoLMS_coef4_lo;
	unsigned char RGBtoLMS_coef5_hi;
	unsigned char RGBtoLMS_coef5_lo;
	unsigned char RGBtoLMS_coef6_hi;
	unsigned char RGBtoLMS_coef6_lo;
	unsigned char RGBtoLMS_coef7_hi;
	unsigned char RGBtoLMS_coef7_lo;
	unsigned char RGBtoLMS_coef8_hi;
	unsigned char RGBtoLMS_coef8_lo;
	unsigned char signal_eotf_hi;
	unsigned char signal_eotf_lo;
	unsigned char signal_eotf_param0_hi;
	unsigned char signal_eotf_param0_lo;
	unsigned char signal_eotf_param1_hi;
	unsigned char signal_eotf_param1_lo;
	unsigned char signal_eotf_param2_byte3;
	unsigned char signal_eotf_param2_byte2;
	unsigned char signal_eotf_param2_byte1;
	unsigned char signal_eotf_param2_byte0;
	unsigned char signal_bit_depth;
	unsigned char signal_color_space;
	unsigned char signal_chroma_format;
	unsigned char signal_full_range_flag;
	unsigned char source_min_PQ_hi;
	unsigned char source_min_PQ_lo;
	unsigned char source_max_PQ_hi;
	unsigned char source_max_PQ_lo;
	unsigned char source_diagonal_hi;
	unsigned char source_diagonal_lo;
	unsigned char num_ext_blocks;
	SCD_Struct_MS86 L1;
	unsigned char extendedBlock[970];
} SCD_Struct_MS87;

typedef struct {
	float lutForCModel[514];
	int lut[3][514];
} SCD_Struct_MS88;

typedef struct {
	float lutForCModel[1281];
	float lut[3][1281];
} SCD_Struct_MS89;

typedef struct {
	int type;
	/*function pointer*/void* ;
	SCD_Struct_MS88 degmmaC;
	SCD_Struct_MS89) degmmaS;
} SCD_Struct_MS90;

typedef struct {
	unsigned tmLutI[513];
	unsigned tmLutS[513];
	unsigned smLutI[513];
	unsigned smLutS[513];
} SCD_Struct_MS91;

typedef union {
	unsigned lut[4][513];
	SCD_Struct_MS91 cmodel;
} SCD_Union_MS92;

typedef struct {
	int type;
	float lutForCModel[706];
	float lut[3][706];
	DpcParam dpcParam;
} SCD_Struct_MS93;

