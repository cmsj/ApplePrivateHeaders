/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMSystem_Daemon.h>
#import <libobjc.A.dylib/SMNNetworkSessionDelegateProtocol.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSString, NSURL, NSImage, SMNNetworkSession, NSObject, SMNetworkSourceProxy, NSDictionary, NSNumber, NSOrderedSet;

@interface SMSystem_Daemon_Network : SMSystem_Daemon <SMNNetworkSessionDelegateProtocol> {

	char connected;
	char _connectOK;
	char _connecting;
	char _determiningFastestConnection;
	char _sourceKnowsPasscode;
	char _connectionMethodHasChanged;
	char _usedSWAP;
	char _isCheckingForNewConnectionMethods;
	char _attemptingWirelessSwitch;
	NSString* secretPassword;
	NSURL* _url;
	NSImage* _icon;
	SMNNetworkSession* _session;
	NSObject*<OS_dispatch_semaphore> _waitForCallbackSemaphore;
	NSObject*<OS_dispatch_queue> _atomicConnectionQueue;
	SMNetworkSourceProxy* _networkProxy;
	unsigned long long _networkState;
	NSString* _handoffHint;
	NSString* _remoteClientVersion;
	unsigned long long _remoteCapabilities;
	NSString* _remoteOSVersion;
	NSString* _serviceName;
	unsigned long long _effectiveConnectionMethod;
	unsigned long long _localConnectionMethod;
	unsigned long long _remoteConnectionMethod;
	unsigned long long _availableConnectionMethods;
	NSString* _fasterInterfaceRecommendation;
	NSString* _serviceType;
	NSDictionary* _descriptionData;
	NSString* _networkUUID;
	double _activeConnectionBenchmark;

}

