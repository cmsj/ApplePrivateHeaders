/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarEventInvitationNotification : EKCalendarNotification

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) char isLocationDecline; 
@property (nonatomic,readonly) char isVirtual; 
+(id)conflictsForNotifications:(id)arg1 ;
+(void)clearCachedConflictsForNotifications:(id)arg1 ;
-(long long)type;
-(long long)status;
-(id)phoneNumber;
-(char)isVirtual;
-(id)emailAddress;
-(char)isInvitation;
-(char)needsReply;
-(unsigned long long)supportedActions;
-(char)isLocationDecline;
-(char)couldBeJunk;
-(unsigned long long)_attendeeResponsesOfType:(int)arg1 ;
-(id)respondingAttendeeComment;
-(char)supportsConflictScanning;
-(id)sendersEmail;
-(id)sendersPhoneNumber;
-(id)initWithRelatedEvent:(id)arg1 ;
-(char)isForReReply;
-(id)respondingAttendee;
-(unsigned long long)attendeeAccepts;
-(unsigned long long)attendeeDeclines;
-(unsigned long long)attendeeComments;
-(id)conflicts;
@end

