/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCTransportSession.h>
#import <libobjc.A.dylib/LoopbackSocketTunnelDelegate.h>
#import <libobjc.A.dylib/InterfaceListenerDelegate.h>
#import <libobjc.A.dylib/VCConnectionManagerDelegate.h>

@protocol OS_dispatch_source, VideoConferenceRealTimeChannel, VCConnectionProtocol;
@class NSObject, VCTransport, NSMutableDictionary, NSDictionary, NSData, NSString, TCPTunnelClient, LoopbackSocketTunnel, NSCondition, GKInterfaceListener;

@interface VCTransportSessionLegacy : VCTransportSession <LoopbackSocketTunnelDelegate, InterfaceListenerDelegate, VCConnectionManagerDelegate> {

	unsigned char _localU8Version;
	long long relayState;
	int pendingRelayCount;
	float callerPreEmptiveTimeoutInSecs;
	unsigned _connectionSetupRTTEstimate;
	char allowsRelay;
	char initialSecondaryRelaySetupDone;
	char requestedTimeoutRelay;
	char _isCaller;
	char _didReceivePiggybackBlob;
	char _useLoopback;
	char _isRemoteOSPreLion;
	char _isStarted;
	NSObject*<OS_dispatch_source> relaySetupTimer;
	VCTransport* transport;
	unsigned _callID;
	unsigned _remoteCallID;
	int _NATType;
	NSMutableDictionary* _localRelayRequestResponse;
	NSDictionary* _localRelayUpdate;
	NSMutableDictionary* _remoteRelayRequestResponse;
	NSDictionary* _remoteRelayUpdate;
	NSData* _localConnectionData;
	NSData* _localRelayConnectionData;
	NSData* _remoteConnectionData;
	NSData* _remoteRelayConnectionData;
	NSString* _localParticipantID;
	NSString* _remoteParticipantID;
	NSString* _sessionID;
	SecIdentityRef _identity;
	TCPTunnelClient* _tcpTunnelClient;
	NSObject*<VideoConferenceRealTimeChannel> rtChannel;
	LoopbackSocketTunnel* _tunnel;
	id<VCConnectionProtocol> _loopbackConnection;
	NSCondition* _connectionDataTimeoutCondVar;
	GKInterfaceListener* _interfaceListener;
	int _operatingMode;
	id _delegate;

}

