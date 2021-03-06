/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKFrozenObject.h>
#import <libobjc.A.dylib/EKCalendarProtocol.h>

@protocol CalendarSourceModelProtocol;
@class NSString, NSSet, NSURL, NSDictionary, NSManagedObjectID;

@interface EKFrozenCalendar : EKFrozenObject <EKCalendarProtocol> {

	char allowsContentModifications;
	char allowEvents;
	char allowReminders;
	char allowsScheduling;
	char cachedHasSharees;
	char defaultOrganizerIsMeForNewItems;
	char ignoreAlarms;
	char isDefaultSchedulingCalendar;
	char isDistinguishedExchangeCalendar;
	char isFamilyCalendar;
	char isMarkedUndeletable;
	char isMarkedImmutableSharees;
	char isFacebookBirthdayCalendar;
	char isRenameable;
	char isColorEditable;
	char isShareable;
	char isSubscribed;
	char isSubscribedHolidayCalendar;
	char isSuggestedEventCalendar;
	char isNaturalLanguageSuggestedEventCalendar;
	char isAffectingAvailability;
	char _suppressEventSchedulingNotifications;
	int displayOrder;
	NSString* calendarIdentifier;
	NSString* colorString;
	id<CalendarSourceModelProtocol> containerSource;
	NSSet* defaultAlarmsForAllDayEvents;
	NSSet* defaultAlarmsForTimedEvents;
	NSURL* defaultOrganizerAddressForNewItems;
	NSString* defaultOrganizerEmailForNewItems;
	NSString* defaultOrganizerEncodedLikenessDataForNewItems;
	NSString* defaultOrganizerNameForNewItems;
	NSString* defaultOrganizerPhoneNumberForNewItems;
	long long maxAttendees;
	NSString* notes;
	NSString* path;
	NSURL* prePublishURL;
	NSURL* publishURL;
	NSURL* subscriptionURL;
	NSString* serverPath;
	NSString* sharedOwnerAddress;
	NSSet* sharedOwnerAddresses;
	NSString* sharedOwnerName;
	NSSet* sharees;
	NSString* sharingStatusString;
	NSString* symbolicColorName;
	NSString* title;
	NSSet* alarms;
	NSDictionary* _cachedPreFrozenRelationshipObjects;

}

