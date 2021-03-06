/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

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

typedef struct SCRCMathAverageValue {
	unsigned samples;
	50d fifo;
	int fifoIndex;
	double sum;
	double average;
	double current;
} SCRCMathAverageValue;

typedef struct SCRCFingerState {
	unsigned long long identifier;
	long long xDirection;
	long long yDirection;
	SCRCMathAverageValue normalizedVelocityPerSample;
	SCRCMathAverageValue deltaXPerSample;
	SCRCMathAverageValue deltaYPerSample;
	SCRCMathAverageValue distancePerSample;
	double distanceTraveledWithInertiaApplied;
	char dragStalled;
	long long type;
	CGPoint startTouchPoint;
	CGPoint mostRecentTouchPoint;
	CGPoint lastDownPoint;
	double pressure;
	double altitude;
	double azimuth;
} SCRCFingerState;

typedef struct {
	char isFingerCurrentlyDown;
	char dead;
	char gutterHasBeenTouched;
	unsigned long long numFingersInCurrentGestureEvent;
	unsigned long long totalNumFingersInGesture;
	unsigned long long count;
	CGRect frame;
	CGPoint location[8];
	CGPoint locationPerTap[8];
	double thisTime;
	double lastTime;
} SCD_Struct_SC7;

typedef struct {
	char isSplitting;
	char isTapping;
	char fastTrack;
	char tapDead;
	char timedOut;
	char active;
	char didNotify;
	unsigned long long fingerIdentifier;
	double fingerDownTime;
	CGPoint startTapLocation;
	CGPoint lastTapLocation;
	CGPoint primaryFingerLocation;
	double tapDistance;
	long long state;
} SCD_Struct_SC8;

typedef struct {
	long long field1;
	long long field2;
	double field3;
	double field4;
	double field5;
	double field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	char field10;
	CGPoint field11;
	double field12;
	double field13;
	double field14;
	CGPoint field15;
	CGPoint field16;
	CGPoint field17;
	CGPoint field18;
	CGPoint field19;
	CGRect field20;
	CGRect field21;
	double field22;
} SCD_Struct_SC9;

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct ProcessSerialNumber {
	unsigned highLongOfPSN;
	unsigned lowLongOfPSN;
} ProcessSerialNumber;

typedef struct URegularExpression* URegularExpressionRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __DASession* DASessionRef;

typedef struct __CFArray* CFArrayRef;

