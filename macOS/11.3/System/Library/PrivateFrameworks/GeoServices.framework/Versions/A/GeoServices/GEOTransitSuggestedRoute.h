/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOTransitRouteDisplayStrings, GEOTransitEngineDebugData, NSData, NSMutableArray, GEOPBTransitRoutingIncidentMessage, NSString;

@interface GEOTransitSuggestedRoute : PBCodable <GEOCompanionCompatibility, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE86* _routeBadges;
	GEOTransitRouteDisplayStrings* _displayStrings;
	GEOTransitEngineDebugData* _engineDebugData;
	NSData* _routeHandle;
	NSMutableArray* _routePlanningArtworks;
	NSMutableArray* _sectionOptions;
	NSMutableArray* _sections;
	NSMutableArray* _steps;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _absEndTime;
	unsigned _absStartTime;
	unsigned _rank;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	char _supportsRouteUpdates;
	struct {
		unsigned has_absEndTime : 1;
		unsigned has_absStartTime : 1;
		unsigned has_rank : 1;
		unsigned has_travelTimeAggressiveEstimate : 1;
		unsigned has_travelTimeConservativeEstimate : 1;
		unsigned has_supportsRouteUpdates : 1;
		unsigned read_unknownFields : 1;
		unsigned read_routeBadges : 1;
		unsigned read_displayStrings : 1;
		unsigned read_engineDebugData : 1;
		unsigned read_routeHandle : 1;
		unsigned read_routePlanningArtworks : 1;
		unsigned read_sectionOptions : 1;
		unsigned read_sections : 1;
		unsigned read_steps : 1;
		unsigned read_transitIncidentMessage : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isWalkingOnlyRoute,nonatomic,readonly) char walkingOnlyRoute; 
@property (assign,nonatomic) char hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime; 
@property (assign,nonatomic) char hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime; 
@property (nonatomic,retain) NSMutableArray * steps; 
@property (nonatomic,readonly) char hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle; 
@property (assign,nonatomic) char hasRank; 
@property (assign,nonatomic) unsigned rank; 
@property (nonatomic,readonly) char hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage; 
@property (nonatomic,retain) NSMutableArray * routePlanningArtworks; 
@property (nonatomic,readonly) char hasDisplayStrings; 
@property (nonatomic,retain) GEOTransitRouteDisplayStrings * displayStrings; 
@property (nonatomic,readonly) unsigned long long routeBadgesCount; 
@property (nonatomic,readonly) int* routeBadges; 
@property (nonatomic,retain) NSMutableArray * sectionOptions; 
@property (nonatomic,retain) NSMutableArray * sections; 
@property (assign,nonatomic) char hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate; 
@property (assign,nonatomic) char hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate; 
@property (nonatomic,readonly) char hasEngineDebugData; 
@property (nonatomic,retain) GEOTransitEngineDebugData * engineDebugData; 
@property (assign,nonatomic) char hasSupportsRouteUpdates; 
@property (assign,nonatomic) char supportsRouteUpdates; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)sectionType;
+(Class)stepsType;
+(Class)routePlanningArtworkType;
+(Class)sectionOptionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)sections;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRank:(unsigned)arg1 ;
-(unsigned)rank;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)addSection:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOTransitRouteDisplayStrings *)displayStrings;
-(void)setDisplayStrings:(GEOTransitRouteDisplayStrings *)arg1 ;
-(char)hasDisplayStrings;
-(unsigned long long)stepsCount;
-(id)stepsAtIndex:(unsigned long long)arg1 ;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(void)setRouteHandle:(NSData *)arg1 ;
-(char)hasRouteHandle;
-(NSData *)routeHandle;
-(void)clearSteps;
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(unsigned)absStartTime;
-(void)setHasAbsStartTime:(char)arg1 ;
-(char)hasAbsStartTime;
-(unsigned)absEndTime;
-(void)setHasAbsEndTime:(char)arg1 ;
-(char)hasAbsEndTime;
-(GEOTransitEngineDebugData *)engineDebugData;
-(void)addSteps:(id)arg1 ;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(void)addRoutePlanningArtwork:(id)arg1 ;
-(void)addRouteBadge:(int)arg1 ;
-(void)addSectionOption:(id)arg1 ;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(void)setEngineDebugData:(GEOTransitEngineDebugData *)arg1 ;
-(void)setSupportsRouteUpdates:(char)arg1 ;
-(unsigned long long)routePlanningArtworksCount;
-(void)clearRoutePlanningArtworks;
-(id)routePlanningArtworkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)routeBadgesCount;
-(void)clearRouteBadges;
-(int)routeBadgeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionOptionsCount;
-(void)clearSectionOptions;
-(id)sectionOptionAtIndex:(unsigned long long)arg1 ;
-(void)setHasRank:(char)arg1 ;
-(char)hasRank;
-(char)hasTransitIncidentMessage;
-(NSMutableArray *)routePlanningArtworks;
-(void)setRoutePlanningArtworks:(NSMutableArray *)arg1 ;
-(int*)routeBadges;
-(void)setRouteBadges:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)routeBadgesAsString:(int)arg1 ;
-(int)StringAsRouteBadges:(id)arg1 ;
-(NSMutableArray *)sectionOptions;
-(void)setSectionOptions:(NSMutableArray *)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(unsigned)travelTimeAggressiveEstimate;
-(void)setHasTravelTimeAggressiveEstimate:(char)arg1 ;
-(char)hasTravelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(void)setHasTravelTimeConservativeEstimate:(char)arg1 ;
-(char)hasTravelTimeConservativeEstimate;
-(char)hasEngineDebugData;
-(char)supportsRouteUpdates;
-(void)setHasSupportsRouteUpdates:(char)arg1 ;
-(char)hasSupportsRouteUpdates;
-(char)isWalkingOnlyRoute;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
-(id)nextOptionForOption:(id)arg1 withRideIndex:(unsigned long long)arg2 ;
@end
