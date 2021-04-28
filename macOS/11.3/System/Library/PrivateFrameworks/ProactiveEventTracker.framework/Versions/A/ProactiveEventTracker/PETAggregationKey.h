/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/Versions/A/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PETRawMessage;

@interface PETAggregationKey : PBCodable <NSCopying> {

	double _bucket;
	unsigned _datestamp;
	PETRawMessage* _rawMessage;
	int _type;
	SCD_Struct_PE4 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasDatestamp; 
@property (assign,nonatomic) unsigned datestamp;                      //@synthesize datestamp=_datestamp - In the implementation block
@property (assign,nonatomic) char hasBucket; 
@property (assign,nonatomic) double bucket;                           //@synthesize bucket=_bucket - In the implementation block
@property (nonatomic,readonly) char hasRawMessage; 
@property (nonatomic,retain) PETRawMessage * rawMessage;              //@synthesize rawMessage=_rawMessage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(double)bucket;
-(void)setBucket:(double)arg1 ;
-(void)setDatestamp:(unsigned)arg1 ;
-(void)setHasDatestamp:(char)arg1 ;
-(char)hasDatestamp;
-(void)setHasBucket:(char)arg1 ;
-(char)hasBucket;
-(char)hasRawMessage;
-(unsigned)datestamp;
-(PETRawMessage *)rawMessage;
-(void)setRawMessage:(PETRawMessage *)arg1 ;
@end
