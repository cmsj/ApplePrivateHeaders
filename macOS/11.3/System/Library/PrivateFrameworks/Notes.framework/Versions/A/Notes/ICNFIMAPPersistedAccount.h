/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet;


@protocol ICNFIMAPPersistedAccount <ICNFMCPersistedConnectionBasedAccount>
@property (nonatomic,readonly) NSManagedObject*<ICNFIMAPPersistedMailbox> defaultMailbox; 
@property (nonatomic,readonly) NSManagedObject*<ICNFIMAPPersistedMailbox> inbox; 
@property (assign,nonatomic) long long gmailCapabilitiesSupport; 
@property (nonatomic,copy) NSString * serverPathPrefix; 
@property (nonatomic,copy,readonly) NSSet * mailboxes; 
@required
-(NSSet *)mailboxes;
-(NSString *)serverPathPrefix;
-(void)setServerPathPrefix:(id)arg1;
-(void)setGmailCapabilitiesSupport:(long long)arg1;
-(NSManagedObject*<ICNFIMAPPersistedMailbox>)inbox;
-(void)addMailboxes:(id)arg1;
-(id)objectIDOfMailboxWithServerName:(id)arg1;
-(id)newMailboxWithName:(id)arg1 serverName:(id)arg2 parent:(id)arg3;
-(NSManagedObject*<ICNFIMAPPersistedMailbox>)defaultMailbox;
-(long long)gmailCapabilitiesSupport;

@end
