/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/Versions/A/AppleIDSSOAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AASignInFlowControllerDelegate, AASignOutFlowControllerDelegate, CDPStateUIProvider;
@class NSDictionary, NSWindow;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying> {

	NSDictionary* _authenticationResults;
	char _shouldForceOperation;
	long long _operationUIPermissions;
	NSWindow* _hostWindow;
	id<AASignInFlowControllerDelegate> _aaSignInFlowControllerDelegate;
	id<AASignOutFlowControllerDelegate> _aaSignOutFlowControllerDelegate;
	NSDictionary* _signInContexts;
	NSDictionary* _signOutContexts;
	id<CDPStateUIProvider> _cdpUiProvider;

}

@property (nonatomic,copy,readonly) NSDictionary * authenticationResults;                                        //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,readonly) char shouldForceOperation;                                                        //@synthesize shouldForceOperation=_shouldForceOperation - In the implementation block
@property (nonatomic,readonly) long long operationUIPermissions;                                                 //@synthesize operationUIPermissions=_operationUIPermissions - In the implementation block
@property (nonatomic,readonly) NSWindow * hostWindow;                                                            //@synthesize hostWindow=_hostWindow - In the implementation block
@property (nonatomic,readonly) NSDictionary * signInContexts;                                                    //@synthesize signInContexts=_signInContexts - In the implementation block
@property (nonatomic,readonly) NSDictionary * signOutContexts;                                                   //@synthesize signOutContexts=_signOutContexts - In the implementation block
@property (nonatomic,readonly) id<AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate;                //@synthesize aaSignInFlowControllerDelegate=_aaSignInFlowControllerDelegate - In the implementation block
@property (nonatomic,readonly) id<AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate;              //@synthesize aaSignOutFlowControllerDelegate=_aaSignOutFlowControllerDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<CDPStateUIProvider> cdpUiProvider;                                      //@synthesize cdpUiProvider=_cdpUiProvider - In the implementation block
+(char)accessInstanceVariablesDirectly;
+(id)contextWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)authenticationResults;
-(char)shouldForceOperation;
-(long long)operationUIPermissions;
-(NSWindow *)hostWindow;
-(NSDictionary *)signInContexts;
-(NSDictionary *)signOutContexts;
-(id<AASignInFlowControllerDelegate>)aaSignInFlowControllerDelegate;
-(id<AASignOutFlowControllerDelegate>)aaSignOutFlowControllerDelegate;
-(id<CDPStateUIProvider>)cdpUiProvider;
@end

