/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTMetric.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSString;

@interface RTVisitSettledStateMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)binsForDuration;
+(id)supportedMetricKeys;
+(void)submitVisitSettledStateMetricsForStartDate:(id)arg1 endDate:(id)arg2 isVisit:(char)arg3 settledStateTransitionStore:(id)arg4 ;
+(id)createVisitSettledStateMetricsForSettledStateTransitionStore:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 isVisit:(char)arg4 ;
+(unsigned long long)boundedIntegerMetricForPercentageOfTimeSettled:(unsigned long long)arg1 ;
+(unsigned long long)boundedIntegerMetricForCountOfSettledStateTransitions:(unsigned long long)arg1 ;
+(unsigned long long)bucketForDuration:(double)arg1 ;
+(unsigned long long)boundedIntegerMetricPercentageOfTimeSettledForTimeSettled:(double)arg1 overDuration:(double)arg2 ;
-(id)init;
-(id)initWithCountOfSettledStateTransitions:(unsigned long long)arg1 duration:(double)arg2 isVisit:(char)arg3 timeSettled:(double)arg4 ;
@end

