/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CISeedFill : CIFilter {

	CIImage* inputImage;
	CIImage* inputCenter;
	NSNumber* inputThreshold;
	CIVector* inputExtent;
	NSNumber* inputSplat;

}

@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputThreshold; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputSplat; 
-(void)setInputExtent:(CIVector *)arg1 ;
-(void)setInputCenter:(CIImage *)arg1 ;
-(NSNumber *)inputSplat;
-(void)setInputSplat:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIVector *)inputExtent;
-(CIImage *)inputCenter;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
@end

