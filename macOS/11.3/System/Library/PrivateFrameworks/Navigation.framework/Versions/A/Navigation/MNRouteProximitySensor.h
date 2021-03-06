/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation, GEORouteMatch, GEORouteMatcher, GEOComposedRoute, GEOComposedRouteStep;

@interface MNRouteProximitySensor : NSObject {

	double _proximityThreshold;
	GEOLocation* _location;
	GEORouteMatch* _routeMatch;
	GEORouteMatcher* _routeMatcher;
	unsigned long long _proximity;

}

@property (nonatomic,readonly) GEOLocation * location; 
@property (assign,nonatomic) double proximityThreshold; 
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) GEOLocation * closestPointOnRoute; 
@property (nonatomic,readonly) GEOComposedRouteStep * closestStepOnRoute; 
@property (nonatomic,readonly) double courseOnRoute; 
@property (nonatomic,readonly) double distanceFromOrigin; 
@property (nonatomic,readonly) double distanceFromRoute; 
@property (nonatomic,readonly) double distanceFromDestination; 
@property (nonatomic,readonly) double remainingTimeOnRoute; 
@property (nonatomic,readonly) unsigned long long proximity;                           //@synthesize proximity=_proximity - In the implementation block
-(id)init;
-(GEOLocation *)location;
-(double)distanceFromDestination;
-(id)initWithRoute:(id)arg1 ;
-(GEOComposedRoute *)route;
-(double)distanceFromRoute;
-(void)updateForLocation:(id)arg1 ;
-(double)distanceFromOrigin;
-(unsigned long long)proximity;
-(void)_updateRouteMatch;
-(void)_updateProximity;
-(GEOLocation *)closestPointOnRoute;
-(GEOComposedRouteStep *)closestStepOnRoute;
-(double)courseOnRoute;
-(double)remainingTimeOnRoute;
-(double)proximityThreshold;
-(void)setProximityThreshold:(double)arg1 ;
@end

