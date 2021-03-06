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

@class PBDataReader, PBUnknownFields, NSString, GEOStyleAttributes;

@interface GEOPBTransitBrand : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	NSString* _nameDisplayString;
	GEOStyleAttributes* _styleAttributes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _brandIndex;
	struct {
		unsigned has_muid : 1;
		unsigned has_brandIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_nameDisplayString : 1;
		unsigned read_styleAttributes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasBrandIndex; 
@property (assign,nonatomic) unsigned brandIndex; 
@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) char hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) char hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString; 
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
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setHasMuid:(char)arg1 ;
-(char)hasMuid;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(char)hasStyleAttributes;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(NSString *)nameDisplayString;
-(void)setBrandIndex:(unsigned)arg1 ;
-(unsigned)brandIndex;
-(void)setHasBrandIndex:(char)arg1 ;
-(char)hasBrandIndex;
-(char)hasNameDisplayString;
@end

