/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKPromptWindowController.h>
#import <libobjc.A.dylib/AKAuthorizationRVSServiceDelegate.h>

@class AKCredentialRequestContext, AKAuthorizationRVSBootstrapper;

@interface AKAuthorizationRVSWindowController : AKPromptWindowController <AKAuthorizationRVSServiceDelegate> {

	AKCredentialRequestContext* _credentialRequestContext;
	AKAuthorizationRVSBootstrapper* _helper;
	/*^block*/id _completion;

}

@property (retain) AKAuthorizationRVSBootstrapper * helper;                              //@synthesize helper=_helper - In the implementation block
@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (readonly) AKCredentialRequestContext * credentialRequestContext;              //@synthesize credentialRequestContext=_credentialRequestContext - In the implementation block
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(AKAuthorizationRVSBootstrapper *)helper;
-(AKCredentialRequestContext *)credentialRequestContext;
-(void)callCompletionWithAuthorization:(id)arg1 error:(id)arg2 ;
-(void)_setupWithCompletion:(/*^block*/id)arg1 ;
-(void)setHelper:(AKAuthorizationRVSBootstrapper *)arg1 ;
-(void)presentPromptWithCompletion:(/*^block*/id)arg1 ;
@end
