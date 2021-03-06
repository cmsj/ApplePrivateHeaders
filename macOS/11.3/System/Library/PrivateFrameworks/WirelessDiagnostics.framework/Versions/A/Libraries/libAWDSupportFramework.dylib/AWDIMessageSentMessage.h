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

@interface AWDIMessageSentMessage : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	int _fzError;
	NSString* _guid;
	unsigned _hasAttachments;
	unsigned _isGroupMessage;
	unsigned _isToEmail;
	unsigned _isToPhoneNumber;
	unsigned _isTypingIndicator;
	unsigned _messageError;
	unsigned _sendDuration;
	SCD_Struct_AW14 _has;

}

@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) char hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                     //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) char hasIsTypingIndicator; 
@property (assign,nonatomic) unsigned isTypingIndicator;                //@synthesize isTypingIndicator=_isTypingIndicator - In the implementation block
@property (assign,nonatomic) char hasIsGroupMessage; 
@property (assign,nonatomic) unsigned isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,nonatomic) char hasIsToPhoneNumber; 
@property (assign,nonatomic) unsigned isToPhoneNumber;                  //@synthesize isToPhoneNumber=_isToPhoneNumber - In the implementation block
@property (assign,nonatomic) char hasIsToEmail; 
@property (assign,nonatomic) unsigned isToEmail;                        //@synthesize isToEmail=_isToEmail - In the implementation block
@property (assign,nonatomic) char hasHasAttachments; 
@property (assign,nonatomic) unsigned hasAttachments;                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (assign,nonatomic) char hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
@property (assign,nonatomic) char hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)connectionType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(NSString *)guid;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasConnectionType:(char)arg1 ;
-(char)hasConnectionType;
-(char)hasGuid;
-(void)setSendDuration:(unsigned)arg1 ;
-(void)setHasSendDuration:(char)arg1 ;
-(char)hasSendDuration;
-(unsigned)sendDuration;
-(void)setIsToPhoneNumber:(unsigned)arg1 ;
-(void)setHasIsToPhoneNumber:(char)arg1 ;
-(char)hasIsToPhoneNumber;
-(void)setIsToEmail:(unsigned)arg1 ;
-(void)setHasIsToEmail:(char)arg1 ;
-(char)hasIsToEmail;
-(unsigned)isToPhoneNumber;
-(unsigned)isToEmail;
-(void)setFzError:(int)arg1 ;
-(void)setHasFzError:(char)arg1 ;
-(char)hasFzError;
-(void)setMessageError:(unsigned)arg1 ;
-(void)setHasMessageError:(char)arg1 ;
-(char)hasMessageError;
-(int)fzError;
-(unsigned)messageError;
-(void)setIsTypingIndicator:(unsigned)arg1 ;
-(void)setHasIsTypingIndicator:(char)arg1 ;
-(char)hasIsTypingIndicator;
-(void)setIsGroupMessage:(unsigned)arg1 ;
-(void)setHasIsGroupMessage:(char)arg1 ;
-(char)hasIsGroupMessage;
-(void)setHasAttachments:(unsigned)arg1 ;
-(void)setHasHasAttachments:(char)arg1 ;
-(char)hasHasAttachments;
-(unsigned)isTypingIndicator;
-(unsigned)isGroupMessage;
-(unsigned)hasAttachments;
@end

