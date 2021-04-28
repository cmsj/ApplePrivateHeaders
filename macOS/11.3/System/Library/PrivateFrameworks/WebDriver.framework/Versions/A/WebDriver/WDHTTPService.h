/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RWIManagerDelegate.h>
#import <libobjc.A.dylib/RWIDriverInterfaceDelegate.h>
#import <libobjc.A.dylib/WDSessionProvider.h>
#import <libobjc.A.dylib/WDServiceHost.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WDXPCService.h>

@protocol OS_os_transaction;
@class NSArray, WDRemoteSessionManager, NSObject, WDHTTPDriverInterface, NSXPCConnection, NSString;

@interface WDHTTPService : NSObject <RWIManagerDelegate, RWIDriverInterfaceDelegate, WDSessionProvider, WDServiceHost, NSXPCListenerDelegate, WDXPCService> {

	WDRemoteSessionManager* _sessionManager;
	NSObject*<OS_os_transaction> _clientTransaction;
	unsigned long long _notificationHandlerID;
	WDHTTPDriverInterface* _driver;
	NSXPCConnection* _clientConnection;

}

@property (nonatomic,readonly) WDHTTPDriverInterface * driver;                  //@synthesize driver=_driver - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSArray * sessions; 
+(void)initialize;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(WDHTTPDriverInterface *)driver;
-(NSArray *)sessions;
-(NSXPCConnection *)clientConnection;
-(void)_handleRWINotification:(id)arg1 ;
-(void)_registerForRWINotifications;
-(void)_unregisterForRWINotifications;
-(char)requestDriver:(id)arg1 shouldBeActive:(char)arg2 ;
-(void)driverInterface:(id)arg1 stateChanged:(long long)arg2 ;
-(void)destroySession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestSessionWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeDriverClient:(id)arg1 ;
-(void)_terminateCleanly;
-(/*^block*/id)_defaultErrorHandler;
-(char)_allowIncomingClientConnection:(id)arg1 ;
-(void)configureServerWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_addDriverClient:(id)arg1 ;
-(void)launchApplication:(id)arg1 withArguments:(id)arg2 forHost:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchAttributesOfLocalFiles:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchContentsOfLocalFiles:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
