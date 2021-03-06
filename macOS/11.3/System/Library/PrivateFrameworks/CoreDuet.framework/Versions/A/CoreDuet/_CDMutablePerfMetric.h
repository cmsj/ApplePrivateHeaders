/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_CDPerfMetric.h>

@protocol OS_os_activity;
@class NSObject, _DKEventStatsTimerCounter;

@interface _CDMutablePerfMetric : _CDPerfMetric {

	NSObject*<OS_os_activity> _os_activity;
	os_activity_scope_state_s _os_activity_scope_state;
	_DKEventStatsTimerCounter* _eventStatsTimerCounter;

}
-(id)description;
-(id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 ;
-(void)startTelemetryWithOSActivity:(id)arg1 ;
-(void)endTimingWithEvent:(CDPerfEvent*)arg1 resultCount:(unsigned long long)arg2 incrementErrorCount:(char)arg3 ;
@end

