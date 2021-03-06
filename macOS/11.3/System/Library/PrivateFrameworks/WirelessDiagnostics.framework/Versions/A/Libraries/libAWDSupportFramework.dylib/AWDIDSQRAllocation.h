/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSQRAllocation : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	unsigned _hasRecipientAccepted;
	unsigned _payloadSize;
	unsigned _result;
	NSString* _service;
	NSString* _topic;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasResult; 
@property (assign,nonatomic) unsigned result;                            //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) char hasHasRecipientAccepted; 
@property (assign,nonatomic) unsigned hasRecipientAccepted;              //@synthesize hasRecipientAccepted=_hasRecipientAccepted - In the implementation block
@property (assign,nonatomic) char hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                       //@synthesize payloadSize=_payloadSize - In the implementation block
@property (nonatomic,readonly) char hasTopic; 
@property (nonatomic,retain) NSString * topic;                           //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) char hasService; 
@property (nonatomic,retain) NSString * service;                         //@synthesize service=_service - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)result;
-(void)setResult:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSString *)service;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)topic;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(char)hasTimestamp;
-(void)setTopic:(NSString *)arg1 ;
-(unsigned)hasRecipientAccepted;
-(unsigned)payloadSize;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(char)hasService;
-(void)setHasResult:(char)arg1 ;
-(char)hasResult;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(char)arg1 ;
-(char)hasPayloadSize;
-(void)setHasRecipientAccepted:(unsigned)arg1 ;
-(void)setHasHasRecipientAccepted:(char)arg1 ;
-(char)hasHasRecipientAccepted;
-(char)hasTopic;
@end

