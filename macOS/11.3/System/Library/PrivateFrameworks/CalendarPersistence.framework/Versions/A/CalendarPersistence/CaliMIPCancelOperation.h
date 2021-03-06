/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CaliMIPPersistDetailsOperation.h>

@class NSArray;

@interface CaliMIPCancelOperation : CaliMIPPersistDetailsOperation {

	NSArray* _attendeeEmails;

}

@property (retain) NSArray * attendeeEmails;              //@synthesize attendeeEmails=_attendeeEmails - In the implementation block
+(char)supportsSecureCoding;
+(char)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)arg1 ignoreiMIPSuppression:(char)arg2 ;
+(int)icsMethod;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithManagedAttendees:(id)arg1 ;
-(NSArray *)attendeeEmails;
-(id)attachmentName;
-(id)emailBodyInContext:(id)arg1 ;
-(id)emailRecipientsInContext:(id)arg1 ;
-(id)emailSubjectInContext:(id)arg1 ;
-(void)setAttendeeEmails:(NSArray *)arg1 ;
@end

