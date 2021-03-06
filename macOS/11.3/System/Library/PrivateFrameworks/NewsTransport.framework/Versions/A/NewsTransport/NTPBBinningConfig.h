/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBBinningConfig : PBCodable <NSCopying> {

	double _decreaseConsumptionThreshold;
	long long _evaluationFrequency;
	long long _historyLength;
	double _increaseConsumptionThreshold;
	long long _minimumArticleCount;
	int _defaultChannelBin;
	int _defaultTopicBin;
	char _enabled;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) char hasEnabled; 
@property (assign,nonatomic) char enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char hasEvaluationFrequency; 
@property (assign,nonatomic) long long evaluationFrequency;                     //@synthesize evaluationFrequency=_evaluationFrequency - In the implementation block
@property (assign,nonatomic) char hasHistoryLength; 
@property (assign,nonatomic) long long historyLength;                           //@synthesize historyLength=_historyLength - In the implementation block
@property (assign,nonatomic) char hasIncreaseConsumptionThreshold; 
@property (assign,nonatomic) double increaseConsumptionThreshold;               //@synthesize increaseConsumptionThreshold=_increaseConsumptionThreshold - In the implementation block
@property (assign,nonatomic) char hasDecreaseConsumptionThreshold; 
@property (assign,nonatomic) double decreaseConsumptionThreshold;               //@synthesize decreaseConsumptionThreshold=_decreaseConsumptionThreshold - In the implementation block
@property (assign,nonatomic) char hasMinimumArticleCount; 
@property (assign,nonatomic) long long minimumArticleCount;                     //@synthesize minimumArticleCount=_minimumArticleCount - In the implementation block
@property (assign,nonatomic) char hasDefaultTopicBin; 
@property (assign,nonatomic) int defaultTopicBin;                               //@synthesize defaultTopicBin=_defaultTopicBin - In the implementation block
@property (assign,nonatomic) char hasDefaultChannelBin; 
@property (assign,nonatomic) int defaultChannelBin;                             //@synthesize defaultChannelBin=_defaultChannelBin - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasEnabled:(char)arg1 ;
-(char)hasEnabled;
-(long long)historyLength;
-(void)setEvaluationFrequency:(long long)arg1 ;
-(void)setHasEvaluationFrequency:(char)arg1 ;
-(char)hasEvaluationFrequency;
-(void)setHistoryLength:(long long)arg1 ;
-(void)setHasHistoryLength:(char)arg1 ;
-(char)hasHistoryLength;
-(void)setIncreaseConsumptionThreshold:(double)arg1 ;
-(void)setHasIncreaseConsumptionThreshold:(char)arg1 ;
-(char)hasIncreaseConsumptionThreshold;
-(void)setDecreaseConsumptionThreshold:(double)arg1 ;
-(void)setHasDecreaseConsumptionThreshold:(char)arg1 ;
-(char)hasDecreaseConsumptionThreshold;
-(void)setMinimumArticleCount:(long long)arg1 ;
-(void)setHasMinimumArticleCount:(char)arg1 ;
-(char)hasMinimumArticleCount;
-(int)defaultTopicBin;
-(void)setDefaultTopicBin:(int)arg1 ;
-(void)setHasDefaultTopicBin:(char)arg1 ;
-(char)hasDefaultTopicBin;
-(int)defaultChannelBin;
-(void)setDefaultChannelBin:(int)arg1 ;
-(void)setHasDefaultChannelBin:(char)arg1 ;
-(char)hasDefaultChannelBin;
-(long long)evaluationFrequency;
-(double)increaseConsumptionThreshold;
-(double)decreaseConsumptionThreshold;
-(long long)minimumArticleCount;
@end

