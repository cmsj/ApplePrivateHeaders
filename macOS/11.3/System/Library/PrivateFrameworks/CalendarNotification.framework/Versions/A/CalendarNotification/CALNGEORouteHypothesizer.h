/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/Versions/A/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNRouteHypothesizer.h>

@class EKTravelEngineHypothesis, GEORouteHypothesizer, NSString;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer> {

	GEORouteHypothesizer* _routeHypothesizer;

}

@property (nonatomic,readonly) GEORouteHypothesizer * routeHypothesizer;                  //@synthesize routeHypothesizer=_routeHypothesizer - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) EKTravelEngineHypothesis * currentHypothesis; 
@property (nonatomic,readonly) id updateHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)state;
-(id)updateHandler;
-(EKTravelEngineHypothesis *)currentHypothesis;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)stopHypothesizing;
-(void)requestRefresh;
-(void)didPostUINotification:(unsigned long long)arg1 ;
-(GEORouteHypothesizer *)routeHypothesizer;
-(id)initWithRouteHypothesizer:(id)arg1 ;
@end

