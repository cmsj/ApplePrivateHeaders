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

@class PBDataReader, PBUnknownFields, GEORPPoiCorrections, GEOPDPlaceRequest, GEOPDPlace, GEORPCuratedCollectionContext;

@interface GEORPPoiFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPPoiCorrections* _corrections;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlace* _place;
	GEORPCuratedCollectionContext* _poiCuratedCollectionContext;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _correctionType;
	char _addOtherPoi;
	struct {
		unsigned has_correctionType : 1;
		unsigned has_addOtherPoi : 1;
		unsigned read_unknownFields : 1;
		unsigned read_corrections : 1;
		unsigned read_placeRequest : 1;
		unsigned read_place : 1;
		unsigned read_poiCuratedCollectionContext : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasCorrectionType; 
@property (assign,nonatomic) int correctionType; 
@property (nonatomic,readonly) char hasCorrections; 
@property (nonatomic,retain) GEORPPoiCorrections * corrections; 
@property (nonatomic,readonly) char hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) char hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (assign,nonatomic) char hasAddOtherPoi; 
@property (assign,nonatomic) char addOtherPoi; 
@property (nonatomic,readonly) char hasPoiCuratedCollectionContext; 
@property (nonatomic,retain) GEORPCuratedCollectionContext * poiCuratedCollectionContext; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
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
-(GEOPDPlace *)place;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasPlace;
-(GEOPDPlaceRequest *)placeRequest;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(char)hasPlaceRequest;
-(void)setCorrectionType:(int)arg1 ;
-(int)correctionType;
-(void)setHasCorrectionType:(char)arg1 ;
-(char)hasCorrectionType;
-(id)correctionTypeAsString:(int)arg1 ;
-(int)StringAsCorrectionType:(id)arg1 ;
-(GEORPPoiCorrections *)corrections;
-(void)setCorrections:(GEORPPoiCorrections *)arg1 ;
-(char)hasCorrections;
-(GEORPCuratedCollectionContext *)poiCuratedCollectionContext;
-(void)setAddOtherPoi:(char)arg1 ;
-(void)setPoiCuratedCollectionContext:(GEORPCuratedCollectionContext *)arg1 ;
-(char)addOtherPoi;
-(void)setHasAddOtherPoi:(char)arg1 ;
-(char)hasAddOtherPoi;
-(char)hasPoiCuratedCollectionContext;
@end

