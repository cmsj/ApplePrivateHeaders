/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSArray, NSDate;


@protocol EKProtocolRecurrenceRule <NSObject>
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
@required
-(NSDate *)endDate;
-(NSArray *)monthsOfTheYear;
-(NSArray *)daysOfTheMonth;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(NSArray *)setPositions;
-(NSNumber *)countNumber;
-(NSNumber *)firstDayOfTheWeekNumber;
-(NSNumber *)frequencyNumber;
-(NSNumber *)intervalNumber;
-(char)ruleIsForAllDayItem;
-(char)ruleIsForFloatingItem;

@end
