/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalServerToLocalMigration : NSObject
+(id)toServerMigrationLogHandle;
+(id)_limitingQueue;
+(id)_asyncWorkQueue;
+(void)_processMigrationGroups;
+(id)_serverToLocalMigrationGroupsInContext:(id)arg1 ;
+(id)_existingMatchUIDsInLocalCalendarsForItems:(id)arg1 inContext:(id)arg2 ;
+(id)toLocalMigrationLogHandle;
+(void)_removeAttendeesFromEvent:(id)arg1 ;
+(void)_processMigrationGroupsInContext:(id)arg1 ;
+(void)_haltNetworkingForPrincipal:(id)arg1 ;
+(id)_eventsWithAttachmentsInPrincipal:(id)arg1 ;
+(id)_mastersOrPhantomEventsFromEvents:(id)arg1 ;
+(void)_moveAttachmentsForEvent:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3 ;
+(void)_removeAttendeesFromMaster:(id)arg1 ;
+(void)_moveEventSeriesFromMaster:(id)arg1 toCalendar:(id)arg2 ;
+(id)migrationLogHandle;
+(void)processMigrationGroups;
+(id)_localCalendarCreationQueue;
+(void)moveCalendarsIntoMigrationGroup:(id)arg1 fromPrincipal:(id)arg2 includeEvents:(char)arg3 includeReminders:(char)arg4 ;
+(void)migrateToLocalPreAccountDeletionForPrincipal:(id)arg1 includeEvents:(char)arg2 includeReminders:(char)arg3 inContext:(id)arg4 ;
@end

