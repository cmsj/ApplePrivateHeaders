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

@class PBDataReader, GEOPDAddressObject, NSString, GEOAddress;

@interface GEORPAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDAddressObject* _addressObject;
	NSString* _addressString;
	GEOAddress* _geoAddress;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_addressObject : 1;
		unsigned read_addressString : 1;
		unsigned read_geoAddress : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasGeoAddress; 
@property (nonatomic,retain) GEOAddress * geoAddress; 
@property (nonatomic,readonly) char hasAddressString; 
@property (nonatomic,retain) NSString * addressString; 
@property (nonatomic,readonly) char hasAddressObject; 
@property (nonatomic,retain) GEOPDAddressObject * addressObject; 
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
-(NSString *)addressString;
-(void)setAddressString:(NSString *)arg1 ;
-(GEOPDAddressObject *)addressObject;
-(GEOAddress *)geoAddress;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setAddressObject:(GEOPDAddressObject *)arg1 ;
-(char)hasAddressObject;
-(void)setGeoAddress:(GEOAddress *)arg1 ;
-(char)hasGeoAddress;
-(char)hasAddressString;
@end
