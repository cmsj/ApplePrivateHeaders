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

@class PBDataReader, GEOPDAutocompleteEntry, GEOLatLng, GEOPDPlace, NSString;

@interface GEORPUserSearchInput : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	GEOLatLng* _coordinate;
	GEOPDPlace* _place;
	NSString* _searchString;
	NSString* _singleLineAddressString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _origin;
	struct {
		unsigned has_origin : 1;
		unsigned read_autocompleteEntry : 1;
		unsigned read_coordinate : 1;
		unsigned read_place : 1;
		unsigned read_searchString : 1;
		unsigned read_singleLineAddressString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,readonly) char hasSingleLineAddressString; 
@property (nonatomic,retain) NSString * singleLineAddressString; 
@property (nonatomic,readonly) char hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) char hasAutocompleteEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * autocompleteEntry; 
@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (assign,nonatomic) char hasOrigin; 
@property (assign,nonatomic) int origin; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)coordinate;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDPlace *)place;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasPlace;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(char)hasCoordinate;
-(char)hasSearchString;
-(void)setHasOrigin:(char)arg1 ;
-(char)hasOrigin;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(char)hasAutocompleteEntry;
-(NSString *)singleLineAddressString;
-(void)setSingleLineAddressString:(NSString *)arg1 ;
-(char)hasSingleLineAddressString;
@end

