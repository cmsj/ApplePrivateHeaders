/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/ECAccount.h>

@class NSDate;

@interface ECIMAPAccount : ECAccount {

	NSDate* _dateOfLastSync;

}

@property (assign,nonatomic) char compactWhenClosingMailboxes; 
@property (assign,nonatomic) long long daysBetweenSyncs; 
@property (nonatomic,copy) NSDate * dateOfLastSync;                               //@synthesize dateOfLastSync=_dateOfLastSync - In the implementation block
@property (assign,nonatomic) char queriedUserToSetPathPrefix; 
@property (assign,nonatomic) char shouldUseGmailLabelStores; 
@property (nonatomic,readonly) char shouldUseGmailLabelStoresIsSet; 
@property (assign,nonatomic) char needsGmailLablesCleanup; 
@property (assign,nonatomic) char hasServerDefinedAllMailMailbox; 
@property (assign,nonatomic) char hasServerDefinedArchiveMailbox; 
@property (assign,nonatomic) char hasServerDefinedDraftsMailbox; 
@property (assign,nonatomic) char hasServerDefinedJunkMailbox; 
@property (assign,nonatomic) char hasServerDefinedSentMailbox; 
@property (assign,nonatomic) char hasServerDefinedTrashMailbox; 
@property (assign,nonatomic) char ignoreServerDefinedArchiveMailbox; 
@property (assign,nonatomic) char ignoreServerDefinedDraftsMailbox; 
@property (assign,nonatomic) char ignoreServerDefinedJunkMailbox; 
@property (assign,nonatomic) char ignoreServerDefinedSentMailbox; 
@property (assign,nonatomic) char ignoreServerDefinedTrashMailbox; 
+(id)standardPorts;
+(id)standardSSLPorts;
-(id)_hostnameFromParentAccount:(id)arg1 ;
-(id)portNumberObject;
-(id)usesSSLObject;
-(long long)defaultPortNumber;
-(long long)defaultSecurePortNumber;
-(char)compactWhenClosingMailboxes;
-(void)setCompactWhenClosingMailboxes:(char)arg1 ;
-(long long)daysBetweenSyncs;
-(void)setDaysBetweenSyncs:(long long)arg1 ;
-(void)clearDaysBetweenSyncs;
-(char)queriedUserToSetPathPrefix;
-(void)setQueriedUserToSetPathPrefix:(char)arg1 ;
-(void)clearQueriedUserToSetPathPrefix;
-(char)shouldUseGmailLabelStores;
-(void)setShouldUseGmailLabelStores:(char)arg1 ;
-(char)shouldUseGmailLabelStoresIsSet;
-(char)needsGmailLablesCleanup;
-(void)setNeedsGmailLablesCleanup:(char)arg1 ;
-(char)hasServerDefinedAllMailMailbox;
-(void)setHasServerDefinedAllMailMailbox:(char)arg1 ;
-(char)hasServerDefinedArchiveMailbox;
-(void)setHasServerDefinedArchiveMailbox:(char)arg1 ;
-(char)hasServerDefinedDraftsMailbox;
-(void)setHasServerDefinedDraftsMailbox:(char)arg1 ;
-(char)hasServerDefinedJunkMailbox;
-(void)setHasServerDefinedJunkMailbox:(char)arg1 ;
-(char)hasServerDefinedSentMailbox;
-(void)setHasServerDefinedSentMailbox:(char)arg1 ;
-(char)hasServerDefinedTrashMailbox;
-(void)setHasServerDefinedTrashMailbox:(char)arg1 ;
-(char)ignoreServerDefinedArchiveMailbox;
-(void)setIgnoreServerDefinedArchiveMailbox:(char)arg1 ;
-(char)ignoreServerDefinedDraftsMailbox;
-(void)setIgnoreServerDefinedDraftsMailbox:(char)arg1 ;
-(char)ignoreServerDefinedJunkMailbox;
-(void)setIgnoreServerDefinedJunkMailbox:(char)arg1 ;
-(char)ignoreServerDefinedSentMailbox;
-(void)setIgnoreServerDefinedSentMailbox:(char)arg1 ;
-(char)ignoreServerDefinedTrashMailbox;
-(void)setIgnoreServerDefinedTrashMailbox:(char)arg1 ;
-(NSDate *)dateOfLastSync;
-(void)setDateOfLastSync:(NSDate *)arg1 ;
@end
