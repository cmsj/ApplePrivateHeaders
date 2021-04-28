/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSDate, NSString;


@protocol SubscribedCalendarModelProtocol <CalendarModelProtocol>
@property (nonatomic,readonly) char removeAlarms; 
@property (nonatomic,readonly) char removeAttachments; 
@property (nonatomic,readonly) double refreshInterval; 
@property (nonatomic,readonly) NSURL * subscriptionURL; 
@property (nonatomic,readonly) NSDate * refreshDate; 
@property (nonatomic,readonly) NSString * subscriptionID; 
@property (nonatomic,readonly) NSString * subscriptionTitle; 
@property (nonatomic,readonly) NSString * subscriptionNotes; 
@property (nonatomic,readonly) char insecureConnectionAllowed; 
@required
-(NSString *)subscriptionID;
-(NSDate *)refreshDate;
-(double)refreshInterval;
-(NSURL *)subscriptionURL;
-(char)removeAlarms;
-(char)removeAttachments;
-(NSString *)subscriptionTitle;
-(NSString *)subscriptionNotes;
-(char)insecureConnectionAllowed;

@end
