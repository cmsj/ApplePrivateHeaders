/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, PKTransitCommutePlan, NSDate, NSArray, NSSet, PKEnteredValueActionItem;

@interface PKPaymentPassAction : NSObject <NSSecureCoding> {

	NSDictionary* _rawDictionary;
	NSDictionary* _localizations;
	NSString* _title;
	char _hasRemoteContent;
	char _reverseButtonTitleForLegacySuica;
	char _featured;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _actionDescription;
	NSString* _confirmationTitle;
	NSString* _relevantPropertyIdentifier;
	NSString* _associatedEnteredValueIdentifier;
	NSString* _associatedPlanIdentifier;
	PKTransitCommutePlan* _associatedPlan;
	NSDate* _availableFrom;
	NSDate* _availableUntil;
	NSString* _unavailableBeforeReason;
	NSString* _unavailableAfterReason;
	NSString* _serviceProviderIdentifier;
	NSString* _serviceProviderCountryCode;
	NSArray* _serviceProviderAcceptedNetworks;
	NSSet* _serviceProviderSupportedCountries;
	unsigned long long _serviceProviderCapabilities;
	PKEnteredValueActionItem* _enteredValueItem;
	NSString* _headerText;
	NSString* _footerText;
	NSArray* _selectedActionItems;

}

@property (nonatomic,copy) NSString * associatedPlanIdentifier;                              //@synthesize associatedPlanIdentifier=_associatedPlanIdentifier - In the implementation block
@property (nonatomic,copy) PKTransitCommutePlan * associatedPlan;                            //@synthesize associatedPlan=_associatedPlan - In the implementation block
@property (nonatomic,copy) NSString * associatedEnteredValueIdentifier;                      //@synthesize associatedEnteredValueIdentifier=_associatedEnteredValueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasRemoteContent;                                        //@synthesize hasRemoteContent=_hasRemoteContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * actionDescription;                            //@synthesize actionDescription=_actionDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationTitle;                            //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (assign,nonatomic) char reverseButtonTitleForLegacySuica;                          //@synthesize reverseButtonTitleForLegacySuica=_reverseButtonTitleForLegacySuica - In the implementation block
@property (nonatomic,readonly) char featured;                                                //@synthesize featured=_featured - In the implementation block
@property (nonatomic,copy,readonly) NSString * relevantPropertyIdentifier;                   //@synthesize relevantPropertyIdentifier=_relevantPropertyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * availableFrom;                                  //@synthesize availableFrom=_availableFrom - In the implementation block
@property (nonatomic,copy,readonly) NSDate * availableUntil;                                 //@synthesize availableUntil=_availableUntil - In the implementation block
@property (nonatomic,readonly) char isActionAvailable; 
@property (nonatomic,copy,readonly) NSString * unavailableBeforeReason;                      //@synthesize unavailableBeforeReason=_unavailableBeforeReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * unavailableAfterReason;                       //@synthesize unavailableAfterReason=_unavailableAfterReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderCountryCode;                   //@synthesize serviceProviderCountryCode=_serviceProviderCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderSupportedNetworks; 
@property (nonatomic,copy,readonly) NSArray * serviceProviderAcceptedNetworks;               //@synthesize serviceProviderAcceptedNetworks=_serviceProviderAcceptedNetworks - In the implementation block
@property (nonatomic,copy,readonly) NSSet * serviceProviderSupportedCountries;               //@synthesize serviceProviderSupportedCountries=_serviceProviderSupportedCountries - In the implementation block
@property (nonatomic,readonly) unsigned long long serviceProviderCapabilities;               //@synthesize serviceProviderCapabilities=_serviceProviderCapabilities - In the implementation block
@property (nonatomic,readonly) PKEnteredValueActionItem * enteredValueItem;                  //@synthesize enteredValueItem=_enteredValueItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerText;                                   //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * footerText;                                   //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedActionItems;                           //@synthesize selectedActionItems=_selectedActionItems - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)headerText;
-(NSString *)footerText;
-(NSString *)confirmationTitle;
-(NSArray *)serviceProviderSupportedNetworks;
-(NSString *)serviceProviderIdentifier;
-(NSString *)serviceProviderCountryCode;
-(NSArray *)serviceProviderAcceptedNetworks;
-(unsigned long long)serviceProviderCapabilities;
-(NSSet *)serviceProviderSupportedCountries;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(NSString *)associatedPlanIdentifier;
-(NSDate *)availableFrom;
-(NSDate *)availableUntil;
-(NSString *)unavailableBeforeReason;
-(NSString *)unavailableAfterReason;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(id)_localizableKeys;
-(void)setAssociatedPlan:(PKTransitCommutePlan *)arg1 ;
-(id)actionUpdatedWithDictionary:(id)arg1 ;
-(char)isActionAvailable;
-(char)hasRemoteContent;
-(NSString *)actionDescription;
-(char)reverseButtonTitleForLegacySuica;
-(void)setReverseButtonTitleForLegacySuica:(char)arg1 ;
-(char)featured;
-(NSString *)relevantPropertyIdentifier;
-(NSString *)associatedEnteredValueIdentifier;
-(void)setAssociatedEnteredValueIdentifier:(NSString *)arg1 ;
-(void)setAssociatedPlanIdentifier:(NSString *)arg1 ;
-(PKTransitCommutePlan *)associatedPlan;
-(PKEnteredValueActionItem *)enteredValueItem;
-(NSArray *)selectedActionItems;
@end

