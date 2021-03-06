/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/Versions/A/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationSound.h>

@class NSString, NSNumber, NSURL;

@interface UNMutableNotificationSound : UNNotificationSound

@property (copy) NSString * alertTopic; 
@property (copy) NSString * audioCategory; 
@property (copy) NSNumber * audioVolume; 
@property (getter=isCritical) char critical; 
@property (assign) double maximumDuration; 
@property (assign) char shouldIgnoreAccessibilityDisabledVibrationSetting; 
@property (assign) char shouldIgnoreRingerSwitch; 
@property (assign) char shouldRepeat; 
@property (copy) NSString * toneFileName; 
@property (copy) NSURL * toneFileURL; 
@property (copy) NSString * toneIdentifier; 
@property (assign) unsigned long long toneMediaLibraryItemIdentifier; 
@property (copy) NSString * vibrationIdentifier; 
@property (copy) NSURL * vibrationPatternFileURL; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumDuration:(double)arg1 ;
-(void)setShouldRepeat:(char)arg1 ;
-(void)setAlertTopic:(NSString *)arg1 ;
-(void)setAudioCategory:(NSString *)arg1 ;
-(void)setAudioVolume:(NSNumber *)arg1 ;
-(void)setCritical:(char)arg1 ;
-(void)setShouldIgnoreAccessibilityDisabledVibrationSetting:(char)arg1 ;
-(void)setShouldIgnoreRingerSwitch:(char)arg1 ;
-(void)setToneFileName:(NSString *)arg1 ;
-(void)setToneFileURL:(NSURL *)arg1 ;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(void)setToneMediaLibraryItemIdentifier:(unsigned long long)arg1 ;
-(void)setVibrationIdentifier:(NSString *)arg1 ;
-(void)setVibrationPatternFileURL:(NSURL *)arg1 ;
@end

