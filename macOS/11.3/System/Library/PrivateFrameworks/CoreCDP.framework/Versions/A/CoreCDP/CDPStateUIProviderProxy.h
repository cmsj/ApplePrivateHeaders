/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/Versions/A/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPStateUIProviderInternal.h>

@protocol CDPStateUIProvider;
@interface CDPStateUIProviderProxy : NSObject <CDPStateUIProviderInternal> {

	id<CDPStateUIProvider> _uiProvider;

}

@property (nonatomic,retain) id<CDPStateUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
-(void)setUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(char)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(char)arg2 numericLength:(id)arg3 isRandom:(char)arg4 validator:(id)arg5 ;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2 ;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithUIProvider:(id)arg1 ;
-(id<CDPStateUIProvider>)uiProvider;
@end

