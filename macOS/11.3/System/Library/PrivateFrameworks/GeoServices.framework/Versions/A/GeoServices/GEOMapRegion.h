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

@class PBUnknownFields, NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _eastLng;
	double _northLat;
	double _southLat;
	NSMutableArray* _vertexs;
	double _westLng;
	int _mapRegionSourceType;
	struct {
		unsigned has_eastLng : 1;
		unsigned has_northLat : 1;
		unsigned has_southLat : 1;
		unsigned has_westLng : 1;
		unsigned has_mapRegionSourceType : 1;
	}  _flags;

}

@property (nonatomic,readonly) double centerLat; 
@property (nonatomic,readonly) double centerLng; 
@property (nonatomic,readonly) double spanLat; 
@property (nonatomic,readonly) double spanLng; 
@property (nonatomic,readonly) char hasRectangleVertices; 
@property (assign,nonatomic) char hasSouthLat; 
@property (assign,nonatomic) double southLat; 
@property (assign,nonatomic) char hasWestLng; 
@property (assign,nonatomic) double westLng; 
@property (assign,nonatomic) char hasNorthLat; 
@property (assign,nonatomic) double northLat; 
@property (assign,nonatomic) char hasEastLng; 
@property (assign,nonatomic) double eastLng; 
@property (nonatomic,retain) NSMutableArray * vertexs; 
@property (assign,nonatomic) char hasMapRegionSourceType; 
@property (assign,nonatomic) int mapRegionSourceType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(id)_geo_mapRegionForGEOCoordinateRegion:(SCD_Struct_GE36)arg1 ;
+(Class)vertexType;
-(id)_initWithCLRegion:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)isValid;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)containsRegion:(id)arg1 ;
-(char)intersectsRegion:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addVertex:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setSouthLat:(double)arg1 ;
-(void)setWestLng:(double)arg1 ;
-(void)setNorthLat:(double)arg1 ;
-(void)setEastLng:(double)arg1 ;
-(id)initWithMapRect:(SCD_Struct_GE36)arg1 ;
-(void)setMapRect:(SCD_Struct_GE36)arg1 ;
-(double)southLat;
-(double)northLat;
-(double)westLng;
-(double)eastLng;
-(char)hasRectangleVertices;
-(unsigned long long)vertexsCount;
-(char)hasNorthLat;
-(char)hasSouthLat;
-(char)hasEastLng;
-(char)hasWestLng;
-(NSMutableArray *)vertexs;
-(id)initWithCoordinateRegion:(SCD_Struct_GE36)arg1 ;
-(id)initWithRadialPlace:(id)arg1 ;
-(double)centerLat;
-(double)centerLng;
-(double)spanLat;
-(double)spanLng;
-(id)coordinates;
-(id)vertexAtIndex:(unsigned long long)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)containsCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(char)containsCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 ;
-(char)containsMapRect:(SCD_Struct_GE36)arg1 ;
-(char)intersectsMapRect:(SCD_Struct_GE36)arg1 ;
-(id)intersectionsOnPolyline:(id)arg1 ;
-(void)setMapRegionSourceType:(int)arg1 ;
-(void)clearVertexs;
-(void)setHasSouthLat:(char)arg1 ;
-(void)setHasWestLng:(char)arg1 ;
-(void)setHasNorthLat:(char)arg1 ;
-(void)setHasEastLng:(char)arg1 ;
-(void)setVertexs:(NSMutableArray *)arg1 ;
-(int)mapRegionSourceType;
-(void)setHasMapRegionSourceType:(char)arg1 ;
-(char)hasMapRegionSourceType;
-(id)mapRegionSourceTypeAsString:(int)arg1 ;
-(int)StringAsMapRegionSourceType:(id)arg1 ;
@end

