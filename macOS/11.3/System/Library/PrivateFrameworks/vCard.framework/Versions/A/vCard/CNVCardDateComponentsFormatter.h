/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSDateFormatter;

@interface CNVCardDateComponentsFormatter : NSFormatter {

	NSCalendar* _gregorianCalendar;
	NSDateFormatter* _compactYearMonthDayDateFormatter;
	NSDateFormatter* _compactYearMonthDayDateHourMinuteSecondZFormatter;
	NSDateFormatter* _monthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateHourMinuteSecondZFormatter;

}
+(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 ;
-(id)gregorianCalendar;
-(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)altBDAYStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayStringFromDateComponents:(id)arg1 ;
-(id)monthDayStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayDateFormatter;
-(id)yearMonthDayDateHourMinuteSecondZFormatter;
-(id)compactYearMonthDayDateFormatter;
-(id)compactYearMonthDayDateHourMinuteSecondZFormatter;
-(id)monthDayDateFormatter;
-(id)stringForComponentValue:(long long)arg1 format:(id)arg2 ;
@end

