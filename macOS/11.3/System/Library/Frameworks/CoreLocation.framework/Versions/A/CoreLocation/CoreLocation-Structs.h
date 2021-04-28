/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CLLocationManagerStateTrackerState {
	double distanceFilter;
	double desiredAccuracy;
	char updatingLocation;
	char requestingLocation;
	char requestingRanging;
	char updatingRanging;
	char updatingHeading;
	double headingFilter;
	char allowsLocationPrompts;
	char allowsAlteredAccessoryLocations;
	char dynamicAccuracyReductionEnabled;
	char previousAuthorizationStatusValid;
	int previousAuthorizationStatus;
	char limitsPrecision;
	long long activityType;
	int pausesLocationUpdatesAutomatically;
	char paused;
	char allowsBackgroundLocationUpdates;
	char showsBackgroundLocationIndicator;
	char allowsMapCorrection;
	char batchingLocation;
	char updatingVehicleSpeed;
	char updatingVehicleHeading;
	char matchInfoEnabled;
	char groundAltitudeEnabled;
	char fusionInfoEnabled;
	char courtesyPromptNeeded;
	char isAuthorizedForWidgetUpdates;
} CLLocationManagerStateTrackerState;

typedef struct __CLClient* CLClientRef;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_CL2;

typedef struct {
	int suitability;
	SCD_Struct_CL2 coordinate;
	double horizontalAccuracy;
	double altitude;
	double verticalAccuracy;
	double speed;
	double speedAccuracy;
	double course;
	double courseAccuracy;
	double timestamp;
	int confidence;
	double lifespan;
	int type;
	SCD_Struct_CL2 rawCoordinate;
	double rawCourse;
	int floor;
	unsigned integrity;
	int referenceFrame;
	int rawReferenceFrame;
	int signalEnvironmentType;
	double ellipsoidalAltitude;
} SCD_Struct_CL3;

typedef struct _NSZone* NSZoneRef;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	double x;
	double y;
	double z;
	double magneticHeading;
	double trueHeading;
	double accuracy;
	double timestamp;
	double temperature;
	double magnitude;
	double inclination;
	int calibration;
} SCD_Struct_CL6;

typedef struct {
	char proximityUUID[512];
	unsigned short major;
	unsigned short minor;
	int definitionMask;
	BOOL notifyEntryStateOnDisplay;
} SCD_Struct_CL7;

typedef struct {
	SCD_Struct_CL2 center;
	double radius;
	double desiredAccuracy;
	int referenceFrame;
	BOOL allowMonitoringWhileNearby;
	BOOL lowPower;
} SCD_Struct_CL8;

typedef struct {
	SCD_Struct_CL2 vertices[101];
	int verticesCount;
	int referenceFrame;
	BOOL allowMonitoringWhileNearby;
} SCD_Struct_CL9;

typedef struct {
	char identifier[512];
	char onBehalfOfIdentifier[512];
	int type;
	BOOL notifyOnEntry;
	BOOL notifyOnExit;
	BOOL conservativeEntry;
	BOOL emergency;
	/*function pointer*/void* ;
	SCD_Struct_CL7 beaconAttributes;
	SCD_Struct_CL8 circularAttributes;
	SCD_Struct_CL9) polygonalAttributes;
} SCD_Struct_CL10;

typedef struct {
	char field1[512];
	char field2[512];
	int field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
	BOOL( field7;
	/*function pointer*/void* field8;
	= field9;
	SCD_Struct_CL7 field10;
	SCD_Struct_CL8 field11;
	SCD_Struct_CL9) field12;
} SCD_Struct_CL11;

typedef struct {
	 coordinate;
	double horizontalAccuracy;
} SCD_Struct_CL12;

typedef struct {
	[4 columns];
} SCD_Struct_CL13;

typedef struct {
	float v[6][6];
} SCD_Struct_CL14;

typedef const struct __CFString* CFStringRef;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef const struct __CFArray* CFArrayRef;

typedef struct {
	int field1;
	SCD_Struct_CL2 field2;
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
	SCD_Struct_CL2 field14;
	double field15;
	int field16;
	unsigned field17;
	int field18;
	int field19;
	int field20;
	double field21;
} SCD_Struct_CL18;

typedef struct {
	double field1;
	double field2;
	double field3;
	int field4;
} SCD_Struct_CL19;

typedef struct {
	unsigned long long field1;
	double field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_CL20;

typedef struct {
	unsigned field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
	unsigned short field6;
	unsigned short field7;
	unsigned char field8;
	unsigned char field9;
} SCD_Struct_CL21;

typedef struct {
	double field1;
	double field2;
	BOOL field3;
	BOOL field4;
} SCD_Struct_CL22;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	float field6;
	float field7;
	float field8;
	BOOL field9;
	int field10;
	SCD_Struct_CL2 field11;
	double field12;
	int field13;
	int field14;
	BOOL field15;
	SCD_Struct_CL2 field16;
	2 field17;
	SCD_Struct_CL2 field18;
	int field19;
	float field20;
	SCD_Struct_CL2 field21;
	double field22;
	double field23;
	int field24;
	BOOL field25;
	double field26;
	double field27;
	double field28;
	double field29;
	double field30;
	double field31;
	BOOL field32;
	SCD_Struct_CL2 field33;
	double field34;
	int field35;
	double field36;
	double field37;
	int field38;
	double field39;
	double field40;
} SCD_Struct_CL23;

typedef struct {
	[3 columns];
} SCD_Struct_CL24;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned long long stateLengthInBytes;
	unsigned char stateLength;
	unsigned char orientationOffset;
	unsigned char orientationLength;
	unsigned char gyroBiasOffset;
	unsigned char gyroBiasLength;
	unsigned char velocityOffset;
	unsigned char velocityLength;
	unsigned char accelBiasOffset;
	unsigned char accelBiasLength;
	unsigned char positionOffset;
	unsigned char positionLength;
} SCD_Struct_CL26;
