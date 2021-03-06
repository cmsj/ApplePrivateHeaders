/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWNodeBackPressureSource.h>

@protocol OS_dispatch_semaphore;
@class NSArray, BWPixelBufferPool, NSObject, BWLimitedGMErrorLogger, NSString;

@interface BWPixelTransferNode : BWNode <BWNodeBackPressureSource> {

	int _cropMode;
	int _liveCropMode;
	CGRect _inputCropRect;
	CGRect _liveInputCropRect;
	char _haveLiveInputCropRect;
	char _passesBuffersThroughWhenPossible;
	char _livePassesBuffersThroughWhenPossible;
	char _appliesUprightExifOrientationTransformToInput;
	char _liveAppliesUprightExifOrientationTransformToInput;
	int _rotationDegrees;
	int _liveRotationDegrees;
	char _flipHorizontal;
	char _liveFlipHorizontal;
	char _flipVertical;
	char _liveFlipVertical;
	char _liveZeroFillBuffers;
	char _lowSpeed;
	char _liveLowSpeed;
	char _updatesSampleBufferMetadataForIrisVIS;
	char _liveUpdatesSampleBufferMetadataForIrisVIS;
	unsigned long long _outputWidth;
	unsigned long long _outputHeight;
	unsigned _outputPixelFormat;
	NSArray* _preferredOutputPixelFormats;
	int _outputColorSpaceProperties;
	SCD_Struct_BW12 _validOutputDimensions;
	SCD_Struct_BW12 _liveValidOutputDimensions;
	OpaqueVTImageRotationSessionRef _rotationSession;
	int _rotationSessionRotationDegrees;
	char _rotationSessionFlipHorizontal;
	char _rotationSessionFlipVertical;
	char _rotationSessionZeroFillBuffers;
	char _rotationSessionLowSpeed;
	char _rotationSessionEnablesHistogram;
	int _rotationSessionColorSpaceProperties;
	int _lastInputUprightExifOrientation;
	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _intermediateBufferPool;
	SCD_Struct_BW12 _intermediatePoolDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	char _makeCurrentConfigurationLiveOnNextRenderCallback;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;
	char _expectsMarkerBuffers;
	char _liveExpectsMarkerBuffers;
	char _appliesPrimaryCaptureRect;
	char _generatesHistogram;
	int _conversionMethodForStillImagesDuringHDRVideo;
	CVBufferRef _intermediatePixelBufferForStillHDRToSDRConversion;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> emitSampleBufferSemaphore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(unsigned)outputPixelFormat;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(void)setOutputWidth:(unsigned long long)arg1 ;
-(void)setOutputHeight:(unsigned long long)arg1 ;
-(unsigned long long)outputWidth;
-(unsigned long long)outputHeight;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)_updateOutputRequirements;
-(int)outputColorSpaceProperties;
-(void)setOutputColorSpaceProperties:(int)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)_updateUprightExifOrientationOnSampleBufferIfNeeded:(opaqueCMSampleBufferRef)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(int)rotationDegrees;
-(void)setFlipHorizontal:(char)arg1 ;
-(char)flipHorizontal;
-(void)setFlipVertical:(char)arg1 ;
-(char)flipVertical;
-(void)setGeneratesHistogram:(char)arg1 ;
-(char)generatesHistogram;
-(char)hasNonLiveConfigurationChanges;
-(void)makeCurrentConfigurationLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)emitSampleBufferSemaphore;
-(void)setEmitSampleBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)_supportedInputPixelFormats;
-(id)_supportedOutputPixelFormats;
-(void)_updateInputRequirements;
-(void)setCropMode:(int)arg1 ;
-(void)_ensureIntermediatePixelBufferForStillHDRToSDRConversionIfNeeded;
-(char)_zeroFillBuffers;
-(void)_makeCurrentConfigurationLive;
-(char)_emitIfMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)appliesPrimaryCaptureRect;
-(void)_updateLiveRotationAndFlipsToApplyUprightExifOrientation:(int)arg1 ;
-(SCD_Struct_BW12)_intermediateBufferDimensionsForInputDimensions:(SCD_Struct_BW12)arg1 outputDimensions:(SCD_Struct_BW12)arg2 ;
-(int)_ensureIntermediatePoolWithDimensions:(SCD_Struct_BW12)arg1 ;
-(void)_ensureTransferSession;
-(void)_ensureRotationSession;
-(CGRect)_getUpdatedPrimaryCaptureRectForOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 inputDimensions:(SCD_Struct_BW12)arg2 ;
-(void)_updateMetadataForOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 destinationRect:(CGRect)arg2 ;
-(void)_updatePrimaryCaptureRect:(CGRect)arg1 forOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_updatePassthroughModes;
-(int)cropMode;
-(void)setInputCropRect:(CGRect)arg1 ;
-(CGRect)inputCropRect;
-(void)setUpdatesSampleBufferMetadataForIrisVIS:(char)arg1 ;
-(char)updatesSampleBufferMetadataForIrisVIS;
-(void)setPassesBuffersThroughWhenPossible:(char)arg1 ;
-(char)passesBuffersThroughWhenPossible;
-(void)setPreferredOutputPixelFormats:(id)arg1 ;
-(id)preferredOutputPixelFormats;
-(void)setValidOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(SCD_Struct_BW12)validOutputDimensions;
-(void)setAppliesUprightExifOrientationTransformToInput:(char)arg1 ;
-(char)appliesUprightExifOrientationTransformToInput;
-(void)setLowSpeed:(char)arg1 ;
-(char)lowSpeed;
-(void)setExpectsMarkerBuffers:(char)arg1 ;
-(char)expectsMarkerBuffers;
-(void)setAppliesPrimaryCaptureRect:(char)arg1 ;
-(void)setConversionMethodForStillImagesDuringHDRVideos:(int)arg1 ;
-(int)conversionMethodForStillImagesDuringHDRVideos;
@end

