/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CISunbeamsGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor;
	NSNumber* inputSunRadius;
	NSNumber* inputMaxStriationRadius;
	NSNumber* inputStriationStrength;
	NSNumber* inputStriationContrast;
	NSNumber* inputTime;

}
+(id)customAttributes;
-(id)_CISunbeams;
-(id)outputImage;
@end

