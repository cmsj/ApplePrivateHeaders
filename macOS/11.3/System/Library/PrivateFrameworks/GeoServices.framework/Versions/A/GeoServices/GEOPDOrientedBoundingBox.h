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

@class GEOPDOrientedPosition;

@interface GEOPDOrientedBoundingBox : PBCodable <NSCopying> {

	double _depth;
	double _height;
	GEOPDOrientedPosition* _position;
	double _width;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) char hasPosition; 
@property (nonatomic,retain) GEOPDOrientedPosition * position; 
@property (assign,nonatomic) char hasWidth; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) char hasHeight; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) char hasDepth; 
@property (assign,nonatomic) double depth; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setDepth:(double)arg1 ;
-(double)width;
-(double)height;
-(double)depth;
-(id)dictionaryRepresentation;
-(GEOPDOrientedPosition *)position;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasPosition;
-(void)setHasWidth:(char)arg1 ;
-(char)hasWidth;
-(void)setHasHeight:(char)arg1 ;
-(char)hasHeight;
-(void)setHasDepth:(char)arg1 ;
-(char)hasDepth;
@end

