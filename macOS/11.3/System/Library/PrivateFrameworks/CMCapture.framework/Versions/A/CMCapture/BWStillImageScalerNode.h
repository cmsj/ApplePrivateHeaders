/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool, NSMutableDictionary;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	char _blackFillingRequired;
	NSMutableDictionary* _mainImageDownscalingFactorByAttachedMediaKey;
	NSMutableDictionary* _pixelBufferPoolByAttachedMediaKey;
	NSMutableDictionary* _preparedVideoFormatByAttachedMediaKey;
	OpaqueVTPixelTransferSessionRef _attachedMediaScalingSession;
	SCD_Struct_BW12 _resizedOutputDimensions;

}

@property (assign,nonatomic) SCD_Struct_BW12 resizedOutputDimensions; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithPoolCapacity:(int)arg1 ;
-(void)setBlackFillingRequired:(char)arg1 ;
-(void)setMainImageDownscalingFactorByAttachedMediaKey:(id)arg1 ;
-(void)_purgeResourcesLeavingThemForMediaToProcess:(id)arg1 ;
-(id)_attachedMediaKeysThatRequireDifferentScalingThanPrimaryMediaSampleBuffer:(opaqueCMSampleBufferRef)arg1 primaryMediaNormalizedInputCropRect:(CGRect)arg2 primaryMediaRequestedOutputWidth:(unsigned long long)arg3 primaryMediaRequestedOutputHeight:(unsigned long long)arg4 requestedScaleFactor:(float)arg5 ;
-(int)_resolveScalerModeWithSettings:(id)arg1 normalizedInputCropRect:(CGRect)arg2 scaleFactor:(float)arg3 attachedMediaThatRequiresDifferentScalingThanPrimaryMedia:(id)arg4 stillImageScalerModeOut:(int*)arg5 scaledDenormalizedInputCropRectOut:(CGRect*)arg6 mediaToProcessOut:(id*)arg7 ;
-(int)_blackenBorderAttachedMediasOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 normalizedInputCropRect:(CGRect)arg2 requestedSettings:(id)arg3 scaleFactor:(float)arg4 ;
-(int)_rebuildPrimaryFormatBufferPoolWithRequestedWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_buildPrimaryFormatScalingSession;
-(void)_rebuildBufferPoolForAttachedMediaToProcess:(id)arg1 primaryFormatWidth:(unsigned long long)arg2 primaryFormatHeight:(unsigned long long)arg3 ;
-(void)_buildAttacedMediaScalingSession;
-(int)_zoomAttachedMedia:(id)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 requestedSettings:(id)arg3 scaleFactor:(float)arg4 ;
-(char)_decompressionRequiredWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_removeUnmodifiedAttachedMedias:(opaqueCMSampleBufferRef)arg1 ;
-(char)_updateDNGDictionaryForZoomInSampleBuffer:(opaqueCMSampleBufferRef)arg1 sourceDimensions:(SCD_Struct_BW12)arg2 denormalizedCropRect:(CGRect)arg3 destDimensions:(SCD_Struct_BW12)arg4 ;
-(void)setResizedOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(SCD_Struct_BW12)resizedOutputDimensions;
-(char)blackFillingRequired;
-(id)mainImageDownscalingFactorByAttachedMediaKey;
@end

