/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSDictionary, NSObject, BWLimitedGMErrorLogger;

@interface BWVideoCompressorNode : BWNode {

	NSDictionary* _compressionSettings;
	NSDictionary* _compressionSettingsPreparedFor;
	char _nextFrameEncodeAsKeyFrame;
	char _prioritizeEncodingSpeedOverQuality;
	int _pipelineTraceID;
	OpaqueVTCompressionSessionRef _compressionSession;
	char _didPrepareToEncode;
	char _sourceIsHDResolution;
	unsigned _sourcePixelFormatType;
	NSObject*<OS_dispatch_queue> _emitterQueue;
	NSObject*<OS_dispatch_queue> _compressionSessionStateQueue;
	NSObject*<OS_dispatch_source> _reapCompressionSessionTimer;
	double _reapCompressionSessionTimerDurationInSeconds;
	char _compressionSessionReuseEnabled;
	char _compressionSessionCanBeReused;
	char _resetCodec;
	char _emittedFirstVideoBuffer;
	NSObject*<OS_dispatch_queue> _thermalAndPowerNotificationQueue;
	double _bFrameEncodingAllowedAtHigherPressureTimeLimit;
	double _bFrameEncodingAllowedAtHigherPressureStopTime;
	int _nonBFrameAverageBitRate;
	int _thermalPressureNotificationToken;
	int _thermalPressureLevel;
	int _powerPressureNotificationToken;
	int _powerPressureLevel;
	char _bFrameEncodingRequested;
	char _bFrameEncodingAllowed;
	char _propagateStabilizedFacesToAVE;
	char _overCaptureEnabled;
	char _shouldAttachDebugSEI;
	char _shouldPassSerializedDepthImageBuffers;
	char _flushRequestReceived;
	float _maxVideoFrameRate;
	char _attachThumbnailSourcePixelBuffer;
	CVBufferRef _thumbnailSourcePixelBuffer;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;
	char _delayedCompressorCleanupEnabled;

}
+(void)initialize;
+(id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int*)arg3 ;
-(void)dealloc;
-(id)nodeType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)makeCurrentConfigurationLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(int)pipelineTraceID;
-(void)setPipelineTraceID:(int)arg1 ;
-(id)initWithCompressionSettings:(id)arg1 overCaptureEnabled:(char)arg2 maxVideoFrameRate:(float)arg3 delayedCompressorCleanupEnabled:(char)arg4 ;
-(void)setPrioritizeEncodingSpeedOverQuality:(char)arg1 ;
-(void)_releaseCompressionSession;
-(void)_cleanCompressor:(char)arg1 ;
-(void)_registerForThermalAndPowerNotifications;
-(void)_prepareForVideoCompression;
-(id)_HDRImageStatisticsDictFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 ;
-(void)_validateBFrameEncodingAbility;
-(void)_createCompressionSession;
-(OpaqueVTCompressionSessionRef)_createEncoderSessionWithWidth:(int)arg1 height:(int)arg2 inputPixelFormat:(unsigned)arg3 isHDResolution:(unsigned char)arg4 videoCodec:(unsigned)arg5 encoderSpecification:(id)arg6 compressionProperties:(id)arg7 compressorNodeRef:(void*)arg8 ;
-(void)_updateThermalPressureLevel;
-(void)_updatePowerPressureLevel;
-(int)_setEncoderCompressionPropertiesWithCompressionSession:(OpaqueVTCompressionSessionRef)arg1 compressionProperties:(id)arg2 sourcePixelType:(unsigned)arg3 isHDResolution:(unsigned char)arg4 ;
-(void)insertKeyFrame;
-(char)prioritizeEncodingSpeedOverQuality;
-(OpaqueVTCompressionSessionRef)_compresessionSession;
-(void)setReapCompressionSessionTimerDurationInSeconds:(double)arg1 ;
@end

