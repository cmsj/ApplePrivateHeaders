/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIConvolution7X7 : CIFilter {

	CIImage* inputImage;
	CIVector* inputWeights;
	NSNumber* inputBias;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputWeights; 
@property (nonatomic,retain) NSNumber * inputBias; 
+(id)customAttributes;
-(id)outputImage;
-(CIVector *)inputWeights;
-(void)setInputWeights:(CIVector *)arg1 ;
-(char)_isIdentity;
-(CIImage *)inputImage;
-(NSNumber *)inputBias;
-(void)setInputBias:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

