/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBSliderMapping.h>

@class NSString;

@interface CBSliderMappingNonLUT : NSObject <CBSliderMapping> {

	unsigned long long _type;
	float _minNits;
	float _maxNits;
	float _midNits;
	float _midSlider;
	float _A;
	float _B;
	float _C;
	float _IMax;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)copyStatusInfo;
-(void)configureFitFactors;
-(float)sliderToIntensity:(float)arg1 ;
-(float)sliderForNits:(float)arg1 ;
-(float)nitsForSlider:(float)arg1 ;
-(id)initWithType:(unsigned long long)arg1 minNits:(float)arg2 maxNits:(float)arg3 midNits:(float)arg4 andMidSlider:(float)arg5 ;
@end

