/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSURL, NSString, NSNumber, NSDictionary, NSData, NSArray;

@interface ASDTestFlightAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	char _hasMessagesExtension;
	char _launchProhibited;
	char _userInitiated;
	ACAccount* _account;
	NSURL* _artworkURL;
	NSString* _bundleID;
	NSString* _companionBundleID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _initialODRSize;
	NSNumber* _itemID;
	NSString* _itemName;
	NSDictionary* _placeholderEntitlements;
	NSURL* _messagesArtworkURL;
	long long _packageCompression;
	NSData* _packageDPInfo;
	NSData* _packageSINF;
	NSURL* _packageURL;
	NSArray* _provisioningProfiles;
	NSString* _storeCohort;
	NSNumber* _storeFront;
	NSString* _variantID;
	NSString* _vendorName;

}

@property (nonatomic,copy) ACAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                             //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * companionBundleID;                                   //@synthesize companionBundleID=_companionBundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;                           //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (assign,nonatomic) char hasMessagesExtension;                                    //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (nonatomic,copy) NSNumber * initialODRSize;                                      //@synthesize initialODRSize=_initialODRSize - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                            //@synthesize itemName=_itemName - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) char launchProhibited;              //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (nonatomic,copy) NSDictionary * placeholderEntitlements;                         //@synthesize placeholderEntitlements=_placeholderEntitlements - In the implementation block
@property (nonatomic,copy) NSURL * messagesArtworkURL;                                     //@synthesize messagesArtworkURL=_messagesArtworkURL - In the implementation block
@property (assign,nonatomic) long long packageCompression;                                 //@synthesize packageCompression=_packageCompression - In the implementation block
@property (nonatomic,copy) NSData * packageDPInfo;                                         //@synthesize packageDPInfo=_packageDPInfo - In the implementation block
@property (nonatomic,copy) NSData * packageSINF;                                           //@synthesize packageSINF=_packageSINF - In the implementation block
@property (nonatomic,copy) NSURL * packageURL;                                             //@synthesize packageURL=_packageURL - In the implementation block
@property (nonatomic,copy) NSArray * provisioningProfiles;                                 //@synthesize provisioningProfiles=_provisioningProfiles - In the implementation block
@property (nonatomic,copy) NSString * storeCohort;                                         //@synthesize storeCohort=_storeCohort - In the implementation block
@property (nonatomic,copy) NSNumber * storeFront;                                          //@synthesize storeFront=_storeFront - In the implementation block
@property (assign,nonatomic) char userInitiated;                                           //@synthesize userInitiated=_userInitiated - In the implementation block
@property (nonatomic,copy) NSString * variantID;                                           //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                          //@synthesize vendorName=_vendorName - In the implementation block
@property (readonly) long long metadataType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSNumber *)storeFront;
-(NSNumber *)externalVersionIdentifier;
-(id)initWithBundleID:(id)arg1 ;
-(char)isLaunchProhibited;
-(NSString *)storeCohort;
-(NSString *)variantID;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(NSURL *)artworkURL;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(long long)metadataType;
-(char)userInitiated;
-(void)setUserInitiated:(char)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSURL *)packageURL;
-(void)setPackageURL:(NSURL *)arg1 ;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setStoreFront:(NSNumber *)arg1 ;
-(void)setHasMessagesExtension:(char)arg1 ;
-(void)setInitialODRSize:(NSNumber *)arg1 ;
-(void)setLaunchProhibited:(char)arg1 ;
-(void)setStoreCohort:(NSString *)arg1 ;
-(void)setVariantID:(NSString *)arg1 ;
-(char)hasMessagesExtension;
-(NSNumber *)initialODRSize;
-(NSArray *)provisioningProfiles;
-(void)setProvisioningProfiles:(NSArray *)arg1 ;
-(NSURL *)messagesArtworkURL;
-(void)setMessagesArtworkURL:(NSURL *)arg1 ;
-(NSData *)packageDPInfo;
-(void)setPackageDPInfo:(NSData *)arg1 ;
-(NSData *)packageSINF;
-(void)setPackageSINF:(NSData *)arg1 ;
-(NSString *)companionBundleID;
-(void)setCompanionBundleID:(NSString *)arg1 ;
-(NSDictionary *)placeholderEntitlements;
-(void)setPlaceholderEntitlements:(NSDictionary *)arg1 ;
-(long long)packageCompression;
-(void)setPackageCompression:(long long)arg1 ;
@end

