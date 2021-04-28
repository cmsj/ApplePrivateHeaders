/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/Versions/A/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CalReminderMigrationDefaultsProvider <NSObject>
@property (nonatomic,readonly) NSString * defaultReminderListIdentifier; 
@property (nonatomic,readonly) char shouldBackupBeforeMigration; 
@property (assign,nonatomic) char havePerformedReminderMigrationCleanup; 
@required
-(void)setRemindersHaveBeenMigratedAndDeleteCalendarCache:(char)arg1;
-(NSString *)defaultReminderListIdentifier;
-(char)shouldBackupBeforeMigration;
-(char)havePerformedReminderMigrationCleanup;
-(void)setHavePerformedReminderMigrationCleanup:(char)arg1;

@end
