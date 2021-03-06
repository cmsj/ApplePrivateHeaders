/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSArray, SAReminderRecurrence, SAReminderListObject, SAReminderTrigger;

@interface SAReminderObject : SADomainObject

@property (nonatomic,copy) NSString * alternateSubject; 
@property (assign,nonatomic) char completed; 
@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSString * dueDateTimeZoneId; 
@property (assign,nonatomic) char important; 
@property (nonatomic,copy) NSArray * lists; 
@property (nonatomic,retain) id<SAReminderPayload> payload; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) SAReminderListObject * toList; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAReminderTrigger *)trigger;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setLists:(NSArray *)arg1 ;
-(NSArray *)lists;
-(void)setPayload:(id<SAReminderPayload>)arg1 ;
-(id<SAReminderPayload>)payload;
-(char)completed;
-(void)setCompleted:(char)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSDate *)dueDate;
-(id)encodedClassName;
-(SAReminderRecurrence *)recurrence;
-(NSString *)alternateSubject;
-(void)setAlternateSubject:(NSString *)arg1 ;
-(NSString *)dueDateTimeZoneId;
-(void)setDueDateTimeZoneId:(NSString *)arg1 ;
-(char)important;
-(void)setImportant:(char)arg1 ;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(SAReminderListObject *)toList;
-(void)setToList:(SAReminderListObject *)arg1 ;
@end

