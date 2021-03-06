/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKFrozenReminderObject.h>
#import <libobjc.A.dylib/EKProtocolRecurrenceRule.h>

@class NSNumber, NSArray, NSDate, NSString;

@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject <EKProtocolRecurrenceRule>

@property (nonatomic,copy,readonly) NSNumber * countNumber; 
@property (nonatomic,copy,readonly) NSArray * daysOfTheMonth; 
@property (nonatomic,copy,readonly) NSArray * daysOfTheWeek; 
@property (nonatomic,copy,readonly) NSArray * daysOfTheYear; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSNumber * firstDayOfTheWeekNumber; 
@property (nonatomic,copy,readonly) NSNumber * frequencyNumber; 
@property (nonatomic,copy,readonly) NSNumber * intervalNumber; 
@property (nonatomic,copy,readonly) NSArray * monthsOfTheYear; 
@property (nonatomic,copy,readonly) NSArray * setPositions; 
@property (nonatomic,copy,readonly) NSArray * weeksOfTheYear; 
@property (nonatomic,readonly) char ruleIsForAllDayItem; 
@property (nonatomic,readonly) char ruleIsForFloatingItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)meltedClass;
+(long long)convertToReminderKitFrequency:(long long)arg1 ;
+(long long)convertToReminderKitWeekday:(long long)arg1 ;
+(long long)convertFromReminderKitFrequency:(long long)arg1 ;
+(long long)convertFromReminderKitWeekday:(long long)arg1 ;
-(unsigned long long)count;
-(id)uuid;
-(id)uniqueIdentifier;
-(long long)interval;
-(NSDate *)endDate;
-(long long)frequency;
-(id)_recurrenceRule;
-(NSArray *)monthsOfTheYear;
-(NSArray *)daysOfTheMonth;
-(NSArray *)daysOfTheWeek;
-(long long)firstDayOfTheWeek;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(NSArray *)setPositions;
-(id)remObjectID;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(void)loadSpecifierDaysOfTheWeek:(id*)arg1 daysOfTheMonth:(id*)arg2 monthsOfTheYear:(id*)arg3 weeksOfTheYear:(id*)arg4 daysOfTheYear:(id*)arg5 setPositions:(id*)arg6 ;
-(long long)remWeekdayToEKWeekday:(long long)arg1 ;
-(long long)ekWeekdayToREMWeekday:(long long)arg1 ;
-(id)daysOfTheWeekFromREMRecurrenceRule;
-(id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)arg1 ;
-(NSNumber *)countNumber;
-(NSNumber *)firstDayOfTheWeekNumber;
-(NSNumber *)frequencyNumber;
-(NSNumber *)intervalNumber;
-(char)ruleIsForAllDayItem;
-(char)ruleIsForFloatingItem;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(id)addUpdatedRecurrenceRule:(id)arg1 ;
@end

