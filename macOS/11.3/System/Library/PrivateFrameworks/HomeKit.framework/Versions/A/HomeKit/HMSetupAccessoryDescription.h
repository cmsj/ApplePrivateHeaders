/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSURL, HMSetupAccessoryPayload, HMSetupAccessoryBrowsingRequest, HMAccessory, NSError, HMAccessoryCategory, HMAccessoryOwnershipToken, NSArray;

@interface HMSetupAccessoryDescription : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	char _addAndSetupAccessories;
	char _entitledForHomeKitSPI;
	char _entitledForThirdPartySetupAccessoryPayload;
	char _isTrustedOrigin;
	char _legacyAPI;
	char _userConsentedForReplace;
	NSString* _setupCode;
	NSUUID* _accessoryUUID;
	NSString* _accessoryName;
	NSString* _manufacturerName;
	NSString* _marketingName;
	NSURL* _installationGuideURL;
	NSString* _appIdentifier;
	NSUUID* _homeUUID;
	NSString* _homeName;
	NSString* _storeID;
	NSString* _bundleID;
	NSString* _suggestedRoomName;
	HMSetupAccessoryPayload* _setupAccessoryPayload;
	HMSetupAccessoryBrowsingRequest* _accessoryBrowsingRequest;
	unsigned long long _certificationStatus;
	HMAccessory* _accessoryBeingReplaced;
	NSError* _cancellationReason;
	HMAccessoryCategory* _category;
	HMAccessoryOwnershipToken* _ownershipToken;
	NSUUID* _addRequestIdentifier;
	NSString* _accessoryServerIdentifier;

}

