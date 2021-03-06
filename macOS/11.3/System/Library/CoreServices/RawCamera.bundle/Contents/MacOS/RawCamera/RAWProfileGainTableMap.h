/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber, CIVector, NSData;

@interface RAWProfileGainTableMap : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputMapPointsV;
	NSNumber* inputMapPointsH;
	NSNumber* inputMapSpacingV;
	NSNumber* inputMapSpacingH;
	NSNumber* inputMapOriginV;
	NSNumber* inputMapOriginH;
	NSNumber* inputMapPointsN;
	CIVector* inputWeights;
	NSData* inputGainData;
	NSNumber* inputStrength;
	id inputColorSpace;

}
-(id)outputImage;
-(id)gainImage;
@end

