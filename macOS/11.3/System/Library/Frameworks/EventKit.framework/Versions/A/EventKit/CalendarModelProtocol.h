/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet, NSURL;


@protocol CalendarModelProtocol <EKProtocolObject>
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
@property (nonatomic,readonly) char isAffectingAvailability; 
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
@required
-(NSString *)calendarIdentifier;
-(NSString *)path;
-(char)isShareable;
-(id)title;
-(id)color;
-(NSString *)notes;
-(char)isSuggestedEventCalendar;
-(id)alarms;
-(char)isSubscribed;
-(int)displayOrder;
-(char)isFamilyCalendar;
-(char)isMarkedUndeletable;
-(char)isMarkedImmutableSharees;
-(NSURL *)publishURL;
-(NSURL *)prePublishURL;
-(id)sharees;
-(long long)maxAttendees;
-(NSString *)symbolicColorName;
-(NSString *)colorString;
-(char)isAffectingAvailability;
-(char)isRenameable;
-(NSURL *)subscriptionURL;
-(char)allowsContentModifications;
-(char)isBirthday;
-(NSURL *)defaultOrganizerAddressForNewItems;
-(NSString *)defaultOrganizerEmailForNewItems;
-(NSString *)defaultOrganizerPhoneNumberForNewItems;
-(id<CalendarSourceModelProtocol>)containerSource;
-(char)isNaturalLanguageSuggestedEventCalendar;
-(char)allowReminders;
-(char)allowEvents;
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

@end

