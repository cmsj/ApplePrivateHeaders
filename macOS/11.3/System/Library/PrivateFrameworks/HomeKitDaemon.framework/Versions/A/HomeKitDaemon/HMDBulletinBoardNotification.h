/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSPredicate, HMDBulletinBoardNotificationServiceGroup, NSUUID, NSObject, HMDService, HMFMessageDispatcher, NSString;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {

	id<HMFLocking> _lock;
	char _enabled;
	NSPredicate* _condition;
	HMDBulletinBoardNotificationServiceGroup* _notificationServiceGroup;
	NSUUID* _messageTargetUUID;
	NSObject*<OS_dispatch_queue> _messageReceiveQueue;
	HMDService* _service;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,__weak,readonly) HMDService * service;                                                    //@synthesize service=_service - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSPredicate * condition;                                                          //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) HMDBulletinBoardNotificationServiceGroup * notificationServiceGroup;              //@synthesize notificationServiceGroup=_notificationServiceGroup - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID;                                                     //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue;                               //@synthesize messageReceiveQueue=_messageReceiveQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)logCategory;
+(char)supportsBulletinNotificationGroup:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSPredicate *)condition;
-(HMDService *)service;
-(id)initWithService:(id)arg1 ;
-(void)setCondition:(NSPredicate *)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(HMDBulletinBoardNotificationServiceGroup *)notificationServiceGroup;
-(void)registerForCharacteristicNotifications;
-(void)configureMsgDispatcher:(id)arg1 ;
-(void)configureBulletinNotification;
-(void)registerNotificationHandlers;
-(void)_handleBulletinBoardNotificationCommitRequest:(id)arg1 ;
-(void)setNotificationServiceGroup:(HMDBulletinBoardNotificationServiceGroup *)arg1 ;
@end

