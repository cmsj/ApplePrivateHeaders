/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDGeographicCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _latitude;
	double _longitude;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) char hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) char hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) char hasAltitude; 
@property (assign,nonatomic) double altitude; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(double)altitude;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(void)setHasLatitude:(char)arg1 ;
-(char)hasLatitude;
-(void)setHasLongitude:(char)arg1 ;
-(char)hasLongitude;
-(void)setHasAltitude:(char)arg1 ;
-(char)hasAltitude;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
@end
