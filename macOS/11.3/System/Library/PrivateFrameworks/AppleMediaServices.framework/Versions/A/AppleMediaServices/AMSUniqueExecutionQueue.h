/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AMSPromise;

@interface AMSUniqueExecutionQueue : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _completionCallbacksQueue;
	NSObject*<OS_dispatch_queue> _executeBlockQueue;
	AMSPromise* _executionPromise;
	NSObject*<OS_dispatch_queue> _executionPromiseAccessQueue;

}

@property (copy) id block;                                                                  //@synthesize block=_block - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> completionCallbacksQueue;                   //@synthesize completionCallbacksQueue=_completionCallbacksQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> executeBlockQueue;                          //@synthesize executeBlockQueue=_executeBlockQueue - In the implementation block
@property (retain) AMSPromise * executionPromise;                                           //@synthesize executionPromise=_executionPromise - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> executionPromiseAccessQueue;              //@synthesize executionPromiseAccessQueue=_executionPromiseAccessQueue - In the implementation block
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionPromiseAccessQueue;
-(AMSPromise *)executionPromise;
-(id)_createExecutionPromise;
-(void)_beginExecutingBlockWithPromise:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionCallbacksQueue;
-(NSObject*<OS_dispatch_queue>)executeBlockQueue;
-(void)setExecutionPromise:(AMSPromise *)arg1 ;
-(void)addCompletionBlockForSubsequentExecution:(/*^block*/id)arg1 ;
-(void)setCompletionCallbacksQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExecuteBlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

