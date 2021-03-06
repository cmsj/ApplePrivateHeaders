/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GEORouteHypothesisMonitorETAProvider
@property (nonatomic,readonly) double _hypothesis_travelDuration; 
@property (nonatomic,readonly) double _hypothesis_travelDurationAggressiveEstimate; 
@property (nonatomic,readonly) double _hypothesis_travelDurationConservativeEstimate; 
@required
-(double)_hypothesis_travelDuration;
-(double)_hypothesis_travelDurationAggressiveEstimate;
-(double)_hypothesis_travelDurationConservativeEstimate;
-(double)_hypothesis_travelDurationFromStep:(id)arg1 stepRemainingDistance:(double)arg2;

@end

