/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSNumber, NSDate, HMDDevice, NSUUID, HMDUser, HMFPairingIdentity, HMDSecureRemoteStreamInternal, HMDAWDRemoteSessionMetric, NSString, NSArray;

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	char _open;
	char _idle;
	char _supportsSharedIdentities;
	long long _qualityOfService;
	NSNumber* _maximumRemoteStreams;
	NSDate* _lastActivity;
	HMDDevice* _peerDevice;
	long long _role;
	NSUUID* _sessionID;
	HMDUser* _peer;
	HMFPairingIdentity* _peerIdentity;
	HMDSecureRemoteStreamInternal* _remoteSession;
	HMDDevice* _currentDevice;
	HMDAWDRemoteSessionMetric* _metric;

}

@property (retain) HMDDevice * peerDevice;                                               //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) HMDUser * peer;                                             //@synthesize peer=_peer - In the implementation block
@property (nonatomic,retain) HMFPairingIdentity * peerIdentity;                          //@synthesize peerIdentity=_peerIdentity - In the implementation block
@property (nonatomic,retain) HMDSecureRemoteStreamInternal * remoteSession;              //@synthesize remoteSession=_remoteSession - In the implementation block
@property (nonatomic,readonly) HMDDevice * currentDevice;                                //@synthesize currentDevice=_currentDevice - In the implementation block
@property (assign,nonatomic) char supportsSharedIdentities;                              //@synthesize supportsSharedIdentities=_supportsSharedIdentities - In the implementation block
@property (nonatomic,retain) HMDAWDRemoteSessionMetric * metric;                         //@synthesize metric=_metric - In the implementation block
@property (readonly) long long role;                                                     //@synthesize role=_role - In the implementation block
@property (copy,readonly) NSNumber * maximumRemoteStreams;                               //@synthesize maximumRemoteStreams=_maximumRemoteStreams - In the implementation block
@property (assign) long long qualityOfService;                                           //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (getter=isOpen,readonly) char open;                                            //@synthesize open=_open - In the implementation block
@property (getter=isAuthenticated,readonly) char authenticated; 
@property (getter=isIdle,readonly) char idle;                                            //@synthesize idle=_idle - In the implementation block
@property (copy,readonly) NSDate * lastActivity;                                         //@synthesize lastActivity=_lastActivity - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
-(void)dealloc;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)role;
-(void)stop;
-(long long)qualityOfService;
-(char)isOpen;
-(NSString *)shortDescription;
-(NSUUID *)sessionID;
-(void)closedWithError:(id)arg1 ;
-(HMDAWDRemoteSessionMetric *)metric;
-(void)setMetric:(HMDAWDRemoteSessionMetric *)arg1 ;
-(void)setOpen:(char)arg1 ;
-(HMDUser *)peer;
-(HMDDevice *)peerDevice;
-(void)setPeerDevice:(HMDDevice *)arg1 ;
-(HMDDevice *)currentDevice;
-(void)setPeer:(HMDUser *)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isAuthenticated;
-(char)isIdle;
-(void)_closeWithError:(id)arg1 ;
-(id)logIdentifier;
-(NSString *)propertyDescription;
-(NSNumber *)maximumRemoteStreams;
-(void)setMaximumRemoteStreams:(NSNumber *)arg1 ;
-(void)handleSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3 ;
-(id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 clientMode:(char)arg3 sessionID:(id)arg4 ;
-(void)startAndInvokeOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDate *)lastActivity;
-(void)__handleAccountRemovedFromRegistry:(id)arg1 ;
-(void)__handleDeviceRemovedFromAccount:(id)arg1 ;
-(void)_configureWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRemoteSession:(HMDSecureRemoteStreamInternal *)arg1 ;
-(HMDSecureRemoteStreamInternal *)remoteSession;
-(char)supportsSharedIdentities;
-(void)setPeerIdentity:(HMFPairingIdentity *)arg1 ;
-(void)__handleRemovedIdentity:(id)arg1 ;
-(void)setIdle:(char)arg1 ;
-(void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setSupportsSharedIdentities:(char)arg1 ;
-(HMFPairingIdentity *)peerIdentity;
@end

