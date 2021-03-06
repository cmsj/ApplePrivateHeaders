/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/DiscRecordingUI.framework/Versions/A/DiscRecordingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

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

typedef struct DRBurnSessionSetupCallbacks {
	unsigned version;
	/*function pointer*/void* deviceShouldBeTarget;
	/*function pointer*/void* containsSuitableMedia;
	/*function pointer*/void* deviceSelectionChanged;
} DRBurnSessionSetupCallbacks;

typedef struct DRBurnSessionProgressCallbacks {
	unsigned version;
	/*function pointer*/void* progressWillBegin;
	/*function pointer*/void* progressDidFinish;
	/*function pointer*/void* burnDidFinish;
} DRBurnSessionProgressCallbacks;

typedef struct DREraseSessionSetupCallbacks {
	unsigned version;
	/*function pointer*/void* deviceShouldBeTarget;
	/*function pointer*/void* containsSuitableMedia;
	/*function pointer*/void* deviceSelectionChanged;
} DREraseSessionSetupCallbacks;

typedef struct DREraseSessionProgressCallbacks {
	unsigned version;
	/*function pointer*/void* progressWillBegin;
	/*function pointer*/void* progressDidFinish;
	/*function pointer*/void* eraseDidFinish;
} DREraseSessionProgressCallbacks;

