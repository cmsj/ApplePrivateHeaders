/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/Versions/A/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PREAMEngagedResponse : PBCodable <NSCopying> {

	int _ageGroup;
	NSString* _experimentId;
	int _generationStatus;
	NSString* _hostProcess;
	int _inputMethod;
	NSString* _lang;
	NSString* _locale;
	unsigned _modelId;
	unsigned _numberOfCustomResponses;
	unsigned _numberOfResponsesGenerated;
	unsigned _position;
	unsigned _replyTextId;
	unsigned _responseClassId;
	NSString* _treatmentId;
	NSString* _treatmentModelName;
	char _hasQuestionMark;
	char _isApricotDevice;
	char _isCustomResponse;
	SCD_Struct_PR3 _has;

}

@property (assign,nonatomic) char hasModelId; 
@property (assign,nonatomic) unsigned modelId;                                 //@synthesize modelId=_modelId - In the implementation block
@property (assign,nonatomic) char hasResponseClassId; 
@property (assign,nonatomic) unsigned responseClassId;                         //@synthesize responseClassId=_responseClassId - In the implementation block
@property (assign,nonatomic) char hasReplyTextId; 
@property (assign,nonatomic) unsigned replyTextId;                             //@synthesize replyTextId=_replyTextId - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) unsigned position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char hasInputMethod; 
@property (assign,nonatomic) int inputMethod;                                  //@synthesize inputMethod=_inputMethod - In the implementation block
@property (assign,nonatomic) char hasGenerationStatus; 
@property (assign,nonatomic) int generationStatus;                             //@synthesize generationStatus=_generationStatus - In the implementation block
@property (assign,nonatomic) char hasNumberOfResponsesGenerated; 
@property (assign,nonatomic) unsigned numberOfResponsesGenerated;              //@synthesize numberOfResponsesGenerated=_numberOfResponsesGenerated - In the implementation block
@property (assign,nonatomic) char hasNumberOfCustomResponses; 
@property (assign,nonatomic) unsigned numberOfCustomResponses;                 //@synthesize numberOfCustomResponses=_numberOfCustomResponses - In the implementation block
@property (nonatomic,readonly) char hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                          //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) char hasTreatmentId; 
@property (nonatomic,retain) NSString * treatmentId;                           //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) char hasTreatmentModelName; 
@property (nonatomic,retain) NSString * treatmentModelName;                    //@synthesize treatmentModelName=_treatmentModelName - In the implementation block
@property (nonatomic,readonly) char hasHostProcess; 
@property (nonatomic,retain) NSString * hostProcess;                           //@synthesize hostProcess=_hostProcess - In the implementation block
@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) NSString * locale;                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) char hasLang; 
@property (nonatomic,retain) NSString * lang;                                  //@synthesize lang=_lang - In the implementation block
@property (assign,nonatomic) char hasIsApricotDevice; 
@property (assign,nonatomic) char isApricotDevice;                             //@synthesize isApricotDevice=_isApricotDevice - In the implementation block
@property (assign,nonatomic) char hasAgeGroup; 
@property (assign,nonatomic) int ageGroup;                                     //@synthesize ageGroup=_ageGroup - In the implementation block
@property (assign,nonatomic) char hasHasQuestionMark; 
@property (assign,nonatomic) char hasQuestionMark;                             //@synthesize hasQuestionMark=_hasQuestionMark - In the implementation block
@property (assign,nonatomic) char hasIsCustomResponse; 
@property (assign,nonatomic) char isCustomResponse;                            //@synthesize isCustomResponse=_isCustomResponse - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)dictionaryRepresentation;
-(unsigned)position;
-(void)setPosition:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)hostProcess;
-(void)setHostProcess:(NSString *)arg1 ;
-(char)hasPosition;
-(char)hasLocale;
-(char)hasExperimentId;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSString *)lang;
-(void)setLang:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(int)inputMethod;
-(void)setInputMethod:(int)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(char)hasTreatmentId;
-(char)hasTreatmentModelName;
-(char)hasHostProcess;
-(void)setIsApricotDevice:(char)arg1 ;
-(void)setHasIsApricotDevice:(char)arg1 ;
-(char)hasIsApricotDevice;
-(int)ageGroup;
-(void)setAgeGroup:(int)arg1 ;
-(void)setHasAgeGroup:(char)arg1 ;
-(char)hasAgeGroup;
-(id)ageGroupAsString:(int)arg1 ;
-(int)StringAsAgeGroup:(id)arg1 ;
-(NSString *)treatmentModelName;
-(void)setTreatmentModelName:(NSString *)arg1 ;
-(char)isApricotDevice;
-(void)setHasInputMethod:(char)arg1 ;
-(char)hasInputMethod;
-(id)inputMethodAsString:(int)arg1 ;
-(int)StringAsInputMethod:(id)arg1 ;
-(int)generationStatus;
-(void)setGenerationStatus:(int)arg1 ;
-(void)setHasGenerationStatus:(char)arg1 ;
-(char)hasGenerationStatus;
-(id)generationStatusAsString:(int)arg1 ;
-(int)StringAsGenerationStatus:(id)arg1 ;
-(void)setModelId:(unsigned)arg1 ;
-(void)setHasModelId:(char)arg1 ;
-(char)hasModelId;
-(void)setResponseClassId:(unsigned)arg1 ;
-(void)setHasResponseClassId:(char)arg1 ;
-(char)hasResponseClassId;
-(void)setReplyTextId:(unsigned)arg1 ;
-(void)setHasReplyTextId:(char)arg1 ;
-(char)hasReplyTextId;
-(void)setHasPosition:(char)arg1 ;
-(void)setNumberOfResponsesGenerated:(unsigned)arg1 ;
-(void)setHasNumberOfResponsesGenerated:(char)arg1 ;
-(char)hasNumberOfResponsesGenerated;
-(void)setNumberOfCustomResponses:(unsigned)arg1 ;
-(void)setHasNumberOfCustomResponses:(char)arg1 ;
-(char)hasNumberOfCustomResponses;
-(char)hasLang;
-(void)setHasQuestionMark:(char)arg1 ;
-(void)setHasHasQuestionMark:(char)arg1 ;
-(char)hasHasQuestionMark;
-(void)setIsCustomResponse:(char)arg1 ;
-(void)setHasIsCustomResponse:(char)arg1 ;
-(char)hasIsCustomResponse;
-(unsigned)modelId;
-(unsigned)responseClassId;
-(unsigned)replyTextId;
-(unsigned)numberOfResponsesGenerated;
-(unsigned)numberOfCustomResponses;
-(char)hasQuestionMark;
-(char)isCustomResponse;
@end

