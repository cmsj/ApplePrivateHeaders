/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class PETSchemaPETRawMessage, NSData;

@interface PETSchemaPETAggregationKey : SISchemaInstrumentationMessage {

	int _type;
	unsigned _datestamp;
	double _bucket;
	PETSchemaPETRawMessage* _raw_message;
	SCD_Struct_LT1 _has;
	char _hasRaw_message;

}

@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) unsigned datestamp;                                //@synthesize datestamp=_datestamp - In the implementation block
@property (assign,nonatomic) char hasDatestamp; 
@property (assign,nonatomic) double bucket;                                     //@synthesize bucket=_bucket - In the implementation block
@property (assign,nonatomic) char hasBucket; 
@property (nonatomic,retain) PETSchemaPETRawMessage * raw_message;              //@synthesize raw_message=_raw_message - In the implementation block
@property (assign,nonatomic) char hasRaw_message;                               //@synthesize hasRaw_message=_hasRaw_message - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(double)bucket;
-(void)setBucket:(double)arg1 ;
-(void)setDatestamp:(unsigned)arg1 ;
-(void)setHasDatestamp:(char)arg1 ;
-(char)hasDatestamp;
-(void)setHasBucket:(char)arg1 ;
-(char)hasBucket;
-(unsigned)datestamp;
-(void)setRaw_message:(PETSchemaPETRawMessage *)arg1 ;
-(PETSchemaPETRawMessage *)raw_message;
-(char)hasRaw_message;
-(void)setHasRaw_message:(char)arg1 ;
@end
