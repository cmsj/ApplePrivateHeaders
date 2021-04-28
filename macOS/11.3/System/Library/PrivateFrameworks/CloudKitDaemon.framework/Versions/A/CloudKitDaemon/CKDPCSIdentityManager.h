/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString, CKDAccount, NSMutableDictionary;

@interface CKDPCSIdentityManager : NSObject {

	char _isSiloed;
	char _forceEnableReadOnlyManatee;
	char _forceSecurityErrorOnIdentityValidation;
	char _forceManateeUnavailableForUnitTests;
	char _serviceIsManateeForUnitTests;
	NSString* _serviceName;
	CKDAccount* _account;
	NSString* _cachedAccountDSID;
	NSMutableDictionary* _PCSIdentityWrappersByServiceName;
	PCSIdentityDataRef _debugIdentity;

}

@property (retain) CKDAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) char isSiloed;                                           //@synthesize isSiloed=_isSiloed - In the implementation block
@property (nonatomic,readonly) char forceEnableReadOnlyManatee;                         //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (retain) NSString * cachedAccountDSID;                                        //@synthesize cachedAccountDSID=_cachedAccountDSID - In the implementation block
@property (retain) NSMutableDictionary * PCSIdentityWrappersByServiceName;              //@synthesize PCSIdentityWrappersByServiceName=_PCSIdentityWrappersByServiceName - In the implementation block
@property (assign,nonatomic) PCSIdentityDataRef debugIdentity;                          //@synthesize debugIdentity=_debugIdentity - In the implementation block
@property (assign,nonatomic) char forceSecurityErrorOnIdentityValidation;               //@synthesize forceSecurityErrorOnIdentityValidation=_forceSecurityErrorOnIdentityValidation - In the implementation block
@property (assign,nonatomic) char forceManateeUnavailableForUnitTests;                  //@synthesize forceManateeUnavailableForUnitTests=_forceManateeUnavailableForUnitTests - In the implementation block
@property (assign,nonatomic) char serviceIsManateeForUnitTests;                         //@synthesize serviceIsManateeForUnitTests=_serviceIsManateeForUnitTests - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) char currentServiceIsManatee; 
+(id)overrideKeys;
+(id)sharedFakeIdentitySetsByServiceByUsername;
+(PCSIdentitySetDataRef)_copyStingrayIdentitiesForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
+(PCSIdentitySetDataRef)_getTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
-(void)dealloc;
-(NSString *)serviceName;
-(CKDAccount *)account;
-(void)setAccount:(CKDAccount *)arg1 ;
-(char)forceEnableReadOnlyManatee;
-(void)updateAccount:(id)arg1 ;
-(void)clearOverrides;
-(char)currentServiceIsManatee;
-(PCSIdentityDataRef)createRandomSharingIdentityWithError:(id*)arg1 ;
-(id)dataFromSharingIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(id)initWithAccount:(id)arg1 serviceName:(id)arg2 isSiloed:(char)arg3 forceEnableReadOnlyManatee:(char)arg4 ;
-(void)identitiesChanged;
-(PCSIdentitySetDataRef)createFullKeychainIdentitySetWithError:(id*)arg1 ;
-(PCSIdentityDataRef)debugSharingIdentity;
-(id)PCSServiceStringFromCKServiceType:(unsigned long long)arg1 ;
-(id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)copyAllPublicKeysForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(PCSPublicIdentityDataRef)copyDiversifiedIdentityForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id*)arg3 ;
-(id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id*)arg3 ;
-(PCSIdentityDataRef)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2 ;
-(PCSPublicIdentityDataRef)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id*)arg2 ;
-(PCSIdentityDataRef)createSharingIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)copyIdentitySetWithType:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)identitySet:(PCSIdentitySetDataRef)arg1 containsPublicKey:(id)arg2 error:(id*)arg3 ;
-(char)_checkAndClearPCSTestOverrideForKey:(id)arg1 ;
-(id)internalServicesToCombineWithLiverpoolKey;
-(id)liverpoolPublicKey;
-(void)setOverride:(id)arg1 value:(id)arg2 ;
-(char)isSiloed;
-(void)setCachedAccountDSID:(NSString *)arg1 ;
-(void)setPCSIdentityWrappersByServiceName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)PCSIdentityWrappersByServiceName;
-(char)serviceIsManatee:(id)arg1 ;
-(char)manateeIsAvailableWithError:(id*)arg1 ;
-(NSString *)cachedAccountDSID;
-(PCSIdentitySetDataRef)_copyTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
-(PCSIdentitySetDataRef)_createIdentitySetForService:(id)arg1 dsid:(id)arg2 error:(id*)arg3 ;
-(id)_cacheIdentitySet:(PCSIdentitySetDataRef)arg1 forService:(id)arg2 ;
-(char)_hasCurrentKeyForService:(id)arg1 inIdentitySet:(PCSIdentitySetDataRef)arg2 withError:(id*)arg3 ;
-(PCSIdentitySetDataRef)_createSpecialInMemorySetCombiningLiverpoolWithServiceNamed:(id)arg1 dsid:(id)arg2 error:(id*)arg3 ;
-(PCSIdentitySetDataRef)_copyIdentityForService:(id)arg1 useCache:(char)arg2 validateCurrentKey:(char)arg3 error:(id*)arg4 ;
-(id)_copyPublicKeyDataForIdentitySet:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 withError:(id*)arg3 ;
-(id)_copyPublicKeyDataForAllIdentitiesInSet:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 ;
-(id)_addIdentitiesFromServiceNamed:(id)arg1 dsid:(id)arg2 toMutableSet:(PCSIdentitySetDataRef)arg3 ;
-(char)forceManateeUnavailableForUnitTests;
-(void)setForceSecurityErrorOnIdentityValidation:(char)arg1 ;
-(void)setServiceIsManateeForUnitTests:(char)arg1 ;
-(void)setForceManateeUnavailableForUnitTests:(char)arg1 ;
-(char)forceSecurityErrorOnIdentityValidation;
-(PCSIdentityDataRef)debugIdentity;
-(void)setDebugIdentity:(PCSIdentityDataRef)arg1 ;
-(char)serviceIsManateeForUnitTests;
@end
