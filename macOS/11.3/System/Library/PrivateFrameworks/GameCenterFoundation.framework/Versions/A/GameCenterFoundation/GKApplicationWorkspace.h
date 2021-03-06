/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKApplicationWorkspace : NSObject
+(id)defaultWorkspace;
-(char)applicationIsInstalled:(id)arg1 ;
-(void)openURL:(id)arg1 ;
-(void)openGameCenterSettings;
-(void)openSettings;
-(void)openICloudSettings;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1 ;
@end

