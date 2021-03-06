/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFuture.h>
#import <libobjc.A.dylib/CNPromise.h>

@class NSConditionLock, CNFutureResult, CNTask, CNFutureCompletionBlocks, NSString;

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {

	NSConditionLock* _stateLock;
	CNFutureResult* _futureResult;
	CNTask* _task;
	CNFutureCompletionBlocks* _completionBlocks;

}

@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)run;
-(id)init;
-(char)cancel;
-(char)isCancelled;
-(char)isFinished;
-(char)finishWithError:(id)arg1 ;
-(char)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)result:(id*)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(char)finishWithResult:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)_flushCompletionBlocks;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(char)nts_isFinished;
-(id)futureResult;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(void)didCancel;
-(id)initWithTask:(id)arg1 ;
@end

