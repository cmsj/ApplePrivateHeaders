/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaUserSpeechDuration : SISchemaInstrumentationMessage {

	long long _durationMs;
	NSString* _resultCandidateId;
	SCD_Struct_SI0 _has;
	char _hasResultCandidateId;

}

@property (assign,nonatomic) long long durationMs;                    //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) char hasDurationMs; 
@property (nonatomic,copy) NSString * resultCandidateId;              //@synthesize resultCandidateId=_resultCandidateId - In the implementation block
@property (assign,nonatomic) char hasResultCandidateId;               //@synthesize hasResultCandidateId=_hasResultCandidateId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setDurationMs:(long long)arg1 ;
-(long long)durationMs;
-(void)setHasDurationMs:(char)arg1 ;
-(char)hasDurationMs;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSData *)jsonData;
-(char)hasResultCandidateId;
-(void)setHasResultCandidateId:(char)arg1 ;
@end
