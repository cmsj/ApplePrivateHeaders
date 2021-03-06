/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, FigCapturePixelConverter, BWFigPhotoCompressionSession, BWDNGCompressionSession, NSDictionary, BWInferenceEngine, NSString;

@interface BWPhotoEncoderNode : BWNode <BWInferenceFormatProvider> {

	NSObject*<OS_dispatch_queue> _prewarmQueue;
	NSObject*<OS_dispatch_queue> _previewGenerationQueue;
	NSObject*<OS_dispatch_group> _previewGenerationGroup;
	FigCapturePixelConverter* _previewPixelConverter;
	FigCapturePixelConverter* _thumbnailPixelConverter;
	FigCapturePixelConverter* _clientThumbnailPixelConverter;
	char _cameraSupportsFlash;
	char _zeroShutterLagEnabled;
	BWFigPhotoCompressionSession* _figPhotoCompressionSession;
	BWDNGCompressionSession* _dngCompressionSession;
	unsigned long long _dngBitDepth;
	unsigned long long _maxThreads;
	FigCapturePixelConverter* _jpegPixelConverter;
	int _portraitRenderQuality;
	NSDictionary* _inputColorInfo;
	char _usesHighEncodingPriority;
	unsigned long long _heifThumbnailMaxPixelSize;
	float _heifQualityOverride;
	char _heifForceEmbedThumb;
	char _heifForceCABAC;
	char _heifForceHEVC;
	char _heifUseTiling;
	int _heifTileWidth;
	int _heifTileHeight;
	long long _prewarmedSettingsID;
	char _allowHEIFPrewarming;
	char _prewarmingOngoing;
	float _segmentationDownscalingFactor;
	NSDictionary* _mainImageDownscalingFactorByNonPropagatedAttachedMediaKey;
	void* _prewarmQueueID;
	BWInferenceEngine* _inferenceEngine;
	char _preparedInferenceEngine;
	Ac _opportunisticInferenceCompleted;
	char _alwaysAwaitInference;
	opaqueCMFormatDescriptionRef _inferenceInputFormatDescription;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(CGRect)_cropRectForSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 scaleFactorOut:(float*)arg3 ;
+(void)_updateMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 scaleFactor:(float)arg3 ;
-(void)dealloc;
-(id)nodeType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(char)usesHighEncodingPriority;
-(void)setUsesHighEncodingPriority:(char)arg1 ;
-(id)initWithNodeConfiguration:(id)arg1 personSegmentationEnabled:(char)arg2 semanticDevelopmentVersion:(int)arg3 inferenceScheduler:(id)arg4 portraitRenderQuality:(int)arg5 deferredPhotoProcessorEnabled:(char)arg6 ;
-(void)setInputColorInfo:(id)arg1 ;
-(void)setCameraSupportsFlash:(char)arg1 ;
-(void)setSegmentationDownscalingFactor:(float)arg1 ;
-(char)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(char)arg1 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(char)cameraSupportsFlash;
-(int)_resolveEncodingSchemeForRequestedSettings:(id)arg1 ;
-(int)_resolveEncodingSchemeForCompressedPhotoWithLinDNGWithRequestedSettings:(id)arg1 ;
-(char)_isSupportedThumbnailCodecType:(unsigned)arg1 forEncodingScheme:(int)arg2 ;
-(int)_generatePreviewForSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(CGRect)arg3 previewPixelBuffer:(_CVBuffer*)arg4 ;
-(void)_performInferenceWithBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_scaleInputPixelBuffer:(CVBufferRef)arg1 toDimensions:(SCD_Struct_BW12)arg2 colorSpaceProperties:(int)arg3 cropRect:(CGRect)arg4 pixelConverter:(id)arg5 poolCapacity:(int)arg6 thumbnailPixelBuffer:(_CVBuffer*)arg7 ;
-(id)_compressionSessionForEncodingScheme:(int)arg1 ;
-(unsigned)_codecTypeForEncodingScheme:(int)arg1 ;
-(int)_fileTypeForEncodingScheme:(int)arg1 ;
-(int)_encodePhotoForEncodingScheme:(int)arg1 pixelBuffer:(CVBufferRef)arg2 imageDimensions:(SCD_Struct_BW12)arg3 metadata:(id)arg4 thumbnailOptions:(id)arg5 requestedStillImageCaptureSettings:(id)arg6 resolvedStillImageCaptureSettings:(id)arg7 cropRect:(CGRect)arg8 usePixelsOutsideCrop:(char)arg9 ;
-(int)_addThumbnailForEncodingScheme:(int)arg1 thumbnailPixelBuffer:(CVBufferRef)arg2 metadata:(id)arg3 requestedStillImageCaptureSettings:(id)arg4 resolvedStillImageCaptureSettings:(id)arg5 cropRect:(CGRect)arg6 codecType:(unsigned)arg7 maxPixelSize:(unsigned long long)arg8 ;
-(id)_thumbnailOptionsForImageWithMetadata:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 cropRect:(CGRect)arg4 codecType:(unsigned)arg5 maxPixelSize:(unsigned long long)arg6 ;
-(void)_addAuxImagesIfNeededForEncodingScheme:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 metadata:(id)arg3 stillImageSettings:(id)arg4 scaleFactor:(float)arg5 processingFlags:(unsigned)arg6 embedThumbToCompressedImage:(char)arg7 ;
-(int)_addMetadataAttachmentsForEncodingScheme:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 requestedSettings:(id)arg3 captureType:(int)arg4 ;
-(IOSurfaceRef)_closeContainerAndCopySurfaceForEncodingScheme:(int)arg1 surfaceSizeOut:(unsigned long long*)arg2 ;
-(void)_closeContainerForEncodingScheme:(int)arg1 ;
-(int)_encodeDNGForEncodingScheme:(int)arg1 rawSampleBuffer:(opaqueCMSampleBufferRef)arg2 dngDictionary:(id)arg3 requestedSettings:(id)arg4 captureType:(int)arg5 cropRect:(CGRect)arg6 ;
-(int)_addCompressedThumbnailForEncodingScheme:(int)arg1 thumbnailSurface:(IOSurfaceRef)arg2 thumbnailSurfaceSize:(unsigned long long)arg3 ;
-(void)_removeNonPropagatedAttachedMediaFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)_addGainMapForEncodingScheme:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 cropRect:(CGRect)arg3 outputWidth:(unsigned)arg4 outputHeight:(unsigned)arg5 scaleFactor:(float)arg6 ;
-(char)_addDepthForEncodingScheme:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(char)_addPortraitEffectsMatteForEncodingScheme:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 primaryOutputWidth:(unsigned)arg3 primaryOutputHeight:(unsigned)arg4 scaleFactor:(float)arg5 ;
-(void)_addSemanticMattesForEncodingScheme:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 primaryOutputWidth:(unsigned)arg3 primaryOutputHeight:(unsigned)arg4 scaleFactor:(float)arg5 settingsID:(long long)arg6 ;
-(int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned)arg1 sourceWidth:(int)arg2 sourceHeight:(int)arg3 destinationPixelFormat:(unsigned)arg4 ;
-(void)_addQualityOptionsToDictionary:(id)arg1 codecType:(unsigned)arg2 pixelBuffer:(CVBufferRef)arg3 imageDimensions:(SCD_Struct_BW12)arg4 metadata:(id)arg5 requestedStillImageCaptureSettings:(id)arg6 resolvedStillImageCaptureSettings:(id)arg7 enableHEIFTiling:(char)arg8 enableHEIFOrientation:(char)arg9 ;
-(id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned)arg2 ;
-(id)_encodingOptionsForAuxiliaryImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBufferAttributes:(id)arg3 ;
-(int)_defaultJPEGIndexedQTableForPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int*)arg4 isHighGainImageOut:(char*)arg5 ;
-(int)_containerFormatForEncodingScheme:(int)arg1 ;
-(id)_newRawMetadataAttachmentsForEncodingScheme:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 dngDictionary:(id)arg3 requestedSettings:(id)arg4 captureType:(int)arg5 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1 ;
-(int)_addValue:(id)arg1 toAuxiliaryImageProperties:(CGImageMetadataRef)arg2 namespace:(CFStringRef)arg3 prefix:(CFStringRef)arg4 key:(CFStringRef)arg5 ;
-(id)_arrayInColumnMajorOrderFrom3x3MatrixData:(SCD_Struct_BW92)arg1 ;
-(id)_arrayInColumnMajorOrderFrom3x4MatrixData:(SCD_Struct_BW66)arg1 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg1 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromGainMapSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_addSemanticMatteToCompressionSession:(id)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 attachedMediaKey:(id)arg3 auxImageType:(int)arg4 primaryOutputWidth:(unsigned)arg5 primaryOutputHeight:(unsigned)arg6 scaleFactor:(float)arg7 sourceCropRectKey:(id)arg8 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromSemanticMatteSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_newMetadataAttachmentsForEncodingScheme:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 requestedSettings:(id)arg3 captureType:(int)arg4 ;
-(id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(char)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(id)inputColorInfo;
-(float)segmentationDownscalingFactor;
-(void)setMainImageDownscalingFactorByNonPropagatedAttachedMediaKey:(id)arg1 ;
-(id)mainImageDownscalingFactorByNonPropagatedAttachedMediaKey;
@end

