/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSDate, NSString, PCPersistentTimer, NSObject;

@interface CUPersistentTimer : NSObject {

	NSDate* _cachedDate;
	double _cachedInterval;
	double _cachedLeeway;
	char _cachedRepeating;
	char _cachedUseXPC;
	char _cachedWakeSystem;
	NSString* _identifier;
	char _invalidateCalled;
	PCPersistentTimer* _pcPersistentTimer;
	LogCategory* _ucat;
	char _xpcRegistered;
	char _repeating;
	char _useXPC;
	char _wakeSystem;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDate* _date;
	double _interval;
	double _leeway;
	/*^block*/id _invalidationHandler;
	/*^block*/id _timerHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSDate * date;                                             //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double leeway;                                           //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) char repeating;                                          //@synthesize repeating=_repeating - In the implementation block
@property (nonatomic,copy) id timerHandler;                                           //@synthesize timerHandler=_timerHandler - In the implementation block
@property (assign,nonatomic) char useXPC;                                             //@synthesize useXPC=_useXPC - In the implementation block
@property (assign,nonatomic) char wakeSystem;                                         //@synthesize wakeSystem=_wakeSystem - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSDate *)date;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(id)initWithIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)start;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(id)invalidationHandler;
-(void)_start;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)leeway;
-(void)setLeeway:(double)arg1 ;
-(char)repeating;
-(id)timerHandler;
-(char)useXPC;
-(char)wakeSystem;
-(void)setRepeating:(char)arg1 ;
-(void)setUseXPC:(char)arg1 ;
-(void)setWakeSystem:(char)arg1 ;
-(void)_startPCPersistentTimer;
-(void)_startXPCActivity;
-(void)_pcTimerFired:(id)arg1 ;
-(void)_xpcTimerFired:(id)arg1 ;
-(void)setTimerHandler:(id)arg1 ;
@end
