/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFCore/AVFCore-Structs.h>
@class NSObject, AVWeakReference;

@interface AVTimebaseObserver : NSObject {

	NSObject*<OS_dispatch_queue> _timerQueue;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_source> _timerSource;
	OpaqueCMTimebaseRef _timebase;
	char _isObservingTimebase;
	double _lastRate;
	double _currentRate;
	char _invalid;

}

@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
@property (readonly) OpaqueCMTimebaseRef timebase; 
@property (nonatomic,readonly) char invalidated; 
-(void)dealloc;
-(void)invalidate;
-(OpaqueCMTimebaseRef)timebase;
-(id)_weakReference;
-(char)invalidated;
-(void)_reallyInvalidate;
-(void)_removeTimebaseFromTimerSource;
-(void)_stopObservingTimebaseNotifications;
-(void)_attachTimerSourceToTimebase;
-(void)_startObservingTimebaseNotifications;
-(void)_effectiveRateChanged;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 queue:(id)arg2 ;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_finishInitializationWithTimerEventHandler:(/*^block*/id)arg1 ;
@end

