/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class NSMutableArray, BWMultiStreamCameraSourceNode, BWNodeOutput, NSArray, NSDictionary, BWFigVideoCaptureDevice, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat, BWMemoryPool;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline {

	char _useCaptureOutputForPreview;
	int _deviceType;
	int _devicePosition;
	NSMutableArray* _sourceNodes;
	BWMultiStreamCameraSourceNode* _sourceNode;
	BWMultiStreamCameraSourceNode* _telephotoSourceNode;
	BWMultiStreamCameraSourceNode* _superWideSourceNode;
	BWMultiStreamCameraSourceNode* _infraredSourceNode;
	BWNodeOutput* _sourceFormatReferenceOutput;
	NSMutableArray* _synchronizerNodes;
	NSArray* _previewFilters;
	NSDictionary* _previewOutputsBySourceDeviceType;
	NSDictionary* _stillImageOutputsByPortType;
	NSDictionary* _videoCaptureOutputsArrayBySourceDeviceType;
	unsigned _nextVideoCaptureOutputIndexBySourceDeviceType[13];
	NSDictionary* _detectedObjectsOutputsBySourceDeviceType;
	NSDictionary* _visionDataOutputsBySourceDeviceType;
	BWFigVideoCaptureDevice* _captureDevice;
	OpaqueFigCaptureSourceRef _captureSource;
	FigCaptureSourceVideoFormat* _captureSourceVideoFormat;
	FigCaptureSourceDepthDataFormat* _captureSourceDepthDataFormat;
	CGRect _overscanRect;
	char _stillImageOutputDerivesFromVideoCaptureOutput;
	BWMemoryPool* _memoryPool;
	char _overCapturePercentage;
	char _hardwareDepthFilteringEnabled;
	int _stillImageOutputRetainedBufferCountOverride;

}

