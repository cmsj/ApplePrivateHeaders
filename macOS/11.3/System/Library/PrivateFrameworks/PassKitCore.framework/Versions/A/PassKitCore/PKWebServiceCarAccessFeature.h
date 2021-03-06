/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKWebServiceRegionFeature.h>

@class PKOSVersionRequirementRange, NSArray;

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature {

	PKOSVersionRequirementRange* _ownerSharingOSVersionRequirement;
	PKOSVersionRequirementRange* _friendSharingOSVersionRequirement;
	NSArray* _supportedTerminals;

}

@property (nonatomic,readonly) PKOSVersionRequirementRange * ownerSharingOSVersionRequirement;               //@synthesize ownerSharingOSVersionRequirement=_ownerSharingOSVersionRequirement - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirementRange * friendSharingOSVersionRequirement;              //@synthesize friendSharingOSVersionRequirement=_friendSharingOSVersionRequirement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedTerminals;                                            //@synthesize supportedTerminals=_supportedTerminals - In the implementation block
-(id)initWithDictionary:(id)arg1 region:(id)arg2 ;
-(id)localizedNameForIssuerWithIdentifier:(id)arg1 ;
-(PKOSVersionRequirementRange *)ownerSharingOSVersionRequirement;
-(PKOSVersionRequirementRange *)friendSharingOSVersionRequirement;
-(NSArray *)supportedTerminals;
@end

