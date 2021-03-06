/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaTopLevelUnionType.h>

@class PETSchemaPETMetadata, NSArray, NSData;

@interface PETSchemaPETUpload : SISchemaTopLevelUnionType {

	PETSchemaPETMetadata* _metadata;
	NSArray* _aggregated_messages;
	NSArray* _unaggregated_messages;
	char _is_compressed;
	NSData* _compressed_messages;
	NSArray* _trial_messages;
	NSData* _compressed_data;
	SCD_Struct_SI0 _has;
	char _hasMetadata;
	char _hasCompressed_messages;
	char _hasCompressed_data;

}

@property (nonatomic,retain) PETSchemaPETMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) char hasMetadata;                             //@synthesize hasMetadata=_hasMetadata - In the implementation block
@property (nonatomic,copy) NSArray * aggregated_messages;                  //@synthesize aggregated_messages=_aggregated_messages - In the implementation block
@property (nonatomic,copy) NSArray * unaggregated_messages;                //@synthesize unaggregated_messages=_unaggregated_messages - In the implementation block
@property (assign,nonatomic) char is_compressed;                           //@synthesize is_compressed=_is_compressed - In the implementation block
@property (assign,nonatomic) char hasIs_compressed; 
@property (nonatomic,copy) NSData * compressed_messages;                   //@synthesize compressed_messages=_compressed_messages - In the implementation block
@property (assign,nonatomic) char hasCompressed_messages;                  //@synthesize hasCompressed_messages=_hasCompressed_messages - In the implementation block
@property (nonatomic,copy) NSArray * trial_messages;                       //@synthesize trial_messages=_trial_messages - In the implementation block
@property (nonatomic,copy) NSData * compressed_data;                       //@synthesize compressed_data=_compressed_data - In the implementation block
@property (assign,nonatomic) char hasCompressed_data;                      //@synthesize hasCompressed_data=_hasCompressed_data - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PETSchemaPETMetadata *)metadata;
-(void)setMetadata:(PETSchemaPETMetadata *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(char)hasMetadata;
-(NSData *)jsonData;
-(int)getAnyEventType;
-(void)setHasMetadata:(char)arg1 ;
-(void)addAggregated_messages:(id)arg1 ;
-(void)addUnaggregated_messages:(id)arg1 ;
-(void)setIs_compressed:(char)arg1 ;
-(void)setCompressed_messages:(NSData *)arg1 ;
-(void)addTrial_messages:(id)arg1 ;
-(void)setCompressed_data:(NSData *)arg1 ;
-(NSData *)compressed_messages;
-(NSData *)compressed_data;
-(NSArray *)aggregated_messages;
-(NSArray *)unaggregated_messages;
-(char)is_compressed;
-(NSArray *)trial_messages;
-(void)clearAggregated_messages;
-(unsigned long long)aggregated_messagesCount;
-(id)aggregated_messagesAtIndex:(unsigned long long)arg1 ;
-(void)clearUnaggregated_messages;
-(unsigned long long)unaggregated_messagesCount;
-(id)unaggregated_messagesAtIndex:(unsigned long long)arg1 ;
-(char)hasIs_compressed;
-(void)setHasIs_compressed:(char)arg1 ;
-(char)hasCompressed_messages;
-(void)clearTrial_messages;
-(unsigned long long)trial_messagesCount;
-(id)trial_messagesAtIndex:(unsigned long long)arg1 ;
-(char)hasCompressed_data;
-(void)setAggregated_messages:(NSArray *)arg1 ;
-(void)setUnaggregated_messages:(NSArray *)arg1 ;
-(void)setTrial_messages:(NSArray *)arg1 ;
-(void)setHasCompressed_messages:(char)arg1 ;
-(void)setHasCompressed_data:(char)arg1 ;
@end

