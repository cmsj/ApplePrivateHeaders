/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LSApplicationWorkspaceObserverProtocol <NSObject>
@optional
-(void)applicationInstallsDidStart:(id)arg1;
-(void)applicationInstallsDidChange:(id)arg1;
-(void)applicationInstallsDidUpdateIcon:(id)arg1;
-(void)applicationsWillInstall:(id)arg1;
-(void)applicationsDidInstall:(id)arg1;
-(void)pluginsDidInstall:(id)arg1;
-(void)applicationsDidFailToInstall:(id)arg1;
-(void)applicationsWillUninstall:(id)arg1;
-(void)pluginsWillUninstall:(id)arg1;
-(void)applicationsDidUninstall:(id)arg1;
-(void)pluginsDidUninstall:(id)arg1;
-(void)applicationsDidFailToUninstall:(id)arg1;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
-(void)applicationInstallsDidPause:(id)arg1;
-(void)applicationInstallsDidResume:(id)arg1;
-(void)applicationInstallsDidCancel:(id)arg1;
-(void)applicationInstallsDidPrioritize:(id)arg1;
-(void)applicationStateDidChange:(id)arg1;
-(void)applicationIconDidChange:(id)arg1;
-(void)networkUsageChanged:(char)arg1;
-(void)deviceManagementPolicyDidChange:(id)arg1;
-(char)observeLaunchProhibitedApps;
-(void)applicationsDidChangePersonas:(id)arg1;

@end

