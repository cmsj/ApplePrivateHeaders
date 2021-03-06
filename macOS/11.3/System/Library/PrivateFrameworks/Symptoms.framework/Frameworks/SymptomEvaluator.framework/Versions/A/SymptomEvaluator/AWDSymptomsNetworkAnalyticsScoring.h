/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkAnalyticsScoring : PBCodable <NSCopying> {

	unsigned long long _lifetimeOldestItemSecs;
	unsigned long long _numberEntriesWithHomeLOI;
	unsigned long long _numberEntriesWithUnapprovedLOI;
	unsigned long long _numberEntriesWithUndefinedLOI;
	unsigned long long _numberEntriesWithWorkLOI;
	unsigned long long _scoredEntries;
	unsigned long long _scoredKnownGood;
	unsigned long long _timeSinceLastScoringSecs;
	unsigned long long _timestamp;
	int _networkType;
	int _scoringCompletionCode;
	SCD_Struct_AW31 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNetworkType; 
@property (assign,nonatomic) int networkType;                                                //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) char hasTimeSinceLastScoringSecs; 
@property (assign,nonatomic) unsigned long long timeSinceLastScoringSecs;                    //@synthesize timeSinceLastScoringSecs=_timeSinceLastScoringSecs - In the implementation block
@property (assign,nonatomic) char hasScoringCompletionCode; 
@property (assign,nonatomic) int scoringCompletionCode;                                      //@synthesize scoringCompletionCode=_scoringCompletionCode - In the implementation block
@property (assign,nonatomic) char hasScoredEntries; 
@property (assign,nonatomic) unsigned long long scoredEntries;                               //@synthesize scoredEntries=_scoredEntries - In the implementation block
@property (assign,nonatomic) char hasScoredKnownGood; 
@property (assign,nonatomic) unsigned long long scoredKnownGood;                             //@synthesize scoredKnownGood=_scoredKnownGood - In the implementation block
@property (assign,nonatomic) char hasLifetimeOldestItemSecs; 
@property (assign,nonatomic) unsigned long long lifetimeOldestItemSecs;                      //@synthesize lifetimeOldestItemSecs=_lifetimeOldestItemSecs - In the implementation block
@property (assign,nonatomic) char hasNumberEntriesWithHomeLOI; 
@property (assign,nonatomic) unsigned long long numberEntriesWithHomeLOI;                    //@synthesize numberEntriesWithHomeLOI=_numberEntriesWithHomeLOI - In the implementation block
@property (assign,nonatomic) char hasNumberEntriesWithWorkLOI; 
@property (assign,nonatomic) unsigned long long numberEntriesWithWorkLOI;                    //@synthesize numberEntriesWithWorkLOI=_numberEntriesWithWorkLOI - In the implementation block
@property (assign,nonatomic) char hasNumberEntriesWithUndefinedLOI; 
@property (assign,nonatomic) unsigned long long numberEntriesWithUndefinedLOI;               //@synthesize numberEntriesWithUndefinedLOI=_numberEntriesWithUndefinedLOI - In the implementation block
@property (assign,nonatomic) char hasNumberEntriesWithUnapprovedLOI; 
@property (assign,nonatomic) unsigned long long numberEntriesWithUnapprovedLOI;              //@synthesize numberEntriesWithUnapprovedLOI=_numberEntriesWithUnapprovedLOI - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasNetworkType:(char)arg1 ;
-(char)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setLifetimeOldestItemSecs:(unsigned long long)arg1 ;
-(void)setHasLifetimeOldestItemSecs:(char)arg1 ;
-(char)hasLifetimeOldestItemSecs;
-(unsigned long long)lifetimeOldestItemSecs;
-(void)setTimeSinceLastScoringSecs:(unsigned long long)arg1 ;
-(void)setHasTimeSinceLastScoringSecs:(char)arg1 ;
-(char)hasTimeSinceLastScoringSecs;
-(int)scoringCompletionCode;
-(void)setScoringCompletionCode:(int)arg1 ;
-(void)setHasScoringCompletionCode:(char)arg1 ;
-(char)hasScoringCompletionCode;
-(id)scoringCompletionCodeAsString:(int)arg1 ;
-(int)StringAsScoringCompletionCode:(id)arg1 ;
-(void)setScoredEntries:(unsigned long long)arg1 ;
-(void)setHasScoredEntries:(char)arg1 ;
-(char)hasScoredEntries;
-(void)setScoredKnownGood:(unsigned long long)arg1 ;
-(void)setHasScoredKnownGood:(char)arg1 ;
-(char)hasScoredKnownGood;
-(void)setNumberEntriesWithHomeLOI:(unsigned long long)arg1 ;
-(void)setHasNumberEntriesWithHomeLOI:(char)arg1 ;
-(char)hasNumberEntriesWithHomeLOI;
-(void)setNumberEntriesWithWorkLOI:(unsigned long long)arg1 ;
-(void)setHasNumberEntriesWithWorkLOI:(char)arg1 ;
-(char)hasNumberEntriesWithWorkLOI;
-(void)setNumberEntriesWithUndefinedLOI:(unsigned long long)arg1 ;
-(void)setHasNumberEntriesWithUndefinedLOI:(char)arg1 ;
-(char)hasNumberEntriesWithUndefinedLOI;
-(void)setNumberEntriesWithUnapprovedLOI:(unsigned long long)arg1 ;
-(void)setHasNumberEntriesWithUnapprovedLOI:(char)arg1 ;
-(char)hasNumberEntriesWithUnapprovedLOI;
-(unsigned long long)timeSinceLastScoringSecs;
-(unsigned long long)scoredEntries;
-(unsigned long long)scoredKnownGood;
-(unsigned long long)numberEntriesWithHomeLOI;
-(unsigned long long)numberEntriesWithWorkLOI;
-(unsigned long long)numberEntriesWithUndefinedLOI;
-(unsigned long long)numberEntriesWithUnapprovedLOI;
@end

