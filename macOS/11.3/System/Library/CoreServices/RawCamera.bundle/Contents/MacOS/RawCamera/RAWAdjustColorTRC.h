/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber, CIVector;

@interface RAWAdjustColorTRC : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCy4;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostShadowAmount;
	NSNumber* inputBoostPreserveHueAmount;
	NSNumber* inputBoostPreserveRYHueAmount;
	NSNumber* inputBoostPreserveYGHueAmount;
	NSNumber* inputBoostPreserveGCHueAmount;
	NSNumber* inputBoostPreserveCBHueAmount;
	NSNumber* inputBoostPreserveBMHueAmount;
	NSNumber* inputBoostPreserveMRHueAmount;
	NSNumber* inputVersion;
	CIVector* inputReferencePoints;
	CIVector* inputOutputPoints;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)outputImage;
-(id)customAttributes;
-(void)setInputBoostAmount:(id)arg1 ;
@end
