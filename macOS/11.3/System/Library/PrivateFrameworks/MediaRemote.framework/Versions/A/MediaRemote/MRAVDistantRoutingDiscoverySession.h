/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>
#import <libobjc.A.dylib/MRAVDistantRoutingDiscoveryClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString, NSXPCConnection, NSMutableDictionary;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _endpointFeatures;
	unsigned _discoveryMode;
	char _enableThrottling;
	NSArray* _distantEndpoints;
	NSArray* _distantOutputDevices;
	NSString* _routingContextUID;
	int _serviceResetNotifyToken;
	char _hostedRoutingConnectionDidInitialize;
	NSXPCConnection* _hostedRoutingSessionConnection;
	NSMutableDictionary* _distantExternalDevices;

}

@property (nonatomic,retain) NSXPCConnection * hostedRoutingSessionConnection;              //@synthesize hostedRoutingSessionConnection=_hostedRoutingSessionConnection - In the implementation block
@property (nonatomic,retain) NSArray * distantEndpoints; 
@property (nonatomic,retain) NSArray * distantOutputDevices; 
@property (nonatomic,retain) NSMutableDictionary * distantExternalDevices;                  //@synthesize distantExternalDevices=_distantExternalDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
+(id)serviceInterface;
-(void)dealloc;
-(NSString *)description;
-(id)initWithConfiguration:(id)arg1 ;
-(id)routingContextUID;
-(unsigned)discoveryMode;
-(char)devicePresenceDetected;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(id)availableOutputDevices;
-(void)setRoutingContextUID:(id)arg1 ;
-(void)availableEndpointsDidChange:(id)arg1 ;
-(void)availableOutputDevicesDidChange:(id)arg1 ;
-(void)_initializeHostedRoutingConnectionWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadHostedRoutingServiceDiscoveryMode;
-(void)_reloadHostedRoutingServiceEndpointFeatures;
-(id)_hostedRoutingConnection;
-(NSArray *)distantEndpoints;
-(NSArray *)distantOutputDevices;
-(void)_reloadAvailableDistantEndpoints;
-(void)_reloadAvailableDistantOutputDevices;
-(void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1 ;
-(void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1 ;
-(void)setHostedRoutingSessionConnection:(NSXPCConnection *)arg1 ;
-(char)_shouldAddLocalEndpoint;
-(unsigned)endpointFeatures;
-(void)setEndpointFeatures:(unsigned)arg1 ;
-(id)availableEndpoints;
-(void)setDistantEndpoints:(NSArray *)arg1 ;
-(void)setDistantOutputDevices:(NSArray *)arg1 ;
-(NSXPCConnection *)hostedRoutingSessionConnection;
-(NSMutableDictionary *)distantExternalDevices;
-(void)setDistantExternalDevices:(NSMutableDictionary *)arg1 ;
@end
