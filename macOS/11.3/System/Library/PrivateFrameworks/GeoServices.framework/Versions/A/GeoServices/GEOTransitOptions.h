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

@class PBDataReader, PBUnknownFields, GEOFareOptions;

@interface GEOTransitOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE86* _avoidedModes;
	GEOFareOptions* _fareOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _prioritization;
	int _routingBehavior;
	char _enableIncidents;
	struct {
		unsigned has_prioritization : 1;
		unsigned has_routingBehavior : 1;
		unsigned has_enableIncidents : 1;
		unsigned read_unknownFields : 1;
		unsigned read_avoidedModes : 1;
		unsigned read_fareOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
@property (assign,nonatomic) char hasPrioritization; 
@property (assign,nonatomic) int prioritization; 
@property (nonatomic,readonly) char hasFareOptions; 
@property (nonatomic,retain) GEOFareOptions * fareOptions; 
@property (assign,nonatomic) char hasRoutingBehavior; 
@property (assign,nonatomic) int routingBehavior; 
@property (assign,nonatomic) char hasEnableIncidents; 
@property (assign,nonatomic) char enableIncidents; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOFareOptions *)fareOptions;
-(void)addAvoidedMode:(int)arg1 ;
-(void)setPrioritization:(int)arg1 ;
-(void)setFareOptions:(GEOFareOptions *)arg1 ;
-(void)setRoutingBehavior:(int)arg1 ;
-(void)setEnableIncidents:(char)arg1 ;
-(unsigned long long)avoidedModesCount;
-(void)clearAvoidedModes;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(int*)avoidedModes;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)avoidedModesAsString:(int)arg1 ;
-(int)StringAsAvoidedModes:(id)arg1 ;
-(int)prioritization;
-(void)setHasPrioritization:(char)arg1 ;
-(char)hasPrioritization;
-(id)prioritizationAsString:(int)arg1 ;
-(int)StringAsPrioritization:(id)arg1 ;
-(char)hasFareOptions;
-(int)routingBehavior;
-(void)setHasRoutingBehavior:(char)arg1 ;
-(char)hasRoutingBehavior;
-(id)routingBehaviorAsString:(int)arg1 ;
-(int)StringAsRoutingBehavior:(id)arg1 ;
-(char)enableIncidents;
-(void)setHasEnableIncidents:(char)arg1 ;
-(char)hasEnableIncidents;
@end

