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

@interface GEOPDLensProjection : PBCodable <NSCopying> {

	double _cx;
	double _cy;
	double _fovH;
	double _fovS;
	double _k2;
	double _k3;
	double _k4;
	double _lx;
	double _ly;
	int _type;
	struct {
		unsigned has_cx : 1;
		unsigned has_cy : 1;
		unsigned has_fovH : 1;
		unsigned has_fovS : 1;
		unsigned has_k2 : 1;
		unsigned has_k3 : 1;
		unsigned has_k4 : 1;
		unsigned has_lx : 1;
		unsigned has_ly : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) char hasFovS; 
@property (assign,nonatomic) double fovS; 
@property (assign,nonatomic) char hasFovH; 
@property (assign,nonatomic) double fovH; 
@property (assign,nonatomic) char hasK2; 
@property (assign,nonatomic) double k2; 
@property (assign,nonatomic) char hasK3; 
@property (assign,nonatomic) double k3; 
@property (assign,nonatomic) char hasK4; 
@property (assign,nonatomic) double k4; 
@property (assign,nonatomic) char hasCx; 
@property (assign,nonatomic) double cx; 
@property (assign,nonatomic) char hasCy; 
@property (assign,nonatomic) double cy; 
@property (assign,nonatomic) char hasLx; 
@property (assign,nonatomic) double lx; 
@property (assign,nonatomic) char hasLy; 
@property (assign,nonatomic) double ly; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(double)cx;
-(double)cy;
-(double)fovH;
-(double)fovS;
-(double)k2;
-(double)k3;
-(double)k4;
-(double)lx;
-(double)ly;
-(void)setFovS:(double)arg1 ;
-(void)setFovH:(double)arg1 ;
-(void)setK2:(double)arg1 ;
-(void)setK3:(double)arg1 ;
-(void)setK4:(double)arg1 ;
-(void)setCx:(double)arg1 ;
-(void)setCy:(double)arg1 ;
-(void)setLx:(double)arg1 ;
-(void)setLy:(double)arg1 ;
-(void)setHasFovS:(char)arg1 ;
-(char)hasFovS;
-(void)setHasFovH:(char)arg1 ;
-(char)hasFovH;
-(void)setHasK2:(char)arg1 ;
-(char)hasK2;
-(void)setHasK3:(char)arg1 ;
-(char)hasK3;
-(void)setHasK4:(char)arg1 ;
-(char)hasK4;
-(void)setHasCx:(char)arg1 ;
-(char)hasCx;
-(void)setHasCy:(char)arg1 ;
-(char)hasCy;
-(void)setHasLx:(char)arg1 ;
-(char)hasLx;
-(void)setHasLy:(char)arg1 ;
-(char)hasLy;
@end

