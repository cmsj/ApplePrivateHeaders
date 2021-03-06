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

@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying> {

	double _distanceFromOrigin;
	double _timeFromOrigin;
	int _transportMode;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) char hasTransportMode; 
@property (assign,nonatomic) int transportMode; 
@property (assign,nonatomic) char hasDistanceFromOrigin; 
@property (assign,nonatomic) double distanceFromOrigin; 
@property (assign,nonatomic) char hasTimeFromOrigin; 
@property (assign,nonatomic) double timeFromOrigin; 
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
-(void)setTransportMode:(int)arg1 ;
-(void)setDistanceFromOrigin:(double)arg1 ;
-(void)setTimeFromOrigin:(double)arg1 ;
-(int)transportMode;
-(void)setHasTransportMode:(char)arg1 ;
-(char)hasTransportMode;
-(id)transportModeAsString:(int)arg1 ;
-(int)StringAsTransportMode:(id)arg1 ;
-(double)distanceFromOrigin;
-(void)setHasDistanceFromOrigin:(char)arg1 ;
-(char)hasDistanceFromOrigin;
-(double)timeFromOrigin;
-(void)setHasTimeFromOrigin:(char)arg1 ;
-(char)hasTimeFromOrigin;
@end

