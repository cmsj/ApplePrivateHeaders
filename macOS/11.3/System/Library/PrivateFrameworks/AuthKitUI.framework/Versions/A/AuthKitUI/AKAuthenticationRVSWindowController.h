/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKPromptWindowController.h>
#import <libobjc.A.dylib/AKAuthenticationRVSServiceDelegate.h>

@class AKAuthenticationRVSBootstrapper, AKAppleIDAuthenticationContext;

@interface AKAuthenticationRVSWindowController : AKPromptWindowController <AKAuthenticationRVSServiceDelegate> {

	AKAuthenticationRVSBootstrapper* _remoteViewServiceBootstrapper;
	AKAppleIDAuthenticationContext* _authenticationContext;

}
-(id)initWithContext:(id)arg1 ;
-(void)dismiss;
-(void)_setupWithSurrogateID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)presentAuthenticationPromptWithSurrogateID:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
@end
