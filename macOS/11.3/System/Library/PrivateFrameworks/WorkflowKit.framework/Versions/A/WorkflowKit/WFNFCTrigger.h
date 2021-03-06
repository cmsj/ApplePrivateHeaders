/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSString;

@interface WFNFCTrigger : WFTrigger {

	NSString* _tagIdentifier;
	NSString* _name;

}

@property (nonatomic,copy) NSString * tagIdentifier;              //@synthesize tagIdentifier=_tagIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
+(char)supportsSecureCoding;
+(id)localizedDisplayName;
+(char)isUserInitiated;
+(char)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
+(char)isSupportedOnThisDevice;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setTagIdentifier:(NSString *)arg1 ;
-(NSString *)tagIdentifier;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(char)hasValidConfiguration;
@end

