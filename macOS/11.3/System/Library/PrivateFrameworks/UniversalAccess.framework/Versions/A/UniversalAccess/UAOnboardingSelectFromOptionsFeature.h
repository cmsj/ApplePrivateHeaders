/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/UniversalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalAccess/UAOnboardingFeature.h>

@class NSArray;

@interface UAOnboardingSelectFromOptionsFeature : UAOnboardingFeature {

	NSArray* _options;

}

@property (nonatomic,retain) NSArray * options;              //@synthesize options=_options - In the implementation block
-(void)setOptions:(NSArray *)arg1 ;
-(NSArray *)options;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 ;
-(void)updateSystemSettingWithSelectedOption:(long long)arg1 ;
-(long long)getSelectedOptionFromSystemSettings;
@end

