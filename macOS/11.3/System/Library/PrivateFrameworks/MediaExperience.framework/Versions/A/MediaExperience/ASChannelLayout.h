/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASChannelLayout : PBCodable <NSCopying> {

	unsigned _bitmap;
	NSMutableArray* _descriptions;
	unsigned _tag;
	SCD_Struct_AS26 _has;

}

@property (assign,nonatomic) unsigned tag;                               //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) char hasBitmap; 
@property (assign,nonatomic) unsigned bitmap;                            //@synthesize bitmap=_bitmap - In the implementation block
@property (nonatomic,retain) NSMutableArray * descriptions;              //@synthesize descriptions=_descriptions - In the implementation block
+(Class)descriptionsType;
-(void)setHasBitmap:(char)arg1 ;
-(char)hasBitmap;
-(void)setBitmap:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTag:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)tag;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDescriptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)descriptions;
-(void)addDescriptions:(id)arg1 ;
-(void)clearDescriptions;
-(unsigned long long)descriptionsCount;
-(id)descriptionsAtIndex:(unsigned long long)arg1 ;
-(unsigned)bitmap;
@end

