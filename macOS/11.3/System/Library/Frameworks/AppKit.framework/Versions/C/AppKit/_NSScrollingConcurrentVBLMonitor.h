/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSScrollStateEventListener;
#import <AppKit/AppKit-Structs.h>
@class NSLock, _NSScrollingConcurrentSharedData, _NSScrollingConcurrentConstantData, _NSScrollingConcurrentVBLPreprocessFilter, _NSScrollingConcurrentMainThreadSynchronizer;

@interface _NSScrollingConcurrentVBLMonitor : NSObject {

	NSLock* _synchLock;
	char* _isCancelledPtr;
	SCD_Struct_NS36 _flags;
	CGRect _cursorTargetFrame;
	id<_NSScrollStateEventListener> _scrollStateDelegate;
	_NSScrollingConcurrentSharedData* _sharedData;
	_NSScrollingConcurrentConstantData* _constantData;
	_NSScrollingConcurrentVBLPreprocessFilter* _preprocessFilter;
	_NSScrollingConcurrentMainThreadSynchronizer* _mainThreadSynchronizer;
	work_interval_instance* _currentWorkIntervalInstance;

}

@property (assign) CGRect cursorTargetFrame;                                                           //@synthesize cursorTargetFrame=_cursorTargetFrame - In the implementation block
@property (assign,nonatomic) id<_NSScrollStateEventListener> scrollStateDelegate;                      //@synthesize scrollStateDelegate=_scrollStateDelegate - In the implementation block
@property (retain) _NSScrollingConcurrentSharedData * sharedData;                                      //@synthesize sharedData=_sharedData - In the implementation block
@property (retain) _NSScrollingConcurrentConstantData * constantData;                                  //@synthesize constantData=_constantData - In the implementation block
@property (retain) _NSScrollingConcurrentVBLPreprocessFilter * preprocessFilter;                       //@synthesize preprocessFilter=_preprocessFilter - In the implementation block
@property (retain) _NSScrollingConcurrentMainThreadSynchronizer * mainThreadSynchronizer;              //@synthesize mainThreadSynchronizer=_mainThreadSynchronizer - In the implementation block
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)remove;
-(id<_NSScrollStateEventListener>)scrollStateDelegate;
-(void)setScrollStateDelegate:(id<_NSScrollStateEventListener>)arg1 ;
-(_NSScrollingConcurrentSharedData *)sharedData;
-(id)initWithConstantData:(id)arg1 ;
-(void)setPreprocessFilter:(_NSScrollingConcurrentVBLPreprocessFilter *)arg1 ;
-(void)setMainThreadSynchronizer:(_NSScrollingConcurrentMainThreadSynchronizer *)arg1 ;
-(void)setCursorTargetFrame:(CGRect)arg1 ;
-(_NSScrollingConcurrentVBLPreprocessFilter *)preprocessFilter;
-(_NSScrollingConcurrentConstantData *)constantData;
-(void)setConstantData:(_NSScrollingConcurrentConstantData *)arg1 ;
-(void)setSharedData:(_NSScrollingConcurrentSharedData *)arg1 ;
-(void)_checkCursorTargeting;
-(void)_updateScrollAnimation;
-(CGRect)cursorTargetFrame;
-(_NSScrollingConcurrentMainThreadSynchronizer *)mainThreadSynchronizer;
@end

