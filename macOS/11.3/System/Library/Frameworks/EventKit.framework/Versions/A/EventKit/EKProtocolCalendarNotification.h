/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber, NSDate;


@protocol EKProtocolCalendarNotification <EKProtocolObject>
@property (readonly) NSString * uuid; 
@property (nonatomic,readonly) NSNumber * notificationType; 
@property (nonatomic,readonly) NSString * componentType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSNumber * senders; 
@property (readonly) NSString * attendeeComment; 
@property (readonly) NSString * filename; 
@property (readonly) NSNumber * createdCount; 
@property (readonly) NSNumber * updatedCount; 
@property (readonly) NSNumber * deletedCount; 
@property (nonatomic,readonly) NSDate * proposedStartDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSDate * proposedEndDateUnadjustedFromUTC; 
@property (nonatomic,readonly) char dateChanged; 
@property (nonatomic,readonly) char timeChanged; 
@property (nonatomic,readonly) char locationChanged; 
@property (nonatomic,readonly) char titleChanged; 
@property (nonatomic,readonly) char attachmentsChanged; 
@property (readonly) NSString * calendarName; 
@property (nonatomic,readonly) NSString * principalName; 
@property (nonatomic,readonly) id<EventOccurrenceModelProtocol> occurrence; 
@property (nonatomic,readonly) id<CalendarSourceModelProtocol> containerSource; 
@property (readonly) char dismissed; 
@property (nonatomic,readonly) unsigned long long junkStatus; 
@required
-(NSString *)name;
-(NSString *)uuid;
-(id<EventOccurrenceModelProtocol>)occurrence;
-(NSString *)phoneNumber;
-(NSString *)title;
-(NSString *)filename;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)emailAddress;
-(NSNumber *)notificationType;
-(NSString *)componentType;
-(char)isInvitation;
-(NSNumber *)senders;
-(NSString *)calendarName;
-(unsigned long long)junkStatus;
-(char)isResourceChange;
-(id<CalendarSourceModelProtocol>)containerSource;
-(char)isSharedCalendarInvitation;
-(NSDate *)proposedStartDateUnadjustedFromUTC;
-(NSDate *)proposedEndDateUnadjustedFromUTC;
-(NSString *)attendeeComment;
-(char)isSuggestion;
-(char)isProposedNewTime;
-(char)dismissed;
-(NSNumber *)createdCount;
-(NSNumber *)updatedCount;
-(NSNumber *)deletedCount;
-(char)dateChanged;
-(char)titleChanged;
-(char)timeChanged;
-(char)locationChanged;
-(char)attachmentsChanged;
-(NSString *)principalName;
-(char)isSharedCalendarReply;

@end

