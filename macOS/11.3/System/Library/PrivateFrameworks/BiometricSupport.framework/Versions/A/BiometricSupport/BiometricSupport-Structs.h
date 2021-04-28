/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/Versions/A/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned usingAuthToken;
	unsigned tokenLength;
	unsigned char token[32];
} SCD_Struct_Bi1;

typedef struct {
	unsigned type;
	unsigned char uuid[16];
} SCD_Struct_Bi2;

typedef struct {
	unsigned userID;
	SCD_Struct_Bi2 group;
} SCD_Struct_Ca3;

typedef struct {
	unsigned field1;
	SCD_Struct_Bi2 field2;
} SCD_Struct_Ca4;

typedef struct __FSEventStream* FSEventStreamRef;

typedef struct {
	unsigned long long timeStamp;
	unsigned char result;
} SCD_Struct_Bi6;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned long long field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
} SCD_Struct_Bi8;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW9;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_AW10;
