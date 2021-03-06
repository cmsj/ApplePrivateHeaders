/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceDispatchingQueue.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableArray, NSArray, NSString;

@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _blocks;
	unsigned long long _enqueueID;
	unsigned long long _dequeueID;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSArray* _mainRunLoopModes;
	CFRunLoopSourceRef _runLoopSource;
	char _callingOut;
	NSObject*<OS_dispatch_semaphore> _synchronizingEnqueueSemaphore;
	unsigned long long _lastSynchronizingWorkspaceName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queueWithDispatchQueue:(id)arg1 ;
+(id)queueWithMainRunLoopModes:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)assertOnQueue;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(unsigned long long)arg2 ;
-(char)_hasNext;
-(char)_performNext;
-(id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2 ;
-(void)assertBarrierOnQueue;
-(void)_queue_performAsync:(/*^block*/id)arg1 ;
-(char)_targetQueue_performNextIfPossible;
-(id)backingQueueIfExists;
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2 ;
-(void)performAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_performNextFromRunLoopSource;
@end

