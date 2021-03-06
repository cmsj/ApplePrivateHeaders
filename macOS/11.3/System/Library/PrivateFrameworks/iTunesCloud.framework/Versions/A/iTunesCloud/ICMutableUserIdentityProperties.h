/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICUserIdentityProperties.h>

@class NSString, ICDelegateToken, NSNumber, NSDate, NSDictionary;

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties

@property (assign,getter=isActiveLocker,nonatomic) char activeLocker; 
@property (assign,getter=isActive,nonatomic) char active; 
@property (nonatomic,copy) NSString * alternateDSID; 
@property (nonatomic,copy) NSString * carrierBundleDeviceIdentifier; 
@property (assign,getter=isDelegated,nonatomic) char delegated; 
@property (nonatomic,copy) ICDelegateToken * delegateToken; 
@property (nonatomic,copy) NSNumber * DSID; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (assign,getter=isManagedAppleID,nonatomic) char managedAppleID; 
@property (assign,getter=isSandboxed,nonatomic) char sandboxed; 
@property (nonatomic,copy) NSString * storefrontIdentifier; 
@property (assign,getter=isSubscriptionStatusEnabled,nonatomic) char subscriptionStatusEnabled; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSDate * ageVerificationExpirationDate; 
@property (nonatomic,copy) NSNumber * mergeToCloudLibraryPreference; 
@property (nonatomic,copy) NSDictionary * cloudLibraryStateReason; 
@property (nonatomic,copy) NSNumber * privateListeningEnabled; 
-(void)setActive:(char)arg1 ;
-(void)setAlternateDSID:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(void)setDelegated:(char)arg1 ;
-(void)setDelegateToken:(ICDelegateToken *)arg1 ;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)replaceValuesWithValuesFromProperties:(id)arg1 ;
-(void)setCarrierBundleDeviceIdentifier:(NSString *)arg1 ;
-(void)setManagedAppleID:(char)arg1 ;
-(void)setSandboxed:(char)arg1 ;
-(void)setSubscriptionStatusEnabled:(char)arg1 ;
-(void)setAgeVerificationExpirationDate:(NSDate *)arg1 ;
-(void)setMergeToCloudLibraryPreference:(NSNumber *)arg1 ;
-(void)setHomeUserIdentifiers:(id)arg1 ;
-(void)setCloudLibraryStateReason:(NSDictionary *)arg1 ;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(void)setPrivateListeningEnabledForHomeUsers:(id)arg1 ;
-(void)setCloudBackupEnabled:(char)arg1 ;
-(void)setICloudPersonID:(id)arg1 ;
-(void)setActiveLocker:(char)arg1 ;
@end

