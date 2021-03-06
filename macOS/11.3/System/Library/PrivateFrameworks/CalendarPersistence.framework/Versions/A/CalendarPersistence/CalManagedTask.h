/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedCalendarItem.h>
#import <libobjc.A.dylib/EKProtocolReminderOccurrence.h>

@class NSDate, NSNumber, NSURL, NSData, NSString, NSTimeZone, NSDictionary, NSManagedObjectID;

@interface CalManagedTask : CalManagedCalendarItem <EKProtocolReminderOccurrence>

@property (assign) unsigned long long order; 
@property (retain) NSDate * completedDate; 
@property (retain) NSDate * dueDate; 
@property (retain) NSNumber * priority; 
@property (retain) NSNumber * percentComplete; 
@property (retain) NSURL * activity; 
@property (retain) NSData * appLinkData; 
@property (assign) char hasLocationAlarm; 
@property (nonatomic,copy,readonly) NSDate * dueDateUnadjustedFromUTC; 
@property (nonatomic,copy,readonly) NSDate * completionDate; 
@property (nonatomic,copy,readonly) NSNumber * orderNumber; 
@property (nonatomic,readonly) char statusCompleteNotByDate; 
@property (nonatomic,readonly) char canEditRecurrence; 
@property (nonatomic,copy,readonly) NSURL * action; 
@property (nonatomic,copy,readonly) NSData * appLink; 
@property (nonatomic,readonly) char cachedHasLocationAlarm; 
@property (nonatomic,retain,readonly) NSDate * recurrenceDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSNumber * calendarItemPermissionNumber; 
@property (nonatomic,retain,readonly) id<CalendarModelProtocol> container; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> ekStructuredLocation; 
@property (nonatomic,copy,readonly) NSString * recurrenceRuleString; 
@property (nonatomic,readonly) char cachedHasAttendee; 
@property (nonatomic,readonly) char cachedHasAttachment; 
@property (nonatomic,readonly) char cachedHasAlarm; 
@property (nonatomic,readonly) char cachedIsCalendarOwnerInvitedAttendee; 
@property (nonatomic,readonly) char cachedIsCurrentUserInvitedAttendee; 
@property (nonatomic,copy,readonly) id<EKProtocolParticipant> participantForMe; 
@property (nonatomic,copy,readonly) NSString * organizerName; 
@property (nonatomic,copy,readonly) NSURL * organizerURL; 
@property (nonatomic,copy,readonly) NSString * organizerEmail; 
@property (nonatomic,copy,readonly) NSString * organizerPhoneNumber; 
@property (nonatomic,copy,readonly) NSString * organizerEncodedLikenessData; 
@property (nonatomic,readonly) char organizedByMe; 
@property (nonatomic,copy,readonly) NSString * scheduleAgentString; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZoneObject; 
@property (nonatomic,copy,readonly) NSDate * startDateUnadjustedFromUTC; 
@property (nonatomic,readonly) char defaultAlarmWasDeleted; 
@property (nonatomic,copy,readonly) NSString * recurrenceSetID; 
@property (nonatomic,copy,readonly) NSString * contactIdentifiersString; 
@property (nonatomic,copy,readonly) NSString * relatedExternalID; 
@property (nonatomic,copy,readonly) NSData * structuredData; 
@property (nonatomic,copy,readonly) NSData * localStructuredData; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)recognizedICSProperties;
-(NSURL *)action;
-(void)setAction:(NSURL *)arg1 ;
-(unsigned long long)order;
-(NSURL *)activity;
-(void)setActivity:(NSURL *)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(void)setCompletedDate:(NSDate *)arg1 ;
-(id)priorityNumber;
-(char)isReminder;
-(void)setPriorityNumber:(id)arg1 ;
-(char)cachedHasLocationAlarm;
-(void)setAppLink:(NSData *)arg1 ;
-(char)statusCompleteNotByDate;
-(NSDate *)dueDateUnadjustedFromUTC;
-(NSNumber *)orderNumber;
-(void)setOrderNumber:(NSNumber *)arg1 ;
-(char)canEditRecurrence;
-(NSData *)appLink;
-(void)setDueDateUnadjustedFromUTC:(NSDate *)arg1 ;
-(void)updateAlarmDerivedProperties;
-(void)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 ;
-(void)updateWithEntity:(id)arg1 inCalendar:(id)arg2 ;
-(char)isExchangeCompatible;
-(id)_makeExchangeCompatible;
-(id)_iCalendarElementWithOptions:(unsigned long long)arg1 ;
-(id)attributesToCompareForMerge;
-(id)defaultAlarmsBasedOnItemAndPreferences;
-(id)defaultAlarmsBasedOnItemAndPreferencesFromServer:(char)arg1 ;
-(char)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)earliestOccurrenceDateBetweenStartDate:(id)arg1 endDate:(id)arg2 withOffSet:(long long)arg3 ;
-(Class)entityClass;
-(id)importantDate;
-(id)dueDateAdjustedFromUTC;
@end

