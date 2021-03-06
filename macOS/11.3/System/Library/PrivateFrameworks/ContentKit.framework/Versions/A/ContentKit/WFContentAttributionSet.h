/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSArray, NSString;

@interface WFContentAttributionSet : NSObject <NSSecureCoding, WFSerializableContent> {

	NSArray* _attributions;

}

@property (nonatomic,copy,readonly) NSArray * attributions;                            //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,readonly) unsigned long long derivedDisclosureLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)attributionSetWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2 ;
+(id)attributionSetWithAccountBasedBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 ;
+(id)attributionSetWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4 ;
+(id)attributionSetWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2 ;
+(id)attributionSetByMergingAttributionSets:(id)arg1 ;
+(id)attributionSetWithAttributions:(id)arg1 ;
+(id)shortcutsAppAttributionSet;
+(id)shortcutsAppAttributionSetWithDisclosureLevel:(unsigned long long)arg1 ;
+(id)combiningAttributions:(id)arg1 withAttributions:(id)arg2 ;
+(id)reducedAttributionsFrom:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)attributions;
-(id)initWithAttribution:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(unsigned long long)derivedDisclosureLevel;
-(char)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)arg1 ;
-(char)isSupersetOfAttributionSet:(id)arg1 ;
-(char)isMoreRestrictiveThan:(id)arg1 ;
-(char)isEligibleToShareWithResultManagedLevel:(unsigned long long*)arg1 ;
-(char)isEligibleToShareWithResultManagedLevel:(unsigned long long*)arg1 usingManagedConfigurationManager:(id)arg2 ;
-(id)attributionSetByAddingAttribution:(id)arg1 ;
-(id)initWithAttributions:(id)arg1 ;
@end

