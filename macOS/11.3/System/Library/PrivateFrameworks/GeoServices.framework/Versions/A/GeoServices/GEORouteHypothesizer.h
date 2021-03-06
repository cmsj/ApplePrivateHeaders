/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class GEOPlannedDestination, GEORouteHypothesis, NSError, NSUUID, geo_isolater, NSObject;

@interface GEORouteHypothesizer : NSObject {

	GEOPlannedDestination* _plannedDestination;
	unsigned long long _state;
	char _unableToFindRouteForOriginalTransportType;
	GEORouteHypothesis* _currentHypothesis;
	NSError* _currentError;
	/*^block*/id _updateHandler;
	NSUUID* _uuid;
	geo_isolater* _isolater;
	char _wakeForDelay;
	NSObject*<OS_dispatch_source> _delayDispatchTimer;

}

@property (assign,nonatomic) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) GEOPlannedDestination * plannedDestination;                  //@synthesize plannedDestination=_plannedDestination - In the implementation block
@property (nonatomic,readonly) char unableToFindRouteForOriginalTransportType;              //@synthesize unableToFindRouteForOriginalTransportType=_unableToFindRouteForOriginalTransportType - In the implementation block
@property (nonatomic,readonly) GEORouteHypothesis * currentHypothesis;                      //@synthesize currentHypothesis=_currentHypothesis - In the implementation block
@property (nonatomic,readonly) NSError * currentError;                                      //@synthesize currentError=_currentError - In the implementation block
@property (nonatomic,readonly) double willBeginHypothesizingInterval; 
@property (nonatomic,readonly) double willEndHypothesizingInterval; 
+(id)hypothesizerForPlannedDestination:(id)arg1 ;
+(char)transitTTLSupportedInCurrentCountry;
+(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(double)willBeginHypothesizingInterval;
-(GEOPlannedDestination *)plannedDestination;
-(void)_performDelayedStart;
-(GEORouteHypothesis *)currentHypothesis;
-(id)initWithPlannedDestination:(id)arg1 ;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)cancelDelayDispatchTimer;
-(char)_wontHypothesizeAgain;
-(void)_delayStartingWithXpc;
-(void)_delayStartingWithoutXpc;
-(void)stopHypothesizing;
-(double)willEndHypothesizingInterval;
-(char)wakeForDelay;
-(void)setDoNotWakeForDelay;
-(void)requestRefresh;
-(void)onlyPerformLocalUpdates;
-(void)didPostUINotification:(unsigned long long)arg1 ;
-(NSError *)currentError;
-(char)unableToFindRouteForOriginalTransportType;
@end

