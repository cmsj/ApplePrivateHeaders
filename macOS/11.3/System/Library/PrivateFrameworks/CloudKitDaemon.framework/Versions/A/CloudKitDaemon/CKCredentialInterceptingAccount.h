/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/ACAccount.h>

@class CKDBackingFakeAccount;

@interface CKCredentialInterceptingAccount : ACAccount {

	CKDBackingFakeAccount* _backingFakeAccount;

}

@property (assign,nonatomic,__weak) CKDBackingFakeAccount * backingFakeAccount;              //@synthesize backingFakeAccount=_backingFakeAccount - In the implementation block
-(char)aa_updateTokensWithProvisioningResponse:(id)arg1 ;
-(CKDBackingFakeAccount *)backingFakeAccount;
-(void)setBackingFakeAccount:(CKDBackingFakeAccount *)arg1 ;
@end
