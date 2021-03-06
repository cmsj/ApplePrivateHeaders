/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/Versions/A/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMPromise.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSError, NSString;

@interface FMFuture : NSObject <FMPromise> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _finished;
	NSMutableArray* _completionBlocks;
	id _resultValue;
	NSError* _resultError;
	NSString* _descriptor;

}

@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
@property (nonatomic,copy) NSString * descriptor;                    //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithNoResult;
+(id)chainFutures:(id)arg1 ;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 ignoringErrors:(char)arg2 scheduler:(id)arg3 ;
+(id)_chainFuturesWithFutureStack:(id)arg1 ;
+(id)combineAllFutures:(id)arg1 ;
+(id)futureWithCompletionHandlerAdapterBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)descriptor;
-(void)setDescriptor:(NSString *)arg1 ;
-(char)cancel;
-(char)isCancelled;
-(char)isFinished;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(char)finishWithError:(id)arg1 ;
-(char)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(char)finishWithResult:(id)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)_flushCompletionBlocks;
-(/*^block*/id)completionHandlerAdapter;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(void)didCancel;
-(char)finishWithNoResult;
-(char)_queue_isCancelled;
-(id)reschedule:(id)arg1 ;
-(id)recoverIgnoringError;
@end

