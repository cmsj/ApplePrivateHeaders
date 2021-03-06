/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, MSVMultiCallback, PBCodable, NSError, NSString, MRProtocolClientConnection;

@interface MRProtocolMessage : NSObject {

	NSData* _protobufData;
	char _replied;
	MSVMultiCallback* _messageSentCallbacks;
	MSVMultiCallback* _messagePurgedCallbacks;
	char _isReply;
	PBCodable* _underlyingCodableMessage;
	NSError* _error;
	NSString* _replyIdentifier;
	NSString* _uniqueIdentifier;
	unsigned long long _timestamp;
	MRProtocolClientConnection* _clientConnection;

}

@property (nonatomic,retain) PBCodable * underlyingCodableMessage;                              //@synthesize underlyingCodableMessage=_underlyingCodableMessage - In the implementation block
@property (nonatomic,copy) NSString * replyIdentifier;                                          //@synthesize replyIdentifier=_replyIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) MRProtocolClientConnection * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (assign,nonatomic) char isReply;                                                      //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,readonly) NSData * protobufData; 
@property (nonatomic,readonly) unsigned long long encryptionType; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) unsigned long long priority; 
@property (nonatomic,readonly) char shouldLog; 
@property (nonatomic,readonly) MSVMultiCallback * messageSentCallbacks; 
@property (nonatomic,readonly) MSVMultiCallback * messagePurgedCallbacks; 
+(id)protocolMessageWithProtobufData:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)currentProtocolVersion;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)type;
-(NSError *)error;
-(NSString *)uniqueIdentifier;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)priority;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)reply;
-(char)isReply;
-(unsigned long long)encryptionType;
-(MRProtocolClientConnection *)clientConnection;
-(void)setClientConnection:(MRProtocolClientConnection *)arg1 ;
-(void)setIsReply:(char)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(void)setUnderlyingCodableMessage:(PBCodable *)arg1 ;
-(PBCodable *)underlyingCodableMessage;
-(NSString *)replyIdentifier;
-(void)setReplyIdentifier:(NSString *)arg1 ;
-(MSVMultiCallback *)messagePurgedCallbacks;
-(char)shouldLog;
-(char)replyWithMessage:(id)arg1 ;
-(NSData *)protobufData;
-(MSVMultiCallback *)messageSentCallbacks;
@end

