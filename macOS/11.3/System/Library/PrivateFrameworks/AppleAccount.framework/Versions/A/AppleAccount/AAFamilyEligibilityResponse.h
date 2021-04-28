/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse {

	char _hasPendingInvites;
	NSArray* _familyFeaturePrimaryDescriptions;
	NSArray* _familyFeatureSecondaryDescriptions;
	NSString* _familyFeatureSecondaryTitle;
	NSString* _underageEligibilityAlertTitle;
	NSString* _underageEligibilityAlertMessage;

}

@property (nonatomic,readonly) char eligible; 
@property (nonatomic,readonly) long long eligibilityStatus; 
@property (nonatomic,readonly) char hasPendingInvites;                                    //@synthesize hasPendingInvites=_hasPendingInvites - In the implementation block
@property (nonatomic,readonly) NSArray * familyFeaturePrimaryDescriptions;                //@synthesize familyFeaturePrimaryDescriptions=_familyFeaturePrimaryDescriptions - In the implementation block
@property (nonatomic,readonly) NSArray * familyFeatureSecondaryDescriptions;              //@synthesize familyFeatureSecondaryDescriptions=_familyFeatureSecondaryDescriptions - In the implementation block
@property (nonatomic,readonly) NSString * familyFeatureSecondaryTitle;                    //@synthesize familyFeatureSecondaryTitle=_familyFeatureSecondaryTitle - In the implementation block
@property (nonatomic,readonly) NSString * underageEligibilityAlertTitle;                  //@synthesize underageEligibilityAlertTitle=_underageEligibilityAlertTitle - In the implementation block
@property (nonatomic,readonly) NSString * underageEligibilityAlertMessage;                //@synthesize underageEligibilityAlertMessage=_underageEligibilityAlertMessage - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(char)eligible;
-(long long)eligibilityStatus;
-(char)hasPendingInvites;
-(NSArray *)familyFeaturePrimaryDescriptions;
-(NSArray *)familyFeatureSecondaryDescriptions;
-(NSString *)familyFeatureSecondaryTitle;
-(NSString *)underageEligibilityAlertTitle;
-(NSString *)underageEligibilityAlertMessage;
@end
