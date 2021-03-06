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

@class GEOLatLng;

@interface GEOVLFLocation : PBCodable <NSCopying> {

	GEOECEFCoordinate _ecefLocation;
	double _heading;
	double _horizontalAccuracy;
	GEOLatLng* _location;
	double _verticalAccuracy;
	int _type;
	char _isFused;
	struct {
		unsigned has_ecefLocation : 1;
		unsigned has_heading : 1;
		unsigned has_horizontalAccuracy : 1;
		unsigned has_verticalAccuracy : 1;
		unsigned has_type : 1;
		unsigned has_isFused : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) char hasEcefLocation; 
@property (assign,nonatomic) GEOECEFCoordinate ecefLocation; 
@property (assign,nonatomic) char hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) char hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy; 
@property (assign,nonatomic) char hasHeading; 
@property (assign,nonatomic) double heading; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) char hasIsFused; 
@property (assign,nonatomic) char isFused; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(GEOLatLng *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)verticalAccuracy;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setHasHorizontalAccuracy:(char)arg1 ;
-(char)hasHorizontalAccuracy;
-(void)setHasVerticalAccuracy:(char)arg1 ;
-(char)hasVerticalAccuracy;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHeading:(double)arg1 ;
-(double)heading;
-(char)hasLocation;
-(void)setHasHeading:(char)arg1 ;
-(char)hasHeading;
-(void)setEcefLocation:(GEOECEFCoordinate)arg1 ;
-(void)setIsFused:(char)arg1 ;
-(GEOECEFCoordinate)ecefLocation;
-(void)setHasEcefLocation:(char)arg1 ;
-(char)hasEcefLocation;
-(char)isFused;
-(void)setHasIsFused:(char)arg1 ;
-(char)hasIsFused;
@end

