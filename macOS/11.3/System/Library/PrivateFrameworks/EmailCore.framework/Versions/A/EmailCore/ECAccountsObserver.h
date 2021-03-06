/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class ACAccountStore, NSString;

@interface ECAccountsObserver : NSObject <EFLoggable> {

	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)observedAccountTypes;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_credentialsDidChange:(id)arg1 ;
-(void)_mailAccountsChanged:(id)arg1 ;
-(char)_shouldNotifyOnAccountChangeForNotification:(id)arg1 ;
-(void)handleAccountStoreChangeForAccountIdentifier:(id)arg1 ;
-(void)handleCredentialChangeForAccountIdentifier:(id)arg1 ;
-(void)handleMailAccountsHaveChanged:(id)arg1 accountsNeedInitialization:(char)arg2 ;
@end

