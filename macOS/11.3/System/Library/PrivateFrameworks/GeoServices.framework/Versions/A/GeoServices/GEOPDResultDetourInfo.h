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

@class PBUnknownFields;

@interface GEOPDResultDetourInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _detourDistance;
	int _detourTime;
	unsigned _distanceToPlace;
	unsigned _timeToPlace;
	struct {
		unsigned has_detourDistance : 1;
		unsigned has_detourTime : 1;
		unsigned has_distanceToPlace : 1;
		unsigned has_timeToPlace : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasDetourTime; 
@property (assign,nonatomic) int detourTime; 
@property (assign,nonatomic) char hasTimeToPlace; 
@property (assign,nonatomic) unsigned timeToPlace; 
@property (assign,nonatomic) char hasDetourDistance; 
@property (assign,nonatomic) int detourDistance; 
@property (assign,nonatomic) char hasDistanceToPlace; 
@property (assign,nonatomic) unsigned distanceToPlace; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setDetourTime:(int)arg1 ;
-(void)setTimeToPlace:(unsigned)arg1 ;
-(void)setDetourDistance:(int)arg1 ;
-(void)setDistanceToPlace:(unsigned)arg1 ;
-(int)detourTime;
-(void)setHasDetourTime:(char)arg1 ;
-(char)hasDetourTime;
-(unsigned)timeToPlace;
-(void)setHasTimeToPlace:(char)arg1 ;
-(char)hasTimeToPlace;
-(int)detourDistance;
-(void)setHasDetourDistance:(char)arg1 ;
-(char)hasDetourDistance;
-(unsigned)distanceToPlace;
-(void)setHasDistanceToPlace:(char)arg1 ;
-(char)hasDistanceToPlace;
@end

