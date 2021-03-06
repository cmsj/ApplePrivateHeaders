/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GEOComposedRoutePortion.h>

@class GEOComposedRoute, NSArray, GEOPBTransitStop, NSString;

@interface GEOComposedRouteSegment : NSObject <NSSecureCoding, GEOComposedRoutePortion> {

	GEOComposedRoute* _composedRoute;
	long long _type;
	NSRange _pointRange;
	NSRange _stepRange;
	unsigned _distance;
	NSArray* _composedGuidanceEvents;
	double _expectedTime;

}

@property (assign,nonatomic,__weak) GEOComposedRoute * composedRoute;                //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange transitStepRange; 
@property (nonatomic,readonly) unsigned long long numberOfTransitStops; 
@property (nonatomic,readonly) GEOPBTransitStop * startingTransitStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingTransitStop; 
@property (nonatomic,readonly) NSArray * composedGuidanceEvents;                     //@synthesize composedGuidanceEvents=_composedGuidanceEvents - In the implementation block
@property (nonatomic,readonly) NSRange pointRange;                                   //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) NSRange stepRange;                                    //@synthesize stepRange=_stepRange - In the implementation block
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) unsigned distance;                                    //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) double expectedTime;                                  //@synthesize expectedTime=_expectedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(int)transportType;
-(char)contains:(id)arg1 ;
-(unsigned)pointCount;
-(unsigned)distance;
-(id)initWithComposedRoute:(id)arg1 routeSegmentType:(long long)arg2 stepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(GEOPBTransitStop *)startingTransitStop;
-(GEOPBTransitStop *)endingTransitStop;
-(NSRange)transitStepRange;
-(GEOComposedRoute *)composedRoute;
-(NSArray *)steps;
-(double)expectedTime;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(unsigned long long)numberOfTransitStops;
-(unsigned)endPointIndex;
-(NSRange)stepRange;
-(unsigned long long)endStepIndex;
-(unsigned)startPointIndex;
-(NSRange)pointRange;
-(double)remainingTimeAlongSegmentFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(double)remainingDistanceAlongSegmentFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(char)_MapsCarPlay_isEqual:(id)arg1 ;
-(NSArray *)composedGuidanceEvents;
-(unsigned long long)startStepIndex;
-(unsigned long long)stepCount;
@end

