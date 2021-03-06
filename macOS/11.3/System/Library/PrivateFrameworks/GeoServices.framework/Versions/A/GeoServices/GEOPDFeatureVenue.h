/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDVenueContainer;

@interface GEOPDFeatureVenue : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _buildings;
	NSMutableArray* _levels;
	GEOPDVenueContainer* _venueContainer;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_buildings : 1;
		unsigned read_levels : 1;
		unsigned read_venueContainer : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasVenueContainer; 
@property (nonatomic,retain) GEOPDVenueContainer * venueContainer; 
@property (nonatomic,retain) NSMutableArray * buildings; 
@property (nonatomic,retain) NSMutableArray * levels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)levelType;
+(Class)buildingType;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(GEOPDVenueContainer *)venueContainer;
-(void)setVenueContainer:(GEOPDVenueContainer *)arg1 ;
-(void)addLevel:(id)arg1 ;
-(unsigned long long)levelsCount;
-(void)clearLevels;
-(id)levelAtIndex:(unsigned long long)arg1 ;
-(char)hasVenueContainer;
-(NSMutableArray *)levels;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(void)addBuilding:(id)arg1 ;
-(unsigned long long)buildingsCount;
-(void)clearBuildings;
-(id)buildingAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)buildings;
-(void)setBuildings:(NSMutableArray *)arg1 ;
@end