@property (assign,nonatomic) int pendingRelayCount; 
@property (assign,nonatomic) char initialSecondaryRelaySetupDone; 
@property (nonatomic,retain) NSDictionary * localRelayUpdate;                               //@synthesize localRelayUpdate=_localRelayUpdate - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteRelayUpdate;                              //@synthesize remoteRelayUpdate=_remoteRelayUpdate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteRelayRequestResponse;              //@synthesize remoteRelayRequestResponse=_remoteRelayRequestResponse - In the implementation block
@property (nonatomic,retain) NSData * remoteRelayConnectionData;                            //@synthesize remoteRelayConnectionData=_remoteRelayConnectionData - In the implementation block
@property (retain) NSMutableDictionary * localRelayRequestResponse;                         //@synthesize localRelayRequestResponse=_localRelayRequestResponse - In the implementation block
@property (retain) NSData * localConnectionData;                                            //@synthesize localConnectionData=_localConnectionData - In the implementation block
@property (retain) NSData * localRelayConnectionData;                                       //@synthesize localRelayConnectionData=_localRelayConnectionData - In the implementation block
@property (assign) char allowsRelay; 
@property (assign) char isCaller;                                                           //@synthesize isCaller=_isCaller - In the implementation block
@property (assign) unsigned remoteCallID;                                                   //@synthesize remoteCallID=_remoteCallID - In the implementation block
@property (assign) id<VCTransportSessionLegacyDelegate> delegate; 
@property (copy) NSString * localParticipantID;                                             //@synthesize localParticipantID=_localParticipantID - In the implementation block
@property (copy) NSString * remoteParticipantID;                                            //@synthesize remoteParticipantID=_remoteParticipantID - In the implementation block
@property (copy) NSString * sessionID;                                                      //@synthesize sessionID=_sessionID - In the implementation block
@property (retain) NSData * remoteConnectionData;                                           //@synthesize remoteConnectionData=_remoteConnectionData - In the implementation block
@property (assign) int NATType;                                                             //@synthesize NATType=_NATType - In the implementation block
@property (assign) int operatingMode;                                                       //@synthesize operatingMode=_operatingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<VCTransportSessionLegacyDelegate>)delegate;
-(void)setDelegate:(id<VCTransportSessionLegacyDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setIdentity:(SecIdentityRef)arg1 ;
-(NSString *)localParticipantID;
-(NSString *)remoteParticipantID;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(void)triggerInterfaceChange;
-(void)networkStateDidChange;
-(void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(tagIPPORT*)arg3 ;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(id)arg2 ;
-(void)setIsCaller:(char)arg1 ;
-(char)isCaller;
-(void)connectionCallback:(id)arg1 isInitialConnection:(char)arg2 ;
-(void)handleRATChanged:(id)arg1 ;
-(char)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)didEnableDuplication:(char)arg1 activeConnection:(id)arg2 ;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3 ;
-(int)detailedErrorCode;
-(void)reportNetworkConditionsDegraded;
-(void)processRemoteIPChange:(id)arg1 ;
-(void)processRelayRequestResponse:(id)arg1 didOriginateRequest:(char)arg2 ;
-(void)processRelayUpdate:(id)arg1 didOriginateRequest:(char)arg2 ;
-(char)isRemoteOSPreLion;
-(void)handleConnectionSetupDataChangeMessageDelivered;
-(void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1 ;
-(void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1 ;
-(void)setForceRelay;
-(void)setAllowsRelay:(char)arg1 ;
-(void)setLocalParticipantID:(NSString *)arg1 ;
-(void)setRemoteParticipantID:(NSString *)arg1 ;
-(void)setRemoteCallID:(unsigned)arg1 ;
-(void)setRemoteConnectionData:(NSData *)arg1 ;
-(void)setNATType:(int)arg1 ;
-(char)isHandoverSupported;
-(void)setupTransport;
-(void)initiateRelayRequest;
-(NSData *)remoteConnectionData;
-(char)startConnectionWithBlob:(id)arg1 useRelay:(char)arg2 isInitialRelay:(char)arg3 error:(id*)arg4 ;
-(NSDictionary *)remoteRelayUpdate;
-(double)iceTimeoutInSeconds:(char)arg1 ;
-(void)stopLoopback;
-(void)setLocalRelayRequestResponse:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)localRelayRequestResponse;
-(void)setRemoteRelayRequestResponse:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)remoteRelayRequestResponse;
-(void)deleteTCPTunnel;
-(char)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(char)arg3 relayType:(unsigned char)arg4 error:(id*)arg5 ;
-(void)resetICETimeoutToLongTimeout;
-(id)createRelayUpdateDictionary:(id)arg1 ;
-(void)setLocalRelayUpdate:(NSDictionary *)arg1 ;
-(NSDictionary *)localRelayUpdate;
-(void)setRemoteRelayConnectionData:(NSData *)arg1 ;
-(NSData *)remoteRelayConnectionData;
-(void)getConnectionDataUsingRelay:(char)arg1 isInitialRelay:(char)arg2 nonCellularCandidateTimeout:(double)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setRemoteRelayUpdate:(NSDictionary *)arg1 ;
-(void)destroySecondaryRelayDispatchTimer;
-(void)setupSecondaryRelayForCall:(unsigned)arg1 callerRequired:(char)arg2 ;
-(void)notifyDelegateToCancelRelay;
-(char)isConnectedAndAllowAdditionalConnection;
-(id)createInitiateRelayDictionaryForCall:(unsigned)arg1 primaryConnection:(tagCONNRESULT*)arg2 ;
-(id)createInitiateRelayDictionary;
-(NSData *)localConnectionData;
-(tagIPPORT)IPPortForPrimaryConnectionOnLocalInterface:(char)arg1 ;
-(void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned)arg2 callerRequired:(char)arg3 ;
-(void)processRemoteIPChange:(char*)arg1 dataLength:(int)arg2 remoteCandidateVersion:(unsigned short)arg3 ;
-(char)handleExchangedKey:(id)arg1 result:(int)arg2 ;
-(unsigned)connectionTypeForConnectionResult:(tagCONNRESULT*)arg1 ;
-(void)setupPendingSecondaryRelayWithNewPrimary:(id)arg1 ;
-(void)resetLoopback;
-(void)setLocalRelayConnectionData:(NSData *)arg1 ;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)setupLoopbackWithConnectionType:(unsigned)arg1 ;
-(void)stopLoopbackProc:(id)arg1 ;
-(NSData *)localRelayConnectionData;
-(id)connectionDataUsingRelay:(char)arg1 isInitialRelay:(char)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id*)arg4 ;
-(void)setLocalConnectionData:(NSData *)arg1 ;
-(int)generateConnectionData:(char**)arg1 forCallID:(unsigned)arg2 connectionDataSize:(int*)arg3 nonCellularCandidateTimeout:(double)arg4 ;
-(id)connectionData:(char*)arg1 connectionDataSizeInBytes:(int)arg2 shouldUseRelay:(char)arg3 ;
-(void)connectionResultCallback:(tagCONNRESULT*)arg1 didReceiveICEPacket:(char)arg2 didUseRelay:(char)arg3 secretKey:(id)arg4 skeResult:(int)arg5 ;
-(void)handleNewCandidates:(id)arg1 version:(unsigned short)arg2 ;
-(void)setupInitialSecondaryRelayWithCallbackRelayFlag:(char)arg1 callID:(unsigned)arg2 connectionId:(int)arg3 ;
-(void)updateParticipantGenerationCounter:(unsigned char)arg1 ;
-(int)pendingRelayCount;
-(void)setPendingRelayCount:(int)arg1 ;
-(char)initialSecondaryRelaySetupDone;
-(void)setInitialSecondaryRelaySetupDone:(char)arg1 ;
-(char)allowsRelay;
-(unsigned)remoteCallID;
-(unsigned)connectionSetupRTTEstimate;
-(int)NATType;
@end

