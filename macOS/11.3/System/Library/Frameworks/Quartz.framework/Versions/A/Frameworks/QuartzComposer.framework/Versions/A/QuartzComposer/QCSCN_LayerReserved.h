/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCSCN_Renderer, NSMutableDictionary, NSRecursiveLock;

@interface QCSCN_LayerReserved : NSObject {

	QCSCN_Renderer* _renderer;
	CGLContextObject* _mainContext;
	NSMutableDictionary* _parameters;
	char _enableJittering;
	char _jitteringSupported;
	char _drawForJittering;
	char _jitteringIsComplete;
	char _abortJittering;
	char _jitteringThreadRunning;
	char _restartJittering;
	NSRecursiveLock* _jitteringLock;
	id _delegate;
	char _autoAsyncMode;
	char _dirty;
	char _rendersIntoMaterial;

}
-(void)dealloc;
@end