@property (assign) unsigned long long remoteCapabilities;                                  //@synthesize remoteCapabilities=_remoteCapabilities - In the implementation block
@property (retain) NSString * remoteOSVersion;                                             //@synthesize remoteOSVersion=_remoteOSVersion - In the implementation block
@property (readonly) char remoteIsROSV; 
@property (assign) unsigned long long effectiveConnectionMethod;                           //@synthesize effectiveConnectionMethod=_effectiveConnectionMethod - In the implementation block
@property (assign) unsigned long long localConnectionMethod;                               //@synthesize localConnectionMethod=_localConnectionMethod - In the implementation block
@property (assign) unsigned long long remoteConnectionMethod;                              //@synthesize remoteConnectionMethod=_remoteConnectionMethod - In the implementation block
@property (assign) unsigned long long availableConnectionMethods;                          //@synthesize availableConnectionMethods=_availableConnectionMethods - In the implementation block
@property (assign) char isCheckingForNewConnectionMethods;                                 //@synthesize isCheckingForNewConnectionMethods=_isCheckingForNewConnectionMethods - In the implementation block
@property (retain) NSString * serviceName;                                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) NSString * serviceType;                                                 //@synthesize serviceType=_serviceType - In the implementation block
@property (assign) char connectionMethodHasChanged;                                        //@synthesize connectionMethodHasChanged=_connectionMethodHasChanged - In the implementation block
@property (assign) char usedSWAP;                                                          //@synthesize usedSWAP=_usedSWAP - In the implementation block
@property (retain) NSDictionary * descriptionData;                                         //@synthesize descriptionData=_descriptionData - In the implementation block
@property (assign) char connected; 
@property (assign) char sourceKnowsPasscode;                                               //@synthesize sourceKnowsPasscode=_sourceKnowsPasscode - In the implementation block
@property (retain) NSString * handoffHint;                                                 //@synthesize handoffHint=_handoffHint - In the implementation block
@property (retain) NSString * networkUUID;                                                 //@synthesize networkUUID=_networkUUID - In the implementation block
@property (retain) NSString * remoteClientVersion;                                         //@synthesize remoteClientVersion=_remoteClientVersion - In the implementation block
@property (getter=isAttemptingWirelessSwitch) char attemptingWirelessSwitch;               //@synthesize attemptingWirelessSwitch=_attemptingWirelessSwitch - In the implementation block
@property (assign) double activeConnectionBenchmark;                                       //@synthesize activeConnectionBenchmark=_activeConnectionBenchmark - In the implementation block
@property (retain) NSURL * url;                                                            //@synthesize url=_url - In the implementation block
@property (retain) NSImage * icon;                                                         //@synthesize icon=_icon - In the implementation block
@property (assign) char connectOK;                                                         //@synthesize connectOK=_connectOK - In the implementation block
@property (assign) char connecting;                                                        //@synthesize connecting=_connecting - In the implementation block
@property (retain) SMNNetworkSession * session;                                            //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> waitForCallbackSemaphore;              //@synthesize waitForCallbackSemaphore=_waitForCallbackSemaphore - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> atomicConnectionQueue;                     //@synthesize atomicConnectionQueue=_atomicConnectionQueue - In the implementation block
@property (assign) char determiningFastestConnection;                                      //@synthesize determiningFastestConnection=_determiningFastestConnection - In the implementation block
@property (retain) SMNetworkSourceProxy * networkProxy;                                    //@synthesize networkProxy=_networkProxy - In the implementation block
@property (assign) unsigned long long networkState;                                        //@synthesize networkState=_networkState - In the implementation block
@property (readonly) unsigned long long protocolVersion; 
@property (__weak,readonly) NSNumber * passcode; 
@property (readonly) NSOrderedSet * fasterInterfaceRecommendations; 
@property (readonly) NSString * fasterInterfaceRecommendation;                             //@synthesize fasterInterfaceRecommendation=_fasterInterfaceRecommendation - In the implementation block
@property (readonly) NSOrderedSet * connectionFamilies; 
@property (readonly) unsigned long long commonCapabilities; 
@property (readonly) char shouldSwitchToAccessPoint; 
@property (readonly) char hasSWAPConnection; 
@property (retain) NSString * secretPassword; 
+(unsigned long long)requiredScannerState;
+(id)longTermIdentifierWithNameMatch:(id)arg1 ;
+(id)URLWithType:(id)arg1 name:(id)arg2 ;
+(id)getSadAndGrayIconForModel:(id)arg1 ofSize:(long long)arg2 ;
+(id)iconForFile:(id)arg1 ofSize:(double)arg2 ;
+(id)keyPathsForValuesAffectingCommonCapabilities;
+(id)keyPathsForValuesAffectingConnectionFamilies;
+(id)keyPathsForValuesAffectingFasterInterfaceRecommendations;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)serviceName;
-(id)accessibilityDescription;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(SMNNetworkSession *)session;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceType;
-(id)productVersion;
-(char)connected;
-(void)setConnected:(char)arg1 ;
-(void)setSession:(SMNNetworkSession *)arg1 ;
-(id)primaryIdentifier;
-(void)setServiceType:(NSString *)arg1 ;
-(id)systemName;
-(char)isInternal;
-(char)isCaseSensitive;
-(unsigned long long)protocolVersion;
-(unsigned long long)systemType;
-(char)isMounted;
-(void)mount;
-(void)unmount;
-(id)volumeName;
-(char)isEncrypted;
-(id)remoteProxy;
-(unsigned long long)networkState;
-(NSNumber *)passcode;
-(id)statusDelegate;
-(char)connecting;
-(id)copier;
-(id)extendedDescription;
-(id)displayState;
-(void)setConnecting:(char)arg1 ;
-(void)mountWithCredentials:(id)arg1 ;
-(char)shouldSwitchToAccessPoint;
-(char)isNetworkSystem;
-(SMNetworkSourceProxy *)networkProxy;
-(void)setAttemptingWirelessSwitch:(char)arg1 ;
-(void)attemptingWirelessSwitch:(char)arg1 ;
-(unsigned long long)effectiveConnectionMethod;
-(char)hasSWAPConnection;
-(id)volumeIcon;
-(NSOrderedSet *)connectionFamilies;
-(char)enumeratesDirectlyFromDatavolume;
-(void)setSecretPassword:(NSString *)arg1 ;
-(char)sourceKnowsPasscode;
-(NSString *)handoffHint;
-(id)createFileManager;
-(char)isDefaultEffaceable;
-(id)filesystemEnumeratorAtRelativePath:(id)arg1 skippingPaths:(id)arg2 sizeRequired:(char)arg3 ;
-(double)estimatedTransferRate;
-(char)matchesLongTermIdentifier:(id)arg1 ;
-(void)evaluateServerType;
-(char)isMountableByUser;
-(void)cancelDataTransfers;
-(void)resumeDataTransfers;
-(void)mountSync;
-(NSOrderedSet *)fasterInterfaceRecommendations;
-(NSString *)fasterInterfaceRecommendation;
-(void)setHandoffHint:(NSString *)arg1 ;
-(void)setNetworkState:(unsigned long long)arg1 ;
-(char)isAttemptingWirelessSwitch;
-(id)initWithSession:(id)arg1 name:(id)arg2 txtRecord:(id)arg3 ;
-(char)connectSession;
-(Class)networkProxyClass;
-(char)disallowsIPV6;
-(char)connectionMethodHasChanged;
-(char)usedSWAP;
-(void)setDescriptionData:(NSDictionary *)arg1 ;
-(void)setRemoteOSVersion:(NSString *)arg1 ;
-(void)setNetworkUUID:(NSString *)arg1 ;
-(void)setRemoteClientVersion:(NSString *)arg1 ;
-(void)setEffectiveConnectionMethod:(unsigned long long)arg1 ;
-(void)setRemoteCapabilities:(unsigned long long)arg1 ;
-(unsigned long long)commonCapabilities;
-(void)setAvailableConnectionMethods:(unsigned long long)arg1 ;
-(unsigned long long)availableConnectionMethods;
-(void)setWaitForCallbackSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setAtomicConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)descriptionData;
-(NSString *)remoteOSVersion;
-(NSString *)networkUUID;
-(double)activeConnectionBenchmark;
-(char)remoteIsROSV;
-(void)observeChange;
-(void)setSourceKnowsPasscode:(char)arg1 ;
-(void)setConnectOK:(char)arg1 ;
-(void)setDeterminingFastestConnection:(char)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)waitForCallbackSemaphore;
-(char)connectOK;
-(char)determiningFastestConnection;
-(void)setNetworkProxy:(SMNetworkSourceProxy *)arg1 ;
-(unsigned long long)alInterfaceToSMInterface:(int)arg1 ;
-(void)setConnectionMethodHasChanged:(char)arg1 ;
-(void)setUsedSWAP:(char)arg1 ;
-(void)setLocalConnectionMethod:(unsigned long long)arg1 ;
-(void)setRemoteConnectionMethod:(unsigned long long)arg1 ;
-(char)isCheckingForNewConnectionMethods;
-(void)setIsCheckingForNewConnectionMethods:(char)arg1 ;
-(void)notifySourceConnectionChanged;
-(unsigned long long)remoteConnectionMethod;
-(void)setActiveConnectionBenchmark:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)atomicConnectionQueue;
-(unsigned long long)remoteCapabilities;
-(void)session:(id)arg1 peerNamed:(id)arg2 updatedTxtRecord:(id)arg3 ;
-(char)session:(id)arg1 shouldAcceptPeerWithAddress:(id)arg2 ;
-(void)session:(id)arg1 discoveredPeerNamed:(id)arg2 ;
-(void)session:(id)arg1 peerDisappeared:(id)arg2 ;
-(void)session:(id)arg1 failedToResolvePeerNamed:(id)arg2 errorCode:(long long)arg3 ;
-(void)session:(id)arg1 resolvedPeerNamed:(id)arg2 txtRecord:(id)arg3 ;
-(void)session:(id)arg1 didFailConnectionToPeerNamed:(id)arg2 ;
-(void)sessionDetectedNetworkConfigurationChanged:(id)arg1 ;
-(void)sessionDeterminingFastestConnection:(id)arg1 ;
-(void)sessionHasFasterConnectionAvailable:(id)arg1 ;
-(void)session:(id)arg1 promotedNewConnectionToActive:(id)arg2 andResignedConnection:(id)arg3 ;
-(void)session:(id)arg1 finishedSamplingConnection:(id)arg2 ;
-(void)sessionIsActive:(id)arg1 ;
-(void)session:(id)arg1 newIncomingStream:(id)arg2 ;
-(void)session:(id)arg1 streamClosing:(id)arg2 ;
-(void)sessionInterrupted:(id)arg1 connection:(id)arg2 active:(char)arg3 didReplaceActiveConnection:(char)arg4 ;
-(void)session:(id)arg1 benchmarkedSoftAP:(double)arg2 infrastructureSample:(double)arg3 ;
-(NSString *)secretPassword;
-(void)session:(id)arg1 shouldSuspendFurtherActions:(char)arg2 ;
-(id)localCertificates;
-(char)shouldAcceptPeerCertificates:(id)arg1 ;
-(NSString *)remoteClientVersion;
-(unsigned long long)localConnectionMethod;
@end

