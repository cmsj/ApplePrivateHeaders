/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CaliTIPHandler : NSObject
+(char)didDelayWhenProcessing:(id)arg1 principal:(id)arg2 preferCalendar:(id)arg3 withImportOptions:(unsigned long long)arg4 ;
+(void)process:(id)arg1 preferCalendar:(id)arg2 inManagedObjectContext:(id)arg3 withImportOptions:(unsigned long long)arg4 ;
+(id)bestCalendarForInviteInCalendars:(id)arg1 preferredCalendar:(id)arg2 principal:(id)arg3 ;
+(void)process:(id)arg1 principal:(id)arg2 preferCalendar:(id)arg3 delayFlag:(char*)arg4 inManagedObjectContext:(id)arg5 withImportOptions:(unsigned long long)arg6 ;
+(void)process:(id)arg1 principal:(id)arg2 preferCalendar:(id)arg3 delayFlag:(char*)arg4 inManagedObjectContext:(id)arg5 withPrefetchDictionary:(id)arg6 withImportOptions:(unsigned long long)arg7 ;
+(char)scheduleWithCalendarItem:(id)arg1 changeRequest:(id*)arg2 ;
+(char)markAsScheduleAgentClientForEvent:(id)arg1 ;
+(char)scheduleWithCalendarItem:(id)arg1 ;
+(char)diffsAreImportant:(id)arg1 ;
+(char)shouldMarkAsScheduleAgentClientForCalendar:(id)arg1 forMaster:(id)arg2 forMessage:(id)arg3 ;
+(void)markAsScheduleAgentClient:(id)arg1 ;
+(id)diffForAttendeeAddress:(id)arg1 ;
+(id)diffsFromCalDAVOccurrenceChange:(id)arg1 ;
+(id)resourceUpdatedDiffsFromCalDAVOccurrenceChange:(id)arg1 ;
+(void)deleteAndCreateChangeRequestForMessage:(id)arg1 principal:(id)arg2 context:(id)arg3 ;
+(id)debugStringForEvent:(id)arg1 ;
+(id)masterEventWithSharedUID:(id)arg1 principal:(id)arg2 inManagedObjectContext:(id)arg3 withPrefetchDictionary:(id)arg4 ;
+(id)preProcessRequestOccurrences:(id)arg1 forEvent:(id)arg2 principal:(id)arg3 ;
+(id)myAddressInPrincipal:(id)arg1 forEvent:(id)arg2 ;
+(char)requestForEvent:(id)arg1 withOccurrences:(id)arg2 inMessage:(id)arg3 masterEvent:(id)arg4 delayFlag:(char*)arg5 principal:(id)arg6 preferCalendar:(id)arg7 inManagedObjectContext:(id)arg8 withPrefetchDictionary:(id)arg9 withImportOptions:(unsigned long long)arg10 ;
+(char)replyForEvent:(id)arg1 inMessage:(id)arg2 masterEvent:(id)arg3 principal:(id)arg4 ;
+(char)validateOrganizerMatches:(id)arg1 managedEvent:(id)arg2 ;
+(char)cancelEvent:(id)arg1 inMessage:(id)arg2 masterEvent:(id)arg3 principal:(id)arg4 withPrefetchDictionary:(id)arg5 ;
+(id)managedEventForEvent:(id)arg1 inCalendar:(id)arg2 withMaster:(id)arg3 withPrefetchDictionary:(id)arg4 ;
+(char)isAddressMe:(id)arg1 forPrincipal:(id)arg2 ;
+(/*^block*/id)iTIPCompletionBlockForPrincipal:(id)arg1 context:(id)arg2 ;
+(void)insertChangeRequestForEvent:(id)arg1 type:(int)arg2 context:(id)arg3 ;
+(id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3 ;
+(void)setReply:(int)arg1 onEvent:(id)arg2 forAddress:(id)arg3 ;
+(int)getChangesFromScheduleChanges:(id)arg1 event:(id)arg2 calendar:(id)arg3 managedEvent:(id)arg4 ;
+(id)getChanges:(int*)arg1 forIncomingEvent:(id)arg2 withOccurrences:(id)arg3 onCalendar:(id)arg4 managedEvent:(id)arg5 masterEvent:(id)arg6 principal:(id)arg7 attendee:(id)arg8 inManagedObjectContext:(id)arg9 ;
+(char)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3 ;
+(id)calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2 managedEvent:(id)arg3 ;
+(id)calculateDiffsForEvent:(id)arg1 ;
+(id)calculateDiffsForEvent:(id)arg1 changedProperties:(id)arg2 ;
+(void)process:(id)arg1 principal:(id)arg2 inManagedObjectContext:(id)arg3 withImportOptions:(unsigned long long)arg4 ;
+(char)cancelEvent:(id)arg1 inMessage:(id)arg2 masterEvent:(id)arg3 principal:(id)arg4 ;
@end
