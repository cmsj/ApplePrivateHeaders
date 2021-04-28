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

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {

	int _anyEventType;
	NSData* _payload;
	SCD_Struct_SI0 _has;
	char _hasPayload;

}

@property (assign,nonatomic) int anyEventType;                  //@synthesize anyEventType=_anyEventType - In the implementation block
@property (assign,nonatomic) char hasAnyEventType; 
@property (nonatomic,copy) NSData * payload;                    //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) char hasPayload;                   //@synthesize hasPayload=_hasPayload - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(char)hasPayload;
-(int)anyEventType;
-(void)setAnyEventType:(int)arg1 ;
-(char)hasAnyEventType;
-(void)setHasAnyEventType:(char)arg1 ;
-(void)setHasPayload:(char)arg1 ;
@end
