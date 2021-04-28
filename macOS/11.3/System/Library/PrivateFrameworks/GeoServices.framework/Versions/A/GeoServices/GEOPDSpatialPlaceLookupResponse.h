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

@class PBDataReader, PBUnknownFields, GEOPDBounds, GEOLatLng, GEOPDMapsIdentifier;

@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE86* _categorys;
	GEOPDBounds* _bounds;
	GEOLatLng* _center;
	GEOPDMapsIdentifier* _placeId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_bounds : 1;
		unsigned read_center : 1;
		unsigned read_placeId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasPlaceId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * placeId; 
@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,readonly) unsigned long long categorysCount; 
@property (nonatomic,readonly) int* categorys; 
@property (nonatomic,readonly) char hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds; 
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
-(GEOPDBounds *)bounds;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasCenter;
-(int*)categorys;
-(void)addCategory:(int)arg1 ;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(char)hasPlaceId;
-(GEOPDMapsIdentifier *)placeId;
-(void)setPlaceId:(GEOPDMapsIdentifier *)arg1 ;
-(char)hasBounds;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
@end
