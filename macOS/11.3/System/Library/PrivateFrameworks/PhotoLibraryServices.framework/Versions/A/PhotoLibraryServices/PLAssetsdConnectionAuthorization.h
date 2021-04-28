/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLClientAuthorization.h>

@class NSString, NSSet, NSNumber, PLSandboxedURL;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {

	SCD_Struct_PL33 _auditToken;
	NSSet* _photoKitEntitlements;
	NSNumber* _photosAccessAllowed;
	NSNumber* _photosAddAccessAllowed;
	char _libraryUpgradeAuthorized;
	char _directDatabaseAccessAuthorized;
	char _directDatabaseWriteAuthorized;
	NSString* _fetchFilterIdentifier;
	PLSandboxedURL* _clientMainBundleSandboxedURL;
	char _photoKitEntitled;
	char _cloudInternalEntitled;
	char _analyticsCacheReadEntitled;
	char _analyticsCacheWriteEntitled;
	char _clientLimitedLibraryCapable;
	int _clientProcessIdentifier;
	NSString* _trustedCallerBundleID;
	NSString* _trustedCallerDisplayName;
	NSString* _trustedCallerPhotoLibraryUsageDescription;

}

@property (nonatomic,readonly) NSString * trustedCallerBundleID;                                                   //@synthesize trustedCallerBundleID=_trustedCallerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * fetchFilterIdentifier;                                                   //@synthesize fetchFilterIdentifier=_fetchFilterIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * trustedCallerDisplayName;                                                //@synthesize trustedCallerDisplayName=_trustedCallerDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * trustedCallerPhotoLibraryUsageDescription;                               //@synthesize trustedCallerPhotoLibraryUsageDescription=_trustedCallerPhotoLibraryUsageDescription - In the implementation block
@property (nonatomic,readonly) int clientProcessIdentifier;                                                        //@synthesize clientProcessIdentifier=_clientProcessIdentifier - In the implementation block
@property (nonatomic,readonly) char photoKitEntitled;                                                              //@synthesize photoKitEntitled=_photoKitEntitled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PL33 clientAuditToken; 
@property (nonatomic,readonly) char directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) char directDatabaseWriteAuthorized; 
@property (nonatomic,readonly) char cloudInternalEntitled;                                                         //@synthesize cloudInternalEntitled=_cloudInternalEntitled - In the implementation block
@property (nonatomic,readonly) char analyticsCacheReadEntitled;                                                    //@synthesize analyticsCacheReadEntitled=_analyticsCacheReadEntitled - In the implementation block
@property (nonatomic,readonly) char analyticsCacheWriteEntitled;                                                   //@synthesize analyticsCacheWriteEntitled=_analyticsCacheWriteEntitled - In the implementation block
@property (nonatomic,readonly) char limitedLibraryMode; 
@property (getter=isClientLimitedLibraryCapable,nonatomic,readonly) char clientLimitedLibraryCapable;              //@synthesize clientLimitedLibraryCapable=_clientLimitedLibraryCapable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithConnection:(id)arg1 ;
-(int)clientProcessIdentifier;
-(SCD_Struct_PL33)clientAuditToken;
-(NSString *)trustedCallerBundleID;
-(NSString *)trustedCallerDisplayName;
-(char)photoKitEntitled;
-(char)isClientInLimitedLibraryMode;
-(NSString *)fetchFilterIdentifier;
-(char)limitedLibraryMode;
-(char)photoKitEntitledFor:(id)arg1 ;
-(char)analyticsCacheReadEntitled;
-(char)analyticsCacheWriteEntitled;
-(char)directDatabaseWriteAuthorized;
-(char)cloudInternalEntitled;
-(char)directDatabaseAccessAuthorized;
-(char)isClientLimitedLibraryCapable;
-(void)handleInvalidation;
-(char)isClientAuthorizedForTCCServicePhotos;
-(char)isClientAuthorizedForTCCServicePhotosAdd;
-(char)isClientInFullLibraryMode;
-(char)isPhotosClient;
-(void)setClientMainBundleSandboxedURL:(id)arg1 ;
-(void)setClientLimitedLibraryCapable:(char)arg1 ;
-(NSString *)trustedCallerPhotoLibraryUsageDescription;
-(char)isClientInRestrictedMode;
-(char)isClientAuthorizedForLibraryUpgrade;
-(char)isClientAuthorizedForSandboxExtensions;
-(void)setupFromConnection:(id)arg1 ;
-(void)_trackCAConnectionEvent;
-(char)_shouldTrackEventForBundle:(id)arg1 ;
@end
