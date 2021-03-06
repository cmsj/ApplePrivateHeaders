/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber, CIColor;

@interface CIRoundedRectangleGenerator : CIFilter {

	CIVector* inputExtent;
	NSNumber* inputRadius;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(void)setInputExtent:(CIVector *)arg1 ;
-(id)outputImage;
-(CIColor *)inputColor;
-(CIVector *)inputExtent;
-(void)setInputColor:(CIColor *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
@end

