/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/UniversalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalAccess/UAOnboardingSelectFromOptionsFeature.h>

@interface UAOnboardingFeatureCursorSize : UAOnboardingSelectFromOptionsFeature {

	double __smallestCursorSize;
	double __smallCursorSize;
	double __bigCursorSize;
	double __biggestCursorSize;

}

@property (assign,nonatomic) double _smallestCursorSize;              //@synthesize _smallestCursorSize=__smallestCursorSize - In the implementation block
@property (assign,nonatomic) double _smallCursorSize;                 //@synthesize _smallCursorSize=__smallCursorSize - In the implementation block
@property (assign,nonatomic) double _bigCursorSize;                   //@synthesize _bigCursorSize=__bigCursorSize - In the implementation block
@property (assign,nonatomic) double _biggestCursorSize;               //@synthesize _biggestCursorSize=__biggestCursorSize - In the implementation block
-(id)init;
-(double)_smallestCursorSize;
-(double)_biggestCursorSize;
-(double)_smallCursorSize;
-(double)_bigCursorSize;
-(void)updateSystemSettingWithSelectedOption:(long long)arg1 ;
-(long long)getSelectedOptionFromSystemSettings;
-(void)set_smallestCursorSize:(double)arg1 ;
-(void)set_smallCursorSize:(double)arg1 ;
-(void)set_bigCursorSize:(double)arg1 ;
-(void)set_biggestCursorSize:(double)arg1 ;
@end

