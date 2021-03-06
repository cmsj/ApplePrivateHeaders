/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNRouteCoordinate : PBCodable <NSCopying> {

	unsigned _index;
	float _offset;
	SCD_Struct_MN21 _has;

}

@property (assign,nonatomic) char hasIndex; 
@property (assign,nonatomic) unsigned index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) char hasOffset; 
@property (assign,nonatomic) float offset;                //@synthesize offset=_offset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)index;
-(float)offset;
-(void)setIndex:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOffset:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasIndex:(char)arg1 ;
-(char)hasIndex;
-(void)setHasOffset:(char)arg1 ;
-(char)hasOffset;
@end

