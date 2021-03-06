/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ContactEmbeddingAnalysisPETNeuralNetEmbedding : PBCodable <NSCopying> {

	SCD_Struct_Co5* _embeddings;

}

@property (nonatomic,readonly) unsigned long long embeddingsCount; 
@property (nonatomic,readonly) float* embeddings; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEmbeddings:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)embeddingsCount;
-(void)clearEmbeddings;
-(float)embeddingsAtIndex:(unsigned long long)arg1 ;
-(void)addEmbeddings:(float)arg1 ;
-(float*)embeddings;
@end

