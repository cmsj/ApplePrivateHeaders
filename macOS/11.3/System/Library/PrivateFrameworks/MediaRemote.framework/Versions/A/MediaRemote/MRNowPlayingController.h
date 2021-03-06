/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRNowPlayingControllerDelegate, OS_dispatch_queue;
@class NSString, MRClient, MRPlayer, MRNowPlayingPlayerResponse, MRAVEndpointObserver, NSMutableArray, NSObject, MRPlayerPath, MRAVEndpoint;

@interface MRNowPlayingController : NSObject {

	char _registeredForNotifications;
	char _registeredForEndpointChanges;
	char _registeredForPlayerPathInvalidations;
	char _updateLoadingEnabled;
	char _requestingQueue;
	NSString* _uid;
	MRClient* _client;
	MRPlayer* _player;
	id<MRNowPlayingControllerDelegate> _delegate;
	MRNowPlayingPlayerResponse* _response;
	id _playerPathInvalidationObserver;
	MRAVEndpointObserver* _endpointObserver;
	NSString* _endpointObserverGroupUID;
	NSMutableArray* _deferredContentItemsToMerge;
	NSMutableArray* _activeSingleShotHelpers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	MRPlayerPath* _unresolvedPlayerPath;
	MRPlayerPath* _resolvedPlayerPath;
	MRAVEndpoint* _endpoint;

}

