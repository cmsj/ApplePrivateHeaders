/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWalkingRouteStep.h>

@protocol GEOTransitRoutingIncidentMessage, GEOTransitArtworkDataSource;
@class GEOTransitStep, NSArray;

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {

	GEOTransitStep* _transitStep;
	GEOCoarseLocationLatLng _startCoordinate;
	GEOCoarseLocationLatLng _endCoordinate;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
	NSArray* _steppingArtwork;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;

}

@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)instructions;
-(double)distance;
-(id)transitStep;
-(SCD_Struct_GE94)startGeoCoordinate;
-(SCD_Struct_GE94)endGeoCoordinate;
-(char)isArrivalStep;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
-(id)steppingArtwork;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 geoStep:(id)arg5 pointRange:(NSRange)arg6 maneuverPointRange:(NSRange)arg7 ;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 startCoordinate:(GEOCoarseLocationLatLng)arg5 endCoordinate:(GEOCoarseLocationLatLng)arg6 pointRange:(NSRange)arg7 ;
-(void)_commonInitWithDecoderData:(id)arg1 ;
@end

