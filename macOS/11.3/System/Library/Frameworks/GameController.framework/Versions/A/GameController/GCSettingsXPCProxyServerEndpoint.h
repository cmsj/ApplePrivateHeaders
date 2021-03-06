/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCIPCEndpointServer.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyRemoteServerEndpointInterface.h>

@protocol GCSettingsXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, NSObjectNSCopyingNSSecureCoding, GCSettingsXPCProxyServerEndpointDelegate;
@class GCControllerSettings, NSString;

@interface GCSettingsXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCSettingsXPCProxyRemoteServerEndpointInterface> {

	id<GCSettingsXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
	id<_GCIPCEndpointConnection> _connection;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	unsigned long long _pendingUpdates;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCControllerSettings* _settingsForBundleID;
	GCControllerSettings* _settingsDefault;
	id<GCSettingsXPCProxyServerEndpointDelegate> _delegate;
	id _userInfo;

}

@property (nonatomic,readonly) id<_GCControllerComponentDescription> receiverDescription; 
@property (assign,nonatomic,__weak) id<GCSettingsXPCProxyServerEndpointDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id userInfo;                                                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) GCControllerSettings * settingsForBundleID;                                //@synthesize settingsForBundleID=_settingsForBundleID - In the implementation block
@property (nonatomic,retain) GCControllerSettings * settingsDefault;                                    //@synthesize settingsDefault=_settingsDefault - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id<GCSettingsXPCProxyServerEndpointDelegate>)delegate;
-(void)setDelegate:(id<GCSettingsXPCProxyServerEndpointDelegate>)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setUserInfo:(id)arg1 ;
-(void)invalidateConnection;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(char)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3 ;
-(id<_GCControllerComponentDescription>)receiverDescription;
-(void)invalidateClient;
-(GCControllerSettings *)settingsForBundleID;
-(GCControllerSettings *)settingsDefault;
-(void)fetchSettingsWithReply:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialValueForBundleID:(id)arg2 defaultSettings:(id)arg3 ;
-(id)initWithInitialValueForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
-(void)setSettingsDefault:(GCControllerSettings *)arg1 ;
-(void)setSettingsForBundleID:(GCControllerSettings *)arg1 ;
@end

