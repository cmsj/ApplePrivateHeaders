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

@interface SISchemaClientTransportEventMetadata : SISchemaInstrumentationMessage {

	NSString* _eventTransmittedTimestampRefId;
	long long _eventTransmittedRelativeToBootTimeTimestampNs;
	long long _serverArrivedTimestampNs;
	NSString* _arrivedServerPod;
	SCD_Struct_SI2 _has;
	char _hasEventTransmittedTimestampRefId;
	char _hasArrivedServerPod;

}

@property (nonatomic,copy) NSString * eventTransmittedTimestampRefId;                              //@synthesize eventTransmittedTimestampRefId=_eventTransmittedTimestampRefId - In the implementation block
@property (assign,nonatomic) char hasEventTransmittedTimestampRefId;                               //@synthesize hasEventTransmittedTimestampRefId=_hasEventTransmittedTimestampRefId - In the implementation block
@property (assign,nonatomic) long long eventTransmittedRelativeToBootTimeTimestampNs;              //@synthesize eventTransmittedRelativeToBootTimeTimestampNs=_eventTransmittedRelativeToBootTimeTimestampNs - In the implementation block
@property (assign,nonatomic) char hasEventTransmittedRelativeToBootTimeTimestampNs; 
@property (assign,nonatomic) long long serverArrivedTimestampNs;                                   //@synthesize serverArrivedTimestampNs=_serverArrivedTimestampNs - In the implementation block
@property (assign,nonatomic) char hasServerArrivedTimestampNs; 
@property (nonatomic,copy) NSString * arrivedServerPod;                                            //@synthesize arrivedServerPod=_arrivedServerPod - In the implementation block
@property (assign,nonatomic) char hasArrivedServerPod;                                             //@synthesize hasArrivedServerPod=_hasArrivedServerPod - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(long long)eventTransmittedRelativeToBootTimeTimestampNs;
-(void)setEventTransmittedRelativeToBootTimeTimestampNs:(long long)arg1 ;
-(NSString *)eventTransmittedTimestampRefId;
-(void)setEventTransmittedTimestampRefId:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setServerArrivedTimestampNs:(long long)arg1 ;
-(void)setArrivedServerPod:(NSString *)arg1 ;
-(NSString *)arrivedServerPod;
-(long long)serverArrivedTimestampNs;
-(char)hasEventTransmittedTimestampRefId;
-(char)hasEventTransmittedRelativeToBootTimeTimestampNs;
-(void)setHasEventTransmittedRelativeToBootTimeTimestampNs:(char)arg1 ;
-(char)hasServerArrivedTimestampNs;
-(void)setHasServerArrivedTimestampNs:(char)arg1 ;
-(char)hasArrivedServerPod;
-(void)setHasEventTransmittedTimestampRefId:(char)arg1 ;
-(void)setHasArrivedServerPod:(char)arg1 ;
@end
