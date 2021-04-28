/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MigratableEventsListener.h>

@protocol SMDPScannerProtocol, OS_dispatch_queue;
@class NSXPCInterface, NSXPCConnection, NSArray, NSPredicate, NSUUID, NSMutableSet, NSMutableDictionary, NSObject, SMSystem_Client, NSHashTable, NSUserActivity, NSSet;

@interface SMSystemScanner_Client : NSObject <MigratableEventsListener> {

	char _automaticallyAdvertiseHandoff;
	char _hostingWirelessAP;
	char _attemptingWirelessNetworkSwitch;
	NSXPCInterface* daemonInterface;
	NSXPCConnection* daemonConnection;
	id<SMDPScannerProtocol> daemonProxy;
	NSXPCInterface* exportedInterface;
	NSArray* _systemSortDescriptors;
	NSPredicate* _displaySystemsFilter;
	NSUUID* _handoffPasscode;
	NSMutableSet* _observedSystems;
	NSMutableDictionary* _systemDict;
	NSObject*<OS_dispatch_queue> _systemDictQueue;
	SMSystem_Client* _currentSystem;
	unsigned long long _scannerState;
	NSHashTable* _scannerClients;
	NSHashTable* _systemEventListeners;
	NSUserActivity* _handoffActivity;

}