@property (nonatomic,copy) MRNowPlayingPlayerResponse * response;                             //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id playerPathInvalidationObserver;                               //@synthesize playerPathInvalidationObserver=_playerPathInvalidationObserver - In the implementation block
@property (nonatomic,retain) MRAVEndpointObserver * endpointObserver;                         //@synthesize endpointObserver=_endpointObserver - In the implementation block
@property (nonatomic,retain) NSString * endpointObserverGroupUID;                             //@synthesize endpointObserverGroupUID=_endpointObserverGroupUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * deferredContentItemsToMerge;                    //@synthesize deferredContentItemsToMerge=_deferredContentItemsToMerge - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeSingleShotHelpers;                        //@synthesize activeSingleShotHelpers=_activeSingleShotHelpers - In the implementation block
@property (assign,nonatomic) char registeredForNotifications;                                 //@synthesize registeredForNotifications=_registeredForNotifications - In the implementation block
@property (assign,nonatomic) char registeredForEndpointChanges;                               //@synthesize registeredForEndpointChanges=_registeredForEndpointChanges - In the implementation block
@property (assign,nonatomic) char registeredForPlayerPathInvalidations;                       //@synthesize registeredForPlayerPathInvalidations=_registeredForPlayerPathInvalidations - In the implementation block
@property (assign,nonatomic) char updateLoadingEnabled;                                       //@synthesize updateLoadingEnabled=_updateLoadingEnabled - In the implementation block
@property (assign,nonatomic) char requestingQueue;                                            //@synthesize requestingQueue=_requestingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) MRPlayerPath * unresolvedPlayerPath;                             //@synthesize unresolvedPlayerPath=_unresolvedPlayerPath - In the implementation block
@property (nonatomic,retain) MRPlayerPath * resolvedPlayerPath;                               //@synthesize resolvedPlayerPath=_resolvedPlayerPath - In the implementation block
@property (nonatomic,retain) MRAVEndpoint * endpoint;                                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) MRClient * client;                                             //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) MRPlayer * player;                                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MRNowPlayingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)localRouteController;
+(id)proactiveEndpointController;
-(void)dealloc;
-(id<MRNowPlayingControllerDelegate>)delegate;
-(void)setDelegate:(id<MRNowPlayingControllerDelegate>)arg1 ;
-(NSString *)uid;
-(NSObject*<OS_dispatch_queue>)queue;
-(MRAVEndpoint *)endpoint;
-(MRClient *)client;
-(MRNowPlayingPlayerResponse *)response;
-(void)setEndpoint:(MRAVEndpoint *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setResponse:(MRNowPlayingPlayerResponse *)arg1 ;
-(char)registeredForNotifications;
-(void)setRegisteredForNotifications:(char)arg1 ;
-(id)initWithUID:(id)arg1 ;
-(MRPlayer *)player;
-(MRPlayerPath *)resolvedPlayerPath;
-(void)setResolvedPlayerPath:(MRPlayerPath *)arg1 ;
-(id)initWithUID:(id)arg1 client:(id)arg2 player:(id)arg3 ;
-(void)_unregisterForPlayerPathInvalidations;
-(char)updateLoadingEnabled;
-(void)setUpdateLoadingEnabled:(char)arg1 ;
-(void)_onQueue_updateByReplacingWithNewResponse:(id)arg1 ;
-(void)_notifyDelegateOfError:(id)arg1 ;
-(void)_notifyDelegateOfNewResponse:(id)arg1 ;
-(void)_loadNowPlayingStateForUID:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_unregisterForEndpointChanges;
-(void)_unregisterNotificationHandlers;
-(void)_onQueue_clearState;
-(void)setEndpointObserverGroupUID:(NSString *)arg1 ;
-(void)_loadNowPlayingStateForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_registerForEndpointChangesIfNeeded;
-(void)_onQueue_retrieveEndpointForUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUnresolvedPlayerPath:(MRPlayerPath *)arg1 ;
-(void)_registerForPlayerPathInvalidationsIfNeeded;
-(void)_registerNotificationHandlersIfNeeded;
-(id)_loadNowPlayingStateForPlayerPath:(id)arg1 error:(id*)arg2 ;
-(void)_resolvePlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createPlayerPathForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_requestSupportedCommandsForPlayerPath:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRequestingQueue:(char)arg1 ;
-(NSMutableArray *)deferredContentItemsToMerge;
-(id)_onQueue_updateByMergingContentItemChanges:(id)arg1 ;
-(void)_notifyDelegateOfUpdatedArtwork:(id)arg1 ;
-(void)_requestContentItemArtwork:(id)arg1 forPlayerPath:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)endpointObserverGroupUID;
-(void)_handlePlaybackQueueChangedNotification:(id)arg1 ;
-(void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg1 ;
-(void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg1 ;
-(void)_handlePlaybackStateChangedNotification:(id)arg1 ;
-(void)_handleSupportedCommandsChangedNotification:(id)arg1 ;
-(void)_onQueue_updateWithNewPlaybackQueue:(id)arg1 ;
-(void)_notifyDelegateOfPlaybackQueueChangeFromOldQueue:(id)arg1 toNewQueue:(id)arg2 ;
-(char)requestingQueue;
-(void)_notifyDelegateOfUpdatedContentItems:(id)arg1 ;
-(void)_onQueue_updateWithNewPlaybackState:(unsigned)arg1 ;
-(void)_notifyDelegateOfPlaybackStateChangeFromOldState:(unsigned)arg1 toNewState:(unsigned)arg2 ;
-(void)_onQueue_updateWithNewPlayerLastPlayingDate:(id)arg1 ;
-(void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg1 ;
-(void)_onQueue_updateWithNewSupportedCommands:(id)arg1 ;
-(void)_notifyDelegateOfSupportedCommandsChangeFromOldCommands:(id)arg1 toNewCommands:(id)arg2 ;
-(void)_notifyDelegateOfInvalidation;
-(void)_reloadForCompleteInvalidation;
-(char)registeredForPlayerPathInvalidations;
-(MRPlayerPath *)unresolvedPlayerPath;
-(void)_reloadForPlayerPathInvalidation;
-(void)setPlayerPathInvalidationObserver:(id)arg1 ;
-(void)setRegisteredForPlayerPathInvalidations:(char)arg1 ;
-(id)playerPathInvalidationObserver;
-(char)registeredForEndpointChanges;
-(void)_handleActiveSystemEndpointChangedNotification:(id)arg1 ;
-(MRAVEndpointObserver *)endpointObserver;
-(void)setRegisteredForEndpointChanges:(char)arg1 ;
-(void)beginLoadingUpdates;
-(void)endLoadingUpdates;
-(void)_onQueue_updateWithNewDeviceLastPlayingDate:(id)arg1 ;
-(void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)arg1 ;
-(void)setEndpointObserver:(MRAVEndpointObserver *)arg1 ;
-(void)setDeferredContentItemsToMerge:(NSMutableArray *)arg1 ;
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestPlaybackQueueForPlayerPath:(id)arg1 includeArtwork:(char)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableArray *)activeSingleShotHelpers;
-(void)setActiveSingleShotHelpers:(NSMutableArray *)arg1 ;
@end

