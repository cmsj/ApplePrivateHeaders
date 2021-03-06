/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPBDataSetters.h>
#import <libobjc.A.dylib/EDPBBaseMessageFields.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPBInteractionEventMessageViewStart : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying> {

	long long _accountId;
	long long _conversationId;
	long long _mailboxId;
	long long _messageId;
	int _mailboxType;
	SCD_Struct_ED9 _has;

}

@property (assign,nonatomic) long long accountId; 
@property (assign,nonatomic) long long mailboxId; 
@property (assign,nonatomic) int mailboxType; 
@property (assign,nonatomic) long long conversationId; 
@property (assign,nonatomic) long long messageId; 
@property (assign,nonatomic) char hasAccountId; 
@property (assign,nonatomic) long long accountId;                   //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) char hasMailboxId; 
@property (assign,nonatomic) long long mailboxId;                   //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) char hasMailboxType; 
@property (assign,nonatomic) int mailboxType;                       //@synthesize mailboxType=_mailboxType - In the implementation block
@property (assign,nonatomic) char hasConversationId; 
@property (assign,nonatomic) long long conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) char hasMessageId; 
@property (assign,nonatomic) long long messageId;                   //@synthesize messageId=_messageId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)messageId;
-(void)setMessageId:(long long)arg1 ;
-(char)hasMessageId;
-(long long)accountId;
-(void)setAccountId:(long long)arg1 ;
-(void)setMailboxType:(int)arg1 ;
-(char)hasAccountId;
-(void)setHasAccountId:(char)arg1 ;
-(long long)conversationId;
-(void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3 ;
-(long long)mailboxId;
-(void)setMailboxId:(long long)arg1 ;
-(int)mailboxType;
-(void)setConversationId:(long long)arg1 ;
-(void)setHasMailboxId:(char)arg1 ;
-(char)hasMailboxId;
-(void)setHasMailboxType:(char)arg1 ;
-(char)hasMailboxType;
-(id)mailboxTypeAsString:(int)arg1 ;
-(int)StringAsMailboxType:(id)arg1 ;
-(void)setHasConversationId:(char)arg1 ;
-(char)hasConversationId;
-(void)setHasMessageId:(char)arg1 ;
@end

