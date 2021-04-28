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

@interface GEOTileSetInfo : PBCodable <NSCopying> {

	unsigned _count;
	int _style;
	unsigned _uncertainty;
	unsigned _zoom;
	struct {
		unsigned has_count : 1;
		unsigned has_style : 1;
		unsigned has_uncertainty : 1;
		unsigned has_zoom : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) char hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) char hasZoom; 
@property (assign,nonatomic) unsigned zoom; 
@property (assign,nonatomic) char hasUncertainty; 
@property (assign,nonatomic) unsigned uncertainty; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(int)style;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)uncertainty;
-(void)setUncertainty:(unsigned)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasStyle:(char)arg1 ;
-(char)hasStyle;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasCount:(char)arg1 ;
-(char)hasCount;
-(void)setZoom:(unsigned)arg1 ;
-(unsigned)zoom;
-(void)setHasZoom:(char)arg1 ;
-(char)hasZoom;
-(void)setHasUncertainty:(char)arg1 ;
-(char)hasUncertainty;
@end
