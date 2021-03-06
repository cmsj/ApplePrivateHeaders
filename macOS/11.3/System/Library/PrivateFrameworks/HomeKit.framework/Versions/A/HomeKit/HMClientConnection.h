/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMXPCClient, HMFMessageDispatcher, NSUUID, NSString;

@interface HMClientConnection : NSObject <HMFMessageReceiver> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	HMXPCClient* _xpcClient;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMXPCClient * xpcClient;                                         //@synthesize xpcClient=_xpcClient - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(char)areHomesConfigured;
+(id)siriCurrentHome;
+(id)siriHomeIdentifier;
+(char)areAnyAccessoriesConfigured;
+(char)areAnySpeakersConfigured;
+(char)areAnySmallHomePodsConfigured;
+(char)areAnyHomePodsConfigured;
+(char)areAnyTelevisionAccessoriesConfigured;
+(char)areAnyAppleTVAccessoriesConfigured;
-(id)init;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)_registerToDaemon;
-(void)_start;
-(HMXPCClient *)xpcClient;
-(void)setXpcClient:(HMXPCClient *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)initWithNoValidation;
-(void)_reportResultsTohandler:(/*^block*/id)arg1 ;
-(void)sendSiriCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestSiriSyncDataWithValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

