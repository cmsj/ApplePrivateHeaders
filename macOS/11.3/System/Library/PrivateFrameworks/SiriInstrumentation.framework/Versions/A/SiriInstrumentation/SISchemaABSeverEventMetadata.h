/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaUUID, NSData;

@interface SISchemaABSeverEventMetadata : SISchemaInstrumentationMessage {

	SISchemaUUID* _siriDeviceId;
	SISchemaUUID* _speechId;
	long long _timestampNs;
	SCD_Struct_SI0 _has;
	char _hasSiriDeviceId;
	char _hasSpeechId;

}

@property (nonatomic,retain) SISchemaUUID * siriDeviceId;              //@synthesize siriDeviceId=_siriDeviceId - In the implementation block
@property (assign,nonatomic) char hasSiriDeviceId;                     //@synthesize hasSiriDeviceId=_hasSiriDeviceId - In the implementation block
@property (nonatomic,retain) SISchemaUUID * speechId;                  //@synthesize speechId=_speechId - In the implementation block
@property (assign,nonatomic) char hasSpeechId;                         //@synthesize hasSpeechId=_hasSpeechId - In the implementation block
@property (assign,nonatomic) long long timestampNs;                    //@synthesize timestampNs=_timestampNs - In the implementation block
@property (assign,nonatomic) char hasTimestampNs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaUUID *)speechId;
-(void)setSpeechId:(SISchemaUUID *)arg1 ;
-(NSData *)jsonData;
-(void)setSiriDeviceId:(SISchemaUUID *)arg1 ;
-(SISchemaUUID *)siriDeviceId;
-(char)hasSiriDeviceId;
-(char)hasSpeechId;
-(void)setHasSiriDeviceId:(char)arg1 ;
-(void)setHasSpeechId:(char)arg1 ;
-(void)setTimestampNs:(long long)arg1 ;
-(long long)timestampNs;
-(char)hasTimestampNs;
-(void)setHasTimestampNs:(char)arg1 ;
@end

