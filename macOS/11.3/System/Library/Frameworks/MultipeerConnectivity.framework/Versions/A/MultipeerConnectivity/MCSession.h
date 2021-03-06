/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/Versions/A/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCSessionDelegate, MCSessionPrivateDelegate, OS_dispatch_queue;
#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
@class MCPeerID, NSArray, NSMutableDictionary, NSObject, NSString;

@interface MCSession : NSObject {

	char _AWDLDisabled;
	id<MCSessionDelegate> _delegate;
	char _preferNCMOverEthernet;
	id<MCSessionPrivateDelegate> _privateDelegate;
	unsigned _gckPID;
	MCPeerID* _myPeerID;
	NSArray* _securityIdentity;
	long long _encryptionPreference;
	OpaqueGCKSessionRef _gckSession;
	OpaqueAGPSessionRef _agpSession;
	NSMutableDictionary* _peerIDMap;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _peerStates;
	NSMutableDictionary* _connectionPendingPeerEvents;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _stateHandle;
	NSString* _sessionID;
	unsigned long long _maxPeers;

}

@property (assign,nonatomic) id<MCSessionPrivateDelegate> privateDelegate; 
@property (assign,getter=isAWDLDisabled,nonatomic) char AWDLDisabled; 
@property (assign,nonatomic) char preferNCMOverEthernet; 
@property (assign,nonatomic) OpaqueGCKSessionRef gckSession;                                 //@synthesize gckSession=_gckSession - In the implementation block
@property (assign,nonatomic) OpaqueAGPSessionRef agpSession;                                 //@synthesize agpSession=_agpSession - In the implementation block
@property (assign,nonatomic) unsigned gckPID;                                                //@synthesize gckPID=_gckPID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peerIDMap;                                //@synthesize peerIDMap=_peerIDMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                         //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peerStates;                               //@synthesize peerStates=_peerStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionPendingPeerEvents;              //@synthesize connectionPendingPeerEvents=_connectionPendingPeerEvents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                                 //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                           //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned long long maxPeers;                                    //@synthesize maxPeers=_maxPeers - In the implementation block
@property (__weak) id<MCSessionDelegate> delegate; 
@property (readonly) MCPeerID * myPeerID;                                                    //@synthesize myPeerID=_myPeerID - In the implementation block
@property (readonly) NSArray * securityIdentity;                                             //@synthesize securityIdentity=_securityIdentity - In the implementation block
@property (readonly) long long encryptionPreference;                                         //@synthesize encryptionPreference=_encryptionPreference - In the implementation block
@property (readonly) NSArray * connectedPeers; 
+(id)stringForSessionState:(long long)arg1 ;
+(id)stringForMCSessionSendDataMode:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id<MCSessionDelegate>)delegate;
-(void)setDelegate:(id<MCSessionDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)disconnect;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(unsigned long long)stateHandle;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id<MCSessionPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<MCSessionPrivateDelegate>)arg1 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)securityIdentity;
-(id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(long long)arg3 ;
-(void)setAWDLDisabled:(char)arg1 ;
-(void)setHeartbeatTimeout:(unsigned long long)arg1 ;
-(char)sendData:(id)arg1 toPeers:(id)arg2 withMode:(long long)arg3 error:(id*)arg4 ;
-(NSArray *)connectedPeers;
-(MCPeerID *)myPeerID;
-(id)initWithPeer:(id)arg1 ;
-(NSMutableDictionary *)peerStates;
-(void)syncSendXDataStreamCloseFromSenderToPID:(unsigned)arg1 streamID:(unsigned)arg2 closeReason:(unsigned short)arg3 ;
-(void)syncCloseOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 shouldTriggerCancelProgress:(char)arg5 ;
-(void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(char)arg4 ;
-(OpaqueAGPSessionRef)agpSession;
-(long long)encryptionPreference;
-(id)stringForEncryptionPreference:(long long)arg1 ;
-(void)syncCloseIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 reason:(int)arg5 shouldTriggerCancelProgress:(char)arg6 ;
-(unsigned long long)syncConnectedPeersCount;
-(unsigned long long)maxPeers;
-(OpaqueGCKSessionRef)gckSession;
-(id)syncDetailedDescription;
-(void)syncSendXDataConnectionBlobPushToPID:(unsigned)arg1 connectionBlob:(id)arg2 ;
-(void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned)arg1 streamID:(unsigned)arg2 closeReason:(unsigned short)arg3 ;
-(void)syncCancelIncomingStream:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncCancelOutgoingStream:(id)arg1 toPeer:(id)arg2 ;
-(void)setMaxPeers:(unsigned long long)arg1 ;
-(void)syncLogConnectedPeers;
-(void)syncLogMaxConnectedPeers;
-(void)syncSendXDataPeerIDPushToPID:(unsigned)arg1 ;
-(void)startConnectionWithIndirectPID:(unsigned)arg1 ;
-(void)syncHandleNetworkEvent:(SCD_Struct_MC2*)arg1 pid:(unsigned)arg2 freeEventWhenDone:(char*)arg3 ;
-(void)syncPeer:(id)arg1 changeStateTo:(long long)arg2 shouldForceCallback:(char)arg3 ;
-(void)syncCloseStreamsForPeer:(id)arg1 ;
-(void)syncHandleXDataDataPacket:(char*)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4 ;
-(void)syncSendXDataStreamOpenResponseToPID:(unsigned)arg1 withRequestID:(unsigned)arg2 streamID:(unsigned)arg3 ;
-(void)cancelIncomingStream:(id)arg1 fromPeer:(id)arg2 ;
-(os_state_data_s*)syncStateCapture;
-(void)logSessionInfo;
-(void)syncGetConnectionDataForPeerState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isEncryptionPreferenceCompatible:(long long)arg1 ;
-(void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2 ;
-(void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(long long)arg3 ;
-(void)cancelOutgoingStream:(id)arg1 toPeer:(id)arg2 ;
-(unsigned)gckPID;
-(void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2 ;
-(void)cancelConnectPeer:(id)arg1 ;
-(id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id*)arg3 ;
-(void)setGckSession:(OpaqueGCKSessionRef)arg1 ;
-(void)setAgpSession:(OpaqueAGPSessionRef)arg1 ;
-(void)setGckPID:(unsigned)arg1 ;
-(NSMutableDictionary *)peerIDMap;
-(void)setPeerIDMap:(NSMutableDictionary *)arg1 ;
-(void)setPeerStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)connectionPendingPeerEvents;
-(void)setConnectionPendingPeerEvents:(NSMutableDictionary *)arg1 ;
-(void)peerDidDeclineInvitation:(id)arg1 ;
-(long long)connectedInterfacesForPeer:(id)arg1 ;
-(char)isAWDLDisabled;
-(char)preferNCMOverEthernet;
-(void)setPreferNCMOverEthernet:(char)arg1 ;
-(void)setICETimeoutForced:(char)arg1 ;
-(void)closeDirectConnectionsWithPeer:(id)arg1 ;
@end

