/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, AVRoutingSessionManager, MPMRAVOutputContextWrapper, MPAVEndpointRoute, NSString, MRAVOutputDevice, MRAVRoutingDiscoverySessionConfiguration;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _discoverySessionQueue;
	char _attemptedToInitializeAppOutputContext;
	void* _discoverySession;
	void* _callbackToken;
	char _supportsMultipleSelection;
	char _devicePresenceDetected;
	NSArray* _outputDeviceRoutes;
	char _shouldSourceOutputDevicesFromAVODDS;
	AVRoutingSessionManager* _routingSessionManager;
	char _detachesRoutesToGroup;
	char _supportsQueueHandoff;
	char _supportsRoutePrediction;
	MPMRAVOutputContextWrapper* _applicationOutputContext;
	MPAVEndpointRoute* _endpointRoute;
	NSString* _initiator;
	MRAVOutputDevice* _predictedDevice;

}

@property (nonatomic,retain) MPMRAVOutputContextWrapper * applicationOutputContext;                                   //@synthesize applicationOutputContext=_applicationOutputContext - In the implementation block
@property (nonatomic,readonly) MRAVRoutingDiscoverySessionConfiguration * discoverySessionConfiguration; 
@property (nonatomic,retain) MRAVOutputDevice * predictedDevice;                                                      //@synthesize predictedDevice=_predictedDevice - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID; 
@property (assign,nonatomic) char supportsMultipleSelection;                                                          //@synthesize supportsMultipleSelection=_supportsMultipleSelection - In the implementation block
@property (assign,nonatomic) char detachesRoutesToGroup;                                                              //@synthesize detachesRoutesToGroup=_detachesRoutesToGroup - In the implementation block
@property (assign,nonatomic) char supportsQueueHandoff;                                                               //@synthesize supportsQueueHandoff=_supportsQueueHandoff - In the implementation block
@property (nonatomic,retain) MPAVEndpointRoute * endpointRoute;                                                       //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (nonatomic,retain) NSString * initiator;                                                                    //@synthesize initiator=_initiator - In the implementation block
@property (assign,nonatomic) char supportsRoutePrediction;                                                            //@synthesize supportsRoutePrediction=_supportsRoutePrediction - In the implementation block
+(id)_globalAudioSessionLock;
-(void)dealloc;
-(id)init;
-(NSString *)routingContextUID;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(long long)discoveryMode;
-(char)devicePresenceDetected;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(void)setInitiator:(NSString *)arg1 ;
-(NSString *)initiator;
-(id)_stateDumpObject;
-(id)getRoutesForCategory:(id)arg1 ;
-(char)routeIsLeaderOfEndpoint:(id)arg1 ;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(char)supportsMultipleSelection;
-(MRAVRoutingDiscoverySessionConfiguration *)discoverySessionConfiguration;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(MPMRAVOutputContextWrapper *)applicationOutputContext;
-(void)setEndpointRoute:(MPAVEndpointRoute *)arg1 ;
-(id)routingSessionManager;
-(void)setPredictedDevice:(MRAVOutputDevice *)arg1 ;
-(void)createGroupFromOutputDevices:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addRouteToGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addRoutesToGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeRouteFromGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeRoutesFromGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_endpointsDidChangeNotification:(id)arg1 ;
-(void)_outputDevicesDidChangeNotification:(id)arg1 ;
-(id)outputDevicesForRoutes:(id)arg1 ;
-(char)_shouldDetachOutputDevicesToGroup:(id)arg1 ;
-(char)_shouldAddPredictedDeviceToOuputDevices:(id)arg1 ;
-(char)_isRemovingPredictedDevice:(id)arg1 ;
-(void)_outputDevicesDidChange:(id)arg1 ;
-(id)_outputDeviceRouteWithUID:(id)arg1 ;
-(void)_setShouldSourceOutputDevicesFromAVODDS:(char)arg1 ;
-(void)_resetPredictedOutputDevice;
-(void)setApplicationOutputContext:(MPMRAVOutputContextWrapper *)arg1 ;
-(void)setSupportsMultipleSelection:(char)arg1 ;
-(char)detachesRoutesToGroup;
-(void)setDetachesRoutesToGroup:(char)arg1 ;
-(char)supportsQueueHandoff;
-(void)setSupportsQueueHandoff:(char)arg1 ;
-(MPAVEndpointRoute *)endpointRoute;
-(char)supportsRoutePrediction;
-(void)setSupportsRoutePrediction:(char)arg1 ;
-(MRAVOutputDevice *)predictedDevice;
@end