@property (readonly) NSDictionary * cachedPreFrozenRelationshipObjects;                                //@synthesize cachedPreFrozenRelationshipObjects=_cachedPreFrozenRelationshipObjects - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSSet * sharees; 
@property (nonatomic,readonly) NSSet * alarms; 
@property (nonatomic,readonly) int displayOrder; 
@property (nonatomic,readonly) char suppressEventSchedulingNotifications;                              //@synthesize suppressEventSchedulingNotifications=_suppressEventSchedulingNotifications - In the implementation block
@property (nonatomic,readonly) char isRenameable; 
@property (nonatomic,readonly) char isColorEditable; 
@property (nonatomic,readonly) char isAffectingAvailability; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
@property (nonatomic,readonly) char eligibleForDefaultSchedulingCalendar; 
@property (nonatomic,readonly) unsigned long long sharingStatus; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy,readonly) NSString * colorString; 
@property (nonatomic,copy,readonly) NSString * symbolicColorName; 
@property (nonatomic,readonly) char allowsContentModifications; 
@property (nonatomic,readonly) char allowReminders; 
@property (nonatomic,readonly) char allowEvents; 
@property (nonatomic,copy,readonly) id<CalendarSourceModelProtocol> containerSource; 
@property (nonatomic,readonly) char ignoreAlarms; 
@property (nonatomic,readonly) char isFamilyCalendar; 
@property (readonly) char isMarkedUndeletable; 
@property (readonly) char isMarkedImmutableSharees; 
@property (readonly) long long maxAttendees; 
@property (nonatomic,readonly) char cachedHasSharees; 
@property (nonatomic,readonly) char isBirthday; 
@property (nonatomic,readonly) char isFacebookBirthdayCalendar; 
@property (nonatomic,readonly) char isSubscribed; 
@property (nonatomic,readonly) char isShareable; 
@property (nonatomic,readonly) char allowsScheduling; 
@property (nonatomic,readonly) char isSubscribedHolidayCalendar; 
@property (nonatomic,readonly) char isSuggestedEventCalendar; 
@property (nonatomic,readonly) char isNaturalLanguageSuggestedEventCalendar; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * serverPath; 
@property (nonatomic,copy,readonly) NSString * notes; 
@property (nonatomic,readonly) NSString * sharingStatusString; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) char isDefaultSchedulingCalendar; 
@property (nonatomic,readonly) char isDistinguishedExchangeCalendar; 
@property (nonatomic,readonly) NSString * sharedOwnerAddress; 
@property (nonatomic,readonly) NSSet * sharedOwnerAddresses; 
@property (nonatomic,readonly) NSString * defaultOrganizerNameForNewItems; 
@property (nonatomic,readonly) NSURL * defaultOrganizerAddressForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerEmailForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerEncodedLikenessDataForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerPhoneNumberForNewItems; 
@property (nonatomic,readonly) char defaultOrganizerIsMeForNewItems; 
@property (nonatomic,readonly) NSURL * prePublishURL; 
@property (nonatomic,readonly) NSURL * subscriptionURL; 
@property (nonatomic,copy,readonly) NSURL * publishURL; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForTimedEvents; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForAllDayEvents; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)meltedClass;
+(id)propertiesUnavailableForPartialObjects;
+(id)frozenObjectForObject:(id)arg1 createPartialObject:(char)arg2 preFrozenRelationshipObjects:(id)arg3 forceUpdate:(char)arg4 ;
-(long long)type;
-(NSString *)calendarIdentifier;
-(NSString *)path;
-(char)isShareable;
-(NSString *)title;
-(id)color;
-(NSString *)notes;
-(unsigned long long)sharingStatus;
-(char)isSuggestedEventCalendar;
-(NSSet *)alarms;
-(char)isSubscribed;
-(int)displayOrder;
-(char)isFamilyCalendar;
-(char)isMarkedUndeletable;
-(char)isMarkedImmutableSharees;
-(NSURL *)publishURL;
-(NSURL *)prePublishURL;
-(NSSet *)sharees;
-(long long)maxAttendees;
-(NSString *)symbolicColorName;
-(NSString *)colorString;
-(char)isAffectingAvailability;
-(char)isRenameable;
-(NSURL *)subscriptionURL;
-(unsigned long long)supportedEventAvailabilities;
-(char)allowsContentModifications;
-(char)isBirthday;
-(NSDictionary *)preFrozenRelationshipObjects;
-(NSURL *)defaultOrganizerAddressForNewItems;
-(NSString *)defaultOrganizerEmailForNewItems;
-(NSString *)defaultOrganizerPhoneNumberForNewItems;
-(id<CalendarSourceModelProtocol>)containerSource;
-(char)isNaturalLanguageSuggestedEventCalendar;
-(id)initWithObject:(id)arg1 createPartialObject:(char)arg2 preFrozenRelationshipObjects:(id)arg3 ;
-(char)allowReminders;
-(char)allowEvents;
-(unsigned long long)allowedEntityTypes;
-(char)isDefaultSchedulingCalendar;
-(NSString *)sharingStatusString;
-(char)isColorEditable;
-(char)suppressEventSchedulingNotifications;
-(char)ignoreAlarms;
-(char)cachedHasSharees;
-(char)isFacebookBirthdayCalendar;
-(char)allowsScheduling;
-(char)isSubscribedHolidayCalendar;
-(NSString *)serverPath;
-(NSString *)sharedOwnerName;
-(char)isDistinguishedExchangeCalendar;
-(NSString *)sharedOwnerAddress;
-(NSSet *)sharedOwnerAddresses;
-(NSString *)defaultOrganizerNameForNewItems;
-(NSString *)defaultOrganizerEncodedLikenessDataForNewItems;
-(char)defaultOrganizerIsMeForNewItems;
-(NSSet *)defaultAlarmsForTimedEvents;
-(NSSet *)defaultAlarmsForAllDayEvents;
-(char)eligibleForDefaultSchedulingCalendar;
-(void)_handlePreFrozenRelationshipObjects:(id)arg1 forCalendar:(id)arg2 ;
-(NSDictionary *)cachedPreFrozenRelationshipObjects;
@end

