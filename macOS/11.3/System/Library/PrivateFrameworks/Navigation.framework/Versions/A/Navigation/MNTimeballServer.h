/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, MNTimeballCache, MNRouteRefreshPolicyScheduler, MNTimeballRoutingProvider, MNTimeballLocationManager, NSLock, NSMutableSet, NSString;

@interface MNTimeballServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	MNTimeballCache* _cache;
	MNRouteRefreshPolicyScheduler* _scheduler;
	MNTimeballRoutingProvider* _routingProvider;
	MNTimeballLocationManager* _locationManager;
	NSLock* _proxyLock;
	NSMutableSet* _proxies;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultServer;
-(void)dealloc;
-(id)init;
-(id)_cache;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_scheduler;
-(id)_routingProvider;
-(id)_navd_localProxyForClient:(id)arg1 ;
-(void)_navd_addProxy:(id)arg1 ;
-(void)_navd_removeProxy:(id)arg1 ;
-(id)_localProxyForPeer:(id)arg1 ;
-(void)_peerDidConnectWithProxy:(id)arg1 ;
-(void)_peerDidDisconnectWithProxy:(id)arg1 ;
@end

