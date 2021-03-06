/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPortraitBlurDirectionalBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputMaxBlur;
	NSNumber* inputHorizontalBlur;
	NSNumber* inputAntiAliasBlurStrength;
	NSNumber* inputUseMetal;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputMaxBlur; 
@property (nonatomic,copy) NSNumber * inputHorizontalBlur; 
@property (nonatomic,copy) NSNumber * inputAntiAliasBlurStrength; 
@property (nonatomic,copy) NSNumber * inputUseMetal; 
-(NSNumber *)inputMaxBlur;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(id)_kernelMetal;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
-(NSNumber *)inputHorizontalBlur;
-(void)setInputHorizontalBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputAntiAliasBlurStrength;
-(void)setInputAntiAliasBlurStrength:(NSNumber *)arg1 ;
-(id)outputImage;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

