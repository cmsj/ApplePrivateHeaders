/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOJunctionViewGuidanceFeedback, NSData, GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback, GEOTrafficCameraInformation;

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOJunctionViewGuidanceFeedback* _junctionViewGuidanceFeedback;
	NSData* _routeID;
	GEOSignGuidanceFeedback* _signGuidanceFeedback;
	GEOSpokenGuidanceFeedback* _spokenGuidanceFeedback;
	GEOTrafficCameraInformation* _trafficCameraGuidanceFeedback;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _distanceToManeuver;
	float _duration;
	unsigned _enrouteNoticeIndex;
	unsigned _eventIndex;
	unsigned _stepID;
	float _timeToManeuver;
	int _trafficSpeed;
	float _vehicleSpeed;
	struct {
		unsigned has_distanceToManeuver : 1;
		unsigned has_duration : 1;
		unsigned has_enrouteNoticeIndex : 1;
		unsigned has_eventIndex : 1;
		unsigned has_stepID : 1;
		unsigned has_timeToManeuver : 1;
		unsigned has_trafficSpeed : 1;
		unsigned has_vehicleSpeed : 1;
		unsigned read_junctionViewGuidanceFeedback : 1;
		unsigned read_routeID : 1;
		unsigned read_signGuidanceFeedback : 1;
		unsigned read_spokenGuidanceFeedback : 1;
		unsigned read_trafficCameraGuidanceFeedback : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) char hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) char hasEnrouteNoticeIndex; 
@property (assign,nonatomic) unsigned enrouteNoticeIndex; 
@property (assign,nonatomic) char hasEventIndex; 
@property (assign,nonatomic) unsigned eventIndex; 
@property (assign,nonatomic) char hasDistanceToManeuver; 
@property (assign,nonatomic) float distanceToManeuver; 
@property (assign,nonatomic) char hasTimeToManeuver; 
@property (assign,nonatomic) float timeToManeuver; 
@property (assign,nonatomic) char hasVehicleSpeed; 
@property (assign,nonatomic) float vehicleSpeed; 
@property (assign,nonatomic) char hasTrafficSpeed; 
@property (assign,nonatomic) int trafficSpeed; 
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) float duration; 
@property (nonatomic,readonly) char hasSignGuidanceFeedback; 
@property (nonatomic,retain) GEOSignGuidanceFeedback * signGuidanceFeedback; 
@property (nonatomic,readonly) char hasSpokenGuidanceFeedback; 
@property (nonatomic,retain) GEOSpokenGuidanceFeedback * spokenGuidanceFeedback; 
@property (nonatomic,readonly) char hasJunctionViewGuidanceFeedback; 
@property (nonatomic,retain) GEOJunctionViewGuidanceFeedback * junctionViewGuidanceFeedback; 
@property (nonatomic,readonly) char hasTrafficCameraGuidanceFeedback; 
@property (nonatomic,retain) GEOTrafficCameraInformation * trafficCameraGuidanceFeedback; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(unsigned)stepID;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setStepID:(unsigned)arg1 ;
-(void)setEnrouteNoticeIndex:(unsigned)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(NSData *)routeID;
-(char)hasRouteID;
-(void)setDistanceToManeuver:(float)arg1 ;
-(void)setHasStepID:(char)arg1 ;
-(char)hasStepID;
-(float)distanceToManeuver;
-(void)setHasDistanceToManeuver:(char)arg1 ;
-(char)hasDistanceToManeuver;
-(unsigned)enrouteNoticeIndex;
-(void)setHasEnrouteNoticeIndex:(char)arg1 ;
-(char)hasEnrouteNoticeIndex;
-(GEOSignGuidanceFeedback *)signGuidanceFeedback;
-(GEOSpokenGuidanceFeedback *)spokenGuidanceFeedback;
-(GEOJunctionViewGuidanceFeedback *)junctionViewGuidanceFeedback;
-(GEOTrafficCameraInformation *)trafficCameraGuidanceFeedback;
-(void)setEventIndex:(unsigned)arg1 ;
-(void)setTimeToManeuver:(float)arg1 ;
-(void)setVehicleSpeed:(float)arg1 ;
-(void)setTrafficSpeed:(int)arg1 ;
-(void)setSignGuidanceFeedback:(GEOSignGuidanceFeedback *)arg1 ;
-(void)setSpokenGuidanceFeedback:(GEOSpokenGuidanceFeedback *)arg1 ;
-(void)setJunctionViewGuidanceFeedback:(GEOJunctionViewGuidanceFeedback *)arg1 ;
-(void)setTrafficCameraGuidanceFeedback:(GEOTrafficCameraInformation *)arg1 ;
-(unsigned)eventIndex;
-(void)setHasEventIndex:(char)arg1 ;
-(char)hasEventIndex;
-(float)timeToManeuver;
-(void)setHasTimeToManeuver:(char)arg1 ;
-(char)hasTimeToManeuver;
-(float)vehicleSpeed;
-(void)setHasVehicleSpeed:(char)arg1 ;
-(char)hasVehicleSpeed;
-(int)trafficSpeed;
-(void)setHasTrafficSpeed:(char)arg1 ;
-(char)hasTrafficSpeed;
-(id)trafficSpeedAsString:(int)arg1 ;
-(int)StringAsTrafficSpeed:(id)arg1 ;
-(char)hasSignGuidanceFeedback;
-(char)hasSpokenGuidanceFeedback;
-(char)hasJunctionViewGuidanceFeedback;
-(char)hasTrafficCameraGuidanceFeedback;
@end