@property (assign,nonatomic) id<BWDetectedFacesFilterDelegate> faceFilteringDelegate; 
@property (assign,nonatomic) int stillImageOutputRetainedBufferCountOverride;                                              //@synthesize stillImageOutputRetainedBufferCountOverride=_stillImageOutputRetainedBufferCountOverride - In the implementation block
@property (assign,nonatomic) OpaqueCMClockRef masterClock; 
@property (assign,nonatomic) char keepISPStreamingWhenStopping; 
@property (nonatomic,readonly) NSDictionary * stillImageOutputsByPortType;                                                 //@synthesize stillImageOutputsByPortType=_stillImageOutputsByPortType - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * pointCloudOutput; 
@property (nonatomic,readonly) char stillImageOutputDerivesFromVideoCaptureOutput;                                         //@synthesize stillImageOutputDerivesFromVideoCaptureOutput=_stillImageOutputDerivesFromVideoCaptureOutput - In the implementation block
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) char requiresMasterClock; 
@property (nonatomic,readonly) BWFigVideoCaptureDevice * captureDevice;                                                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureSourceRef captureSource;                                                    //@synthesize captureSource=_captureSource - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceVideoFormat * captureSourceVideoFormat;                                     //@synthesize captureSourceVideoFormat=_captureSourceVideoFormat - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceDepthDataFormat * captureSourceDepthDataFormat;                             //@synthesize captureSourceDepthDataFormat=_captureSourceDepthDataFormat - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoOutputColorInfo; 
@property (nonatomic,readonly) CGRect overscanRect;                                                                        //@synthesize overscanRect=_overscanRect - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sourceFormatReferenceOutput;                                                 //@synthesize sourceFormatReferenceOutput=_sourceFormatReferenceOutput - In the implementation block
@property (nonatomic,readonly) FigCaptureVideoTransform videoCaptureOutputTransform; 
@property (nonatomic,readonly) int motionAttachmentsSource; 
@property (nonatomic,readonly) char hardwareDepthFilteringEnabled;                                                         //@synthesize hardwareDepthFilteringEnabled=_hardwareDepthFilteringEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * portTypesWithGeometricDistortionCorrectionOnStreamingOutputsEnabled; 
@property (nonatomic,readonly) NSArray * portTypesWithGeometricDistortionCorrectionOnStillImageOutputEnabled; 
@property (nonatomic,readonly) BWMultiStreamCameraSourceNode * sourceNode;                                                 //@synthesize sourceNode=_sourceNode - In the implementation block
+(void)initialize;
-(void)dealloc;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(OpaqueCMClockRef)clock;
-(int)motionAttachmentsSource;
-(char)hardwareDepthFilteringEnabled;
-(BWNodeOutput *)pointCloudOutput;
-(char)keepISPStreamingWhenStopping;
-(void)setKeepISPStreamingWhenStopping:(char)arg1 ;
-(BWMultiStreamCameraSourceNode *)sourceNode;
-(BWFigVideoCaptureDevice *)captureDevice;
-(FigCaptureSourceDepthDataFormat *)captureSourceDepthDataFormat;
-(int)prepareForStillImageCaptureWithStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(char)arg3 ;
-(FigCaptureSourceVideoFormat *)captureSourceVideoFormat;
-(BWNodeOutput *)sourceFormatReferenceOutput;
-(void)setPreviewShift:(CGPoint)arg1 previewScaleFactor:(float)arg2 forPortType:(id)arg3 ;
-(char)newConfigurationRequiresStreamRestart:(id)arg1 ;
-(void)setStreamsSuspendedBySourceDeviceType:(id)arg1 ;
-(void)setStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(void)logCameraStreamingInformationToAggd:(long long)arg1 applicationID:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 graph:(id)arg3 name:(id)arg4 renderDelegate:(id)arg5 ;
-(id)previewOutputForSourceDeviceType:(int)arg1 ;
-(void)setFaceFilteringDelegate:(id<BWDetectedFacesFilterDelegate>)arg1 ;
-(id)nextVideoCaptureOutputForSourceDeviceType:(int)arg1 ;
-(FigCaptureVideoTransform)videoCaptureOutputTransform;
-(id)detectedObjectsOutputForSourceDeviceType:(int)arg1 ;
-(char)requiresMasterClock;
-(NSDictionary *)stillImageOutputsByPortType;
-(char)stillImageOutputDerivesFromVideoCaptureOutput;
-(OpaqueFigCaptureSourceRef)captureSource;
-(NSDictionary *)videoOutputColorInfo;
-(void)hackRetainedBufferCountsForDualStreamSources;
-(int)allocateSharedBufferPools;
-(int)stillImageOutputRetainedBufferCountOverride;
-(int)_buildMultiStreamCameraSourcePipeline:(id)arg1 graph:(id)arg2 renderDelegate:(id)arg3 ;
-(int)_addDepthFromInfraredSynchronizer:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 sourceDeviceType:(int)arg5 ;
-(int)_buildVideoCaptureOutputNetwork:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 stillImageOutputsByPortType:(id)arg3 pipelineConfiguration:(id)arg4 graph:(id)arg5 ;
-(int)_buildPreviewOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(int)_buildDetectedObjectsOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(int)_insertCrossOverAndOverCaptureNodesOnOutputsBySourceDeviceType:(id)arg1 connectionConfigurations:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 outputNetworkType:(int)arg5 ;
-(int)_addOverCaptureDepthSynchronizerForOutputs:(id*)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(id)_addCrossOverNodeToGraph:(id)arg1 inputs:(id)arg2 mediaType:(unsigned)arg3 name:(id)arg4 outErr:(int*)arg5 ;
-(id)_addOverCaptureSourcePipelineToGraph:(id)arg1 upstreamVideoCaptureOutputsBySourceDeviceType:(id)arg2 depthEnabled:(char)arg3 forPreview:(char)arg4 outErr:(int*)arg5 ;
-(id)visionDataOutputForSourceDeviceType:(int)arg1 ;
-(NSArray *)portTypesWithGeometricDistortionCorrectionOnStreamingOutputsEnabled;
-(NSArray *)portTypesWithGeometricDistortionCorrectionOnStillImageOutputEnabled;
-(id<BWDetectedFacesFilterDelegate>)faceFilteringDelegate;
-(CGRect)overscanRect;
@end

