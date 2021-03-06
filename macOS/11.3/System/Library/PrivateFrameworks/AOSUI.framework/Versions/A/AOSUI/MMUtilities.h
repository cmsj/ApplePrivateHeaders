/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AOSUI/AOSUI-Structs.h>
@interface MMUtilities : NSObject
+(id)bundleIdentifier;
+(id)bundleVersion;
+(void)openApplicationWithBundleID:(id)arg1 ;
+(char)isSetupServiceHost:(id)arg1 ;
+(id)currentApplicationIdentifier;
+(id)currentApplicationVersion;
+(id)deviceUDID;
+(char)isGuestUser;
+(void)selectFile:(id)arg1 inFolder:(id)arg2 ;
+(char)isAppleIDLoginEnabled:(id)arg1 ;
+(void)openParentalControlPref;
+(void)openiCloudPref;
+(void)postCDPRepairFollowUp;
+(void)openPrefPane:(id)arg1 userInfo:(id)arg2 ;
+(char)isIMEnabled;
+(char)isIMChangingEnabledState;
+(void)setIMEnabled:(char)arg1 ;
+(id)numberOfDaysSinceIMExit;
+(void)launchPhotosApplication;
+(char)isCertificateTrustValid:(SecTrustRef)arg1 ;
+(int)openItemWithURL:(id)arg1 ;
+(id)urlForBundleIdentifier:(id)arg1 ;
+(int)openApplicationWithURL:(CFURLRef)arg1 ;
+(void)launchSoftwareUpdate;
+(void)openPowerPref;
+(void)openSharingPref;
+(void)openSecurityPref;
+(void)openInternetAccountPref;
+(void)openUsersAndGroupsPref;
+(void)openNetworkPref;
+(void)openAppleIDPref;
+(char)screenLockIsEnabled;
@end

