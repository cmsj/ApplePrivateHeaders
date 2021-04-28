/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSAccounts.framework/Versions/A/AOSAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/iCloudUserNotifierRemoteObjectProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol iCloudUserNotificationDelegate;
@class NSXPCConnection, NSLock, NSXPCListener, NSString;

@interface iCloudUserNotifier : NSObject <iCloudUserNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListener* _listener;
	NSString* _identifier;
	NSString* _serviceName;
	id<iCloudUserNotificationDelegate> _delegate;

}

@property (readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * serviceName;                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) id<iCloudUserNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<iCloudUserNotificationDelegate>)delegate;
-(void)setDelegate:(id<iCloudUserNotificationDelegate>)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)identifier;
-(NSString *)serviceName;
-(void)deliverNotification:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2 ;
-(void)removeNotificationsWithDSID:(id)arg1 ;
-(id)agentConnection;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(void)removeAllNotifications;
-(id)_pendingNotificationsWithClientIdentifier:(id)arg1 ;
-(void)_agentConnectionWasInterrupted;
-(void)_agentConnectionWasInvalidated;
-(void)_agentConnectionFailedToBootstrap;
-(void)didActivateNotification:(id)arg1 ;
-(void)didDismissNotification:(id)arg1 ;
-(void)didClearNotification:(id)arg1 ;
-(id)pendingNotifications;
-(id)_pendingNotificationsForAllClients;
@end
