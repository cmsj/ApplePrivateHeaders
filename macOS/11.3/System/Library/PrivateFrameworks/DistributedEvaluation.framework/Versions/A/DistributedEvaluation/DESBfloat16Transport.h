/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/Versions/A/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface DESBfloat16Transport : PBCodable <NSCopying> {

	unsigned _count;
	NSData* _data;
	SCD_Struct_DE3 _has;

}

@property (nonatomic,readonly) char hasData; 
@property (nonatomic,retain) NSData * data;               //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) char hasCount; 
@property (assign,nonatomic) unsigned count;              //@synthesize count=_count - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)count;
-(NSData *)data;
-(char)hasData;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(char)arg1 ;
-(char)hasCount;
@end

