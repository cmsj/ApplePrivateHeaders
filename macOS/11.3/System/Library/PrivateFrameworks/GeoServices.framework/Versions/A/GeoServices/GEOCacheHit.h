/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCacheHit : PBCodable <NSCopying> {

	unsigned _bytes;
	unsigned _count;
	int _requestorType;
	int _tileSourceType;
	struct {
		unsigned has_bytes : 1;
		unsigned has_count : 1;
		unsigned has_requestorType : 1;
		unsigned has_tileSourceType : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasRequestorType; 
@property (assign,nonatomic) int requestorType; 
@property (assign,nonatomic) char hasTileSourceType; 
@property (assign,nonatomic) int tileSourceType; 
@property (assign,nonatomic) char hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) char hasBytes; 
@property (assign,nonatomic) unsigned bytes; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)bytes;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasCount:(char)arg1 ;
-(char)hasCount;
-(void)setRequestorType:(int)arg1 ;
-(void)setTileSourceType:(int)arg1 ;
-(void)setBytes:(unsigned)arg1 ;
-(int)requestorType;
-(void)setHasRequestorType:(char)arg1 ;
-(char)hasRequestorType;
-(id)requestorTypeAsString:(int)arg1 ;
-(int)StringAsRequestorType:(id)arg1 ;
-(int)tileSourceType;
-(void)setHasTileSourceType:(char)arg1 ;
-(char)hasTileSourceType;
-(id)tileSourceTypeAsString:(int)arg1 ;
-(int)StringAsTileSourceType:(id)arg1 ;
-(void)setHasBytes:(char)arg1 ;
-(char)hasBytes;
@end
