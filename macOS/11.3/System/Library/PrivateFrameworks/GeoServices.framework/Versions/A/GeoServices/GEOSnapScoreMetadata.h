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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOSnapScorePoint;

@interface GEOSnapScoreMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _destinationAccessPoints;
	NSMutableArray* _destinationPoints;
	NSMutableArray* _originAccessPoints;
	GEOSnapScorePoint* _originPoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_destinationAccessPoints : 1;
		unsigned read_destinationPoints : 1;
		unsigned read_originAccessPoints : 1;
		unsigned read_originPoint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasOriginPoint; 
@property (nonatomic,retain) GEOSnapScorePoint * originPoint; 
@property (nonatomic,retain) NSMutableArray * originAccessPoints; 
@property (nonatomic,retain) NSMutableArray * destinationPoints; 
@property (nonatomic,retain) NSMutableArray * destinationAccessPoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)originAccessPointType;
+(Class)destinationPointType;
+(Class)destinationAccessPointType;
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
-(GEOSnapScorePoint *)originPoint;
-(void)setOriginPoint:(GEOSnapScorePoint *)arg1 ;
-(void)addOriginAccessPoint:(id)arg1 ;
-(void)addDestinationPoint:(id)arg1 ;
-(void)addDestinationAccessPoint:(id)arg1 ;
-(unsigned long long)originAccessPointsCount;
-(void)clearOriginAccessPoints;
-(id)originAccessPointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)destinationPointsCount;
-(void)clearDestinationPoints;
-(id)destinationPointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)destinationAccessPointsCount;
-(void)clearDestinationAccessPoints;
-(id)destinationAccessPointAtIndex:(unsigned long long)arg1 ;
-(char)hasOriginPoint;
-(NSMutableArray *)originAccessPoints;
-(void)setOriginAccessPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)destinationPoints;
-(void)setDestinationPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)destinationAccessPoints;
-(void)setDestinationAccessPoints:(NSMutableArray *)arg1 ;
@end
