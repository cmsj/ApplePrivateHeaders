/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKConnection, NSString;

@interface GKSession : NSObject {

	id _session;

}

@property (__weak) id<GKSessionPrivateDelegate> privateDelegate; 
@property (getter=isBusy) char busy; 
@property (assign) char wifiEnabled; 
@property (readonly) GKConnection * connection; 
@property (__weak) id<GKSessionDelegate> delegate; 
@property (readonly) NSString * sessionID; 
@property (readonly) NSString * displayName; 
@property (readonly) int sessionMode; 
@property (readonly) NSString * peerID; 
@property (getter=isAvailable) char available; 
@property (assign) double disconnectTimeout; 
+(void)initialize;
-(void)dealloc;
-(id)description;
-(id<GKSessionDelegate>)delegate;
-(void)setDelegate:(id<GKSessionDelegate>)arg1 ;
-(GKConnection *)connection;
-(NSString *)displayName;
-(char)isAvailable;
-(char)isBusy;
-(void)setBusy:(char)arg1 ;
-(void)setAvailable:(char)arg1 ;
-(NSString *)sessionID;
-(id<GKSessionPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<GKSessionPrivateDelegate>)arg1 ;
-(NSString *)peerID;
-(char)wifiEnabled;
-(int)sessionMode;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(void)setWifiEnabled:(char)arg1 ;
-(void)setDisconnectTimeout:(double)arg1 ;
-(double)disconnectTimeout;
-(id)displayNameForPeer:(id)arg1 ;
-(char)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4 ;
-(char)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3 ;
-(void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2 ;
-(void)connectToPeer:(id)arg1 withTimeout:(double)arg2 ;
-(void)cancelConnectToPeer:(id)arg1 ;
-(char)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2 ;
-(void)denyConnectionFromPeer:(id)arg1 ;
-(void)disconnectPeerFromAllPeers:(id)arg1 ;
-(void)disconnectFromAllPeers;
-(id)peersWithConnectionState:(int)arg1 ;
-(char)isPeerBusy:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3 ;
-(id)privateImpl;
@end

