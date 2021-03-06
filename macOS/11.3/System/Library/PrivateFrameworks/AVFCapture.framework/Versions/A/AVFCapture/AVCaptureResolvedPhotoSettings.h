/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject {

	AVCaptureResolvedPhotoSettingsInternal* _internal;

}

@property (readonly) long long uniqueID; 
@property (readonly) SCD_Struct_AV14 photoDimensions; 
@property (readonly) SCD_Struct_AV14 rawPhotoDimensions; 
@property (readonly) SCD_Struct_AV14 previewDimensions; 
@property (readonly) SCD_Struct_AV14 embeddedThumbnailDimensions; 
@property (readonly) SCD_Struct_AV14 rawEmbeddedThumbnailDimensions; 
@property (readonly) SCD_Struct_AV14 portraitEffectsMatteDimensions; 
@property (readonly) SCD_Struct_AV14 livePhotoMovieDimensions; 
@property (getter=isFlashEnabled,readonly) char flashEnabled; 
@property (getter=isRedEyeReductionEnabled,readonly) char redEyeReductionEnabled; 
@property (getter=isStillImageStabilizationEnabled,readonly) char stillImageStabilizationEnabled; 
@property (getter=isVirtualDeviceFusionEnabled,readonly) char virtualDeviceFusionEnabled; 
@property (getter=isDualCameraFusionEnabled,readonly) char dualCameraFusionEnabled; 
@property (readonly) unsigned long long expectedPhotoCount; 
@property (readonly) SCD_Struct_AV31 photoProcessingTimeRange; 
@property (getter=isContentAwareDistortionCorrectionEnabled,readonly) char contentAwareDistortionCorrectionEnabled; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(SCD_Struct_AV14)arg2 ;
+(void)initialize;
+(id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(SCD_Struct_AV14)arg2 rawPhotoDimensions:(SCD_Struct_AV14)arg3 previewDimensions:(SCD_Struct_AV14)arg4 embeddedThumbnailDimensions:(SCD_Struct_AV14)arg5 rawEmbeddedThumbnailDimensions:(SCD_Struct_AV14)arg6 livePhotoMovieEnabled:(char)arg7 livePhotoMovieDimensions:(SCD_Struct_AV14)arg8 portraitEffectsMatteDimensions:(SCD_Struct_AV14)arg9 hairSegmentationMatteDimensions:(SCD_Struct_AV14)arg10 skinSegmentationMatteDimensions:(SCD_Struct_AV14)arg11 teethSegmentationMatteDimensions:(SCD_Struct_AV14)arg12 glassesSegmentationMatteDimensions:(SCD_Struct_AV14)arg13 spatialOverCapturePhotoDimensions:(SCD_Struct_AV14)arg14 turboModeEnabled:(char)arg15 flashEnabled:(char)arg16 redEyeReductionEnabled:(char)arg17 HDREnabled:(char)arg18 adjustedPhotoFiltersEnabled:(char)arg19 EV0PhotoDeliveryEnabled:(char)arg20 stillImageStabilizationEnabled:(char)arg21 virtualDeviceFusionEnabled:(char)arg22 squareCropEnabled:(char)arg23 deferredPhotoProxyDimensions:(SCD_Struct_AV14)arg24 photoProcessingTimeRange:(SCD_Struct_AV31)arg25 contentAwareDistortionCorrectionEnabled:(char)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(char)arg30 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(long long)uniqueID;
-(SCD_Struct_AV14)previewDimensions;
-(SCD_Struct_AV14)livePhotoMovieDimensions;
-(SCD_Struct_AV14)photoDimensions;
-(SCD_Struct_AV14)embeddedThumbnailDimensions;
-(SCD_Struct_AV14)rawEmbeddedThumbnailDimensions;
-(SCD_Struct_AV14)rawPhotoDimensions;
-(SCD_Struct_AV14)portraitEffectsMatteDimensions;
-(SCD_Struct_AV14)dimensionsForSemanticSegmentationMatteOfType:(id)arg1 ;
-(char)isFlashEnabled;
-(char)isRedEyeReductionEnabled;
-(char)isVirtualDeviceFusionEnabled;
-(char)isDualCameraFusionEnabled;
-(unsigned long long)expectedPhotoCount;
-(SCD_Struct_AV31)photoProcessingTimeRange;
-(char)isContentAwareDistortionCorrectionEnabled;
-(char)isStillImageStabilizationEnabled;
-(char)isTurboModeEnabled;
-(char)isEV0PhotoDeliveryEnabled;
-(char)isSquareCropEnabled;
-(char)livePhotoMovieEnabled;
-(SCD_Struct_AV14)spatialOverCapturePhotoDimensions;
-(SCD_Struct_AV14)deferredPhotoProxyDimensions;
-(id)photoManifest;
-(unsigned long long)digitalFlashUserInterfaceHints;
-(id)digitalFlashUserInterfaceRGBEstimate;
-(id)_initWithUniqueID:(long long)arg1 photoDimensions:(SCD_Struct_AV14)arg2 rawPhotoDimensions:(SCD_Struct_AV14)arg3 previewDimensions:(SCD_Struct_AV14)arg4 embeddedThumbnailDimensions:(SCD_Struct_AV14)arg5 rawEmbeddedThumbnailDimensions:(SCD_Struct_AV14)arg6 livePhotoMovieEnabled:(char)arg7 livePhotoMovieDimensions:(SCD_Struct_AV14)arg8 portraitEffectsMatteDimensions:(SCD_Struct_AV14)arg9 hairSegmentationMatteDimensions:(SCD_Struct_AV14)arg10 skinSegmentationMatteDimensions:(SCD_Struct_AV14)arg11 teethSegmentationMatteDimensions:(SCD_Struct_AV14)arg12 glassesSegmentationMatteDimensions:(SCD_Struct_AV14)arg13 spatialOverCapturePhotoDimensions:(SCD_Struct_AV14)arg14 turboModeEnabled:(char)arg15 flashEnabled:(char)arg16 redEyeReductionEnabled:(char)arg17 HDREnabled:(char)arg18 adjustedPhotoFiltersEnabled:(char)arg19 EV0PhotoDeliveryEnabled:(char)arg20 stillImageStabilizationEnabled:(char)arg21 virtualDeviceFusionEnabled:(char)arg22 squareCropEnabled:(char)arg23 deferredPhotoProxyDimensions:(SCD_Struct_AV14)arg24 photoProcessingTimeRange:(SCD_Struct_AV31)arg25 contentAwareDistortionCorrectionEnabled:(char)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(char)arg30 ;
-(char)isHDREnabled;
-(char)isAdjustedPhotoFilterRenderingEnabled;
-(char)isCaptureBeforeResolvingSettingsEnabled;
-(id)digitalFlashRGBEstimate;
@end

