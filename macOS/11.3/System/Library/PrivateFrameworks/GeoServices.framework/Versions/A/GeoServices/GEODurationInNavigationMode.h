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

@interface GEODurationInNavigationMode : PBCodable <NSCopying> {

	double _duration;
	int _type;
	SCD_Struct_GE119 _flags;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) double duration; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
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
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
@end

