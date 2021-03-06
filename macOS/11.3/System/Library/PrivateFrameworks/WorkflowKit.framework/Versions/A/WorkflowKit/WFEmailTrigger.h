/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray, NSString;

@interface WFEmailTrigger : WFTrigger {

	NSArray* _selectedAccountIdentifiers;
	NSArray* _selectedAccountDescriptions;
	NSString* _selectedSubject;
	NSArray* _selectedRecipients;
	NSArray* _selectedSenders;

}

@property (nonatomic,retain) NSArray * selectedAccountIdentifiers;               //@synthesize selectedAccountIdentifiers=_selectedAccountIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * selectedAccountDescriptions;              //@synthesize selectedAccountDescriptions=_selectedAccountDescriptions - In the implementation block
@property (nonatomic,retain) NSString * selectedSubject;                         //@synthesize selectedSubject=_selectedSubject - In the implementation block
@property (nonatomic,retain) NSArray * selectedRecipients;                       //@synthesize selectedRecipients=_selectedRecipients - In the implementation block
@property (nonatomic,retain) NSArray * selectedSenders;                          //@synthesize selectedSenders=_selectedSenders - In the implementation block
+(char)supportsSecureCoding;
+(id)localizedDisplayName;
+(char)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(char)requiresEventInfoAsInput;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSString *)selectedSubject;
-(NSArray *)selectedRecipients;
-(NSArray *)selectedSenders;
-(NSArray *)selectedAccountIdentifiers;
-(id)localizedPastTenseDescription;
-(id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)arg1 ;
-(char)hasValidConfiguration;
-(void)setSelectedAccountIdentifiers:(NSArray *)arg1 ;
-(NSArray *)selectedAccountDescriptions;
-(void)setSelectedAccountDescriptions:(NSArray *)arg1 ;
-(void)setSelectedSubject:(NSString *)arg1 ;
-(void)setSelectedRecipients:(NSArray *)arg1 ;
-(void)setSelectedSenders:(NSArray *)arg1 ;
@end

