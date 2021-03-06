/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface SISchemaVoiceTriggerMetrics : SISchemaInstrumentationMessage {

	int _implicitUtterances;
	int _explicitUtterances;
	int _firstPassTriggers;
	SCD_Struct_LT1 _has;

}

@property (assign,nonatomic) int implicitUtterances;                  //@synthesize implicitUtterances=_implicitUtterances - In the implementation block
@property (assign,nonatomic) char hasImplicitUtterances; 
@property (assign,nonatomic) int explicitUtterances;                  //@synthesize explicitUtterances=_explicitUtterances - In the implementation block
@property (assign,nonatomic) char hasExplicitUtterances; 
@property (assign,nonatomic) int firstPassTriggers;                   //@synthesize firstPassTriggers=_firstPassTriggers - In the implementation block
@property (assign,nonatomic) char hasFirstPassTriggers; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setImplicitUtterances:(int)arg1 ;
-(void)setExplicitUtterances:(int)arg1 ;
-(void)setFirstPassTriggers:(int)arg1 ;
-(int)implicitUtterances;
-(int)explicitUtterances;
-(int)firstPassTriggers;
-(char)hasImplicitUtterances;
-(void)setHasImplicitUtterances:(char)arg1 ;
-(char)hasExplicitUtterances;
-(void)setHasExplicitUtterances:(char)arg1 ;
-(char)hasFirstPassTriggers;
-(void)setHasFirstPassTriggers:(char)arg1 ;
@end

