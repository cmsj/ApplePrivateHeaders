/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class VNSupportedImageSize;

@interface VNNOPRequest : VNImageBasedRequest

@property (nonatomic,copy) VNSupportedImageSize * detectorPreferredImageSize; 
@property (assign,nonatomic) char detectorWantsAnisotropicScaling; 
@property (assign,nonatomic) double detectorExecutionTimeInterval; 
+(Class)configurationClass;
-(char)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)supportedImageSizeSet;
-(char)hasCancellationHook;
-(VNSupportedImageSize *)detectorPreferredImageSize;
-(void)setDetectorPreferredImageSize:(VNSupportedImageSize *)arg1 ;
-(char)detectorWantsAnisotropicScaling;
-(void)setDetectorWantsAnisotropicScaling:(char)arg1 ;
-(double)detectorExecutionTimeInterval;
-(void)setDetectorExecutionTimeInterval:(double)arg1 ;
-(CGSize)_actualSizeForDesiredSize:(id)arg1 ofSourceImageWidth:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(CVBufferRef)_createScaledImagePixelBufferFromCropRect:(CGRect)arg1 ofImageBuffer:(id)arg2 inPixelFormat:(unsigned)arg3 forDetectorInputImageSize:(CGSize)arg4 usingAnisotropicScaling:(char)arg5 options:(id)arg6 error:(id*)arg7 ;
-(CVBufferRef)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 inPixelFormat:(unsigned)arg2 forDetectorInputImageSize:(CGSize)arg3 usingAnisotropicScaling:(char)arg4 options:(id)arg5 error:(id*)arg6 ;
-(char)_performNOPForRevision:(unsigned long long)arg1 inContext:(id)arg2 detectorCompletionSemaphore:(id)arg3 error:(id*)arg4 ;
@end
