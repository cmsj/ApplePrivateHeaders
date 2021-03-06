/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalTimeIntervalLocalization : NSObject
+(id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(char)arg2 ;
+(id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3 ;
+(id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(char)arg2 ;
+(void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(char)arg4 abbreviate:(char)arg5 ;
+(id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2 ;
+(void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(char)arg4 dayDuration:(id*)arg5 hourDuration:(id*)arg6 minuteDuration:(id*)arg7 secondDuration:(id*)arg8 abbreviate:(char)arg9 ;
+(id)localizedStringForInterval:(double)arg1 withOptions:(unsigned long long)arg2 ;
@end

