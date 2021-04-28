/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamReceiverDestinationProtocol.h>

@protocol HMDCameraIDSSessionReceiverDelegate, OS_dispatch_queue;
@class NSString, NSObject, HMDCameraIDSSessionInviterDeviceVerifier, IDSSession;

@interface HMDCameraIDSSessionReceiver : HMDCameraIDSSessionHandler <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol> {

	id<HMDCameraIDSSessionReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDCameraIDSSessionInviterDeviceVerifier* _sessionInviterDeviceVerifier;

}

@property (nonatomic,readonly) HMDCameraIDSSessionInviterDeviceVerifier * sessionInviterDeviceVerifier;              //@synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier - In the implementation block
@property (assign,nonatomic,__weak) id<HMDCameraIDSSessionReceiverDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * remoteDestination; 
@property (nonatomic,readonly) IDSSession * session; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraIDSSessionReceiverDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraIDSSessionReceiverDelegate>)arg1 ;
-(IDSSession *)session;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5 ;
-(id)logIdentifier;
-(void)setupReceiver:(id)arg1 ;
-(NSString *)remoteDestination;
-(void)_callSessionEnded:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(HMDCameraIDSSessionInviterDeviceVerifier *)sessionInviterDeviceVerifier;
-(void)_receivedIDSSession:(id)arg1 ;
-(void)_callSessionSetup:(id)arg1 ;
@end
