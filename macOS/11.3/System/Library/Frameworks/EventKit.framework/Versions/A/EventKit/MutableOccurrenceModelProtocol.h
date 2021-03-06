/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSNumber, NSTimeZone, NSDate, NSData;


@protocol MutableOccurrenceModelProtocol <OccurrenceModelProtocol,EKProtocolMutableObject>
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
@required
-(id<CalendarModelProtocol>)container;
-(NSURL *)URL;
-(void)setURL:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setSequence:(id)arg1;
-(void)setContainer:(id)arg1;
-(void)setAllDay:(char)arg1;
-(void)setNotes:(id)arg1;
-(NSString *)notes;
-(NSNumber *)priorityNumber;
-(NSDate *)recurrenceDateUnadjustedFromUTC;
-(id<EKProtocolStructuredLocation>)ekStructuredLocation;
-(NSString *)recurrenceRuleString;
-(NSString *)scheduleAgentString;
-(NSTimeZone *)timeZoneObject;
-(NSDate *)startDateUnadjustedFromUTC;
-(NSString *)recurrenceSetID;
-(NSString *)contactIdentifiersString;
-(NSString *)relatedExternalID;
-(NSData *)structuredData;
-(NSData *)localStructuredData;
-(void)setScheduleAgentString:(id)arg1;
-(void)setEkStructuredLocation:(id)arg1;
-(void)setContactIdentifiersString:(id)arg1;
-(void)setPriorityNumber:(id)arg1;
-(void)setTimeZoneObject:(id)arg1;
-(void)setStartDateUnadjustedFromUTC:(id)arg1;
-(void)setRecurrenceSetID:(id)arg1;
-(void)setRecurrenceRuleString:(id)arg1;
-(void)setRecurrenceDateUnadjustedFromUTC:(id)arg1;
-(void)setRelatedExternalID:(id)arg1;
-(void)setStructuredData:(id)arg1;
-(void)setLocalStructuredData:(id)arg1;

@end

