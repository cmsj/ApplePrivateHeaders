/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	id field1;
	char* field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned field7;
	unsigned long long field8;
	char field9;
	unsigned long long field10;
	float field11;
	unsigned long long field12;
	id field13;
	int field14;
} SCD_Struct_MN0;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_MN1;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_MN2;

typedef struct {
	unsigned short field1[2];
	unsigned short field2[2];
} SCD_Struct_MN3;

typedef struct {
	SCD_Struct_MN1 field1;
	SCD_Struct_MN1 field2;
} SCD_Struct_MN4;

typedef struct {
	SCD_Struct_MN0 field1;
	unsigned long long field2;
	unsigned long long field3;
	int field4;
	int field5;
	int field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned field9;
	unsigned( field10;
	/*function pointer*/void* field11;
	= field12;
	SCD_Struct_MN2 field13;
	SCD_Struct_MN3) field14;
	/*function pointer*/void* field15;
	SCD_Struct_MN4 field16;
	unsigned char field17;
	char field18;
	unsigned char field19;
	char field20;
	char field21;
	unsigned char field22;
	char field23;
	unsigned short field24;
	_ field25;
	N field26;
	unsigned short field27;
	R field28;
	a field29;
	n field30;
	g field31;
	e field32;
	char field33;
	unsigned field34;
} SCD_Struct_MN5;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_MN6;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned endDistance : 1;
	unsigned endTime : 1;
	unsigned maneuverTime : 1;
	unsigned startDistance : 1;
	unsigned startTime : 1;
	unsigned vehicleSpeed : 1;
	unsigned enrouteNoticeIndex : 1;
	unsigned eventIndex : 1;
	unsigned selectedPrimaryStringIndex : 1;
	unsigned selectedSecondaryStringIndex : 1;
	unsigned stepID : 1;
	unsigned trafficCameraType : 1;
	unsigned trafficColor : 1;
	unsigned type : 1;
	unsigned shortPrompt : 1;
} SCD_Struct_MN8;

typedef struct {
	unsigned currentPosition : 1;
	unsigned pedestrianTraceStartRelativeTimestamp : 1;
	unsigned traceDuration : 1;
	unsigned eventType : 1;
	unsigned recordedBookmarkID : 1;
} SCD_Struct_MN9;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct sqlite3* sqlite3Ref;

typedef struct Matrix<double, 2, 1> {
	double _e[2];
} Matrix<double, 2, 1>;

typedef struct LineSegment<double, 2> {
	Matrix<double, 2, 1> _origin;
	Matrix<double, 2, 1> _direction;
} LineSegment<double, 2>;

typedef struct PolylineCoordinate {
	unsigned index;
	float offset;
} PolylineCoordinate;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_MN16;

typedef struct {
	long long context;
	double distance;
	char usePrimaryName;
	char useSecondaryName;
	char useDistanceForSecondary;
	char useContinueForSecondary;
	int numPrimarySigns;
	int numSecondarySigns;
} SCD_Struct_MN17;

typedef struct {
	unsigned maxRouteCount : 1;
} SCD_Struct_MN18;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	int field1;
	SCD_Struct_MN6 field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	int field11;
	double field12;
	int field13;
	SCD_Struct_MN6 field14;
	double field15;
	int field16;
	unsigned field17;
	int field18;
	int field19;
	int field20;
	double field21;
} SCD_Struct_MN20;

typedef struct {
	unsigned index : 1;
	unsigned offset : 1;
} SCD_Struct_MN21;

