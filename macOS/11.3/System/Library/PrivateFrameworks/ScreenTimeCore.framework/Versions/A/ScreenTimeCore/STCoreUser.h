/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreOrganization, STCoreOrganizationSettings, STLocalOrganizationSettings, STiCloudOrganizationSettings, STFamilyOrganizationSettings, NSSet, NSNumber, STUserDeviceState, NSDate;

@interface STCoreUser : NSManagedObject

@property (readonly) char screenTimeEnabled; 
@property (readonly) char syncingEnabled; 
@property (readonly) char allLimitsEnabled; 
@property (nonatomic,copy,readonly) NSString * localizedFullName; 
@property (readonly) STCoreOrganization * managingOrganization; 
@property (readonly) char canSetUpFamily; 
@property (getter=isManaged,readonly) char managed; 
@property (getter=isManaging,readonly) char managing; 
@property (readonly) char shareWebUsage; 
@property (copy,readonly) NSString * effectivePasscode; 
@property (copy,readonly) NSString * effectiveRecoveryAltDSID; 
@property (readonly) char needsToSetPasscode; 
@property (readonly) NSString * organizationIdentifier; 
@property (readonly) long long communicationPolicy; 
@property (readonly) long long communicationWhileLimitedPolicy; 
@property (readonly) char contactsEditable; 
@property (assign) char screenTimeEnabled; 
@property (assign) char syncingEnabled; 
@property (assign) char allLimitsEnabled; 
@property (assign) char shareWebUsage; 
@property (copy) NSString * effectivePasscode; 
@property (copy) NSString * effectiveRecoveryAltDSID; 
@property (assign,nonatomic) long long communicationPolicy; 
@property (assign,nonatomic) long long communicationWhileLimitedPolicy; 
@property (assign,nonatomic) long long contactManagementState; 
@property (assign,nonatomic) char contactsEditable; 
@property (readonly) char unmodeledParticipatesInSharedLedger; 
@property (readonly) STCoreOrganizationSettings * unmodeledManagingOrganizationSettings; 
@property (copy,readonly) NSString * alwaysAllowActivationIdentifier; 
@property (copy,readonly) NSString * alwaysAllowConfigurationIdentifier; 
@property (copy,readonly) NSString * managedUserActivationIdentifier; 
@property (copy,readonly) NSString * iCloudLogoutConfigurationIdentifier; 
@property (copy,readonly) NSString * automaticDateTimeConfigurationIdentifier; 
@property (nonatomic,copy,readonly) NSString * phoneticGivenName; 
@property (nonatomic,copy,readonly) NSString * phoneticFamilyName; 
@property (assign,nonatomic) char isFamilyOrganizer; 
@property (nonatomic,retain) STLocalOrganizationSettings * localSettings; 
@property (nonatomic,retain) STiCloudOrganizationSettings * cloudSettings; 
@property (nonatomic,retain) STFamilyOrganizationSettings * familySettings; 
@property (nonatomic,retain) NSSet * userDeviceAddresses; 
@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSString * altDSID; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * familyMemberType; 
@property (assign,nonatomic) char isParent; 
@property (nonatomic,retain) STUserDeviceState * localUserDeviceState; 
@property (nonatomic,retain) NSSet * userDeviceStates; 
@property (nonatomic,retain) NSSet * usages; 
@property (assign,nonatomic) long long passcodeEntryAttemptCount; 
@property (nonatomic,copy) NSDate * passcodeEntryTimeoutEndDate; 
@property (assign,nonatomic) long long passcodeRecoveryAttemptCount; 
@property (assign,nonatomic) char supportsEncryption; 
@property (nonatomic,copy) NSString * appleID; 
@property (nonatomic,retain) NSSet * blueprints; 
+(id)fetchUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestMatchingLocalUser;
+(id)fetchRequestForUsersWithDSID:(id)arg1 ;
+(id)fetchRequestMatchingAppleID:(id)arg1 ;
+(id)fetchLocalUserInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchUserWithAppleID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestForFamilyMembers;
+(id)keyPathsForValuesAffectingLocalizedFullName;
+(id)keyPathsForValuesAffectingScreenTimeEnabled;
+(id)keyPathsForValuesAffectingSyncingEnabled;
+(id)keyPathsForValuesAffectingCanSetUpFamily;
+(id)keyPathsForValuesAffectingAllLimitsEnabled;
+(id)keyPathsForValuesAffectingManaged;
+(id)keyPathsForValuesAffectingManaging;
+(id)keyPathsForValuesAffectingEffectivePasscode;
+(id)keyPathsForValuesAffectingEffectiveRecoveryAltDSID;
+(id)keyPathsForValuesAffectingNeedsToSetPasscode;
+(id)keyPathsForValuesAffectingShareWebUsage;
+(id)keyPathsForValuesAffectingCommunicationPolicy;
+(id)keyPathsForValuesAffectingCommunicationWhileLimitedPolicy;
+(id)keyPathsForValuesAffectingContactManagementState;
-(void)didChangeValueForKey:(id)arg1 ;
-(char)isManaged;
-(NSString *)organizationIdentifier;
-(NSString *)localizedFullName;
-(char)isManaging;
-(void)setScreenTimeEnabled:(char)arg1 ;
-(char)screenTimeEnabled;
-(STCoreOrganization *)managingOrganization;
-(NSString *)alwaysAllowActivationIdentifier;
-(NSString *)alwaysAllowConfigurationIdentifier;
-(NSString *)managedUserActivationIdentifier;
-(NSString *)iCloudLogoutConfigurationIdentifier;
-(NSString *)automaticDateTimeConfigurationIdentifier;
-(char)allLimitsEnabled;
-(long long)communicationPolicy;
-(long long)communicationWhileLimitedPolicy;
-(long long)contactManagementState;
-(char)needsToSetPasscode;
-(void)setAllLimitsEnabled:(char)arg1 ;
-(void)setCommunicationPolicy:(long long)arg1 ;
-(void)setCommunicationWhileLimitedPolicy:(long long)arg1 ;
-(void)setContactManagementState:(long long)arg1 ;
-(char)shareWebUsage;
-(void)updateWithDescription:(id)arg1 ;
-(void)notifyServerOfScreenTimeEnabled:(char)arg1 ;
-(id)_contactStoreForUser;
-(id)_primaryContainerInContactStore:(id)arg1 withError:(id*)arg2 ;
-(STCoreOrganizationSettings *)unmodeledManagingOrganizationSettings;
-(char)syncingEnabled;
-(char)canSetUpFamily;
-(NSString *)effectivePasscode;
-(NSString *)effectiveRecoveryAltDSID;
-(char)contactsEditable;
-(void)setContactsEditable:(char)arg1 ;
-(void)setShareWebUsage:(char)arg1 ;
-(void)setSyncingEnabled:(char)arg1 ;
-(void)setEffectivePasscode:(NSString *)arg1 ;
-(void)setEffectiveRecoveryAltDSID:(NSString *)arg1 ;
-(char)unmodeledParticipatesInSharedLedger;
@end

