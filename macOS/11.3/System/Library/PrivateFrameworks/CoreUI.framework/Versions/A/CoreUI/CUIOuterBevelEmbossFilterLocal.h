/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIColor;

@interface CUIOuterBevelEmbossFilterLocal : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSize;
	NSNumber* inputAngle;
	NSNumber* inputAltitude;
	CIColor* inputHighlightColor;
	CIColor* inputShadowColor;
	NSNumber* inputSoften;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) CIColor * inputHighlightColor; 
@property (nonatomic,retain) CIColor * inputShadowColor; 
@property (nonatomic,retain) NSNumber * inputSoften; 
+(id)filterWithName:(id)arg1 ;
-(id)_kernelColorizeWithImageMask;
-(id)_kernelColorize;
-(NSNumber *)inputSoften;
-(void)setInputSoften:(NSNumber *)arg1 ;
-(CIColor *)inputHighlightColor;
-(void)setInputHighlightColor:(CIColor *)arg1 ;
-(CIColor *)inputShadowColor;
-(void)setInputShadowColor:(CIColor *)arg1 ;
-(void)dealloc;
-(id)outputImage;
-(void)setInputSize:(NSNumber *)arg1 ;
-(NSNumber *)inputSize;
-(id)_kernel;
-(id)customAttributes;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
@end

