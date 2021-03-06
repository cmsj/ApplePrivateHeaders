/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOComposedRoute, GEOStep, NSString, GEOJunction, GEOComposedRouteSegment, GEOComposedTransitTripRouteStep, GEOPBTransitStop, GEOTransitStep, GEOInstructionSet, NSArray, GEOComposedRouteEVStepInfo;

@interface GEOComposedRouteStep : NSObject <NSSecureCoding> {

	GEOComposedRoute* _composedRoute;
	GEOStep* _geoStep;
	int _drivingSide;
	unsigned long long _stepIndex;
	NSRange _pointRange;
	NSRange _maneuverPointRange;
	NSString* _maneuverRoadOrExitName;
	NSString* _maneuverRoadName;
	double _actualDistance;
	long long _routeSegmentType;
	GEOJunction* _junction;

}

@property (nonatomic,readonly) char shouldCreateEnterBoardGroup; 
@property (nonatomic,readonly) char shouldCreateAlightExitGroup; 
@property (nonatomic,readonly) char shouldCreateTransferGroup; 
@property (nonatomic,readonly) char shouldCreateTripProgressionGroup; 
@property (nonatomic,readonly) char shouldCreateFerryProgressionGroup; 
@property (nonatomic,readonly) char shouldCreateArrivalGroup; 
@property (assign,nonatomic,__weak) GEOComposedRoute * composedRoute;                                          //@synthesize composedRoute=_composedRoute - In the implementation block
@property (assign,nonatomic) double actualDistance;                                                            //@synthesize actualDistance=_actualDistance - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteSegment * segment; 
@property (getter=getPreviousStep,nonatomic,readonly) GEOComposedRouteStep * previousStep; 
@property (getter=getNextStep,nonatomic,readonly) GEOComposedRouteStep * nextStep; 
@property (nonatomic,readonly) long long routeSegmentType;                                                     //@synthesize routeSegmentType=_routeSegmentType - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange pointRange;                                                             //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) NSRange maneuverPointRange;                                                     //@synthesize maneuverPointRange=_maneuverPointRange - In the implementation block
@property (nonatomic,readonly) unsigned maneuverStartPointIndex; 
@property (nonatomic,readonly) unsigned maneuverEndPointIndex; 
@property (nonatomic,readonly) NSString * maneuverRoadOrExitName; 
@property (nonatomic,readonly) NSString * maneuverRoadName; 
@property (nonatomic,readonly) unsigned long long stepIndex;                                                   //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long pathIndex; 
@property (nonatomic,readonly) char isUncertainArrival; 
@property (nonatomic,readonly) char isArrivalStep; 
@property (nonatomic,readonly) SCD_Struct_GE94 startGeoCoordinate; 
@property (nonatomic,readonly) SCD_Struct_GE94 endGeoCoordinate; 
@property (nonatomic,readonly) GEOStep * geoStep;                                                              //@synthesize geoStep=_geoStep - In the implementation block
@property (nonatomic,readonly) int drivingSide;                                                                //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) int maneuverType; 
@property (nonatomic,readonly) GEOJunction * junction;                                                         //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkOverride; 
@property (nonatomic,readonly) char hasDuration; 
@property (nonatomic,readonly) unsigned duration; 
@property (nonatomic,readonly) unsigned stepID; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * nextBoardingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * previousBoardingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * nextAlightingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * previousAlightingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * closestLogicalBoardOrAlightStep; 
@property (nonatomic,readonly) GEOPBTransitStop * startingStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingStop; 
@property (nonatomic,readonly) unsigned startTime; 
@property (nonatomic,readonly) GEOPBTransitStop * previousStop; 
@property (nonatomic,readonly) GEOPBTransitStop * nextStop; 
@property (nonatomic,readonly) GEOTransitStep * transitStep; 
@property (nonatomic,readonly) GEOInstructionSet * instructions; 
@property (nonatomic,readonly) NSArray * steppingArtwork; 
@property (nonatomic,readonly) NSArray * routeDetailsPrimaryArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> routeDetailsSecondaryArtwork; 
@property (nonatomic,readonly) GEOComposedRouteEVStepInfo * evInfo; 
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOComposedRouteSegment *)segment;
-(unsigned)startTime;
-(unsigned)duration;
-(int)transportType;
-(GEOInstructionSet *)instructions;
-(unsigned)pointCount;
-(double)distance;
-(int)maneuverType;
-(id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 geoStep:(id)arg3 routeSegmentType:(long long)arg4 stepIndex:(unsigned long long)arg5 pointRange:(NSRange)arg6 maneuverPointRange:(NSRange)arg7 ;
-(GEOComposedRouteEVStepInfo *)evInfo;
-(GEOComposedRoute *)composedRoute;
-(unsigned)stepID;
-(char)hasDuration;
-(GEOTransitStep *)transitStep;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(unsigned)endPointIndex;
-(unsigned)startPointIndex;
-(NSRange)pointRange;
-(GEOStep *)geoStep;
-(unsigned long long)stepIndex;
-(unsigned)maneuverStartPointIndex;
-(char)_MapsCarPlay_isEqual:(id)arg1 ;
-(char)shouldPreloadWithHighPriority;
-(GEOPBTransitStop *)startingStop;
-(GEOPBTransitStop *)endingStop;
-(int)drivingSide;
-(id<GEOTransitArtworkDataSource>)artworkOverride;
-(int)maneuver;
-(id)initWithComposedRoute:(id)arg1 routeSegmentType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 ;
-(id)getPreviousStep;
-(id)getNextStep;
-(GEOPBTransitStop *)previousStop;
-(GEOPBTransitStop *)nextStop;
-(GEOComposedTransitTripRouteStep *)nextBoardingStep;
-(GEOComposedTransitTripRouteStep *)previousBoardingStep;
-(GEOComposedTransitTripRouteStep *)nextAlightingStep;
-(GEOComposedTransitTripRouteStep *)previousAlightingStep;
-(SCD_Struct_GE94)startGeoCoordinate;
-(SCD_Struct_GE94)endGeoCoordinate;
-(char)isArrivalStep;
-(NSArray *)routeDetailsPrimaryArtwork;
-(id<GEOTransitArtworkDataSource>)routeDetailsSecondaryArtwork;
-(NSArray *)steppingArtwork;
-(NSString *)maneuverRoadName;
-(long long)routeSegmentType;
-(unsigned long long)pathIndex;
-(void)setActualDistance:(double)arg1 ;
-(unsigned)maneuverEndPointIndex;
-(char)shouldCreateEnterBoardGroup;
-(char)shouldCreateTripProgressionGroup;
-(char)shouldCreateFerryProgressionGroup;
-(char)shouldCreateAlightExitGroup;
-(char)shouldCreateTransferGroup;
-(char)shouldCreateArrivalGroup;
-(char)_belongsToTransferGroup;
-(GEOJunction *)junction;
-(NSString *)maneuverRoadOrExitName;
-(char)isUncertainArrival;
-(GEOComposedTransitTripRouteStep *)closestLogicalBoardOrAlightStep;
-(id)firstNameOrBranch;
-(NSRange)maneuverPointRange;
-(double)actualDistance;
@end

