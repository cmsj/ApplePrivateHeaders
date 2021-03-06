/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDPBBaseMessageFields
@property (assign,nonatomic) long long accountId; 
@property (assign,nonatomic) long long mailboxId; 
@property (assign,nonatomic) int mailboxType; 
@property (assign,nonatomic) long long conversationId; 
@property (assign,nonatomic) long long messageId; 
@required
-(long long)messageId;
-(void)setMessageId:(long long)arg1;
-(long long)accountId;
-(void)setAccountId:(long long)arg1;
-(void)setMailboxType:(int)arg1;
-(long long)conversationId;
-(long long)mailboxId;
-(void)setMailboxId:(long long)arg1;
-(int)mailboxType;
-(void)setConversationId:(long long)arg1;

@end

