/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying> {

	unsigned long long _payloadSize;
	unsigned long long _timestamp;
	int _direction;
	NSString* _identifier;
	NSString* _messageName;
	int _messageType;
	NSString* _transactionID;
	int _transport;
	char _isSecure;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;              //@synthesize payloadSize=_payloadSize - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasTransactionID; 
@property (nonatomic,retain) NSString * transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) char hasIsSecure; 
@property (assign,nonatomic) char isSecure;                               //@synthesize isSecure=_isSecure - In the implementation block
@property (assign,nonatomic) char hasMessageType; 
@property (assign,nonatomic) int messageType;                             //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) char hasTransport; 
@property (assign,nonatomic) int transport;                               //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) char hasDirection; 
@property (assign,nonatomic) int direction;                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) char hasMessageName; 
@property (nonatomic,retain) NSString * messageName;                      //@synthesize messageName=_messageName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)transactionID;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)direction;
-(NSString *)messageName;
-(void)setDirection:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setMessageType:(int)arg1 ;
-(int)messageType;
-(void)setTransactionID:(NSString *)arg1 ;
-(int)transport;
-(unsigned long long)payloadSize;
-(char)hasIdentifier;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasDirection;
-(void)setHasMessageType:(char)arg1 ;
-(char)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(void)setTransport:(int)arg1 ;
-(char)isSecure;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(char)arg1 ;
-(char)hasPayloadSize;
-(void)setMessageName:(NSString *)arg1 ;
-(char)hasMessageName;
-(void)setHasTransport:(char)arg1 ;
-(char)hasTransport;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(void)setHasDirection:(char)arg1 ;
-(id)directionAsString:(int)arg1 ;
-(int)StringAsDirection:(id)arg1 ;
-(char)hasTransactionID;
-(void)setIsSecure:(char)arg1 ;
-(void)setHasIsSecure:(char)arg1 ;
-(char)hasIsSecure;
@end
