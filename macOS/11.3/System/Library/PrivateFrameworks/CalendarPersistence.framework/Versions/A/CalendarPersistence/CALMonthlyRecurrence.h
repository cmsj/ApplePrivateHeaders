/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CoreRecurrenceRule.h>

@interface CALMonthlyRecurrence : CoreRecurrenceRule
-(int)lastSpecifiedRulePartOrder;
-(void)appendICSStringToString:(id)arg1 ;
-(id)realOccurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2 alwaysIncludeStartDate:(char)arg3 ;
-(char)isEqualToRule:(id)arg1 consideringStartDate:(id)arg2 ;
-(id)matchingMonthsOnTimeRangeArray:(id)arg1 withRecurrenceStart:(id)arg2 ;
-(char)ruleMatchesDate:(id)arg1 ;
-(id)proposedRuleForMovingFrom:(id)arg1 to:(id)arg2 changes:(id)arg3 ;
-(id)acceptableMoveToTimeRangeForDate:(id)arg1 ;
@end
