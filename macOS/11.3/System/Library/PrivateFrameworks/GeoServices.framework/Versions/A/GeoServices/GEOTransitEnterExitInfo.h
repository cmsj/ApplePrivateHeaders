/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _accessPointIndex;
	unsigned _stopIndex;
	unsigned _transferTime;
	char _displayStop;
	char _uncertainArrival;
	struct {
		unsigned has_accessPointIndex : 1;
		unsigned has_stopIndex : 1;
		unsigned has_transferTime : 1;
		unsigned has_displayStop : 1;
		unsigned has_uncertainArrival : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex; 
@property (assign,nonatomic) char hasStopIndex; 
@property (assign,nonatomic) unsigned stopIndex; 
@property (assign,nonatomic) char hasDisplayStop; 
@property (assign,nonatomic) char displayStop; 
@property (assign,nonatomic) char hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime; 
@property (assign,nonatomic) char hasUncertainArrival; 
@property (assign,nonatomic) char uncertainArrival; 
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
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(void)setStopIndex:(unsigned)arg1 ;
-(void)setDisplayStop:(char)arg1 ;
-(void)setTransferTime:(unsigned)arg1 ;
-(void)setUncertainArrival:(char)arg1 ;
-(unsigned)accessPointIndex;
-(void)setHasAccessPointIndex:(char)arg1 ;
-(char)hasAccessPointIndex;
-(unsigned)stopIndex;
-(void)setHasStopIndex:(char)arg1 ;
-(char)hasStopIndex;
-(char)displayStop;
-(void)setHasDisplayStop:(char)arg1 ;
-(char)hasDisplayStop;
-(unsigned)transferTime;
-(void)setHasTransferTime:(char)arg1 ;
-(char)hasTransferTime;
-(char)uncertainArrival;
-(void)setHasUncertainArrival:(char)arg1 ;
-(char)hasUncertainArrival;
@end

