/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMattingSolverInternal : CIFilter {

	CIImage* inputImage;
	CIImage* inputMainImage;
	CIImage* inputPredicateImage;
	NSNumber* inputRadius;
	NSNumber* inputSubsampling;
	NSNumber* inputEPS;
	NSNumber* inputNumIterations;
	NSNumber* inputErosionKernelSize;
	NSNumber* inputUseDepthFilter;
	NSNumber* inputFGThresholdValue;
	NSNumber* inputBGThresholdValue;

}
+(id)customAttributes;
-(id)outputImage;
@end

