/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOCompanionCyclingStep, GEOCompanionDriveStep, GEOCompanionFerryStep, GEOCompanionGenericStep, NSMutableArray, NSString, GEOStopWaypoint, NSData, GEOCompanionWalkStep;

@interface GEOCompanionStep : PBCodable <GEOCompanionCompatibility, NSCopying> {

	PBDataReader* _reader;
	GEOCompanionCyclingStep* _cyclingStep;
	GEOCompanionDriveStep* _driveStep;
	GEOCompanionFerryStep* _ferryStep;
	GEOCompanionGenericStep* _genericStep;
	NSMutableArray* _guidanceEvents;
	NSMutableArray* _instructionWithAlternatives;
	NSString* _listInstruction;
	NSMutableArray* _roadDescriptions;
	NSString* _roadName;
	GEOStopWaypoint* _stopWaypoint;
	NSData* _updateID;
	GEOCompanionWalkStep* _walkStep;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _distanceMeters;
	unsigned _distance;
	unsigned _endCoordinateIndex;
	unsigned _maneuverStartCoordinateIndex;
	unsigned _startCoordinateIndex;
	unsigned _stepID;
	unsigned _time;
	struct {
		unsigned has_distanceMeters : 1;
		unsigned has_distance : 1;
		unsigned has_endCoordinateIndex : 1;
		unsigned has_maneuverStartCoordinateIndex : 1;
		unsigned has_startCoordinateIndex : 1;
		unsigned has_stepID : 1;
		unsigned has_time : 1;
		unsigned read_cyclingStep : 1;
		unsigned read_driveStep : 1;
		unsigned read_ferryStep : 1;
		unsigned read_genericStep : 1;
		unsigned read_guidanceEvents : 1;
		unsigned read_instructionWithAlternatives : 1;
		unsigned read_listInstruction : 1;
		unsigned read_roadDescriptions : 1;
		unsigned read_roadName : 1;
		unsigned read_stopWaypoint : 1;
		unsigned read_updateID : 1;
		unsigned read_walkStep : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (assign,nonatomic) char hasTime; 
@property (assign,nonatomic) unsigned time; 
@property (nonatomic,readonly) char hasRoadName; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,readonly) char hasDriveStep; 
@property (nonatomic,retain) GEOCompanionDriveStep * driveStep; 
@property (nonatomic,readonly) char hasWalkStep; 
@property (nonatomic,retain) GEOCompanionWalkStep * walkStep; 
@property (nonatomic,readonly) char hasFerryStep; 
@property (nonatomic,retain) GEOCompanionFerryStep * ferryStep; 
@property (assign,nonatomic) char hasStartCoordinateIndex; 
@property (assign,nonatomic) unsigned startCoordinateIndex; 
@property (assign,nonatomic) char hasManeuverStartCoordinateIndex; 
@property (assign,nonatomic) unsigned maneuverStartCoordinateIndex; 
@property (assign,nonatomic) char hasEndCoordinateIndex; 
@property (assign,nonatomic) unsigned endCoordinateIndex; 
@property (nonatomic,retain) NSMutableArray * instructionWithAlternatives; 
@property (nonatomic,readonly) char hasListInstruction; 
@property (nonatomic,retain) NSString * listInstruction; 
@property (nonatomic,retain) NSMutableArray * guidanceEvents; 
@property (nonatomic,readonly) char hasUpdateID; 
@property (nonatomic,retain) NSData * updateID; 
@property (nonatomic,readonly) char hasGenericStep; 
@property (nonatomic,retain) GEOCompanionGenericStep * genericStep; 
@property (nonatomic,readonly) char hasCyclingStep; 
@property (nonatomic,retain) GEOCompanionCyclingStep * cyclingStep; 
@property (nonatomic,retain) NSMutableArray * roadDescriptions; 
@property (nonatomic,readonly) char hasStopWaypoint; 
@property (nonatomic,retain) GEOStopWaypoint * stopWaypoint; 
@property (assign,nonatomic) char hasDistanceMeters; 
@property (assign,nonatomic) float distanceMeters; 
+(char)isValid:(id)arg1 ;
+(Class)instructionWithAlternativesType;
+(Class)guidanceEventType;
+(Class)roadDescriptionsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)time;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(void)setHasTime:(char)arg1 ;
-(char)hasTime;
-(float)distanceMeters;
-(void)setDistanceMeters:(float)arg1 ;
-(unsigned)distance;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(unsigned)stepID;
-(void)setStepID:(unsigned)arg1 ;
-(NSMutableArray *)guidanceEvents;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(char)arg1 ;
-(char)hasDistance;
-(id)geoStep;
-(void)setHasStepID:(char)arg1 ;
-(char)hasStepID;
-(NSString *)roadName;
-(GEOCompanionDriveStep *)driveStep;
-(GEOCompanionWalkStep *)walkStep;
-(GEOCompanionFerryStep *)ferryStep;
-(NSMutableArray *)instructionWithAlternatives;
-(NSString *)listInstruction;
-(NSData *)updateID;
-(GEOCompanionGenericStep *)genericStep;
-(GEOCompanionCyclingStep *)cyclingStep;
-(GEOStopWaypoint *)stopWaypoint;
-(void)setRoadName:(NSString *)arg1 ;
-(void)setDriveStep:(GEOCompanionDriveStep *)arg1 ;
-(void)setWalkStep:(GEOCompanionWalkStep *)arg1 ;
-(void)setFerryStep:(GEOCompanionFerryStep *)arg1 ;
-(void)setStartCoordinateIndex:(unsigned)arg1 ;
-(void)setManeuverStartCoordinateIndex:(unsigned)arg1 ;
-(void)setEndCoordinateIndex:(unsigned)arg1 ;
-(void)addInstructionWithAlternatives:(id)arg1 ;
-(void)setListInstruction:(NSString *)arg1 ;
-(void)addGuidanceEvent:(id)arg1 ;
-(void)setUpdateID:(NSData *)arg1 ;
-(void)setGenericStep:(GEOCompanionGenericStep *)arg1 ;
-(void)setCyclingStep:(GEOCompanionCyclingStep *)arg1 ;
-(void)addRoadDescriptions:(id)arg1 ;
-(void)setStopWaypoint:(GEOStopWaypoint *)arg1 ;
-(unsigned long long)instructionWithAlternativesCount;
-(void)clearInstructionWithAlternatives;
-(id)instructionWithAlternativesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)guidanceEventsCount;
-(void)clearGuidanceEvents;
-(id)guidanceEventAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)roadDescriptionsCount;
-(void)clearRoadDescriptions;
-(id)roadDescriptionsAtIndex:(unsigned long long)arg1 ;
-(char)hasRoadName;
-(char)hasDriveStep;
-(char)hasWalkStep;
-(char)hasFerryStep;
-(unsigned)startCoordinateIndex;
-(void)setHasStartCoordinateIndex:(char)arg1 ;
-(char)hasStartCoordinateIndex;
-(unsigned)maneuverStartCoordinateIndex;
-(void)setHasManeuverStartCoordinateIndex:(char)arg1 ;
-(char)hasManeuverStartCoordinateIndex;
-(unsigned)endCoordinateIndex;
-(void)setHasEndCoordinateIndex:(char)arg1 ;
-(char)hasEndCoordinateIndex;
-(void)setInstructionWithAlternatives:(NSMutableArray *)arg1 ;
-(char)hasListInstruction;
-(void)setGuidanceEvents:(NSMutableArray *)arg1 ;
-(char)hasUpdateID;
-(char)hasGenericStep;
-(char)hasCyclingStep;
-(NSMutableArray *)roadDescriptions;
-(void)setRoadDescriptions:(NSMutableArray *)arg1 ;
-(char)hasStopWaypoint;
-(void)setHasDistanceMeters:(char)arg1 ;
-(char)hasDistanceMeters;
-(id)maneuverStep;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
-(id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3 ;
@end

