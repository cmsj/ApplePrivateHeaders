/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput_Tundra.h>

@class AVCapturePhotoOutputInternal_Tundra, NSArray, AVCapturePhotoSettings_Tundra;

@interface AVCapturePhotoOutput_Tundra : AVCaptureOutput_Tundra {

	AVCapturePhotoOutputInternal_Tundra* _internal;

}

@property (nonatomic,readonly) NSArray * preparedPhotoSettingsArray; 
@property (nonatomic,readonly) NSArray * availablePhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoCodecTypes; 
@property (getter=isAppleProRAWSupported,nonatomic,readonly) char appleProRAWSupported; 
@property (assign,getter=isAppleProRAWEnabled,nonatomic) char appleProRAWEnabled; 
@property (nonatomic,readonly) NSArray * availableRawPhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoFileTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoFileTypes; 
@property (assign,nonatomic) long long maxPhotoQualityPrioritization; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) char stillImageStabilizationSupported; 
@property (nonatomic,readonly) char isStillImageStabilizationScene; 
@property (getter=isVirtualDeviceFusionSupported,nonatomic,readonly) char virtualDeviceFusionSupported; 
@property (getter=isDualCameraFusionSupported,nonatomic,readonly) char dualCameraFusionSupported; 
@property (getter=isVirtualDeviceConstituentPhotoDeliverySupported,nonatomic,readonly) char virtualDeviceConstituentPhotoDeliverySupported; 
@property (getter=isDualCameraDualPhotoDeliverySupported,nonatomic,readonly) char dualCameraDualPhotoDeliverySupported; 
@property (assign,getter=isVirtualDeviceConstituentPhotoDeliveryEnabled,nonatomic) char virtualDeviceConstituentPhotoDeliveryEnabled; 
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) char dualCameraDualPhotoDeliveryEnabled; 
@property (getter=isCameraCalibrationDataDeliverySupported,nonatomic,readonly) char cameraCalibrationDataDeliverySupported; 
@property (nonatomic,readonly) NSArray * supportedFlashModes; 
@property (getter=isAutoRedEyeReductionSupported,nonatomic,readonly) char autoRedEyeReductionSupported; 
@property (nonatomic,readonly) char isFlashScene; 
@property (nonatomic,copy) AVCapturePhotoSettings_Tundra * photoSettingsForSceneMonitoring; 
@property (assign,getter=isHighResolutionCaptureEnabled,nonatomic) char highResolutionCaptureEnabled; 
@property (nonatomic,readonly) unsigned long long maxBracketedCapturePhotoCount; 
@property (getter=isLensStabilizationDuringBracketedCaptureSupported,nonatomic,readonly) char lensStabilizationDuringBracketedCaptureSupported; 
@property (getter=isLivePhotoCaptureSupported,nonatomic,readonly) char livePhotoCaptureSupported; 
@property (assign,getter=isLivePhotoCaptureEnabled,nonatomic) char livePhotoCaptureEnabled; 
@property (assign,getter=isLivePhotoCaptureSuspended,nonatomic) char livePhotoCaptureSuspended; 
@property (assign,getter=isLivePhotoAutoTrimmingEnabled,nonatomic) char livePhotoAutoTrimmingEnabled; 
@property (nonatomic,readonly) NSArray * availableLivePhotoVideoCodecTypes; 
@property (getter=isContentAwareDistortionCorrectionSupported,nonatomic,readonly) char contentAwareDistortionCorrectionSupported; 
@property (assign,getter=isContentAwareDistortionCorrectionEnabled,nonatomic) char contentAwareDistortionCorrectionEnabled; 
+(b)resolveClassMethod:;
+(b)resolveInstanceMethod:;
+(void)initialize;
+(id)new;
+(char)isBayerRAWPixelFormat:(unsigned)arg1 ;
+(char)isAppleProRAWPixelFormat:(unsigned)arg1 ;
+(id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(char)isBayerRawPixelFormat:(unsigned)arg1 ;
+(char)isDemosaicedRawPixelFormat:(unsigned)arg1 ;
+(id)DNGPhotoDataRepresentationForRawSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(b)conformsToProtocol:(id)arg1 ;
-(b)isMemberOfClass:(Class)arg1 ;
-(b)isKindOfClass:(Class)arg1 ;
-(Class)class;
-(void)dealloc;
-(id)init;
-(id)connectionMediaTypes;
-(char)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(char)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(char)isLivePhotoCaptureEnabled;
-(char)isLivePhotoAutoTrimmingEnabled;
-(char)isHighResolutionCaptureEnabled;
-(char)isDepthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(char)arg1 ;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(int)videoDecompressionRequirementForConnection:(id)arg1 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)videoDecompressionSettingsForVideoConnection:(id)arg1 ;
-(char)isCameraCalibrationDataDeliverySupported;
-(void)_updateVideoDecompressorNodeForConnection:(id)arg1 ;
-(char)supportsVideoMirroringForConnection:(id)arg1 ;
-(char)supportsVideoOrientationForConnection:(id)arg1 ;
-(char)supportsVideoFieldModeForConnection:(id)arg1 ;
-(char)supportsVideoMinFrameDurationForConnection:(id)arg1 ;
-(char)supportsVideoMaxFrameDurationForConnection:(id)arg1 ;
-(long long)defaultVideoFieldModeForConnection:(id)arg1 ;
-(char)isDualCameraDualPhotoDeliveryEnabled;
-(void)setDualCameraDualPhotoDeliveryEnabled:(char)arg1 ;
-(char)isPortraitEffectsMatteDeliveryEnabled;
-(void)setPortraitEffectsMatteDeliveryEnabled:(char)arg1 ;
-(id)enabledSemanticSegmentationMatteTypes;
-(void)setEnabledSemanticSegmentationMatteTypes:(id)arg1 ;
-(char)isContentAwareDistortionCorrectionEnabled;
-(char)isAutoRedEyeReductionSupported;
-(char)isStillImageStabilizationScene;
-(char)isDepthDataDeliverySupported;
-(char)isStillImageStabilizationSupported;
-(char)isLensStabilizationDuringBracketedCaptureSupported;
-(id)_videoDecompressionSettings;
-(void)_receiveSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSArray *)availablePhotoPixelFormatTypes;
-(NSArray *)availablePhotoCodecTypes;
-(NSArray *)availableRawPhotoPixelFormatTypes;
-(NSArray *)availablePhotoFileTypes;
-(NSArray *)availableRawPhotoFileTypes;
-(long long)maxPhotoQualityPrioritization;
-(NSArray *)supportedFlashModes;
-(unsigned long long)maxBracketedCapturePhotoCount;
-(NSArray *)availableLivePhotoVideoCodecTypes;
-(char)isFlashScene;
-(AVCapturePhotoSettings_Tundra *)photoSettingsForSceneMonitoring;
-(char)isAppleProRAWSupported;
-(char)isAppleProRAWEnabled;
-(void)setAppleProRAWEnabled:(char)arg1 ;
-(char)isVirtualDeviceConstituentPhotoDeliverySupported;
-(char)isDualCameraDualPhotoDeliverySupported;
-(char)isLivePhotoCaptureSupported;
-(id)availableSemanticSegmentationMatteTypes;
-(char)isContentAwareDistortionCorrectionSupported;
-(void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2 ;
-(NSArray *)preparedPhotoSettingsArray;
-(void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isDemosaicedRawSupported;
-(char)isDemosaicedRawEnabled;
-(void)setDemosaicedRawEnabled:(char)arg1 ;
-(id)supportedPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(id)supportedPhotoCodecTypesForFileType:(id)arg1 ;
-(id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(void)setMaxPhotoQualityPrioritization:(long long)arg1 ;
-(char)isVirtualDeviceFusionSupported;
-(char)isDualCameraFusionSupported;
-(char)isVirtualDeviceConstituentPhotoDeliveryEnabled;
-(void)setVirtualDeviceConstituentPhotoDeliveryEnabled:(char)arg1 ;
-(void)setPhotoSettingsForSceneMonitoring:(AVCapturePhotoSettings_Tundra *)arg1 ;
-(void)setHighResolutionCaptureEnabled:(char)arg1 ;
-(void)setLivePhotoCaptureEnabled:(char)arg1 ;
-(char)isLivePhotoCaptureSuspended;
-(void)setLivePhotoCaptureSuspended:(char)arg1 ;
-(void)setLivePhotoAutoTrimmingEnabled:(char)arg1 ;
-(char)isPortraitEffectsMatteDeliverySupported;
-(void)setContentAwareDistortionCorrectionEnabled:(char)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 imageRequest:(id)arg2 ;
-(void)_consumerStart;
-(void)_consumerStop;
@end

