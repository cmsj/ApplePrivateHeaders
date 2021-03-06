/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSDictionary;

@interface AVCaptureStillImageOutputUtils : NSObject {

	NSDictionary* _outputSettings;
	long long _imageOrientation;
	char _imageMirrored;
	unsigned _imageDataFormatType;
	SCD_Struct_AV14 _transferDimensions;
	unsigned _transferPixelFormatType;
	opaqueCMFormatDescriptionRef _sourceFormatDescription;
	CVPixelBufferPoolRef _cvRotationBufferPool;
	OpaqueVTImageRotationSessionRef _vtImageRotationSession;
	CVPixelBufferPoolRef _cvTransferBufferPool;
	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	OpaqueVTCompressionSessionRef _vtCompressionSession;

}

@property (nonatomic,copy) NSDictionary * outputSettings; 
@property (assign,nonatomic) long long imageOrientation; 
@property (assign,getter=isImageMirrored,nonatomic) char imageMirrored; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(NSDictionary *)outputSettings;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(void)clean;
-(id)_rotationTransform:(opaqueCMSampleBufferRef)arg1 ;
-(id)_transferTransform:(opaqueCMSampleBufferRef)arg1 ;
-(id)_encodeTransform:(opaqueCMSampleBufferRef)arg1 ;
-(void)setImageOrientation:(long long)arg1 ;
-(void)setImageMirrored:(char)arg1 ;
-(opaqueCMSampleBufferRef)_copyTransformedSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 forceClean:(char)arg2 error:(id*)arg3 ;
-(char)isImageMirrored;
-(long long)imageOrientation;
-(opaqueCMSampleBufferRef)copyTransformedSampleBufferWithSettings:(id)arg1 orientation:(long long)arg2 mirrored:(char)arg3 sample:(opaqueCMSampleBufferRef)arg4 forceClean:(char)arg5 error:(id*)arg6 ;
@end

