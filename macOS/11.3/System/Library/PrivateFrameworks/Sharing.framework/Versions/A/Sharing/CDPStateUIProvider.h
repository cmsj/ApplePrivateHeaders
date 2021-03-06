/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPStateUIProvider <CDPRecoveryKeyUIProvider>
@optional
-(void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(/*^block*/id)arg2;
-(void)cdpContext:(id)arg1 promptToInformUserOfAccountUnlockWithCompletion:(/*^block*/id)arg2;
-(void)cdpContext:(id)arg1 promptToInformUserOfAccountLockOutWithCompletion:(/*^block*/id)arg2;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
-(void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(/*^block*/id)arg4;

@required
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(char)arg3 validator:(id)arg4;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(char)arg2 numericLength:(id)arg3 isRandom:(char)arg4 validator:(id)arg5;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2;

@end

