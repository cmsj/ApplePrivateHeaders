/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBIAdConfig : PBCodable <NSCopying> {

	long long _segmentsHistoryWindowInterval;
	long long _segmentsMinimumArticleCount;
	long long _segmentsSubmissionFrequency;
	double _segmentsThreshold;
	char _segmentsEnabled;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) char hasSegmentsEnabled; 
@property (assign,nonatomic) char segmentsEnabled;                                 //@synthesize segmentsEnabled=_segmentsEnabled - In the implementation block
@property (assign,nonatomic) char hasSegmentsThreshold; 
@property (assign,nonatomic) double segmentsThreshold;                             //@synthesize segmentsThreshold=_segmentsThreshold - In the implementation block
@property (assign,nonatomic) char hasSegmentsSubmissionFrequency; 
@property (assign,nonatomic) long long segmentsSubmissionFrequency;                //@synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency - In the implementation block
@property (assign,nonatomic) char hasSegmentsHistoryWindowInterval; 
@property (assign,nonatomic) long long segmentsHistoryWindowInterval;              //@synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval - In the implementation block
@property (assign,nonatomic) char hasSegmentsMinimumArticleCount; 
@property (assign,nonatomic) long long segmentsMinimumArticleCount;                //@synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSegmentsEnabled:(char)arg1 ;
-(void)setHasSegmentsEnabled:(char)arg1 ;
-(char)hasSegmentsEnabled;
-(void)setSegmentsThreshold:(double)arg1 ;
-(void)setHasSegmentsThreshold:(char)arg1 ;
-(char)hasSegmentsThreshold;
-(void)setSegmentsSubmissionFrequency:(long long)arg1 ;
-(void)setHasSegmentsSubmissionFrequency:(char)arg1 ;
-(char)hasSegmentsSubmissionFrequency;
-(void)setSegmentsHistoryWindowInterval:(long long)arg1 ;
-(void)setHasSegmentsHistoryWindowInterval:(char)arg1 ;
-(char)hasSegmentsHistoryWindowInterval;
-(void)setSegmentsMinimumArticleCount:(long long)arg1 ;
-(void)setHasSegmentsMinimumArticleCount:(char)arg1 ;
-(char)hasSegmentsMinimumArticleCount;
-(char)segmentsEnabled;
-(double)segmentsThreshold;
-(long long)segmentsSubmissionFrequency;
-(long long)segmentsHistoryWindowInterval;
-(long long)segmentsMinimumArticleCount;
@end
