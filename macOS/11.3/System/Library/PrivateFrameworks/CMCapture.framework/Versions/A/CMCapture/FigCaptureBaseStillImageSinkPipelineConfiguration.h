/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSinkConfiguration;

@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject {

	char _allowsMultipleInflightCaptures;
	char _clientIsCameraOrDerivative;
	char _allowedToModifyInputBuffers;
	char _inputIs10Bit;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	float _maxSupportedFrameRate;
	int _motionAttachmentsSource;
	char _stillImageOutputDerivesFromVideoCaptureOutput;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	char _usesHighEncodingPriority;
	unsigned _outputPixelFormat;
	int _outputColorSpaceProperties;
	char _stillImageStabilizationSupported;
	int _noiseReductionAndStabilizationScheme;
	SCD_Struct_BW12 _depthDataDimensions;
	float _portraitEffectsMatteMainImageDownscalingFactor;

}

@property (assign,nonatomic) char allowsMultipleInflightCaptures;                               //@synthesize allowsMultipleInflightCaptures=_allowsMultipleInflightCaptures - In the implementation block
@property (assign,nonatomic) char clientIsCameraOrDerivative;                                   //@synthesize clientIsCameraOrDerivative=_clientIsCameraOrDerivative - In the implementation block
@property (assign,nonatomic) char allowedToModifyInputBuffers;                                  //@synthesize allowedToModifyInputBuffers=_allowedToModifyInputBuffers - In the implementation block
@property (assign,nonatomic) char inputIs10Bit;                                                 //@synthesize inputIs10Bit=_inputIs10Bit - In the implementation block
@property (assign,nonatomic) int horizontalSensorBinningFactor;                                 //@synthesize horizontalSensorBinningFactor=_horizontalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int verticalSensorBinningFactor;                                   //@synthesize verticalSensorBinningFactor=_verticalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) float maxSupportedFrameRate;                                       //@synthesize maxSupportedFrameRate=_maxSupportedFrameRate - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                       //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                   //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) char usesHighEncodingPriority;                                     //@synthesize usesHighEncodingPriority=_usesHighEncodingPriority - In the implementation block
@property (assign,nonatomic) unsigned outputPixelFormat;                                        //@synthesize outputPixelFormat=_outputPixelFormat - In the implementation block
@property (assign,nonatomic) int outputColorSpaceProperties;                                    //@synthesize outputColorSpaceProperties=_outputColorSpaceProperties - In the implementation block
@property (assign,nonatomic) char stillImageStabilizationSupported;                             //@synthesize stillImageStabilizationSupported=_stillImageStabilizationSupported - In the implementation block
@property (assign,nonatomic) int noiseReductionAndStabilizationScheme;                          //@synthesize noiseReductionAndStabilizationScheme=_noiseReductionAndStabilizationScheme - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW12 depthDataDimensions;                               //@synthesize depthDataDimensions=_depthDataDimensions - In the implementation block
@property (assign,nonatomic) float portraitEffectsMatteMainImageDownscalingFactor;              //@synthesize portraitEffectsMatteMainImageDownscalingFactor=_portraitEffectsMatteMainImageDownscalingFactor - In the implementation block
-(void)dealloc;
-(unsigned)outputPixelFormat;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(char)stillImageStabilizationSupported;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(float)maxSupportedFrameRate;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(int)horizontalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)verticalSensorBinningFactor;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(char)allowsMultipleInflightCaptures;
-(void)setAllowsMultipleInflightCaptures:(char)arg1 ;
-(char)clientIsCameraOrDerivative;
-(void)setClientIsCameraOrDerivative:(char)arg1 ;
-(char)allowedToModifyInputBuffers;
-(void)setAllowedToModifyInputBuffers:(char)arg1 ;
-(char)inputIs10Bit;
-(void)setInputIs10Bit:(char)arg1 ;
-(void)setMaxSupportedFrameRate:(float)arg1 ;
-(char)usesHighEncodingPriority;
-(void)setUsesHighEncodingPriority:(char)arg1 ;
-(int)outputColorSpaceProperties;
-(void)setOutputColorSpaceProperties:(int)arg1 ;
-(void)setStillImageStabilizationSupported:(char)arg1 ;
-(int)noiseReductionAndStabilizationScheme;
-(void)setNoiseReductionAndStabilizationScheme:(int)arg1 ;
-(SCD_Struct_BW12)depthDataDimensions;
-(void)setDepthDataDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setPortraitEffectsMatteMainImageDownscalingFactor:(float)arg1 ;
@end

