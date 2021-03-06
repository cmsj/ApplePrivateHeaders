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

@class PBDataReader, PBUnknownFields, NSString, GEOLatLngE7;

@interface GEOPDISO3166Code : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _countryCode;
	GEOLatLngE7* _location;
	NSString* _subdivisonCode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	char _isDisputed;
	struct {
		unsigned has_isDisputed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_countryCode : 1;
		unsigned read_location : 1;
		unsigned read_subdivisonCode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLatLngE7 * location; 
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) char hasSubdivisonCode; 
@property (nonatomic,retain) NSString * subdivisonCode; 
@property (assign,nonatomic) char hasIsDisputed; 
@property (assign,nonatomic) char isDisputed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(GEOLatLngE7 *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLngE7 *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)isDisputed;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasCountryCode;
-(char)hasLocation;
-(void)setIsDisputed:(char)arg1 ;
-(char)hasIsDisputed;
-(void)setHasIsDisputed:(char)arg1 ;
-(NSString *)subdivisonCode;
-(void)setSubdivisonCode:(NSString *)arg1 ;
-(char)hasSubdivisonCode;
@end

