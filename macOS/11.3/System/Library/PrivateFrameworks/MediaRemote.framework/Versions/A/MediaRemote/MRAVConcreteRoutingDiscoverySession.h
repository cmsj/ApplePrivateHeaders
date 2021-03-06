/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputDeviceDiscoverySession, NSString, NSArray;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	AVOutputDeviceDiscoverySession* _avDiscoverySession;
	unsigned _endpointFeatures;
	unsigned _discoveryMode;
	unsigned _targetAudioSessionID;
	NSString* _routingContextUID;
	NSArray* _availableOutputDevices;
	NSArray* _virtualOutputDevices;
	char _scheduledAvailableOutputDevicesReload;
	int _airplayActiveNotificationToken;
	char _isLocalDeviceBeingAirplayedTo;

}

@property (nonatomic,retain) NSArray * availableEndpoints; 
@property (nonatomic,retain) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) NSArray * virtualOutputDevices;              //@synthesize virtualOutputDevices=_virtualOutputDevices - In the implementation block
+(id)daemonVirtualDevices;
+(void)setDaemonVirtualDevices:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithConfiguration:(id)arg1 ;
-(id)routingContextUID;
-(unsigned)discoveryMode;
-(char)devicePresenceDetected;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(NSArray *)availableOutputDevices;
-(void)setRoutingContextUID:(id)arg1 ;
-(unsigned)endpointFeatures;
-(NSArray *)availableEndpoints;
-(unsigned)targetAudioSessionID;
-(void)setTargetAudioSessionID:(unsigned)arg1 ;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg1 ;
-(void)_scheduleReload;
-(void)_onQueue_reload;
-(void)_scheduleAvailableOutputDevicesReload;
-(void)_onQueue_reloadAvailableOutputDevices;
-(char)_shouldCreateClusterOutputDevices;
-(void)setAvailableOutputDevices:(NSArray *)arg1 ;
-(NSArray *)virtualOutputDevices;
@end

