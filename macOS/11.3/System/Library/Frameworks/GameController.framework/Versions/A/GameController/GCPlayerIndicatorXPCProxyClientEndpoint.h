/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCControllerPlayerIndicator.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface.h>

@protocol GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCController, NSString;

@interface GCPlayerIndicatorXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerPlayerIndicator, GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	long long _playerIndex;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long playerIndex;                                             //@synthesize playerIndex=_playerIndex - In the implementation block
-(id)init;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setController:(id)arg1 ;
-(void)invalidateConnection;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(void)newPlayerIndex:(long long)arg1 ;
-(void)refreshPlayerIndex;
-(void)_remoteEndpointSetPlayerIndex:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialPlayerIndex:(long long)arg2 ;
@end

