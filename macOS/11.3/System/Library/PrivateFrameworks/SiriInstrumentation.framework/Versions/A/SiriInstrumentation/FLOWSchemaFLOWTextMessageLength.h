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

@interface FLOWSchemaFLOWTextMessageLength : SISchemaInstrumentationMessage {

	unsigned _messageCharLength;
	unsigned _messageWordLength;
	SCD_Struct_SI2 _has;

}

@property (assign,nonatomic) unsigned messageCharLength;              //@synthesize messageCharLength=_messageCharLength - In the implementation block
@property (assign,nonatomic) char hasMessageCharLength; 
@property (assign,nonatomic) unsigned messageWordLength;              //@synthesize messageWordLength=_messageWordLength - In the implementation block
@property (assign,nonatomic) char hasMessageWordLength; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setMessageCharLength:(unsigned)arg1 ;
-(void)setMessageWordLength:(unsigned)arg1 ;
-(unsigned)messageCharLength;
-(unsigned)messageWordLength;
-(char)hasMessageCharLength;
-(void)setHasMessageCharLength:(char)arg1 ;
-(char)hasMessageWordLength;
-(void)setHasMessageWordLength:(char)arg1 ;
@end

