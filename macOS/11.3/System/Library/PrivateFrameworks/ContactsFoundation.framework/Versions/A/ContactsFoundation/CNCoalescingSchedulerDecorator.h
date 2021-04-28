/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class CNStack, NSString;

@interface CNCoalescingSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	double _coalescingWindow;
	unsigned long long _state;
	CNStack* _delayedBlocks;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) double coalescingWindow;                //@synthesize coalescingWindow=_coalescingWindow - In the implementation block
@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) CNStack * delayedBlocks;                    //@synthesize delayedBlocks=_delayedBlocks - In the implementation block
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id<CNScheduler>)scheduler;
-(CNStack *)delayedBlocks;
-(double)coalescingWindow;
-(void)flushDelayedBlock;
-(unsigned long long)getAndIncrementState;
-(void)removeDelayedBlock:(/*^block*/id)arg1 ;
-(id)initWithScheduler:(id)arg1 coalescingWindow:(double)arg2 ;
-(void)setDelayedBlocks:(CNStack *)arg1 ;
@end
