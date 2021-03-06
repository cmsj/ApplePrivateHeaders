/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureRoad, GEOMapFeatureJunction;

@interface GEORoadMatcherCandidateSegment : NSObject {

	double _score;
	GEOMapFeatureRoad* _road;
	GEOCoarseLocationLatLng _coordinateOnSegment;
	double _distanceFromSegment;
	double _segmentAngle;
	GEOMapFeatureJunction* _junction;
	double _distanceInMetersFromJunction;

}

@property (nonatomic,readonly) double score;                                             //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) GEOMapFeatureRoad * road;                                 //@synthesize road=_road - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinateOnSegment;              //@synthesize coordinateOnSegment=_coordinateOnSegment - In the implementation block
@property (nonatomic,readonly) double distanceFromSegment;                               //@synthesize distanceFromSegment=_distanceFromSegment - In the implementation block
@property (nonatomic,readonly) double segmentAngle;                                      //@synthesize segmentAngle=_segmentAngle - In the implementation block
@property (nonatomic,readonly) GEOMapFeatureJunction * junction;                         //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) double distanceFromJunction;                              //@synthesize distanceInMetersFromJunction=_distanceInMetersFromJunction - In the implementation block
-(double)score;
-(double)distanceFromJunction;
-(GEOMapFeatureRoad *)road;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(GEOCoarseLocationLatLng)arg4 endCoordinate:(GEOCoarseLocationLatLng)arg5 ;
-(GEOCoarseLocationLatLng)coordinateOnSegment;
-(double)distanceFromSegment;
-(double)segmentAngle;
-(GEOMapFeatureJunction *)junction;
@end

