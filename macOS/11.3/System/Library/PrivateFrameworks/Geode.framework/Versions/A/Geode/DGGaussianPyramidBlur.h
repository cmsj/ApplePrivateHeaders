/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface DGGaussianPyramidBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputAspectRatio;

}
+(void)initialize;
+(id)filterWithName:(id)arg1 ;
+(id)kernelSourceCode;
-(id)outputImage;
-(id)customAttributes;
-(CGRect)blurRegionOf:(long long)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(CGRect)scaleRegionOf:(long long)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
@end

