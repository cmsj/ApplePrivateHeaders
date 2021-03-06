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

@class PBDataReader, PBUnknownFields, GEOPDBatchReverseGeocodeResult, GEOPDCollectionResult, GEOPDPlaceQuestionnaireResult, GEOPDPlace, GEOPDPublisherResult;

@interface GEOPDMapsResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDBatchReverseGeocodeResult* _batchReverseGeocode;
	GEOPDCollectionResult* _collection;
	GEOPDPlaceQuestionnaireResult* _placeQuestionnaire;
	GEOPDPlace* _place;
	GEOPDPublisherResult* _publisher;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _resultType;
	struct {
		unsigned has_resultType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_batchReverseGeocode : 1;
		unsigned read_collection : 1;
		unsigned read_placeQuestionnaire : 1;
		unsigned read_place : 1;
		unsigned read_publisher : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasResultType; 
@property (assign,nonatomic) int resultType; 
@property (nonatomic,readonly) char hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) char hasCollection; 
@property (nonatomic,retain) GEOPDCollectionResult * collection; 
@property (nonatomic,readonly) char hasPublisher; 
@property (nonatomic,retain) GEOPDPublisherResult * publisher; 
@property (nonatomic,readonly) char hasPlaceQuestionnaire; 
@property (nonatomic,retain) GEOPDPlaceQuestionnaireResult * placeQuestionnaire; 
@property (nonatomic,readonly) char hasBatchReverseGeocode; 
@property (nonatomic,retain) GEOPDBatchReverseGeocodeResult * batchReverseGeocode; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDCollectionResult *)collection;
-(id)dictionaryRepresentation;
-(int)resultType;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCollection:(GEOPDCollectionResult *)arg1 ;
-(GEOPDPublisherResult *)publisher;
-(void)setPublisher:(GEOPDPublisherResult *)arg1 ;
-(GEOPDPlace *)place;
-(char)hasPlaceQuestionnaire;
-(GEOPDPlaceQuestionnaireResult *)placeQuestionnaire;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)clearSensitiveFields;
-(char)hasCollection;
-(char)hasPublisher;
-(char)hasPlace;
-(void)setHasResultType:(char)arg1 ;
-(char)hasResultType;
-(id)resultTypeAsString:(int)arg1 ;
-(int)StringAsResultType:(id)arg1 ;
-(void)setPlaceQuestionnaire:(GEOPDPlaceQuestionnaireResult *)arg1 ;
-(GEOPDBatchReverseGeocodeResult *)batchReverseGeocode;
-(void)setBatchReverseGeocode:(GEOPDBatchReverseGeocodeResult *)arg1 ;
-(char)hasBatchReverseGeocode;
@end

