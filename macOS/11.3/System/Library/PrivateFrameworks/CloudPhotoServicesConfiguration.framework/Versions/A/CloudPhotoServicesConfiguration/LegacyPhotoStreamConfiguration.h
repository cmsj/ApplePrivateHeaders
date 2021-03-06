/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServicesConfiguration.framework/Versions/A/CloudPhotoServicesConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudPhotoServicesConfiguration/CloudPhotoServicesConfiguration-Structs.h>
@interface LegacyPhotoStreamConfiguration : NSObject
+(id)configuration;
+(void)setConfiguration:(id)arg1 ;
+(char)hasUnimportedAssets;
+(char)isSharedPhotoStreamEnabledInSettings:(id)arg1 ;
+(char)isMyPhotoStreamEnabledInSettings:(id)arg1 ;
+(char)currentProcessIsLegacyPhotoApplication;
+(char)applyStateChangeRequest:(id)arg1 forAppleID:(id)arg2 ;
+(id)legacyStatusInformationWithStatusInformation:(id)arg1 ;
+(void)disableLegacyPhotoApplicationCloudPhotoServices;
+(id)installedCompatibleLegacyPhotoApplicationBundleIdentifiers;
+(id)installedIncompatibleLegacyPhotoApplicationBundleIdentifiers;
+(id)streamLibraryIdentifier;
+(char)isMyPhotoStreamEnabled;
+(char)isSharedPhotoStreamEnabled;
+(char)applyStateChangeMap:(id)arg1 forAppleID:(id)arg2 ;
+(char)setLegacyPhotoStreamStateForAppleID:(id)arg1 options:(id)arg2 ;
+(void)enablePhotostreamAgentLoginItem;
+(id)photoStreamAgentURL;
+(id)photoStreamAgentLoginItemURLForHostApplicationURL:(id)arg1 ;
+(void)disablePhotostreamAgentLoginItem;
+(void)disablePhotostreamAgentLoginItemAtURL:(id)arg1 ;
+(char)hasApplicationWithBundleIdentifier:(id)arg1 minimumVersion:(id)arg2 ;
+(char)hasApplicationWithBundleIdentifier:(id)arg1 versionLowerThanVersion:(id)arg2 ;
+(id)applicationBundleVersionForIdentifier:(id)arg1 ;
+(id)versionStringForBundleAtURL:(id)arg1 ;
+(id)rawLegacyServiceConfiguration;
+(CFStringRef)configurationAppId;
+(id)importStatusInformation;
@end

