/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol EKOccurrenceProtocol <OccurrenceModelProtocol>
@property (nonatomic,readonly) char allowsParticipantStatusModifications; 
@property (nonatomic,readonly) id<EKCalendarProtocol> container; 
@property (nonatomic,readonly) char hasAttendees; 
@property (nonatomic,readonly) char isScheduled; 
@property (nonatomic,retain,readonly) id<EKProtocolParticipant> organizer; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@required
-(id<EKCalendarProtocol>)container;
-(NSDate *)startDate;
-(char)isScheduled;
-(id<EKProtocolParticipant>)organizer;
-(char)hasAttendees;
-(char)allowsParticipantStatusModifications;
-(char)isCalendarOwnerInvitedAttendee;
-(char)isOrganizedBySomeoneElse;
-(char)isCurrentUserInvitedAttendee;

@end

