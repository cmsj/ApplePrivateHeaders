/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences, NSArray;

@interface EKPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double travelEngineThrottlePeriod; 
@property (assign,nonatomic) char refiringReminderAlarmsEnabled; 
@property (assign,nonatomic) char useShortReminderSnoozeInterval; 
@property (assign,nonatomic) char useShortReminderRefireInterval; 
@property (assign,nonatomic) char alwaysSetArrivedAndSettledForReminders; 
@property (assign,nonatomic) unsigned long long lastConfirmedSplashScreenVersion; 
@property (readonly) char bypassSplashScreen; 
@property (assign,nonatomic) char showDeclinedEvents; 
@property (assign,nonatomic) char alertInviteeDeclines; 
@property (nonatomic,readonly) NSArray * deselectedCalendarIdentifiers; 
@property (nonatomic,readonly) NSArray * deselectedCalendarSyncHashes; 
@property (nonatomic,readonly) NSArray * deselectedCalendarSyncIdentifiers; 
@property (nonatomic,retain) NSArray * selectedCalendarIdentifiers; 
+(id)shared;
-(id)init;
-(char)showDeclinedEvents;
-(void)setShowDeclinedEvents:(char)arg1 ;
-(unsigned long long)lastConfirmedSplashScreenVersion;
-(char)bypassSplashScreen;
-(void)setLastConfirmedSplashScreenVersion:(unsigned long long)arg1 ;
-(void)_setDeselectedCalendarIdentifiers:(id)arg1 ;
-(double)travelEngineThrottlePeriod;
-(void)setTravelEngineThrottlePeriod:(double)arg1 ;
-(char)refiringReminderAlarmsEnabled;
-(void)setRefiringReminderAlarmsEnabled:(char)arg1 ;
-(char)useShortReminderSnoozeInterval;
-(void)setUseShortReminderSnoozeInterval:(char)arg1 ;
-(char)useShortReminderRefireInterval;
-(void)setUseShortReminderRefireInterval:(char)arg1 ;
-(char)alwaysSetArrivedAndSettledForReminders;
-(void)setAlwaysSetArrivedAndSettledForReminders:(char)arg1 ;
-(void)setDeselectedCalendars:(id)arg1 ;
-(NSArray *)deselectedCalendarIdentifiers;
-(NSArray *)deselectedCalendarSyncHashes;
-(void)_setDeselectedCalendarSyncHashes:(id)arg1 ;
-(NSArray *)deselectedCalendarSyncIdentifiers;
-(void)_setDeselectedCalendarSyncIdentifiers:(id)arg1 ;
-(NSArray *)selectedCalendarIdentifiers;
-(void)setSelectedCalendarIdentifiers:(NSArray *)arg1 ;
-(char)alertInviteeDeclines;
-(void)setAlertInviteeDeclines:(char)arg1 ;
@end
