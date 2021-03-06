/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SUTSchemaTestGeneratedTurnID, NSData;

@interface SUTSchemaTestAssociatedSchemaIdentifier : SISchemaInstrumentationMessage {

	SUTSchemaTestGeneratedTurnID* _turnID;
	char _hasTurnID;
	unsigned long long _whichIdentifier_Type;

}

@property (nonatomic,retain) SUTSchemaTestGeneratedTurnID * turnID;                  //@synthesize turnID=_turnID - In the implementation block
@property (assign,nonatomic) char hasTurnID;                                         //@synthesize hasTurnID=_hasTurnID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichIdentifier_Type;              //@synthesize whichIdentifier_Type=_whichIdentifier_Type - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(SUTSchemaTestGeneratedTurnID *)turnID;
-(void)setTurnID:(SUTSchemaTestGeneratedTurnID *)arg1 ;
-(char)hasTurnID;
-(void)setHasTurnID:(char)arg1 ;
-(unsigned long long)whichIdentifier_Type;
@end

