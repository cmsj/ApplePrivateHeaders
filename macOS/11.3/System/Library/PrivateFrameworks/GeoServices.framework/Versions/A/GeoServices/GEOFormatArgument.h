/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatToken.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOCountdownData, GEOMeasurementData, GEONumberData, GEOPrice, NSMutableArray;

@interface GEOFormatArgument : PBCodable <GEOServerFormatToken, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _valInt3s;
	GEOPBTransitArtwork* _artwork;
	GEOCountdownData* _countdownData;
	GEOMeasurementData* _measurementData;
	GEONumberData* _numberData;
	GEOPrice* _price;
	NSMutableArray* _timestampDatas;
	NSString* _token;
	NSString* _valString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _format;
	unsigned _valInt1;
	unsigned _valInt2;
	struct {
		unsigned has_format : 1;
		unsigned has_valInt1 : 1;
		unsigned has_valInt2 : 1;
		unsigned read_unknownFields : 1;
		unsigned read_valInt3s : 1;
		unsigned read_artwork : 1;
		unsigned read_countdownData : 1;
		unsigned read_measurementData : 1;
		unsigned read_numberData : 1;
		unsigned read_price : 1;
		unsigned read_timestampDatas : 1;
		unsigned read_token : 1;
		unsigned read_valString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * token; 
@property (nonatomic,readonly) unsigned value1; 
@property (nonatomic,readonly) unsigned value2; 
@property (nonatomic,readonly) NSArray * value3s; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) float percentageValue; 
@property (nonatomic,readonly) char shouldScaleUnits; 
@property (nonatomic,readonly) id<GEOServerFormatTokenPriceValue> priceValue; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkValue; 
@property (nonatomic,readonly) NSArray * timeStampValues; 
@property (nonatomic,readonly) id<GEOServerFormatTokenCountdownValue> countdownValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasToken; 
@property (nonatomic,retain) NSString * token; 
@property (assign,nonatomic) char hasValInt1; 
@property (assign,nonatomic) unsigned valInt1; 
@property (assign,nonatomic) char hasValInt2; 
@property (assign,nonatomic) unsigned valInt2; 
@property (nonatomic,readonly) unsigned long long valInt3sCount; 
@property (nonatomic,readonly) unsigned* valInt3s; 
@property (nonatomic,readonly) char hasValString; 
@property (nonatomic,retain) NSString * valString; 
@property (nonatomic,readonly) char hasPrice; 
@property (nonatomic,retain) GEOPrice * price; 
@property (nonatomic,readonly) char hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork; 
@property (nonatomic,retain) NSMutableArray * timestampDatas; 
@property (nonatomic,readonly) char hasCountdownData; 
@property (nonatomic,retain) GEOCountdownData * countdownData; 
@property (nonatomic,readonly) char hasNumberData; 
@property (nonatomic,retain) GEONumberData * numberData; 
@property (nonatomic,readonly) char hasMeasurementData; 
@property (nonatomic,retain) GEOMeasurementData * measurementData; 
@property (assign,nonatomic) char hasFormat; 
@property (assign,nonatomic) int format; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)timestampDataType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSString *)stringValue;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)token;
-(int)format;
-(void)setFormat:(int)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOPrice *)price;
-(void)setPrice:(GEOPrice *)arg1 ;
-(char)hasPrice;
-(unsigned)value1;
-(unsigned)value2;
-(NSArray *)value3s;
-(id<GEOServerFormatTokenPriceValue>)priceValue;
-(id<GEOTransitArtworkDataSource>)artworkValue;
-(NSArray *)timeStampValues;
-(char)hasToken;
-(NSString *)valString;
-(GEOPBTransitArtwork *)artwork;
-(GEOCountdownData *)countdownData;
-(GEONumberData *)numberData;
-(GEOMeasurementData *)measurementData;
-(void)setValInt1:(unsigned)arg1 ;
-(void)setValInt2:(unsigned)arg1 ;
-(void)addValInt3:(unsigned)arg1 ;
-(void)setValString:(NSString *)arg1 ;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)addTimestampData:(id)arg1 ;
-(void)setCountdownData:(GEOCountdownData *)arg1 ;
-(void)setNumberData:(GEONumberData *)arg1 ;
-(void)setMeasurementData:(GEOMeasurementData *)arg1 ;
-(unsigned long long)valInt3sCount;
-(void)clearValInt3s;
-(unsigned)valInt3AtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timestampDatasCount;
-(void)clearTimestampDatas;
-(id)timestampDataAtIndex:(unsigned long long)arg1 ;
-(unsigned)valInt1;
-(void)setHasValInt1:(char)arg1 ;
-(char)hasValInt1;
-(unsigned)valInt2;
-(void)setHasValInt2:(char)arg1 ;
-(char)hasValInt2;
-(unsigned*)valInt3s;
-(void)setValInt3s:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(char)hasValString;
-(char)hasArtwork;
-(NSMutableArray *)timestampDatas;
-(void)setTimestampDatas:(NSMutableArray *)arg1 ;
-(char)hasCountdownData;
-(char)hasNumberData;
-(char)hasMeasurementData;
-(void)setHasFormat:(char)arg1 ;
-(char)hasFormat;
-(id)formatAsString:(int)arg1 ;
-(int)StringAsFormat:(id)arg1 ;
-(float)percentageValue;
-(id<GEOServerFormatTokenCountdownValue>)countdownValue;
-(char)shouldScaleUnits;
@end
