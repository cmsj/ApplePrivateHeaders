/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKFrozenReminderObject.h>
#import <libobjc.A.dylib/OccurrenceModelProtocol.h>

@class NSDate, NSNumber, NSString, NSURL, NSTimeZone, NSData, NSDictionary, NSManagedObjectID;

@interface EKFrozenReminderReminder : EKFrozenReminderObject <OccurrenceModelProtocol>

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
+(Class)meltedClass;
-(id<CalendarModelProtocol>)container;
-(id)calendar;
-(id)timeZone;
-(id)URL;
-(id)uniqueIdentifier;
-(id)action;
-(id)itemID;
-(id)sequence;
-(id)title;
-(id)creationDate;
-(unsigned long long)priority;
-(id)completionDate;
-(char)allDay;
-(id)notes;
-(id)structuredLocation;
-(id)lastModifiedDate;
-(id)alarms;
-(id)sharedUID;
-(id)startDateComponents;
-(NSString *)organizerEmail;
-(id)dueDateComponents;
-(id)_reminder;
-(id<EKProtocolParticipant>)participantForMe;
-(id)localUID;
-(id)rawTitle;
-(id)priorityNumber;
-(id)alarmSet;
-(id)attendeeSet;
-(id)attachmentSet;
-(char)isReminder;
-(char)isEvent;
-(id)_nsCalendar;
-(NSDate *)recurrenceDateUnadjustedFromUTC;
-(NSNumber *)calendarItemPermissionNumber;
-(id<EKProtocolStructuredLocation>)ekStructuredLocation;
-(NSString *)recurrenceRuleString;
-(char)cachedHasAttendee;
-(char)cachedHasAttachment;
-(char)cachedHasAlarm;
-(char)cachedIsCalendarOwnerInvitedAttendee;
-(char)cachedIsCurrentUserInvitedAttendee;
-(NSString *)organizerName;
-(NSURL *)organizerURL;
-(NSString *)organizerPhoneNumber;
-(NSString *)organizerEncodedLikenessData;
-(char)organizedByMe;
-(NSString *)scheduleAgentString;
-(NSTimeZone *)timeZoneObject;
-(NSDate *)startDateUnadjustedFromUTC;
-(char)defaultAlarmWasDeleted;
-(NSString *)recurrenceSetID;
-(NSString *)contactIdentifiersString;
-(NSString *)relatedExternalID;
-(NSData *)structuredData;
-(NSData *)localStructuredData;
-(id)calendarItemIdentifier;
-(id)recurrenceRules;
-(id)calendarItemExternalIdentifier;
-(id)remObjectID;
-(char)cachedHasLocationAlarm;
-(char)statusCompleteNotByDate;
-(id)dueDateUnadjustedFromUTC;
-(id)orderNumber;
-(char)canEditRecurrence;
-(id)appLink;
-(char)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(char)_applyChanges:(id)arg1 error:(id*)arg2 ;
-(id)initNewReminderInStore:(id)arg1 ;
-(id)_copyToNewList:(id)arg1 error:(id*)arg2 ;
-(void)_fixAlarmUUIDsForClone:(id)arg1 from:(id)arg2 ;
-(id)ekLocation;
@end

