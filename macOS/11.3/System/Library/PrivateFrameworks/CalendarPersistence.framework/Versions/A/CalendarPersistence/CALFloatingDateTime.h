/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/CALDate.h>

@interface CALFloatingDateTime : CALDate
+(id)date;
+(id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 ;
+(id)timeOnlyWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(double)timeIntervalSinceNow;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(void)years:(long long*)arg1 months:(long long*)arg2 days:(long long*)arg3 hours:(long long*)arg4 minutes:(long long*)arg5 seconds:(long long*)arg6 sinceDate:(id)arg7 ;
-(id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 ;
-(id)NSDate;
-(id)representationID;
-(void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
-(char)meetComparisonCondition:(unsigned char)arg1 withDate:(id)arg2 ;
-(long long)offsetFromGMT;
-(id)NSDateWithTimeZone:(id)arg1 ;
-(id)NSCalendarDate;
-(void)addYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(id)NSDateWithGMT;
-(long long)offsetFromGMTForTimeZone:(id)arg1 ;
-(void)setTimeZone:(id)arg1 keepingLocalDate:(char)arg2 ;
-(void)roundToDay;
-(void)addSecondsInGMT:(long long)arg1 ;
-(void)takeValueFrom:(id)arg1 ;
-(char)isEqualAsDateOnly:(id)arg1 ;
-(void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 ;
-(void)fillComparisonCDate:(CALCDate*)arg1 forDate:(id)arg2 ;
-(id)NSDateWithCalendar:(id)arg1 ;
@end
