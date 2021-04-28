/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMFMessageReceiver;
@class HMDHomeAdministratorHandler, NSString, NSUUID;

@interface __HMDHomeAdministratorReceiver : HMFObject <HMFLogging, HMFMessageReceiver> {

	id<HMFMessageReceiver> _receiver;
	HMDHomeAdministratorHandler* _handler;

}

@property (__weak,readonly) id<HMFMessageReceiver> receiver;                                  //@synthesize receiver=_receiver - In the implementation block
@property (__weak,readonly) HMDHomeAdministratorHandler * handler;                            //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)dealloc;
-(HMDHomeAdministratorHandler *)handler;
-(id<HMFMessageReceiver>)receiver;
-(id)shortDescription;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)__handleMessage:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 handler:(id)arg2 ;
-(void)registerForMessage:(id)arg1 policies:(id)arg2 ;
@end
