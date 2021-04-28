/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigVideoCaptureConnectionConfiguration, FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoThumbnailConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _previewTimeMachineConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;
	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	SCD_Struct_Fi37 _sceneClassifierPipelineVersion;
	int _sourceColorSpaceProperties;
	char _sourcePixelFormatIsFullRange;
	char _sourceIsBravoDevice;
	char _clientIsCameraOrDerivative;
	char _vitalityScoringEnabled;
	char _displayPipeRequiresPacked10BitPixelFormatForP3Input;
	char _deferredPrepareEnabled;
	char _remoteVideoPreview;
	char _overCaptureEnabled;
	char _primaryCaptureRectModificationEnabled;
	double _videoStabilizationOverscan;
	char _focusBlurMapForDepthFiltersEnabled;
	char _depthFromMonocularNetworkEnabled;
	char _smartCameraMotionDetectionEnabled;
	char _generatesHistogram;
	char _ispPreviewJitterCompensationEnabled;

}

@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoThumbnailConnectionConfiguration;                       //@synthesize videoThumbnailConnectionConfiguration=_videoThumbnailConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * previewTimeMachineConnectionConfiguration;                   //@synthesize previewTimeMachineConnectionConfiguration=_previewTimeMachineConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                      //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi37 sceneClassifierPipelineVersion;                                                       //@synthesize sceneClassifierPipelineVersion=_sceneClassifierPipelineVersion - In the implementation block
@property (assign,nonatomic) int sourceColorSpaceProperties;                                                                       //@synthesize sourceColorSpaceProperties=_sourceColorSpaceProperties - In the implementation block
@property (assign,nonatomic) char sourcePixelFormatIsFullRange;                                                                    //@synthesize sourcePixelFormatIsFullRange=_sourcePixelFormatIsFullRange - In the implementation block
@property (assign,nonatomic) char sourceIsBravoDevice;                                                                             //@synthesize sourceIsBravoDevice=_sourceIsBravoDevice - In the implementation block
@property (assign,nonatomic) char clientIsCameraOrDerivative;                                                                      //@synthesize clientIsCameraOrDerivative=_clientIsCameraOrDerivative - In the implementation block
@property (assign,nonatomic) char vitalityScoringEnabled;                                                                          //@synthesize vitalityScoringEnabled=_vitalityScoringEnabled - In the implementation block
@property (assign,nonatomic) char displayPipeRequiresPacked10BitPixelFormatForP3Input;                                             //@synthesize displayPipeRequiresPacked10BitPixelFormatForP3Input=_displayPipeRequiresPacked10BitPixelFormatForP3Input - In the implementation block
@property (assign,nonatomic) char deferredPrepareEnabled;                                                                          //@synthesize deferredPrepareEnabled=_deferredPrepareEnabled - In the implementation block
@property (assign,nonatomic) char remoteVideoPreview;                                                                              //@synthesize remoteVideoPreview=_remoteVideoPreview - In the implementation block
@property (assign,nonatomic) char overCaptureEnabled;                                                                              //@synthesize overCaptureEnabled=_overCaptureEnabled - In the implementation block
@property (assign,nonatomic) char primaryCaptureRectModificationEnabled;                                                           //@synthesize primaryCaptureRectModificationEnabled=_primaryCaptureRectModificationEnabled - In the implementation block
@property (assign,nonatomic) double videoStabilizationOverscan;                                                                    //@synthesize videoStabilizationOverscan=_videoStabilizationOverscan - In the implementation block
@property (assign,nonatomic) char ispPreviewJitterCompensationEnabled;                                                             //@synthesize ispPreviewJitterCompensationEnabled=_ispPreviewJitterCompensationEnabled - In the implementation block
@property (assign,nonatomic) char focusBlurMapForDepthFiltersEnabled;                                                              //@synthesize focusBlurMapForDepthFiltersEnabled=_focusBlurMapForDepthFiltersEnabled - In the implementation block
@property (assign,nonatomic) char depthFromMonocularNetworkEnabled;                                                                //@synthesize depthFromMonocularNetworkEnabled=_depthFromMonocularNetworkEnabled - In the implementation block
@property (assign,nonatomic) char smartCameraMotionDetectionEnabled;                                                               //@synthesize smartCameraMotionDetectionEnabled=_smartCameraMotionDetectionEnabled - In the implementation block
@property (assign,nonatomic) char generatesHistogram;                                                                              //@synthesize generatesHistogram=_generatesHistogram - In the implementation block
-(void)dealloc;
-(char)primaryCaptureRectModificationEnabled;
-(void)setPrimaryCaptureRectModificationEnabled:(char)arg1 ;
-(char)overCaptureEnabled;
-(char)clientIsCameraOrDerivative;
-(void)setClientIsCameraOrDerivative:(char)arg1 ;
-(void)setGeneratesHistogram:(char)arg1 ;
-(char)generatesHistogram;
-(void)setOverCaptureEnabled:(char)arg1 ;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(void)setMetadataObjectConnectionConfiguration:(FigMetadataObjectCaptureConnectionConfiguration *)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(char)deferredPrepareEnabled;
-(void)setDeferredPrepareEnabled:(char)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(char)vitalityScoringEnabled;
-(void)setVitalityScoringEnabled:(char)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoThumbnailConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)previewTimeMachineConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setSceneClassifierConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setVideoPreviewSinkConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(void)setVideoThumbnailConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setPreviewTimeMachineConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setSceneClassifierPipelineVersion:(SCD_Struct_Fi37)arg1 ;
-(void)setSourceColorSpaceProperties:(int)arg1 ;
-(void)setSourcePixelFormatIsFullRange:(char)arg1 ;
-(void)setSourceIsBravoDevice:(char)arg1 ;
-(void)setDisplayPipeRequiresPacked10BitPixelFormatForP3Input:(char)arg1 ;
-(void)setRemoteVideoPreview:(char)arg1 ;
-(void)setVideoStabilizationOverscan:(double)arg1 ;
-(void)setIspPreviewJitterCompensationEnabled:(char)arg1 ;
-(void)setFocusBlurMapForDepthFiltersEnabled:(char)arg1 ;
-(void)setDepthFromMonocularNetworkEnabled:(char)arg1 ;
-(void)setSmartCameraMotionDetectionEnabled:(char)arg1 ;
-(char)depthFromMonocularNetworkEnabled;
-(SCD_Struct_Fi37)sceneClassifierPipelineVersion;
-(int)sourceColorSpaceProperties;
-(char)sourcePixelFormatIsFullRange;
-(char)sourceIsBravoDevice;
-(char)displayPipeRequiresPacked10BitPixelFormatForP3Input;
-(char)remoteVideoPreview;
-(double)videoStabilizationOverscan;
-(char)focusBlurMapForDepthFiltersEnabled;
-(char)smartCameraMotionDetectionEnabled;
-(char)ispPreviewJitterCompensationEnabled;
@end
