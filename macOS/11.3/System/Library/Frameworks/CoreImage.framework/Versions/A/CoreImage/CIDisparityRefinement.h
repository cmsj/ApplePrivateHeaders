/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIDisparityRefinement : CIFilter {

	CIImage* inputDisparityImage;
	CIImage* inputImage;
	NSNumber* inputPropagateKernel;
	NSNumber* inputSmoothSigma;
	NSNumber* inputPropagateMinWeightSum;
	NSNumber* inputPropagateSigmaLuma;
	NSNumber* inputPropagateSigmaChma;
	NSNumber* inputScale;
	CIVector* inputOriginalSize;

}

@property (retain) CIImage * inputDisparityImage; 
@property (retain) CIImage * inputImage; 
@property (copy) NSNumber * inputPropagateKernel; 
@property (copy) NSNumber * inputSmoothSigma; 
@property (copy) NSNumber * inputPropagateMinWeightSum; 
@property (copy) NSNumber * inputPropagateSigmaLuma; 
@property (copy) NSNumber * inputPropagateSigmaChma; 
@property (copy) NSNumber * inputScale; 
@property (copy) CIVector * inputOriginalSize; 
+(id)customAttributes;
-(id)_initialConversionRGB;
-(id)_pyramidGenerateLevel;
-(id)_smoothDisparity;
-(id)_propagateDisparityR1;
-(id)_propagateDisparity;
-(id)initialConversionForSize:(CGSize)arg1 useMetal:(BOOL)arg2 ;
-(id)generatePyramidLevel:(id)arg1 useMetal:(BOOL)arg2 ;
-(id)shiftmapLevelZeroWithSize:(CGSize)arg1 useMetal:(BOOL)arg2 ;
-(id)propagateDisparity:(id)arg1 pyramids:(id*)arg2 useMetal:(BOOL)arg3 computedPyramidLevels:(int)arg4 ;
-(id)smoothDisparityImage:(id)arg1 useMetal:(BOOL)arg2 ;
-(id)outputImageUsingMetal:(BOOL)arg1 ;
-(id)_propagateDisparityR1Combined;
-(id)_propagateDisparityCombined;
-(id)_combineImages;
-(CIImage *)inputDisparityImage;
-(void)setInputDisparityImage:(CIImage *)arg1 ;
-(NSNumber *)inputPropagateKernel;
-(void)setInputPropagateKernel:(NSNumber *)arg1 ;
-(NSNumber *)inputSmoothSigma;
-(void)setInputSmoothSigma:(NSNumber *)arg1 ;
-(NSNumber *)inputPropagateMinWeightSum;
-(void)setInputPropagateMinWeightSum:(NSNumber *)arg1 ;
-(NSNumber *)inputPropagateSigmaLuma;
-(void)setInputPropagateSigmaLuma:(NSNumber *)arg1 ;
-(NSNumber *)inputPropagateSigmaChma;
-(void)setInputPropagateSigmaChma:(NSNumber *)arg1 ;
-(CIVector *)inputOriginalSize;
-(void)setInputOriginalSize:(CIVector *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

