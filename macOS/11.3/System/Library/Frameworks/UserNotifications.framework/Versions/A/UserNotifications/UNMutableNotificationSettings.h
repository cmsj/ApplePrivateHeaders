/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/Versions/A/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationSettings.h>

@interface UNMutableNotificationSettings : UNNotificationSettings

@property (assign) long long authorizationStatus; 
@property (assign) long long soundSetting; 
@property (assign) long long badgeSetting; 
@property (assign) long long alertSetting; 
@property (assign) long long notificationCenterSetting; 
@property (assign) long long lockScreenSetting; 
@property (assign) long long carPlaySetting; 
@property (assign) long long alertStyle; 
@property (assign) long long showPreviewsSetting; 
@property (assign) long long criticalAlertSetting; 
@property (assign) char providesAppNotificationSettings; 
@property (assign) long long announcementSetting; 
@property (assign) long long groupingSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAlertStyle:(long long)arg1 ;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setSoundSetting:(long long)arg1 ;
-(void)setBadgeSetting:(long long)arg1 ;
-(void)setAlertSetting:(long long)arg1 ;
-(void)setNotificationCenterSetting:(long long)arg1 ;
-(void)setLockScreenSetting:(long long)arg1 ;
-(void)setCarPlaySetting:(long long)arg1 ;
-(void)setShowPreviewsSetting:(long long)arg1 ;
-(void)setCriticalAlertSetting:(long long)arg1 ;
-(void)setProvidesAppNotificationSettings:(char)arg1 ;
-(void)setAnnouncementSetting:(long long)arg1 ;
-(void)setGroupingSetting:(long long)arg1 ;
@end

