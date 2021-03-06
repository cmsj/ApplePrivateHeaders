/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDReconciliationQueryProvider.h>

@class NSXPCListener, EFLocked, EDDaemonInterfaceFactory, NSXPCListenerEndpoint, NSArray, NSString;

@interface EDServer : NSObject <NSXPCListenerDelegate, EFLoggable, EDReconciliationQueryProvider> {

	NSXPCListener* _listener;
	EFLocked* _connectedClients;
	EDDaemonInterfaceFactory* _daemonInterfaceFactory;

}

@property (nonatomic,retain) NSXPCListener * listener;                                       //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) EFLocked * connectedClients;                                  //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,retain) EDDaemonInterfaceFactory * daemonInterfaceFactory;              //@synthesize daemonInterfaceFactory=_daemonInterfaceFactory - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * serverXPCEndpoint; 
@property (nonatomic,copy,readonly) NSArray * test_remoteClients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(EFLocked *)connectedClients;
-(void)test_tearDown;
-(id)messageReconciliationQueries;
-(id)threadReconciliationQueries;
-(EDDaemonInterfaceFactory *)daemonInterfaceFactory;
-(id)initWithDaemonInterfaceFactory:(id)arg1 listener:(id)arg2 ;
-(void)removeRemoteClient:(id)arg1 ;
-(void)addRemoteClient:(id)arg1 ;
-(id)initWithDaemonInterfaceFactory:(id)arg1 ;
-(NSArray *)test_remoteClients;
-(NSXPCListenerEndpoint *)serverXPCEndpoint;
-(void)setDaemonInterfaceFactory:(EDDaemonInterfaceFactory *)arg1 ;
@end

