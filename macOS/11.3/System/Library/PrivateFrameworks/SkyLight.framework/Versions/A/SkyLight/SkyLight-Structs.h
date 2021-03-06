/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SkyLight.framework/Versions/A/SkyLight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct OpaqueCUIRendererRef* OpaqueCUIRendererRefRef;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_SL1;

typedef struct {
	float field1[9];
} SCD_Struct_SL2;

typedef struct SLSBrightnessTxState {
	float ambient;
	float sdr_brightness;
	float brightness_limit;
	float headroom;
	float potential_headroom;
	float reference_headroom;
	unsigned mask;
} SLSBrightnessTxState;

typedef struct SLSBrightnessTimeoutTxState {
	double shielding_timeout;
	double dim_timeout;
	double sleep_timeout;
	unsigned mask;
} SLSBrightnessTimeoutTxState;

typedef struct {
	float x;
	float y;
} SCD_Struct_SL5;

typedef struct SLSBrightnessPolicyTxState {
	unsigned char shielding_policy;
	unsigned char dim_policy;
	unsigned char sleep_policy;
	unsigned mask;
} SLSBrightnessPolicyTxState;

typedef struct shared_ptr<SLSScreenTelemetryResultsSnapshotPanelData> {
	SLSScreenTelemetryResultsSnapshotPanelData __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<SLSScreenTelemetryResultsSnapshotPanelData>;

typedef struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneData> {
	SLSScreenTelemetryResultsSnapshotZoneData __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<SLSScreenTelemetryResultsSnapshotZoneData>;

typedef struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneRowData> {
	SLSScreenTelemetryResultsSnapshotZoneRowData __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<SLSScreenTelemetryResultsSnapshotZoneRowData>;

typedef struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> {
	SLSScreenTelemetryResultsSnapshotData __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<SLSScreenTelemetryResultsSnapshotData>;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct WSMainThreadBlockHoist* WSMainThreadBlockHoistRef;

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
} SCD_Struct_SL13;

typedef const struct __CFUUID* CFUUIDRef;

