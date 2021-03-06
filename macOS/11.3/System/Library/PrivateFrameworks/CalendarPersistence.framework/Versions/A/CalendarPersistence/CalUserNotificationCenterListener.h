/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class NSString;

@interface CalUserNotificationCenterListener : NSObject <NSUserNotificationCenterDelegate, CLLocationManagerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultListener;
-(void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didRemoveDeliveredNotifications:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didExpireNotifications:(id)arg2 ;
-(char)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(char)_isRemindersNotification:(id)arg1 ;
-(id)_getIntervalForReminderSnoozeNotification:(id)arg1 ;
-(void)dismissNotificationHelper:(id)arg1 ;
-(void)_performAction:(id)arg1 forNotification:(id)arg2 ;
-(void)openURLForInfo:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didSnoozeAlert:(id)arg2 withSnoozeInterval:(id)arg3 ;
-(void)userNotificationCenter:(id)arg1 didSnoozeAlert:(id)arg2 withTriggerDate:(id)arg3 ;
-(void)_userNotificationCenter:(id)arg1 didSnoozeAlert:(id)arg2 withSnoozeInterval:(id)arg3 triggerDate:(id)arg4 ;
-(char)_isRedeliveredSnoozedNotification:(id)arg1 ;
@end

