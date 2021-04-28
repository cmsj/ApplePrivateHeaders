/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _AMDeviceNotificationContext* AMDeviceNotificationContextRef;

typedef struct _AMDevice* AMDeviceRef;

typedef struct _NSZone* NSZoneRef;

typedef struct AUListenerBase* AUListenerBaseRef;

typedef struct _AMDServiceConnection* AMDServiceConnectionRef;

typedef struct AudioUnitParameterInfo {
	char name[52];
	__CFString unitName;
	unsigned clumpID;
	__CFString cfNameString;
	unsigned unit;
	float minValue;
	float maxValue;
	float defaultValue;
	unsigned flags;
} AudioUnitParameterInfo;
