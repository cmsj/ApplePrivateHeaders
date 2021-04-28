/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;
@class BSTimer, NSObject, NSDate;

@interface BSWatchdog : NSObject {

	BSTimer* _timer;
	/*^block*/id _completion;
	char _invalidated;
	char _completed;
	char _hasFired;
	id<BSWatchdogDelegate> _delegate;
	id<BSWatchdogProviding> _provider;
	double _timeout;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _startDate;

}

@property (nonatomic,retain) id<BSWatchdogDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<BSWatchdogProviding> provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (getter=hasFired,nonatomic,readonly) char fired;                      //@synthesize hasFired=_hasFired - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id<BSWatchdogDelegate>)delegate;
-(void)setDelegate:(id<BSWatchdogDelegate>)arg1 ;
-(double)timeout;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<BSWatchdogProviding>)provider;
-(NSDate *)startDate;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_watchdogInvalidated;
-(void)_watchdogTimerFired;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 ;
-(char)hasFired;
@end
