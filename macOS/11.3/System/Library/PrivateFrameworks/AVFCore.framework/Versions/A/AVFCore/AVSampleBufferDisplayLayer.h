/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFCore/AVQueuedSampleBufferRendering.h>
#import <AVFCore/AVMediaDataRequesterConsumer.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal.h>

@class AVSampleBufferDisplayLayerInternal, NSError, NSString, AVSampleBufferVideoOutput;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {

	AVSampleBufferDisplayLayerInternal* _sampleBufferDisplayLayerInternal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) char requiresFlushToResumeDecoding; 
@property (getter=isReadyForMoreMediaData,readonly) char readyForMoreMediaData; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (nonatomic,readonly) char hasSufficientMediaDataForReliablePlaybackStart; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char outputObscuredDueToInsufficientExternalProtection; 
@property (assign,nonatomic) char preventsCapture; 
@property (assign,nonatomic) char preventsDisplaySleepDuringVideoPlayback; 
@property (assign,nonatomic) AVSampleBufferVideoOutput * output; 
@property (retain) OpaqueCMTimebaseRef controlTimebase; 
@property (copy) NSString * videoGravity; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(char)automaticallyNotifiesObserversOfStatus;
+(char)automaticallyNotifiesObserversOfError;
-(void)dealloc;
-(id)init;
-(NSError *)error;
-(long long)status;
-(OpaqueCMTimebaseRef)timebase;
-(void)flush;
-(void)setBounds:(CGRect)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)_weakReference;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)removeAllAnimations;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(void)setToneMapToStandardDynamicRange:(char)arg1 ;
-(id)videoPerformanceMetrics;
-(char)preventsDisplaySleepDuringVideoPlayback;
-(char)outputObscuredDueToInsufficientExternalProtection;
-(void)setPreventsDisplaySleepDuringVideoPlayback:(char)arg1 ;
-(char)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)stopRequestingMediaData;
-(void)_refreshAboveHighWaterLevel;
-(char)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)hasSufficientMediaDataForReliablePlaybackStart;
-(char)requiresFlushToResumeDecoding;
-(OpaqueFigVideoQueueRef)_copyVideoQueue;
-(void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(CGRect)arg2 presentationSize:(CGSize)arg3 ;
-(void)_setStatus:(long long)arg1 error:(id)arg2 ;
-(void)_setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(char)_setSynchronizerTimebase:(OpaqueCMTimebaseRef)arg1 error:(id*)arg2 ;
-(int)_initializeTimebases;
-(int)_createVideoQueue:(OpaqueFigVideoQueue*)arg1 ;
-(void)_updatePresentationSize:(CGSize)arg1 ;
-(void)_resetStatusWithOSStatus:(int)arg1 ;
-(void)_setOutputObscuredDueToInsufficientExternalProtection:(char)arg1 ;
-(void)_addFigVideoQueueListeners;
-(void)_removeFigVideoQueueListeners;
-(void)_setRequiresFlushToResumeDecoding:(char)arg1 ;
-(void)resetUpcomingSampleBufferPresentationTimeExpectations;
-(void)_callOldPrerollCompletionHandlerWithSuccess:(char)arg1 andSetNewPrerollCompletionHandler:(/*^block*/id)arg2 forRequestID:(int)arg3 ;
-(id)_transformToAbsoluteAnimationOfBounds:(id)arg1 ;
-(void)_addAnimationsForContentLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 ;
-(void)setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(OpaqueCMTimebaseRef)controlTimebase;
-(void)flushWithRemovalOfDisplayedImage:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)flushAndRemoveImage;
-(void)_flushComplete;
-(void)_completedDecodeForPrerollForRequestID:(int)arg1 ;
-(void)prerollDecodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPreventsCapture:(char)arg1 ;
-(char)preventsCapture;
-(char)setUpcomingPresentationTimeExpectations:(int)arg1 minimumPresentationTime:(SCD_Struct_CM3)arg2 ;
-(void)expectMinimumUpcomingSampleBufferPresentationTime:(SCD_Struct_CM3)arg1 ;
-(void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
-(AVSampleBufferVideoOutput *)output;
-(void)setOutput:(AVSampleBufferVideoOutput *)arg1 ;
@end

