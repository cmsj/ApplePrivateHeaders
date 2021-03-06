/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface OITSUDelayTimer : NSObject {

	char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	char _cancelled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (setter=_setDispatchQueue:,nonatomic,retain) NSObject*<OS_dispatch_queue> _dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (setter=_setDispatchTimer:,nonatomic,retain) NSObject*<OS_dispatch_source> _dispatchTimer;              //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (assign,setter=_setCancelled:,getter=_isCancelled,nonatomic) char _cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;                          //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_dispatchQueue;
-(void)cancel;
-(char)_isCancelled;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)_setDispatchQueue:(id)arg1 ;
-(void)_reallyCancel;
-(void)_setCancelled:(char)arg1 ;
-(NSObject*<OS_dispatch_source>)_dispatchTimer;
-(char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)_setDispatchTimer:(id)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg1 ;
@end

