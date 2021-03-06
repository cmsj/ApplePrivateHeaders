/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableDictionary;


@protocol MTLCommandQueueSPI <MTLCommandQueue>
@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) char commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) char disableCrossQueueHazardTracking; 
@property (assign) char skipRender; 
@property (assign) char executionEnabled; 
@property (readonly) char isOpenGLQueue; 
@property (getter=isProfilingEnabled) char profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) char StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@property (assign,getter=numRequestedCounters,nonatomic) unsigned long long numRequestedCounters; 
@property (assign,getter=numInternalSampleCounters,nonatomic) unsigned long long numInternalSampleCounters; 
@property (getter=counterInfo,retain) NSMutableDictionary * counterInfo; 
@optional
-(int)requestCounters:(id)arg1;
-(void)addPerfSampleHandler:(/*^block*/id)arg1;
-(char)isStatEnabled;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
-(id)subdivideCounterList:(id)arg1;
-(id)availableCounters;
-(id)getRequestedCounters;
-(void)setStatEnabled:(char)arg1;
-(unsigned long long)getStatOptions;
-(void)setStatOptions:(unsigned long long)arg1;
-(unsigned long long)getStatLocations;
-(void)setStatLocations:(unsigned long long)arg1;
-(unsigned long long)numRequestedCounters;
-(void)setNumRequestedCounters:(unsigned long long)arg1;
-(unsigned long long)numInternalSampleCounters;
-(void)setNumInternalSampleCounters:(unsigned long long)arg1;
-(NSMutableDictionary *)counterInfo;
-(void)setCounterInfo:(id)arg1;
-(id)availableCountersAndDict;
-(unsigned long long)StatOptions;
-(unsigned long long)StatLocations;

@required
-(void)finish;
-(char)isProfilingEnabled;
-(void)setProfilingEnabled:(char)arg1;
-(unsigned long long)getGPUPriority;
-(char)setGPUPriority:(unsigned long long)arg1;
-(char)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
-(unsigned long long)getBackgroundGPUPriority;
-(char)setBackgroundGPUPriority:(unsigned long long)arg1;
-(char)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
-(unsigned long long)maxCommandBufferCount;
-(int)backgroundTrackingPID;
-(void)setBackgroundTrackingPID:(int)arg1;
-(char)skipRender;
-(void)setSkipRender:(char)arg1;
-(char)executionEnabled;
-(void)setExecutionEnabled:(char)arg1;
-(void)setCompletionQueue:(id)arg1;
-(void)setSubmissionQueue:(id)arg1;
-(char)isOpenGLQueue;
-(unsigned long long)qosLevel;
-(NSObject*<OS_dispatch_queue>)commitQueue;
-(char)commitSynchronously;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(char)disableCrossQueueHazardTracking;

@end

