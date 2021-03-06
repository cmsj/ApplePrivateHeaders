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

@class PBUnknownFields, GEOLocation;

@interface GEORoutingPathPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLocation* _location;
	long long _roadId;
	unsigned _fow;
	unsigned _frc;
	int _type;
	struct {
		unsigned has_roadId : 1;
		unsigned has_fow : 1;
		unsigned has_frc : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) char hasRoadId; 
@property (assign,nonatomic) long long roadId; 
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) char hasFrc; 
@property (assign,nonatomic) unsigned frc; 
@property (assign,nonatomic) char hasFow; 
@property (assign,nonatomic) unsigned fow; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)clearSensitiveFields;
-(char)hasLocation;
-(void)setRoadId:(long long)arg1 ;
-(void)setFrc:(unsigned)arg1 ;
-(void)setFow:(unsigned)arg1 ;
-(long long)roadId;
-(void)setHasRoadId:(char)arg1 ;
-(char)hasRoadId;
-(unsigned)frc;
-(void)setHasFrc:(char)arg1 ;
-(char)hasFrc;
-(unsigned)fow;
-(void)setHasFow:(char)arg1 ;
-(char)hasFow;
@end

