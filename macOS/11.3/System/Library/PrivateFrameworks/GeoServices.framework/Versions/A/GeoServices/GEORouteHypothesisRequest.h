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

@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBCodable <NSCopying> {

	double _arrivalDate;
	GEOMapItemStorage* _destinationLocation;
	double _expirationDate;
	int _transportType;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) char hasArrivalDate; 
@property (assign,nonatomic) double arrivalDate; 
@property (nonatomic,readonly) char hasDestinationLocation; 
@property (nonatomic,retain) GEOMapItemStorage * destinationLocation; 
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) char hasExpirationDate; 
@property (assign,nonatomic) double expirationDate; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)expirationDate;
-(void)setExpirationDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(GEOMapItemStorage *)destinationLocation;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasTransportType;
-(void)setDestinationLocation:(GEOMapItemStorage *)arg1 ;
-(char)hasDestinationLocation;
-(void)setHasTransportType:(char)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(double)arrivalDate;
-(void)setArrivalDate:(double)arg1 ;
-(void)setHasArrivalDate:(char)arg1 ;
-(char)hasArrivalDate;
-(void)setHasExpirationDate:(char)arg1 ;
-(char)hasExpirationDate;
@end
