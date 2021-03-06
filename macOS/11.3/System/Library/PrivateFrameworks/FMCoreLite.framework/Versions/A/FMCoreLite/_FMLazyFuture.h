/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/Versions/A/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMFuture.h>

@protocol FMScheduler, OS_dispatch_queue;
@class NSObject;

@interface _FMLazyFuture : FMFuture {

	char _started;
	/*^block*/id _block;
	id<FMScheduler> _scheduler;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) id<FMScheduler> scheduler;                             //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) char started;                                          //@synthesize started=_started - In the implementation block
-(void)_runIfNecessary;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)block;
-(char)started;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setStarted:(char)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(id<FMScheduler>)scheduler;
-(void)setScheduler:(id<FMScheduler>)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
@end

