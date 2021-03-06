/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

@interface CILocalLightFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputGuideImage;
	NSData* inputLightMap;
	CIImage* inputLightMapImage;
	NSNumber* inputLightMapWidth;
	NSNumber* inputLightMapHeight;
	NSNumber* inputLocalLight;
	NSNumber* inputSmartShadows;

}
+(id)customAttributes;
-(id)_polyKernel;
-(id)_shadowKernel;
-(id)outputImage;
@end

