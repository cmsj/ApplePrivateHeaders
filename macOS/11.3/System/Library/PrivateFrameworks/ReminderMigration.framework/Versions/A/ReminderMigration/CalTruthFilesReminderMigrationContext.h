/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/Versions/A/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderMigration/CalReminderMigrationContext.h>
#import <libobjc.A.dylib/CalPrivacySafePathProvider.h>

@class NSMutableSet, NSURL, NSArray, NSString;

@interface CalTruthFilesReminderMigrationContext : CalReminderMigrationContext <CalPrivacySafePathProvider> {

	NSMutableSet* _directoriesToDelete;
	NSMutableSet* _filesToDelete;
	NSMutableSet* _accountPlistsToDisableReminders;
	NSMutableSet* _calendarPlistsToDisableReminders;
	NSURL* _calendarDirectory;

}

@property (nonatomic,readonly) NSURL * calendarDirectory;                               //@synthesize calendarDirectory=_calendarDirectory - In the implementation block
@property (nonatomic,readonly) NSArray * itemsToDelete; 
@property (nonatomic,readonly) NSArray * accountPlistsToDisableReminders; 
@property (nonatomic,readonly) NSArray * calendarPlistsToDisableReminders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_removeItemsToDeleteContainedByDirectory:(id)arg1 fromSet:(id)arg2 ;
+(id)_homeRelativePathForURL:(id)arg1 inCalendarDirectory:(id)arg2 ;
+(id)reminderMigrationContextWithReminderKitProvider:(id)arg1 calendarDirectory:(id)arg2 ;
-(NSArray *)itemsToDelete;
-(id)_homeRelativePathForURL:(id)arg1 ;
-(void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedToURL:(id)arg4 isFatal:(char)arg5 ;
-(char)_isURLSubpathOfExistingDirectoryToDelete:(id)arg1 ;
-(void)_removeItemsToDeleteContainedByDirectory:(id)arg1 ;
-(NSURL *)calendarDirectory;
-(id)privacySafePathForURLInCalendarDirectory:(id)arg1 ;
-(void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedToURL:(id)arg4 ;
-(void)addDirectoryToDelete:(id)arg1 ;
-(void)addFileToDelete:(id)arg1 ;
-(char)willFileBeDeleted:(id)arg1 ;
-(NSArray *)accountPlistsToDisableReminders;
-(void)addAccountPlistToDisableReminders:(id)arg1 ;
-(NSArray *)calendarPlistsToDisableReminders;
-(void)addCalendarPlistToDisableReminders:(id)arg1 ;
@end