@property (retain) NSMutableSet * observedSystems;                            //@synthesize observedSystems=_observedSystems - In the implementation block
@property (retain) NSMutableDictionary * systemDict;                          //@synthesize systemDict=_systemDict - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> systemDictQueue;              //@synthesize systemDictQueue=_systemDictQueue - In the implementation block
@property (retain) NSXPCInterface * daemonInterface; 
@property (retain) NSXPCInterface * exportedInterface; 
@property (retain) NSXPCConnection * daemonConnection; 
@property (retain) SMSystem_Client * currentSystem;                           //@synthesize currentSystem=_currentSystem - In the implementation block
@property (assign) unsigned long long scannerState;                           //@synthesize scannerState=_scannerState - In the implementation block
@property (retain) NSHashTable * scannerClients;                              //@synthesize scannerClients=_scannerClients - In the implementation block
@property (retain) NSHashTable * systemEventListeners;                        //@synthesize systemEventListeners=_systemEventListeners - In the implementation block
@property (assign) char hostingWirelessAP;                                    //@synthesize hostingWirelessAP=_hostingWirelessAP - In the implementation block
@property (assign) char attemptingWirelessNetworkSwitch;                      //@synthesize attemptingWirelessNetworkSwitch=_attemptingWirelessNetworkSwitch - In the implementation block
@property (retain) NSUserActivity * handoffActivity;                          //@synthesize handoffActivity=_handoffActivity - In the implementation block
@property (retain) NSUUID * handoffPasscode;                                  //@synthesize handoffPasscode=_handoffPasscode - In the implementation block
@property (readonly) unsigned long long actualScannerState; 
@property (readonly) NSSet * allSystems; 
@property (__weak,readonly) NSArray * displaySystems; 
@property (retain) NSArray * systemSortDescriptors;                           //@synthesize systemSortDescriptors=_systemSortDescriptors - In the implementation block
@property (retain) NSPredicate * displaySystemsFilter;                        //@synthesize displaySystemsFilter=_displaySystemsFilter - In the implementation block
@property (assign) char automaticallyAdvertiseHandoff;                        //@synthesize automaticallyAdvertiseHandoff=_automaticallyAdvertiseHandoff - In the implementation block
@property (retain) id<SMDPScannerProtocol> daemonProxy; 
+(id)migratableEventsListenerInterface;
+(id)sharedScannerClient;
+(id)windowsSystemsOnlyPredicate;
+(id)nonWindowsSystemsOnlyPredicate;
+(id)keyPathsForValuesAffectingAllSystems;
+(id)keyPathsForValuesAffectingDisplaySystems;
-(void)dealloc;
-(id)init;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSXPCInterface *)exportedInterface;
-(NSXPCConnection *)daemonConnection;
-(void)setDaemonConnection:(NSXPCConnection *)arg1 ;
-(void)connectToDaemon;
-(unsigned long long)scannerState;
-(void)setScannerState:(unsigned long long)arg1 ;
-(id<SMDPScannerProtocol>)daemonProxy;
-(void)setCurrentSystem:(SMSystem_Client *)arg1 ;
-(SMSystem_Client *)currentSystem;
-(void)setDaemonProxy:(id<SMDPScannerProtocol>)arg1 ;
-(void)addScannerClient:(id)arg1 ;
-(void)addNonBonjourRemoteShare:(id)arg1 ;
-(void)mount:(id)arg1 ;
-(void)mount:(id)arg1 withPassword:(id)arg2 ;
-(void)unmount:(id)arg1 ;
-(void)addNewSystemChangesListener:(id)arg1 ;
-(void)removeSystemChangesListener:(id)arg1 ;
-(id)xpcDictFromSystem:(id)arg1 includeOneTimeData:(char)arg2 ;
-(void)systemChanged:(id)arg1 ;
-(void)systemAppeared:(id)arg1 ;
-(void)systemDisappeared:(id)arg1 ;
-(void)requestUIFocusOnSystem:(id)arg1 ;
-(id)findSystemByIdentifier:(id)arg1 ;
-(void)setAutomaticallyAdvertiseHandoff:(char)arg1 ;
-(void)removeScannerClient:(id)arg1 ;
-(id)primaryIDForNewSystemCreatedWithMountPoint:(id)arg1 daDiskID:(id)arg2 volumeURL:(id)arg3 ;
-(NSUUID *)handoffPasscode;
-(void)setDisplaySystemsFilter:(NSPredicate *)arg1 ;
-(char)attemptingWirelessNetworkSwitch;
-(void)setAttemptingWirelessNetworkSwitch:(char)arg1 ;
-(NSSet *)allSystems;
-(void)setDaemonInterface:(NSXPCInterface *)arg1 ;
-(NSXPCInterface *)daemonInterface;
-(void)connectionErrorOccurred:(id)arg1 ;
-(void)setObservedSystems:(NSMutableSet *)arg1 ;
-(void)setSystemDict:(NSMutableDictionary *)arg1 ;
-(void)setSystemDictQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSystemSortDescriptors:(NSArray *)arg1 ;
-(void)setScannerClients:(NSHashTable *)arg1 ;
-(void)setSystemEventListeners:(NSHashTable *)arg1 ;
-(NSHashTable *)scannerClients;
-(void)updateScannerState;
-(NSObject*<OS_dispatch_queue>)systemDictQueue;
-(NSMutableDictionary *)systemDict;
-(void)updateAllChildReferences;
-(void)notifyListenersOfNewSystem:(id)arg1 ;
-(NSHashTable *)systemEventListeners;
-(void)addNewSystem:(id)arg1 ;
-(void)notifyListenersOfRemovedSystem:(id)arg1 ;
-(NSPredicate *)displaySystemsFilter;
-(NSArray *)systemSortDescriptors;
-(void)startObservingSystem:(id)arg1 ;
-(void)stopObservingSystem:(id)arg1 ;
-(void)notifyListenersOfChangedKey:(id)arg1 onSystem:(id)arg2 ;
-(NSMutableSet *)observedSystems;
-(char)automaticallyAdvertiseHandoff;
-(void)startAdvertisingHandoffTargetWithIdentifier:(id)arg1 ;
-(void)stopAdvertisingHandoff;
-(void)setHandoffPasscode:(NSUUID *)arg1 ;
-(void)setHandoffActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)handoffActivity;
-(unsigned long long)actualScannerState;
-(NSArray *)displaySystems;
-(char)hostingWirelessAP;
-(void)setHostingWirelessAP:(char)arg1 ;
@end
