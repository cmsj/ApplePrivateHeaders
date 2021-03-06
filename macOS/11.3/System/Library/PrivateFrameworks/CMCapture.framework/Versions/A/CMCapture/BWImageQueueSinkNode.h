/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol BWImageQueueSinkNodePreviewTapDelegate, OS_os_transaction, OS_dispatch_queue;
@class NSObject, NSMutableArray, CAContext;

@interface BWImageQueueSinkNode : BWSinkNode {

	unsigned _imageQueueCapacity;
	unsigned _imageQueueWidth;
	unsigned _imageQueueHeight;
	unsigned _imageQueueRequiredFreeSlots;
	CAImageQueueRef _imageQueue;
	unsigned _imageQueueSlot;
	unsigned long long _imageQueueCurrentFreeSlots;
	int _syncStrategy;
	char _resetPreviewSynchronizerOnNextFrame;
	OpaqueBWPreviewSynchronizerRef _previewSynchronizer;
	double _lastDisplaySamplingTime;
	double _lastDisplayVSyncInterval;
	double _lastHarmonicFractionalVSyncInterval;
	double _lastFramePTS;
	double _lastDisplayTime;
	double _lateFrameIntervalStartPTS;
	double _previousFrameDuration;
	unsigned long long _framesSinceLastHarmonicCompensation;
	char _CAVSyncIntervalWorkaroundEnabled;
	char _highLatencyJitterHandlingEnabled;
	char _fasterLatencyRecoveryEnabled;
	char _driftCompensationTimestampFilteringEnabled;
	id<BWImageQueueSinkNodePreviewTapDelegate> _previewTapDelegate;
	unsigned long long _numFramesReceived;
	NSObject*<OS_os_transaction> _holdingBuffersForClientAssertion;
	NSMutableArray* _sharedSurfaces;
	unsigned long long* _sharedBufferIDs;
	unsigned long long _sharedSurfaceCount;
	char _useGlobalIOSurfaces;
	OpaqueFigSimpleMutexRef _surfaceRegistrationMutex;
	NSMutableArray* _bufferIDsInQueue;
	EnqueuedBufferContext* _enqueuedBufferContexts;
	unsigned long long _enqueuedBufferContextCount;
	NSMutableArray* _previewPTSHistory;
	OpaqueFigSimpleMutexRef _previewPTSHistoryMutex;
	NSObject*<OS_dispatch_queue> _previewPTSHistoryQueue;
	SCD_Struct_Fi8 _firstFramePTS;
	long long _firstFrameHostTime;
	char _didCallFirstFrameAtHostTimeCallback;
	char _didCallFirstFrameCallback;
	char _fenceSupportEnabled;
	char _fencePortGenerationIDWillChange;
	int _framesSinceLastFenceIDWillChange;
	int _framesSinceLastFence;
	long long _lastFencedGenerationID;
	int _savedSyncStrategy;
	CAContext* _imageQueueContext;

}

@property (nonatomic,readonly) CAImageQueueRef imageQueue; 
@property (nonatomic,readonly) unsigned imageQueueSlot; 
@property (assign,nonatomic) id<BWImageQueueSinkNodePreviewTapDelegate> previewTapDelegate;              //@synthesize previewTapDelegate=_previewTapDelegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(unsigned)imageQueueSlot;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(char)hasNonLiveConfigurationChanges;
-(void)makeCurrentConfigurationLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_updateInputRequirements;
-(void)_cleanupIOSurfaces;
-(void)_cleanupImageQueueContext;
-(void)_ensureImageQueue;
-(unsigned long long)_bufferIDForSurface:(IOSurfaceRef)arg1 ;
-(void)_collectUnconsumedBuffersWithReason:(id)arg1 ;
-(void)_processReleasedContexts;
-(double)_displayTimeSyncedWithFramePTS:(double)arg1 ;
-(EnqueuedBufferContext*)_createContextForBuffer:(opaqueCMSampleBufferRef)arg1 bufferId:(unsigned long long)arg2 framePTS:(SCD_Struct_Fi8)arg3 ;
-(void)_processBufferContext:(EnqueuedBufferContext*)arg1 ;
-(void)_storePreviewPTS:(SCD_Struct_Fi8)arg1 withHostTime:(unsigned long long)arg2 ;
-(void)_removeBufferFromInternalQueues:(opaqueCMSampleBufferRef)arg1 bufferId:(unsigned long long)arg2 ;
-(id)initWithHFRSupport:(char)arg1 ispJitterCompensationEnabled:(char)arg2 sinkID:(id)arg3 ;
-(CAImageQueueRef)imageQueue;
-(void)setSyncStrategy:(int)arg1 ;
-(int)syncStrategy;
-(void)setFenceSupportEnabled:(char)arg1 ;
-(char)fenceSupportEnabled;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(void)inputConnectionWillBeEnabled;
-(SCD_Struct_Fi8)previewPTSDisplayedAtHostTime:(unsigned long long)arg1 allowingExtrapolation:(char)arg2 ;
-(SCD_Struct_Fi8)previewPTSAtHostTime:(unsigned long long)arg1 ;
-(void)fencePortGenerationIDWillChange;
-(id<BWImageQueueSinkNodePreviewTapDelegate>)previewTapDelegate;
-(void)setPreviewTapDelegate:(id<BWImageQueueSinkNodePreviewTapDelegate>)arg1 ;
@end

