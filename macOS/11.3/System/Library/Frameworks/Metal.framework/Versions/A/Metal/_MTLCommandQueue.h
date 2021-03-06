/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class _MTLDevice, NSMutableArray, NSObject, NSMutableDictionary, NSString;

@interface _MTLCommandQueue : _MTLObjectWithLabel {

	_MTLDevice* _dev;
	NSMutableArray* _pendingQueue;
	NSMutableArray* _submittedQueue;
	opaque_pthread_mutex_t _pendingQueueLock;
	opaque_pthread_mutex_t _submittedQueueLock;
	NSObject*<OS_dispatch_group> _submittedGroup;
	NSObject*<OS_dispatch_queue> _commandQueueDispatch;
	NSObject*<OS_dispatch_queue> _completionQueueDispatch;
	NSObject*<OS_dispatch_source> _commandQueueEventSource;
	NSObject*<OS_dispatch_semaphore> _commandBufferSemaphore;
	int _backgroundTrackingPID;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	char _profilingEnabled;
	char _StatEnabled;
	unsigned long long _StatOptions;
	unsigned long long _StatLocations;
	Ai _numCommandBuffers;
	/*^block*/id _perfSampleHandlerBlock;
	unsigned long long _listIndex;
	unsigned long long _numRequestedCounters;
	unsigned long long _numInternalSampleCounters;
	NSMutableDictionary* _counterInfo;
	unsigned long long _maxCommandBufferCount;
	unsigned long long _qosLevel;
	NSObject*<OS_dispatch_queue> _commitQueue;
	char _commitSynchronously;
	NSObject*<OS_dispatch_queue> _completionQueue;
	char _disableCrossQueueHazardTracking;
	char _executionEnabled;
	char _skipRender;
	char _openGLQueue;
	MessageTracerBacktraceInfo* _commandQueueBacktraceInfo;
	char _hasLoggedTelemetry;
	NSObject*<OS_dispatch_semaphore> _presentScheduledSemaphore;
	char _forceImmediateSubmissionOnCommitThread;

}

@property (readonly) unsigned long long maxCommandBufferCount;                                                           //@synthesize maxCommandBufferCount=_maxCommandBufferCount - In the implementation block
@property (readonly) unsigned long long qosLevel;                                                                        //@synthesize qosLevel=_qosLevel - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue;                                                           //@synthesize commitQueue=_commitQueue - In the implementation block
@property (readonly) char commitSynchronously;                                                                           //@synthesize commitSynchronously=_commitSynchronously - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue;                                                       //@synthesize completionQueue=_completionQueue - In the implementation block
@property (readonly) char disableCrossQueueHazardTracking;                                                               //@synthesize disableCrossQueueHazardTracking=_disableCrossQueueHazardTracking - In the implementation block
@property (readonly) char isOpenGLQueue;                                                                                 //@synthesize openGLQueue=_openGLQueue - In the implementation block
@property (assign) int backgroundTrackingPID;                                                                            //@synthesize backgroundTrackingPID=_backgroundTrackingPID - In the implementation block
@property (readonly) unsigned long long globalTraceObjectID;                                                             //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (assign) char skipRender;                                                                                      //@synthesize skipRender=_skipRender - In the implementation block
@property (assign) char executionEnabled;                                                                                //@synthesize executionEnabled=_executionEnabled - In the implementation block
@property (copy) NSString * label; 
@property (getter=isProfilingEnabled) char profilingEnabled;                                                             //@synthesize profilingEnabled=_profilingEnabled - In the implementation block
@property (assign,setter=tatEnabled,getter=isStatEnabled,nonatomic) char StatEnabled;                                    //@synthesize StatEnabled=_StatEnabled - In the implementation block
@property (assign,setter=tatOptions,getter=getStatOptions,nonatomic) unsigned long long StatOptions;                     //@synthesize StatOptions=_StatOptions - In the implementation block
@property (assign,setter=tatLocations,getter=getStatLocations,nonatomic) unsigned long long StatLocations;               //@synthesize StatLocations=_StatLocations - In the implementation block
@property (assign,nonatomic) unsigned long long numCommandBuffers; 
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex;                                           //@synthesize listIndex=_listIndex - In the implementation block
@property (assign,getter=numRequestedCounters,nonatomic) unsigned long long numRequestedCounters;                        //@synthesize numRequestedCounters=_numRequestedCounters - In the implementation block
@property (assign,getter=numInternalSampleCounters,nonatomic) unsigned long long numInternalSampleCounters;              //@synthesize numInternalSampleCounters=_numInternalSampleCounters - In the implementation block
@property (getter=counterInfo,retain) NSMutableDictionary * counterInfo;                                                 //@synthesize counterInfo=_counterInfo - In the implementation block
-(unsigned long long)getAndIncrementNumCommandBuffers;
-(unsigned long long)internalCounterSampleSize;
-(void)enqueueCommandBuffer:(id)arg1 ;
-(void)commitCommandBuffer:(id)arg1 wake:(char)arg2 ;
-(char)_submitAvailableCommandBuffers;
-(void)completeCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)createTelemetryWithLabel:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)finish;
-(void)setLabel:(NSString *)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(char)isProfilingEnabled;
-(void)setProfilingEnabled:(char)arg1 ;
-(unsigned long long)getListIndex;
-(id)commandBufferWithDescriptor:(id)arg1 ;
-(void)insertDebugCaptureBoundary;
-(unsigned long long)maxCommandBufferCount;
-(int)backgroundTrackingPID;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(char)skipRender;
-(void)setSkipRender:(char)arg1 ;
-(char)executionEnabled;
-(void)setExecutionEnabled:(char)arg1 ;
-(void)setSubmissionQueue:(id)arg1 ;
-(char)isOpenGLQueue;
-(int)requestCounters:(id)arg1 ;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(char)isStatEnabled;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(id)subdivideCounterList:(id)arg1 ;
-(unsigned long long)qosLevel;
-(NSObject*<OS_dispatch_queue>)commitQueue;
-(char)commitSynchronously;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(char)disableCrossQueueHazardTracking;
-(id)availableCounters;
-(void)setStatEnabled:(char)arg1 ;
-(unsigned long long)getStatOptions;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(unsigned long long)getStatLocations;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(unsigned long long)numRequestedCounters;
-(void)setNumRequestedCounters:(unsigned long long)arg1 ;
-(unsigned long long)numInternalSampleCounters;
-(void)setNumInternalSampleCounters:(unsigned long long)arg1 ;
-(NSMutableDictionary *)counterInfo;
-(void)setCounterInfo:(NSMutableDictionary *)arg1 ;
-(unsigned long long)StatOptions;
-(unsigned long long)StatLocations;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(void)setListIndex:(unsigned long long)arg1 ;
-(void)commandBufferDidComplete:(id)arg1 startTime:(unsigned long long)arg2 completionTime:(unsigned long long)arg3 error:(id)arg4 ;
-(void)submitCommandBuffers:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)numCommandBuffers;
-(id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2 ;
-(char)submitCommandBuffer:(id)arg1 ;
@end

