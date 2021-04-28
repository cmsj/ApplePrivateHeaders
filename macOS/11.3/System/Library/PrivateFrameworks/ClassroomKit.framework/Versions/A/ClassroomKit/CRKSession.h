/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKSessionDelegate, CRKGrowthFunction;
@class CATStateMachine, CRKRemoteEndpoint, CATTransport, CRKTransportPreflightOperation, NSDictionary;

@interface CRKSession : NSObject {

	CATStateMachine* mFSM;
	double mCurrentBackoffInterval;
	char _requiresBeacon;
	id<CRKSessionDelegate> _delegate;
	CRKRemoteEndpoint* _endpoint;
	id<CRKGrowthFunction> _backoffGrowthFunction;
	CATTransport* _transport;
	double _lostBeaconTimeout;
	double _willLoseBeaconWarningTimeout;
	CRKTransportPreflightOperation* _transportPreflightOperation;

}

@property (nonatomic,readonly) id<CRKGrowthFunction> backoffGrowthFunction;                             //@synthesize backoffGrowthFunction=_backoffGrowthFunction - In the implementation block
@property (nonatomic,retain) CATStateMachine * stateMachine; 
@property (nonatomic,retain) CATTransport * transport;                                                  //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) double lostBeaconTimeout;                                                  //@synthesize lostBeaconTimeout=_lostBeaconTimeout - In the implementation block
@property (assign,nonatomic) double willLoseBeaconWarningTimeout;                                       //@synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout - In the implementation block
@property (nonatomic,retain) CRKTransportPreflightOperation * transportPreflightOperation;              //@synthesize transportPreflightOperation=_transportPreflightOperation - In the implementation block
@property (assign,nonatomic,__weak) id<CRKSessionDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) CRKRemoteEndpoint * endpoint;                                                      //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) char requiresBeacon;                                                       //@synthesize requiresBeacon=_requiresBeacon - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stateDictionary; 
-(void)invalidate;
-(id<CRKSessionDelegate>)delegate;
-(void)setDelegate:(id<CRKSessionDelegate>)arg1 ;
-(CRKRemoteEndpoint *)endpoint;
-(id)initWithEndpoint:(id)arg1 ;
-(void)connect;
-(CATStateMachine *)stateMachine;
-(void)setStateMachine:(CATStateMachine *)arg1 ;
-(CATTransport *)transport;
-(void)setTransport:(CATTransport *)arg1 ;
-(void)rejected;
-(void)registerDefaults;
-(NSDictionary *)stateDictionary;
-(void)lostConnection;
-(void)didConnect;
-(void)foundBeacon;
-(void)lostBeacon;
-(void)enterOutOfRange;
-(void)enterNoNetwork;
-(void)delegateDidLoseBeacon;
-(void)enterBackoffCanConnect;
-(void)exitBackoffCanConnect;
-(void)delegateDidBecomeConnectable;
-(void)delegateDidBecomeNotConnectableAndDidLoseBeacon;
-(void)delegateDidBecomeNotConnectable;
-(void)tryConnecting;
-(void)cancelConnectionAttempt;
-(void)delegateConnected;
-(void)resetBackoff;
-(void)delegateDisconnected;
-(void)delegateInvalidated;
-(void)delegateWillLoseBeacon;
-(char)requiresBeacon;
-(double)willLoseBeaconWarningTimeout;
-(CRKTransportPreflightOperation *)transportPreflightOperation;
-(void)failedToConnect;
-(id)studentSocketOptions;
-(void)startPreflightingTransport:(id)arg1 ;
-(void)stopPreflightingTransport;
-(double)lostBeaconTimeout;
-(id<CRKGrowthFunction>)backoffGrowthFunction;
-(void)backoffDidFinish;
-(void)setTransportPreflightOperation:(CRKTransportPreflightOperation *)arg1 ;
-(void)transportPreflightOperationDidFinish:(id)arg1 ;
-(void)processFinishedTransportPreflightOperation:(id)arg1 ;
-(void)setRequiresBeacon:(char)arg1 ;
-(void)localWiFiBecameAvailable;
-(void)localWiFiBecameUnavailable;
-(void)setLostBeaconTimeout:(double)arg1 ;
-(void)setWillLoseBeaconWarningTimeout:(double)arg1 ;
@end
