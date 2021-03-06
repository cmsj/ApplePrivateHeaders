/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/Versions/A/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLTimerScheduler;
@class CLSilo;

@interface CLTimer : NSObject {

	double _delaySetAtTime;
	double _nextFireDelay;
	CLSilo* _silo;
	id<CLTimerScheduler> _scheduler;
	/*^block*/id _handler;
	double _fireInterval;

}

@property (assign,nonatomic) double nextFireTime; 
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double nextFireDelay;              //@synthesize nextFireDelay=_nextFireDelay - In the implementation block
@property (assign,nonatomic) double fireInterval;               //@synthesize fireInterval=_fireInterval - In the implementation block
-(void)shouldFire;
-(id)initInSilo:(id)arg1 withScheduler:(id)arg2 ;
-(void)dbgAssertInside;
-(double)nextFireDelayRaw;
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(double)fireInterval;
-(void)setNextFireDelay:(double)arg1 ;
-(void)updateScheduler;
-(double)nextFireTime;
-(void)setNextFireTime:(double)arg1 ;
-(double)nextFireDelay;
-(void)setNextFireDelay:(double)arg1 interval:(double)arg2 ;
-(void)setNextFireTime:(double)arg1 interval:(double)arg2 ;
-(void)setFireInterval:(double)arg1 ;
@end

