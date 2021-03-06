/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface CURetrier : NSObject {

	char _invalidateCalled;
	NSObject*<OS_dispatch_source> _retryTimer;
	/*^block*/id _actionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _interval;
	double _leeway;
	/*^block*/id _invalidationHandler;
	double _startTime;

}

@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double leeway;                                           //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)start;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(id)invalidationHandler;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)failed;
-(void)invalidateDirect;
-(double)leeway;
-(void)setLeeway:(double)arg1 ;
-(void)startDirect;
-(void)failedDirect;
-(void)succeeded;
-(void)succeededDirect;
@end

