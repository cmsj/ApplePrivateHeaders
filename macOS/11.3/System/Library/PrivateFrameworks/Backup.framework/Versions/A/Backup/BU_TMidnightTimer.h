/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Backup/Backup-Structs.h>
@interface BU_TMidnightTimer : NSObject {

	TNSRef<NSTimer, void> _midnightTimer;
	TNSRef<NSDate, void> _midnightFireDate;
	TNSRef<NSDateComponents, void> _dateComponents;
	vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>>* _observers;
	TNSWeakPtr<BU_TRunAfterHelper, void> _checkTimerAndFireDateToken;

}
-(void)checkTimersAfterSleeping:(id)arg1 ;
-(void)_setUpMidnightTimer;
-(void)postNotificationIfDayChanged;
-(void)_systemTimeChanged;
-(void)_midnightPassed;
-(void)_checkTimerAndFireDate;
-(id)init;
-(void)aboutToTearDown;
@end

