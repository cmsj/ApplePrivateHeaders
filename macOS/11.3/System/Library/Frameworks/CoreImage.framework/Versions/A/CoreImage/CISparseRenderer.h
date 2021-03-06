/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CISparseRenderer : CIFilter {

	CIImage* inputImage;
	CIImage* inputMatteImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputScale;
	NSNumber* inputApertureScaling;
	NSNumber* inputDraftMode;
	NSNumber* inputAperture;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputMatteImage; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) NSNumber * inputApertureScaling; 
@property (nonatomic,copy) NSNumber * inputDraftMode; 
@property (nonatomic,copy) NSNumber * inputAperture; 
+(id)customAttributes;
-(NSNumber *)inputApertureScaling;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIImage *)inputMatteImage;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(id)stepsLUTGenerator;
-(id)baseVecsLUTGenerator;
-(char)_useD2XRenderer;
-(id)stepsLUT:(unsigned)arg1 ;
-(id)baseVecsLUT:(unsigned)arg1 ;
-(id)_lutKernel:(char)arg1 alpha:(char)arg2 ;
-(id)_kernel:(char)arg1 alpha:(char)arg2 ;
-(id)_packageParams:(char)arg1 extent:(CGRect)arg2 image:(id)arg3 haveAlpha:(char)arg4 ;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputAperture;
-(NSNumber *)inputDraftMode;
-(void)setInputImage:(CIImage *)arg1 ;
@end

