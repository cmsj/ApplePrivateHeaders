/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/Versions/A/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSIndexSet, CBCentralManager, CBController, NSDictionary, NSSet, NSObject, NSString;

@interface WPDScanManager : WPDManager <CBCentralManagerDelegate> {

	char _scanning;
	char _scanningDisabled;
	NSMutableDictionary* _scanRequests;
	NSMutableDictionary* _peerRequests;
	NSMutableDictionary* _connectionsInProgress;
	NSMutableSet* _peripheralConnections;
	NSIndexSet* _currentScanners;
	CBCentralManager* _centralManager;
	CBController* _cbDiscoveryAsserter;
	NSMutableSet* _spyScanClients;
	NSDictionary* _scanOptions;
	NSSet* _scanRequestHashes;
	NSSet* _scanRuleHashes;
	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (retain) NSMutableDictionary * scanRequests;                                     //@synthesize scanRequests=_scanRequests - In the implementation block
@property (retain) NSMutableDictionary * peerRequests;                                     //@synthesize peerRequests=_peerRequests - In the implementation block
@property (retain) NSMutableDictionary * connectionsInProgress;                            //@synthesize connectionsInProgress=_connectionsInProgress - In the implementation block
@property (retain) NSMutableSet * peripheralConnections;                                   //@synthesize peripheralConnections=_peripheralConnections - In the implementation block
@property (retain) NSIndexSet * currentScanners;                                           //@synthesize currentScanners=_currentScanners - In the implementation block
@property (retain) CBCentralManager * centralManager;                                      //@synthesize centralManager=_centralManager - In the implementation block
@property (retain) CBController * cbDiscoveryAsserter;                                     //@synthesize cbDiscoveryAsserter=_cbDiscoveryAsserter - In the implementation block
@property (assign) char scanning;                                                          //@synthesize scanning=_scanning - In the implementation block
@property (retain) NSMutableSet * spyScanClients;                                          //@synthesize spyScanClients=_spyScanClients - In the implementation block
@property (retain) NSDictionary * scanOptions;                                             //@synthesize scanOptions=_scanOptions - In the implementation block
@property (retain) NSSet * scanRequestHashes;                                              //@synthesize scanRequestHashes=_scanRequestHashes - In the implementation block
@property (retain) NSSet * scanRuleHashes;                                                 //@synthesize scanRuleHashes=_scanRuleHashes - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
@property (assign) char scanningDisabled;                                                  //@synthesize scanningDisabled=_scanningDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)zonesAvailableForType:(unsigned char)arg1 ;
-(void)cleanup;
-(void)update;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(CBCentralManager *)centralManager;
-(void)enableRanging:(char)arg1 ;
-(void)setScanning:(char)arg1 ;
-(char)scanning;
-(id)initWithServer:(id)arg1 ;
-(id)generateStateDumpStrings;
-(char)scanningDisabled;
-(void)setScanningDisabled:(char)arg1 ;
-(void)updateScanner;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeScanRequestsForClient:(id)arg1 ;
-(void)removePeripheralConnectionsForClient:(id)arg1 ;
-(void)removeAllPeerTrackingRequestsForClient:(id)arg1 ;
-(void)removeSpyScanClient:(id)arg1 ;
-(void)addSpyScanClient:(id)arg1 ;
-(id)addScanRequest:(id)arg1 forClient:(id)arg2 ;
-(id)removeScanRequest:(id)arg1 forClient:(id)arg2 ;
-(id)addPeerTrackingRequest:(id)arg1 forClient:(id)arg2 ;
-(id)removePeerTrackingRequest:(id)arg1 checkZonesAvailable:(char)arg2 forClient:(id)arg3 ;
-(id)connectToPeripheral:(id)arg1 fromClient:(id)arg2 withOptions:(id)arg3 ;
-(void)removePeripheralConnection:(id)arg1 forClient:(id)arg2 ;
-(id)disconnectFromPeripheral:(id)arg1 withSubscribedCharacteristics:(id)arg2 forClient:(id)arg3 ;
-(void)disconnectFromCentral:(id)arg1 forClient:(id)arg2 ;
-(id)getScanRequestsForClient:(id)arg1 ;
-(CBController *)cbDiscoveryAsserter;
-(void)setCbDiscoveryAsserter:(CBController *)arg1 ;
-(NSMutableSet *)peripheralConnections;
-(NSMutableDictionary *)scanRequests;
-(NSMutableSet *)spyScanClients;
-(NSMutableDictionary *)peerRequests;
-(NSMutableDictionary *)connectionsInProgress;
-(NSIndexSet *)currentScanners;
-(NSDictionary *)scanOptions;
-(void)removeConflictingRequest:(id)arg1 forClient:(id)arg2 ;
-(void)reconcileScanRule:(id)arg1 withRule:(id)arg2 ;
-(char)scanOptionsChanged:(id)arg1 ForRequests:(id)arg2 ;
-(char)isScannerTestMode;
-(char)heySiriScanActive:(char)arg1 ;
-(void)duplicateRulesGuard:(id)arg1 forRule:(id)arg2 ;
-(void)setCurrentScanners:(NSIndexSet *)arg1 ;
-(void)logScanTypes:(id)arg1 method:(char)arg2 window:(long long)arg3 interval:(long long)arg4 ;
-(id)ruleHashesFromScanOptions:(id)arg1 ;
-(id)scanRequestHashesFromScanRequests:(id)arg1 ;
-(NSSet *)scanRequestHashes;
-(NSSet *)scanRuleHashes;
-(void)setScanOptions:(NSDictionary *)arg1 ;
-(void)setScanRequestHashes:(NSSet *)arg1 ;
-(void)setScanRuleHashes:(NSSet *)arg1 ;
-(void)clearExistingConnections;
-(char)updateScanRules;
-(char)startTrackingPeripheral:(id)arg1 ofType:(id)arg2 ;
-(void)stopTrackingPeripheral:(id)arg1 ofType:(id)arg2 ;
-(id)retrievePeripheralWithUUID:(id)arg1 ;
-(void)assertCBDiscoveryScan:(char)arg1 ;
-(void)logScanRequests:(id)arg1 method:(char)arg2 window:(long long)arg3 interval:(long long)arg4 ;
-(void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2 ;
-(void)centralManager:(id)arg1 didLosePeripheral:(id)arg2 forType:(id)arg3 ;
-(void)centralManager:(id)arg1 didFindPeripheral:(id)arg2 forType:(id)arg3 ;
-(void)setScanRequests:(NSMutableDictionary *)arg1 ;
-(void)setPeerRequests:(NSMutableDictionary *)arg1 ;
-(void)setConnectionsInProgress:(NSMutableDictionary *)arg1 ;
-(void)setPeripheralConnections:(NSMutableSet *)arg1 ;
-(void)setSpyScanClients:(NSMutableSet *)arg1 ;
@end

