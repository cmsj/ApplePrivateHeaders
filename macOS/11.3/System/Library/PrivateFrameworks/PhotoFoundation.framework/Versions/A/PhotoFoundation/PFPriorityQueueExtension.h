/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueueExtension.h>
#import <libobjc.A.dylib/PFPriorityEnqueuing.h>

@class PFDispatchQueue, NSArray, NSMutableArray, PFSerialQueue;

@interface PFPriorityQueueExtension : PFDispatchQueueExtension <PFPriorityEnqueuing> {

	PFDispatchQueue* _executionQueue;
	PFDispatchQueue* _serializer;
	unsigned long long _lastScheduledPriority;
	NSArray* _priorityLevels;
	NSMutableArray* _emptyNotifications;
	unsigned long long* _scheduledCount;
	PFSerialQueue* _schedulingQueue;
	unsigned long long _qosBlockCount[6];
	char _queueSuspended;
	unsigned long long _schedulingSuspendCount;
	char _performsConcurrentScheduling;

}
-(void)dealloc;
-(id)init;
-(void)_scheduleBlock:(id)arg1 ;
-(void)installOnQueue:(id)arg1 ;
-(id)queue:(id)arg1 receivedDispatchAsync:(/*^block*/id)arg2 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(void)queueDidSuspend:(id)arg1 ;
-(void)queueWillResume:(id)arg1 ;
-(void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3 ;
-(void)enqueueWithPriority:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enqueueEmptyNotification:(/*^block*/id)arg1 ;
-(unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1 ;
-(void)suspendScheduling;
-(void)resumeScheduling;
-(id)initWithPriorityLevels:(unsigned long long)arg1 concurrentScheduling:(char)arg2 ;
-(void)_scheduleNextBlock;
@end
