/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWRMStreamingReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _counter;
	unsigned _duration;
	unsigned _durationLPM;
	unsigned _durationOffline;
	NSMutableArray* _instValues;
	unsigned _numStall;
	unsigned _samplePeriods;
	char _isEnd;
	char _lPM;
	char _offline;
	char _online;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasSamplePeriods; 
@property (assign,nonatomic) unsigned samplePeriods;                    //@synthesize samplePeriods=_samplePeriods - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasIsEnd; 
@property (assign,nonatomic) char isEnd;                                //@synthesize isEnd=_isEnd - In the implementation block
@property (assign,nonatomic) char hasNumStall; 
@property (assign,nonatomic) unsigned numStall;                         //@synthesize numStall=_numStall - In the implementation block
@property (assign,nonatomic) char hasLPM; 
@property (assign,nonatomic) char lPM;                                  //@synthesize lPM=_lPM - In the implementation block
@property (assign,nonatomic) char hasOnline; 
@property (assign,nonatomic) char online;                               //@synthesize online=_online - In the implementation block
@property (assign,nonatomic) char hasOffline; 
@property (assign,nonatomic) char offline;                              //@synthesize offline=_offline - In the implementation block
@property (assign,nonatomic) char hasDurationLPM; 
@property (assign,nonatomic) unsigned durationLPM;                      //@synthesize durationLPM=_durationLPM - In the implementation block
@property (assign,nonatomic) char hasDurationOffline; 
@property (assign,nonatomic) unsigned durationOffline;                  //@synthesize durationOffline=_durationOffline - In the implementation block
@property (nonatomic,retain) NSMutableArray * instValues;               //@synthesize instValues=_instValues - In the implementation block
@property (assign,nonatomic) char hasCounter; 
@property (assign,nonatomic) unsigned counter;                          //@synthesize counter=_counter - In the implementation block
+(Class)instValuesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)counter;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)online;
-(void)setOnline:(char)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setOffline:(char)arg1 ;
-(char)offline;
-(void)setCounter:(unsigned)arg1 ;
-(void)setHasCounter:(char)arg1 ;
-(char)hasCounter;
-(void)setInstValues:(NSMutableArray *)arg1 ;
-(void)addInstValues:(id)arg1 ;
-(unsigned long long)instValuesCount;
-(void)clearInstValues;
-(id)instValuesAtIndex:(unsigned long long)arg1 ;
-(void)setSamplePeriods:(unsigned)arg1 ;
-(void)setHasSamplePeriods:(char)arg1 ;
-(char)hasSamplePeriods;
-(void)setIsEnd:(char)arg1 ;
-(void)setHasIsEnd:(char)arg1 ;
-(char)hasIsEnd;
-(void)setNumStall:(unsigned)arg1 ;
-(void)setHasNumStall:(char)arg1 ;
-(char)hasNumStall;
-(void)setLPM:(char)arg1 ;
-(void)setHasLPM:(char)arg1 ;
-(char)hasLPM;
-(void)setHasOnline:(char)arg1 ;
-(char)hasOnline;
-(void)setHasOffline:(char)arg1 ;
-(char)hasOffline;
-(void)setDurationLPM:(unsigned)arg1 ;
-(void)setHasDurationLPM:(char)arg1 ;
-(char)hasDurationLPM;
-(void)setDurationOffline:(unsigned)arg1 ;
-(void)setHasDurationOffline:(char)arg1 ;
-(char)hasDurationOffline;
-(unsigned)samplePeriods;
-(char)isEnd;
-(unsigned)numStall;
-(char)lPM;
-(unsigned)durationLPM;
-(unsigned)durationOffline;
-(NSMutableArray *)instValues;
@end

