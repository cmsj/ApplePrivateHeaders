/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPAccountProxy.h>
#import <libobjc.A.dylib/NFAccountProxy.h>

@class NSString;

@interface NFIMAPAccountProxy : ICNFIMAPAccountProxy <NFAccountProxy>

@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * parentACAccountIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManagedObject:(id)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(char)hasNotes;
-(id)parentACAccount;
-(NSString *)parentACAccountIdentifier;
-(void)setParentACAccountIdentifier:(NSString *)arg1 ;
-(id)mailboxProxyForMailbox:(id)arg1 ;
-(char)deleteMailboxFromServer:(id)arg1 ;
-(char)renameMailbox:(id)arg1 newParentMailbox:(id)arg2 ;
-(unsigned long long)maximumConnectionCount;
-(char)useDefaultMailboxAsMailboxHierarchyRoot;
-(void)playOfflineActions;
-(char)shouldAddMailboxToPersistence:(id)arg1 withParent:(id)arg2 ;
-(void)deleteMailboxFromPersistence:(id)arg1 ;
-(id)newMailboxProxyWithMailbox:(id)arg1 ;
@end

