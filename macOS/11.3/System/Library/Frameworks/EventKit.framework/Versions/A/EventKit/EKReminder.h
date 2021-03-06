/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarItem.h>
#import <libobjc.A.dylib/EKProtocolMutableReminderOccurrence.h>

@class NSDate, NSNumber, NSURL, NSData, NSDateComponents, NSTimeZone, NSString, NSDictionary, NSManagedObjectID;

@interface EKReminder : EKCalendarItem <EKProtocolMutableReminderOccurrence> {

	char cachedHasLocationAlarm;
	NSDateComponents* _startDateComponents;
	NSDateComponents* _dueDateComponents;

}

@property (nonatomic,readonly) NSTimeZone * dueDateTimeZone; 
@property (nonatomic,copy) NSDateComponents * startDateComponents;                             //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;                               //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (assign,getter=isCompleted,nonatomic) char completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned long long priority; 
@property (nonatomic,copy) NSDate * dueDateUnadjustedFromUTC; 
@property (nonatomic,copy) NSNumber * orderNumber; 
@property (nonatomic,copy) NSURL * action; 
@property (nonatomic,copy) NSData * appLink; 
@property (assign,nonatomic) char statusCompleteNotByDate; 
@property (nonatomic,retain) id<CalendarModelProtocol> container; 
@property (nonatomic,copy) id<EKProtocolStructuredLocation> ekStructuredLocation; 
@property (nonatomic,copy) NSString * recurrenceRuleString; 
@property (nonatomic,copy) NSString * scheduleAgentString; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSNumber * priorityNumber; 
@property (nonatomic,copy) NSTimeZone * timeZoneObject; 
@property (nonatomic,copy) NSDate * startDateUnadjustedFromUTC; 
@property (nonatomic,retain) NSDate * recurrenceDateUnadjustedFromUTC; 
@property (nonatomic,copy) NSString * recurrenceSetID; 
@property (nonatomic,copy) NSString * contactIdentifiersString; 
@property (nonatomic,copy) NSString * relatedExternalID; 
@property (nonatomic,copy) NSData * structuredData; 
@property (nonatomic,copy) NSData * localStructuredData; 
@property (nonatomic,readonly) NSNumber * calendarItemPermissionNumber; 
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
@property (nonatomic,readonly) char defaultAlarmWasDeleted; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canEditRecurrence; 
@property (nonatomic,readonly) char cachedHasLocationAlarm; 
+(Class)frozenClass;
+(id)knownImmutableKeys;
+(id)itemWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)singleValueDiffKeys;
+(id)knownSingleValueKeys;
+(id)keysToCheckForChangedKeysMethod;
+(id)dataFromUserActivity:(id)arg1 ;
+(id)orderSortDescriptors;
+(void)_adjustOrderOnReminders:(id)arg1 boundaryOrder:(unsigned long long)arg2 reverse:(char)arg3 eventStore:(id)arg4 saveBlock:(/*^block*/id)arg5 ;
+(id)reorderReminders:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3 shouldSave:(char)arg4 ;
+(void)reorderReminders:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3 ;
+(char)fixBrokenICalReminderOrdersWithReminders:(id)arg1 ;
+(id)reminderWithEventStore:(id)arg1 ;
+(id)batchChangeNotificationName;
+(void)fixBrokenICalReminderOrdersInReminderList:(id)arg1 ;
+(void)fixBrokenICalReminderOrdersWithEventStore:(id)arg1 ;
+(id)sortDescriptorsForSortOrder:(int)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)timeZone;
-(NSURL *)action;
-(void)setAction:(NSURL *)arg1 ;
-(void)reset;
-(unsigned long long)order;
-(void)rollback;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(char)validate:(id*)arg1 ;
-(void)setCompleted:(char)arg1 ;
-(void)setDueDate:(id)arg1 ;
-(id)dueDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(void)setAllDay:(char)arg1 ;
-(char)isAllDay;
-(char)refresh;
-(char)isCompleted;
-(id)externalURI;
-(unsigned long long)entityType;
-(NSDateComponents *)startDateComponents;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(unsigned long long)displayOrder;
-(NSDateComponents *)dueDateComponents;
-(NSDateComponents *)dueDateComponents;
-(id)startTimeZone;
-(char)isReminder;
-(char)currentUserMayActAsOrganizer;
-(char)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(char)_validateEntityTypeIsSupported:(id*)arg1 ;
-(void)_applyKnownImmutableValuesFrom:(id)arg1 ;
-(void)updateWithAppLink:(id)arg1 usedSelectedText:(char*)arg2 ;
-(char)canMoveOrCopyFromCalendar:(id)arg1 toCalendar:(id)arg2 error:(id*)arg3 ;
-(char)cachedHasLocationAlarm;
-(void)setAppLink:(NSData *)arg1 ;
-(void)setStatusCompleteNotByDate:(char)arg1 ;
-(char)statusCompleteNotByDate;
-(NSDate *)dueDateUnadjustedFromUTC;
-(NSNumber *)orderNumber;
-(void)setOrderNumber:(NSNumber *)arg1 ;
-(void)_adjustOrderOnReminders:(id)arg1 reverse:(char)arg2 saveBlock:(/*^block*/id)arg3 ;
-(id)prepareReminderKitObjectForSaveWithUpdatedBackingObjectProvider:(id)arg1 ;
-(char)canEditRecurrence;
-(NSData *)appLink;
-(void)setDueDateUnadjustedFromUTC:(NSDate *)arg1 ;
-(id)bestDisplayAlarm;
-(char)hasLocationAlarm;
-(long long)compareDueDateWithReminder:(id)arg1 ;
-(void)reorderBetweenEarlier:(id)arg1 later:(id)arg2 ;
-(id)humanReadableRecurrenceDescription;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(NSTimeZone *)dueDateTimeZone;
-(char)dueDateAllDay;
-(void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg1 ;
-(id)startDateComponentsRaw;
-(id)startDateTimeZone;
-(void)setStartDateTimeZone:(id)arg1 ;
-(char)startDateAllDay;
-(void)setStartDateAllDay:(char)arg1 ;
-(void)setStartTimeZone:(id)arg1 ;
-(void)forceUpdateFrozenCalendar:(id)arg1 ;
@end

