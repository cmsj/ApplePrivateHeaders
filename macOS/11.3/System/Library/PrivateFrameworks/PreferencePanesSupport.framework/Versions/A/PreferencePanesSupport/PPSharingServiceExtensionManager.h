/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PreferencePanesSupport.framework/Versions/A/PreferencePanesSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AdminAuthenticator, NSObject, PPSharingServiceViewController, NSXPCConnection, NSString;

@interface PPSharingServiceExtensionManager : NSObject {

	char _initiallyEditable;
	AdminAuthenticator* _authenticator;
	NSObject*<OS_dispatch_queue> _adminQueue;
	PPSharingServiceViewController* _viewController;
	NSXPCConnection* _connection;
	NSString* _bundleIdentifier;

}

@property (__weak) PPSharingServiceViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (retain) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)sharedManager;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setEditable:(char)arg1 ;
-(void)setViewController:(PPSharingServiceViewController *)arg1 ;
-(PPSharingServiceViewController *)viewController;
-(void)resumeConnectionWithEndpoint:(id)arg1 ;
-(void)setServiceState:(long long)arg1 ;
-(void)authorize:(id)arg1 ;
-(void)switchToPanel:(id)arg1 ;
-(void)deauthorize;
-(void)serviceViewControllerDidAwake:(id)arg1 ;
-(void)setServiceHidden:(char)arg1 ;
-(void)setServiceAvailable:(char)arg1 ;
-(char)isAutorized;
-(char)performSystemAdministrationBlock:(/*^block*/id)arg1 ;
@end