@property (nonatomic,copy) NSString * appIdentifier;                                                                                           //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryPayload * setupAccessoryPayload;                                                                  //@synthesize setupAccessoryPayload=_setupAccessoryPayload - In the implementation block
@property (assign,nonatomic) char addAndSetupAccessories;                                                                                      //@synthesize addAndSetupAccessories=_addAndSetupAccessories - In the implementation block
@property (assign,nonatomic) char isTrustedOrigin;                                                                                             //@synthesize isTrustedOrigin=_isTrustedOrigin - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryBrowsingRequest * accessoryBrowsingRequest;                                                       //@synthesize accessoryBrowsingRequest=_accessoryBrowsingRequest - In the implementation block
@property (nonatomic,copy) NSString * marketingName;                                                                                           //@synthesize marketingName=_marketingName - In the implementation block
@property (nonatomic,copy) NSURL * installationGuideURL;                                                                                       //@synthesize installationGuideURL=_installationGuideURL - In the implementation block
@property (nonatomic,copy) NSString * accessoryName;                                                                                           //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                                                                                        //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                                                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSUUID * accessoryUUID;                                                                                             //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,copy) NSString * suggestedRoomName;                                                                                       //@synthesize suggestedRoomName=_suggestedRoomName - In the implementation block
@property (nonatomic,copy) NSString * storeID;                                                                                                 //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                                                                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * setupID; 
@property (nonatomic,copy) NSString * setupCode;                                                                                               //@synthesize setupCode=_setupCode - In the implementation block
@property (nonatomic,copy) HMAccessoryOwnershipToken * ownershipToken;                                                                         //@synthesize ownershipToken=_ownershipToken - In the implementation block
@property (nonatomic,copy) NSUUID * addRequestIdentifier;                                                                                      //@synthesize addRequestIdentifier=_addRequestIdentifier - In the implementation block
@property (assign,nonatomic) char legacyAPI;                                                                                                   //@synthesize legacyAPI=_legacyAPI - In the implementation block
@property (nonatomic,readonly) char supportsIP; 
@property (nonatomic,readonly) char supportsWAC; 
@property (nonatomic,readonly) char supportsBTLE; 
@property (getter=isPaired,nonatomic,readonly) char paired; 
@property (assign,nonatomic) unsigned long long certificationStatus;                                                                           //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (assign,nonatomic) char userConsentedForReplace;                                                                                     //@synthesize userConsentedForReplace=_userConsentedForReplace - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessoryBeingReplaced;                                                                      //@synthesize accessoryBeingReplaced=_accessoryBeingReplaced - In the implementation block
@property (nonatomic,copy) NSString * accessoryServerIdentifier;                                                                               //@synthesize accessoryServerIdentifier=_accessoryServerIdentifier - In the implementation block
@property (assign,getter=isEntitledForHomeKitSPI,nonatomic) char entitledForHomeKitSPI;                                                        //@synthesize entitledForHomeKitSPI=_entitledForHomeKitSPI - In the implementation block
@property (assign,getter=isEntitledForThirdPartySetupAccessoryPayload,nonatomic) char entitledForThirdPartySetupAccessoryPayload;              //@synthesize entitledForThirdPartySetupAccessoryPayload=_entitledForThirdPartySetupAccessoryPayload - In the implementation block
@property (nonatomic,readonly) char hasAddRequest; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID;                                                                                         //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName;                                                                                       //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,retain) NSError * cancellationReason;                                                                                     //@synthesize cancellationReason=_cancellationReason - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)shortDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(HMAccessoryCategory *)category;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(NSString *)manufacturerName;
-(NSString *)shortDescription;
-(NSUUID *)homeUUID;
-(NSUUID *)accessoryUUID;
-(NSString *)accessoryName;
-(NSString *)privateDescription;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(NSError *)cancellationReason;
-(void)setAccessoryName:(NSString *)arg1 ;
-(NSString *)homeName;
-(char)isPaired;
-(HMAccessoryOwnershipToken *)ownershipToken;
-(void)setOwnershipToken:(HMAccessoryOwnershipToken *)arg1 ;
-(NSString *)storeID;
-(void)setStoreID:(NSString *)arg1 ;
-(NSString *)marketingName;
-(NSArray *)attributeDescriptions;
-(id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(char)arg5 ownershipToken:(id)arg6 marketingName:(id)arg7 installationGuideURL:(id)arg8 ;
-(void)setSetupAccessoryPayload:(HMSetupAccessoryPayload *)arg1 ;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(void)setManufacturerName:(NSString *)arg1 ;
-(void)setMarketingName:(NSString *)arg1 ;
-(void)setInstallationGuideURL:(NSURL *)arg1 ;
-(HMSetupAccessoryPayload *)setupAccessoryPayload;
-(char)supportsIP;
-(char)supportsWAC;
-(char)supportsBTLE;
-(NSString *)setupCode;
-(NSString *)setupID;
-(NSUUID *)addRequestIdentifier;
-(char)addAndSetupAccessories;
-(char)isTrustedOrigin;
-(unsigned long long)certificationStatus;
-(HMSetupAccessoryBrowsingRequest *)accessoryBrowsingRequest;
-(NSString *)suggestedRoomName;
-(NSURL *)installationGuideURL;
-(char)isEntitledForHomeKitSPI;
-(char)isEntitledForThirdPartySetupAccessoryPayload;
-(id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeName:(id)arg4 homeUUID:(id)arg5 trustedOrigin:(char)arg6 ;
-(char)legacyAPI;
-(id)initWithBrowsingRequest:(id)arg1 appID:(id)arg2 legacyAPI:(char)arg3 homeName:(id)arg4 homeUUID:(id)arg5 trustedOrigin:(char)arg6 ;
-(void)setLegacyAPI:(char)arg1 ;
-(void)setAddAndSetupAccessories:(char)arg1 ;
-(void)setIsTrustedOrigin:(char)arg1 ;
-(void)setCertificationStatus:(unsigned long long)arg1 ;
-(void)setSuggestedRoomName:(NSString *)arg1 ;
-(char)userConsentedForReplace;
-(void)setUserConsentedForReplace:(char)arg1 ;
-(void)setCancellationReason:(NSError *)arg1 ;
-(void)setEntitledForHomeKitSPI:(char)arg1 ;
-(void)setEntitledForThirdPartySetupAccessoryPayload:(char)arg1 ;
-(HMAccessory *)accessoryBeingReplaced;
-(id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(char)arg5 ownershipToken:(id)arg6 ;
-(id)initWithAddRequest:(id)arg1 setupAccessoryPayload:(id)arg2 appID:(id)arg3 ownershipToken:(id)arg4 ;
-(void)updateWithSetupAccessoryPayload:(id)arg1 ;
-(void)updateWithAccessory:(id)arg1 ;
-(void)updateOwnershipToken:(id)arg1 ;
-(void)updateAppIdentifier:(id)arg1 ;
-(void)updateAccessoryCategory:(id)arg1 ;
-(void)updateWithMarketingName:(id)arg1 installationGuideURL:(id)arg2 ;
-(void)setSetupCode:(NSString *)arg1 ;
-(char)hasAddRequest;
-(void)setAccessoryBrowsingRequest:(HMSetupAccessoryBrowsingRequest *)arg1 ;
-(void)setAccessoryBeingReplaced:(HMAccessory *)arg1 ;
-(void)setAddRequestIdentifier:(NSUUID *)arg1 ;
-(NSString *)accessoryServerIdentifier;
-(void)setAccessoryServerIdentifier:(NSString *)arg1 ;
@end

