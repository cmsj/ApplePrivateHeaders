/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFFuture.h>

@protocol EFScheduler;
@class NSConditionLock, EFPromise;

@interface EFLazyFuture : EFFuture {

	NSConditionLock* _stateLock;
	id<EFScheduler> _scheduler;
	/*^block*/id _block;
	EFPromise* _promise;

}
-(char)run;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(char)isCancelled;
-(char)isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)initWithScheduler:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(id)resultIfAvailable:(id*)arg1 ;
-(char)tryCancel;
@end

