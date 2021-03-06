/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSUUID, NSDate;


@protocol ICNFIMAPPersistedMessage__CD <ICNFMCPersistedMessage>
@property (nonatomic,retain) NSNumber * imapUID; 
@property (nonatomic,retain) NSUUID * universallyUniqueID; 
@property (nonatomic,retain) NSDate * dateEdited; 
@property (assign,nonatomic) long long mimeDataSize; 
@property (nonatomic,retain) NSManagedObject*<ICNFIMAPPersistedMailbox> mailbox; 
@required
-(id)compactDescription;
-(NSManagedObject*<ICNFIMAPPersistedMailbox>)mailbox;
-(void)setMailbox:(id)arg1;
-(NSNumber *)imapUID;
-(void)setImapUID:(id)arg1;
-(void)setDateEdited:(id)arg1;
-(NSUUID *)universallyUniqueID;
-(void)setUniversallyUniqueID:(id)arg1;
-(NSDate *)dateEdited;
-(long long)mimeDataSize;
-(void)setMimeDataSize:(long long)arg1;

@end

