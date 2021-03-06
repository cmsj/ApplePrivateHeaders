/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSMutableArray* _sortedETAs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distance;
	unsigned _historicTravelTime;
	unsigned _liveTravelTime;
	int _status;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_liveTravelTime : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_placeSearchResponse : 1;
		unsigned read_sortedETAs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) char hasLiveTravelTime; 
@property (assign,nonatomic) unsigned liveTravelTime; 
@property (assign,nonatomic) char hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) char hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse; 
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (nonatomic,retain) NSMutableArray * sortedETAs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)sortedETAType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(unsigned)distance;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)clearSensitiveFields;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(char)arg1 ;
-(char)hasDistance;
-(unsigned)historicTravelTime;
-(char)hasHistoricTravelTime;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(char)arg1 ;
-(GEOPlaceSearchResponse *)placeSearchResponse;
-(void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(char)hasPlaceSearchResponse;
-(NSMutableArray *)sortedETAs;
-(unsigned)liveTravelTime;
-(void)setLiveTravelTime:(unsigned)arg1 ;
-(void)addSortedETA:(id)arg1 ;
-(unsigned long long)sortedETAsCount;
-(void)clearSortedETAs;
-(id)sortedETAAtIndex:(unsigned long long)arg1 ;
-(void)setHasLiveTravelTime:(char)arg1 ;
-(char)hasLiveTravelTime;
-(void)setSortedETAs:(NSMutableArray *)arg1 ;
@end

