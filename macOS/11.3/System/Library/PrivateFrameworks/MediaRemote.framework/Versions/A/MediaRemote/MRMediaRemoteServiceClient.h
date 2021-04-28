/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MRAVRoutingClientController, MRPlayerPath, NSMutableSet, MRNotificationServiceClient, MRMediaRemoteService, MRNotificationClient, NSArray;

@interface MRMediaRemoteServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _registeredOrigins;
	MRAVRoutingClientController* _routingClientController;
	MRPlayerPath* _activePlayerPath;
	NSMutableSet* _playerPathInvalidationHandlers;
	MRNotificationServiceClient* _notificationService;
	MRMediaRemoteService* _service;
	MRNotificationClient* _notificationClient;
	NSObject*<OS_dispatch_queue> _playbackQueueDispatchQueue;

}

@property (nonatomic,readonly) MRMediaRemoteService * service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) MRNotificationClient * notificationClient;                          //@synthesize notificationClient=_notificationClient - In the implementation block
@property (nonatomic,readonly) NSArray * registeredOrigins; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workerQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> playbackQueueDispatchQueue;              //@synthesize playbackQueueDispatchQueue=_playbackQueueDispatchQueue - In the implementation block
@property (nonatomic,retain) MRPlayerPath * activePlayerPath; 
+(id)sharedServiceClient;
-(void)dealloc;
-(id)debugDescription;
-(id)init;
-(MRMediaRemoteService *)service;
-(NSObject*<OS_dispatch_queue>)workerQueue;
-(MRNotificationClient *)notificationClient;
-(void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1 ;
-(void)setPlaybackQueueDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)processPlayerPathInvalidationHandlersWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)registeredOrigins;
-(void)setActivePlayerPath:(MRPlayerPath *)arg1 ;
-(MRPlayerPath *)activePlayerPath;
-(void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterOrigin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unregisterAllOriginsWithCompletion:(/*^block*/id)arg1 ;
-(char)isOriginRegistered:(id)arg1 ;
-(void)fetchPickableRoutesWithCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)addPlayerPathInvalidationHandler:(id)arg1 ;
-(void)removeInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)playbackQueueDispatchQueue;
@end
