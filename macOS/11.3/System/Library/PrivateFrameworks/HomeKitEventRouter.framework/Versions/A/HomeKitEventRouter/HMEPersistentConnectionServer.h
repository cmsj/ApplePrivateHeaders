/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/Versions/A/HomeKitEventRouter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitEventRouter/HMERouterServer.h>

@protocol OS_os_log, HMEPersistentConnectionServerDelegate, HMEPersistentConnectionServerDataSource;
@class NSObject;

@interface HMEPersistentConnectionServer : HMERouterServer {

	NSObject*<OS_os_log> _logger;
	id<HMEPersistentConnectionServerDelegate> _delegate;
	id<HMEPersistentConnectionServerDataSource> _dataSource;

}

@property (__weak) id<HMEPersistentConnectionServerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<HMEPersistentConnectionServerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<HMEPersistentConnectionServerDelegate>)delegate;
-(void)setDelegate:(id<HMEPersistentConnectionServerDelegate>)arg1 ;
-(id<HMEPersistentConnectionServerDataSource>)dataSource;
-(void)setDataSource:(id<HMEPersistentConnectionServerDataSource>)arg1 ;
-(id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3 requireACLEnforcementForTypes:(id)arg4 ;
-(void)changeRegistrationsForConnection:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didInvalidateConnection:(id)arg1 ;
-(void)disconnectConnection:(id)arg1 ;
-(void)handleEvent:(id)arg1 topic:(id)arg2 ;
-(void)connectWithConnection:(id)arg1 connectEvent:(id)arg2 unregisterEvent:(id)arg3 ;
@end

