/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/WebInspector-Structs.h>
#import <libobjc.A.dylib/RWIBaseManagerDelegate.h>

@protocol OS_dispatch_queue, RWIManagerDelegate;
@class RWIBaseManager, NSMutableDictionary, NSObject, SimServiceContext, SimDeviceSet, RWINotificationManager, NSSet, RWITarget, RWIApplication, NSString;

@interface RWIManager : NSObject <RWIBaseManagerDelegate> {

	RWIBaseManager* _baseManager;
	NSMutableDictionary* _debuggers;
	AMDeviceNotificationContextRef _notificationRef;
	unsigned long long _resubscribeAttemptCount;
	unsigned _powerConnection;
	unsigned _powerNotifier;
	IONotificationPortRef _powerNotificationPort;
	NSObject*<OS_dispatch_queue> _simulatorAccessQueue;
	SimServiceContext* _simulatorService;
	SimDeviceSet* _simulatorDevices;
	Optional<unsigned long long> _simulatorDeviceSetNotificationHandler;
	id<RWIManagerDelegate> _delegate;
	RWINotificationManager* _notificationManager;

}

@property (nonatomic,readonly) NSObject*<_RWIRelayToClientMessageReceiver> messageReceiver; 
@property (nonatomic,readonly) RWINotificationManager * notificationManager;                             //@synthesize notificationManager=_notificationManager - In the implementation block
@property (assign,nonatomic,__weak) id<RWIManagerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * targets; 
@property (nonatomic,readonly) NSSet * readyTargets; 
@property (nonatomic,readonly) NSSet * capableTargets; 
@property (nonatomic,readonly) NSSet * activeInspectors; 
@property (nonatomic,readonly) RWITarget * currentTarget; 
@property (nonatomic,readonly) RWIApplication * currentApplication; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id<RWIManagerDelegate>)delegate;
-(void)setDelegate:(id<RWIManagerDelegate>)arg1 ;
-(RWIApplication *)currentApplication;
-(void)_systemDidWake;
-(void)_systemWillSleep;
-(RWITarget *)currentTarget;
-(RWINotificationManager *)notificationManager;
-(NSSet *)targets;
-(unsigned long long)registerNotificationHandlerOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)unregisterNotificationHandler:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSSet *)capableTargets;
-(void)openInspectorWithConfiguration:(id)arg1 forDebuggable:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createDrivableForSession:(id)arg1 usingApplication:(id)arg2 ;
-(id)currentMachine;
-(void)targetHasBasicInformation:(id)arg1 ;
-(void)didAddDebuggable:(id)arg1 ;
-(void)willRemoveDebuggable:(id)arg1 ;
-(void)serviceConnectionClosed:(id)arg1 ;
-(void)receivedData:(id)arg1 forDestination:(id)arg2 ;
-(void)requestDriver:(id)arg1 shouldBeActive:(char)arg2 forwardIfUnhandled:(char)arg3 ;
-(void)automaticInspectionCandidate:(id)arg1 sessionIdentifier:(id)arg2 ;
-(void)serviceConnectionDidClose:(id)arg1 ;
-(void)unmanageDriver:(id)arg1 ;
-(void)updateDriver:(id)arg1 toState:(id)arg2 ;
-(void)socketSend:(id)arg1 fromDebugger:(id)arg2 ;
-(void)socketDidCloseFromDebugger:(id)arg1 ;
-(void)socketSetupForDebugger:(id)arg1 pauseImmediately:(char)arg2 ;
-(void)indicateDebuggable:(id)arg1 enabled:(char)arg2 ;
-(void)socketSetupForSession:(id)arg1 ;
-(void)socketDidCloseFromSession:(id)arg1 ;
-(void)socketSend:(id)arg1 fromSession:(id)arg2 ;
-(char)_registerForDeviceNotifications;
-(void)_registerForPowerNotifications;
-(void)_registerForSimulatorNotifications;
-(void)_createInitialTargets;
-(void)_unregisterForDeviceNotifications;
-(void)_unregisterForPowerNotifications;
-(void)_unregisterForSimulatorNotifications;
-(void)_createCurrentMachineTarget;
-(void)_handleSimulatorDeviceSetNotification:(id)arg1 ;
-(void)_processSimulatorWithChangedState:(id)arg1 ;
-(char)_isConnectedToAnyLegacySimulator;
-(void)_sendTargetRemovedEvent:(id)arg1 ;
-(void)_sendTargetAddedEvent:(id)arg1 ;
-(void)_removeDeviceRef:(AMDeviceRef)arg1 ;
-(void)_addDeviceRef:(AMDeviceRef)arg1 ;
-(void)_removeDevices;
-(void)_resubscribeForDeviceNotifications;
-(id)_deviceForAMDeviceRef:(AMDeviceRef)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(void)_removeCurrentMachineTarget;
-(void)_serviceConnectionClosed:(id)arg1 ;
-(NSSet *)readyTargets;
-(id)_debuggerForDestination:(id)arg1 ;
-(id)_drivableForDestination:(id)arg1 ;
-(NSSet *)activeInspectors;
-(NSObject*<_RWIRelayToClientMessageReceiver>)messageReceiver;
-(id)openChannelForDebuggable:(id)arg1 ;
-(void)deviceNotification:(AMDeviceNotificationInfo*)arg1 ;
-(void)powerNotification:(unsigned)arg1 argument:(void*)arg2 ;
-(unsigned long long)registerNotificationHandler:(/*^block*/id)arg1 ;
-(id)manageDriver:(id)arg1 forTarget:(id)arg2 ;
@end

