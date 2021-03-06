/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RemoteNotificationPackageController : NSObject {

	NSMutableDictionary* _permissions;

}

@property (nonatomic,retain) NSMutableDictionary * permissions;              //@synthesize permissions=_permissions - In the implementation block
+(id)sharedController;
-(NSMutableDictionary *)permissions;
-(void)setPermissions:(NSMutableDictionary *)arg1 ;
-(void)generateNotificationBundlesIfNecessary;
-(id)deviceTokenForIdentifier:(id)arg1 ;
-(void)getRemoteNotificationInformationForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)denyPermissionForIdentifier:(id)arg1 ;
-(void)forgetPermissionForIdentifier:(id)arg1 ;
-(void)grantPermissionForIdentifier:(id)arg1 withDeviceToken:(id)arg2 ;
-(void)_loadPackageInformationIfNecessary;
-(id)_ensureMutableSettingsForIdentifier:(id)arg1 ;
-(void)_queueSavePackageInformation;
-(id)_packagePathForIdentifier:(id)arg1 ;
-(id)notificationCenterBundlePathForIdentifier:(id)arg1 ;
-(char)_notificationBundleExistsForIdentifier:(id)arg1 ;
-(void)setPackageLocation:(id)arg1 name:(id)arg2 allowedDomains:(id)arg3 forIdentifier:(id)arg4 ;
-(id)identifiersAddedBetweenDate:(id)arg1 andDate:(id)arg2 withAllowedPermissions:(char)arg3 withDeniedPermissions:(char)arg4 ;
@end

