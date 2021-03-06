/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/StoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate, NSValue;

@interface CKSoftwareProduct : NSObject <NSSecureCoding, NSCopying> {

	char _installed;
	char _isVPPLicensed;
	char _vppLicenseRevoked;
	char _isMachineLicensed;
	char _isLegacyApp;
	char _metadataChangeIsExpected;
	char _metadataChangeHasAlreadyOccurred;
	NSString* _accountOpaqueDSID;
	NSString* _accountIdentifier;
	NSString* _appName;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundlePath;
	NSString* _receiptType;
	NSNumber* _itemIdentifier;
	NSNumber* _storeFrontIdentifier;
	NSNumber* _versionIdentifier;
	NSDate* _purchaseDate;
	NSValue* _mdItemRef;
	NSString* _vppLicenseOrganizationName;
	NSDate* _vppLicenseExpirationDate;
	NSDate* _vppLicenseRenewalDate;
	NSString* _vppLicenseCancellationReason;
	long long _source;
	NSString* _expectedBundleVersion;
	NSNumber* _expectedStoreVersion;

}

@property (retain) NSString * accountOpaqueDSID;                         //@synthesize accountOpaqueDSID=_accountOpaqueDSID - In the implementation block
@property (retain) NSString * accountIdentifier;                         //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (retain) NSString * appName;                                   //@synthesize appName=_appName - In the implementation block
@property (retain) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) NSString * bundleVersion;                             //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSString * bundlePath;                                //@synthesize bundlePath=_bundlePath - In the implementation block
@property (retain) NSString * receiptType;                               //@synthesize receiptType=_receiptType - In the implementation block
@property (retain) NSNumber * itemIdentifier;                            //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (retain) NSNumber * storeFrontIdentifier;                      //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (retain) NSNumber * versionIdentifier;                         //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (retain) NSDate * purchaseDate;                                //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (retain) NSValue * mdItemRef;                                  //@synthesize mdItemRef=_mdItemRef - In the implementation block
@property (assign) char installed;                                       //@synthesize installed=_installed - In the implementation block
@property (assign) long long source;                                     //@synthesize source=_source - In the implementation block
@property (assign) char isVPPLicensed;                                   //@synthesize isVPPLicensed=_isVPPLicensed - In the implementation block
@property (assign) char vppLicenseRevoked;                               //@synthesize vppLicenseRevoked=_vppLicenseRevoked - In the implementation block
@property (retain) NSString * vppLicenseOrganizationName;                //@synthesize vppLicenseOrganizationName=_vppLicenseOrganizationName - In the implementation block
@property (retain) NSDate * vppLicenseExpirationDate;                    //@synthesize vppLicenseExpirationDate=_vppLicenseExpirationDate - In the implementation block
@property (retain) NSDate * vppLicenseRenewalDate;                       //@synthesize vppLicenseRenewalDate=_vppLicenseRenewalDate - In the implementation block
@property (retain) NSString * vppLicenseCancellationReason;              //@synthesize vppLicenseCancellationReason=_vppLicenseCancellationReason - In the implementation block
@property (assign) char isMachineLicensed;                               //@synthesize isMachineLicensed=_isMachineLicensed - In the implementation block
@property (assign) char isLegacyApp;                                     //@synthesize isLegacyApp=_isLegacyApp - In the implementation block
@property (assign) char metadataChangeIsExpected;                        //@synthesize metadataChangeIsExpected=_metadataChangeIsExpected - In the implementation block
@property (assign) char metadataChangeHasAlreadyOccurred;                //@synthesize metadataChangeHasAlreadyOccurred=_metadataChangeHasAlreadyOccurred - In the implementation block
@property (copy) NSString * expectedBundleVersion;                       //@synthesize expectedBundleVersion=_expectedBundleVersion - In the implementation block
@property (copy) NSNumber * expectedStoreVersion;                        //@synthesize expectedStoreVersion=_expectedStoreVersion - In the implementation block
@property (readonly) NSString * sourceString; 
+(char)supportsSecureCoding;
+(id)productPathToUpgradeForBundleIdentifier:(id)arg1 versionNumberString:(id)arg2 ;
+(id)createSoftwareProductForAppAtPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)itemIdentifier;
-(long long)source;
-(NSString *)bundleIdentifier;
-(char)installed;
-(NSString *)bundleVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)versionIdentifier;
-(NSString *)bundlePath;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(void)setInstalled:(char)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setVersionIdentifier:(NSNumber *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(char)isVPPLicensed;
-(NSString *)receiptType;
-(NSDate *)purchaseDate;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSNumber *)storeFrontIdentifier;
-(NSValue *)mdItemRef;
-(NSString *)sourceString;
-(NSString *)accountOpaqueDSID;
-(void)setAccountOpaqueDSID:(NSString *)arg1 ;
-(void)setReceiptType:(NSString *)arg1 ;
-(void)setStoreFrontIdentifier:(NSNumber *)arg1 ;
-(void)setMdItemRef:(NSValue *)arg1 ;
-(void)setIsVPPLicensed:(char)arg1 ;
-(char)vppLicenseRevoked;
-(void)setVppLicenseRevoked:(char)arg1 ;
-(NSString *)vppLicenseOrganizationName;
-(void)setVppLicenseOrganizationName:(NSString *)arg1 ;
-(NSDate *)vppLicenseExpirationDate;
-(void)setVppLicenseExpirationDate:(NSDate *)arg1 ;
-(NSDate *)vppLicenseRenewalDate;
-(void)setVppLicenseRenewalDate:(NSDate *)arg1 ;
-(NSString *)vppLicenseCancellationReason;
-(void)setVppLicenseCancellationReason:(NSString *)arg1 ;
-(char)isMachineLicensed;
-(void)setIsMachineLicensed:(char)arg1 ;
-(char)isLegacyApp;
-(void)setIsLegacyApp:(char)arg1 ;
-(char)metadataChangeIsExpected;
-(void)setMetadataChangeIsExpected:(char)arg1 ;
-(char)metadataChangeHasAlreadyOccurred;
-(void)setMetadataChangeHasAlreadyOccurred:(char)arg1 ;
-(NSString *)expectedBundleVersion;
-(void)setExpectedBundleVersion:(NSString *)arg1 ;
-(NSNumber *)expectedStoreVersion;
-(void)setExpectedStoreVersion:(NSNumber *)arg1 ;
@end

