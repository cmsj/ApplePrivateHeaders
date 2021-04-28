/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, _CDInteractionPolicy, NSDate;

@interface _CDInteractionPolicies : NSObject {

	unsigned long long _maxNumberOfInteractions;
	unsigned long long _maxNumberOfInteractionsDeletedInBatch;
	double _maxLifespanInSeconds;
	NSDictionary* _specialPoliciesForBundleIds;
	NSDictionary* _specialPoliciesForMechanisms;
	_CDInteractionPolicy* _defaultPolicy;

}

@property (readonly) unsigned long long maxNumberOfInteractionsStored; 
@property (readonly) unsigned long long maxNumberOfInteractionsDeleted; 
@property (readonly) NSDate * dateOfOldestAllowedInteraction; 
+(id)interactionPolicies;
+(id)modifyDate:(id)arg1 usingPolicy:(id)arg2 ;
+(id)limitArray:(id)arg1 toMaxCount:(unsigned long long)arg2 ;
-(id)description;
-(id)init;
-(id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1 ;
-(void)setupDefaultHardcodedPolicies;
-(id)policyForMechanism:(long long)arg1 ;
-(id)whitelistedFirstPartyBundleIds;
-(id)dateOfOldestAllowedInteractionForWhitelistedFirstPartyBundleIds;
-(unsigned long long)maxNumberOfInteractionsStored;
-(unsigned long long)maxNumberOfInteractionsDeleted;
-(NSDate *)dateOfOldestAllowedInteraction;
-(id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(char)arg2 enforcePrivacy:(char)arg3 ;
-(void)readConfigurationPlist;
@end
