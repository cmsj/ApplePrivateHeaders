/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, DMFApplicationPolicyMonitor, NSArray, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject {

	char _didFetchInitialPolicies;
	NSDictionary* _policiesByBundleIdentifier;
	DMFApplicationPolicyMonitor* _applicationPolicyMonitor;
	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSDictionary * policiesByBundleIdentifier;                               //@synthesize policiesByBundleIdentifier=_policiesByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) DMFApplicationPolicyMonitor * applicationPolicyMonitor;              //@synthesize applicationPolicyMonitor=_applicationPolicyMonitor - In the implementation block
@property (assign,nonatomic) char didFetchInitialPolicies;                                          //@synthesize didFetchInitialPolicies=_didFetchInitialPolicies - In the implementation block
@property (nonatomic,copy,readonly) NSArray * policyTypes;                                          //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
+(id)new;
+(id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)arg1 ;
+(id)communicationBundleIdentifiers;
+(id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)arg1 ;
+(id)_categoryForCommunicationBundleIdentifier:(id)arg1 ;
+(id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2 ;
+(unsigned long long)communicationPolicyForApplicationPolicy:(id)arg1 downtimeEnforced:(char)arg2 ;
-(void)dealloc;
-(id)init;
-(NSUUID *)identifier;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(NSArray *)policyTypes;
-(void)_updatePoliciesByBundleIdentifier;
-(DMFApplicationPolicyMonitor *)applicationPolicyMonitor;
-(void)_updateWithPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2 ;
-(NSDictionary *)policiesByBundleIdentifier;
-(void)setPoliciesByBundleIdentifier:(NSDictionary *)arg1 ;
-(char)didFetchInitialPolicies;
-(void)setDidFetchInitialPolicies:(char)arg1 ;
-(id)requestPoliciesByBundleIdentifierWithError:(id*)arg1 ;
-(void)requestPoliciesByBundleIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
@end

