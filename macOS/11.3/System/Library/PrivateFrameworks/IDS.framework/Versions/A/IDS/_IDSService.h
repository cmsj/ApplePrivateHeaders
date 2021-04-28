/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSGroupContextControllerDelegate.h>
#import <IDS/IDSAccountControllerDelegate.h>
#import <IDS/IDSConnectionDelegatePrivate.h>
#import <IDS/IDSDaemonListenerProtocol.h>

@class IDSAccountController, NSMutableDictionary, NSSet, NSMapTable, NSMutableSet, NSMutableArray, IDSGroupContextController, IDSQuickSwitchAcknowledgementTracker, IDSServiceProperties, IDSAccount, NSArray, NSString;

@interface _IDSService : NSObject <IDSGroupContextControllerDelegate, IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol> {

	IDSAccountController* _accountController;
	NSMutableDictionary* _uniqueIDToConnection;
	NSSet* _commands;
	NSMapTable* _delegateToInfo;
	id _delegateContext;
	NSMutableDictionary* _protobufSelectors;
	NSMutableSet* _lastIsActiveSet;
	NSMutableArray* _linkedDevices;
	NSMutableDictionary* _subServices;
	char _linkedDevicesLoaded;
	char _pretendingToBeFull;
	char _everHadDelegate;
	char _manuallyAckMessages;
	char _clientIsSandboxed;
	unsigned _listenerCaps;
	IDSGroupContextController* _groupContextController;
	NSMutableDictionary* _uniqueIDToProgress;
	IDSQuickSwitchAcknowledgementTracker* _acknowledgementTracker;
	IDSServiceProperties* _serviceProperties;
	/*^block*/id _pendingRegisteredIdentitiesBlock;

}

@property (nonatomic,retain,readonly) IDSGroupContextController * groupContextController;              //@synthesize groupContextController=_groupContextController - In the implementation block
@property (nonatomic,copy,readonly) NSSet * accounts; 
@property (nonatomic,copy,readonly) NSSet * internalAccounts; 
@property (nonatomic,readonly) IDSAccount * iCloudAccount; 
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy,readonly) NSString * serviceDomain; 
@property (assign,getter=isPretendingToBeFull,nonatomic) char pretendingToBeFull; 
@property (assign,nonatomic) char manuallyAckMessages;                                                 //@synthesize manuallyAckMessages=_manuallyAckMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)serviceWithIdentifier:(id)arg1 commands:(id)arg2 manuallyAckMessages:(char)arg3 delegateContext:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)deviceForFromID:(id)arg1 fromDevices:(id)arg2 ;
-(void)dealloc;
-(id)_init;
-(NSArray *)devices;
-(void)removeDelegate:(id)arg1 ;
-(NSSet *)accounts;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)daemonConnected;
-(void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3 ;
-(void)service:(id)arg1 tinkerDeviceAdded:(id)arg2 ;
-(void)service:(id)arg1 tinkerDeviceRemoved:(id)arg2 ;
-(void)service:(id)arg1 tinkerDeviceUpdated:(id)arg2 ;
-(void)service:(id)arg1 linkedDevicesUpdated:(id)arg2 ;
-(void)didSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 wasHandled:(char*)arg3 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_enableAccount:(id)arg1 ;
-(void)_disableAccount:(id)arg1 ;
-(id)daemonListener;
-(id)daemonController;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(void)connection:(id)arg1 isActiveChanged:(char)arg2 ;
-(void)connection:(id)arg1 devicesChanged:(id)arg2 ;
-(void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)connection:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(char)arg6 messageContext:(id)arg7 ;
-(void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(char)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6 ;
-(void)connection:(id)arg1 identifier:(id)arg2 fromID:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)connection:(id)arg1 didSendOpportunisticDataWithIdentifier:(id)arg2 toIDs:(id)arg3 ;
-(void)_sendMissingMessageMetric:(id)arg1 ;
-(void)connection:(id)arg1 incomingOpportunisticData:(id)arg2 withIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4 ;
-(void)connection:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 incomingEngramMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 incomingAccessoryData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 incomingAccessoryReportMessage:(id)arg2 accessoryID:(id)arg3 controllerID:(id)arg4 context:(id)arg5 ;
-(void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 didFlushCacheForRemoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4 ;
-(void)connection:(id)arg1 incomingPendingMessageFromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8 ;
-(void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3 ;
-(void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantDataUpdate:(id)arg3 ;
-(void)connection:(id)arg1 incomingGroupData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 didUpdateDeviceIdentity:(id)arg2 error:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)accountController:(id)arg1 accountRemoved:(id)arg2 ;
-(void)accountController:(id)arg1 accountAdded:(id)arg2 ;
-(NSSet *)internalAccounts;
-(void)accountController:(id)arg1 accountEnabled:(id)arg2 ;
-(void)accountController:(id)arg1 accountDisabled:(id)arg2 ;
-(id)initWithService:(id)arg1 commands:(id)arg2 manuallyAckMessages:(char)arg3 delegateContext:(id)arg4 ;
-(void)performGroupTask:(/*^block*/id)arg1 ;
-(void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(char)arg3 ;
-(SEL)protobufActionForType:(unsigned short)arg1 isResponse:(char)arg2 ;
-(char)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(char)sendOpportunisticData:(id)arg1 options:(id)arg2 identifier:(id)arg3 error:(id*)arg4 ;
-(char)cancelOpportunisticDataWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(char)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(char)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(char)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(char)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id*)arg7 error:(id*)arg8 ;
-(char)getProgressUpdateForIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendAckForMessageWithContext:(id)arg1 ;
-(char)sendCertifiedDeliveryReceipt:(id)arg1 ;
-(char)cancelIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3 ;
-(id)linkedDevicesWithRelationship:(long long)arg1 ;
-(NSString *)serviceDomain;
-(IDSAccount *)iCloudAccount;
-(id)deviceForFromID:(id)arg1 ;
-(id)linkedDeviceForFromID:(id)arg1 withRelationship:(long long)arg2 ;
-(id)firstRoutableInternetDestinationForSelf;
-(id)deviceForUniqueID:(id)arg1 ;
-(id)devicesForBTUUID:(id)arg1 ;
-(id)uriForFromID:(id)arg1 ;
-(void)setPreferInfraWiFi:(char)arg1 ;
-(void)setLinkPreferences:(id)arg1 ;
-(void)startOTRTest:(long long)arg1 ;
-(void)setPretendingToBeFull:(char)arg1 ;
-(char)isPretendingToBeFull;
-(void)testCloudQRConnection;
-(char)updateSubServices:(id)arg1 forDevice:(id)arg2 ;
-(id)datagramConnectionForSessionDestination:(id)arg1 error:(id*)arg2 ;
-(id)datagramConnectionForSessionDestination:(id)arg1 uid:(unsigned)arg2 error:(id*)arg3 ;
-(id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)streamConnectionForSessionDestination:(id)arg1 error:(id*)arg2 ;
-(id)streamConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)datagramChannelForSessionDestination:(id)arg1 error:(id*)arg2 ;
-(id)datagramChannelForSocketDescriptor:(int)arg1 error:(id*)arg2 ;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(void)_enforceSandboxPolicy;
-(void)_processAccountSet:(id)arg1 ;
-(void)_stopAwaitingQuickSwitchAcknowledgementFromDelegateWithIdentifier:(id)arg1 ;
-(void)resendSubServicesToDaemonForCurrentDevice;
-(void)_reloadCachedLinkedDevices;
-(id)_activeDeviceForUniqueID:(id)arg1 ;
-(/*^block*/id)_acknowledgementBlockWithDelegateIdentifier:(id)arg1 ;
-(char)_isDroppingMessages;
-(void)_updateLinkedDevicesWithDevicesInfo:(id)arg1 ;
-(void)_callLinkedDevicesChanged;
-(void)_logConnectionMap;
-(void)_tearDownConnectionForUniqueID:(id)arg1 ;
-(void)_setupNewConnectionForAccount:(id)arg1 ;
-(void)_callDelegatesForDevicesChanged;
-(void)_callIsActiveChanged;
-(long long)_messageTypeForCommand:(id)arg1 ;
-(id)_payloadFromDecryptedData:(id)arg1 ;
-(id)_filteredAccountsFrom:(id)arg1 ;
-(void)_loadCachedLinkedDevices;
-(id)_sendingAccountForAccount:(id)arg1 destination:(id)arg2 fromID:(id)arg3 ;
-(char)_canAccount:(id)arg1 sendWithFromID:(id)arg2 ;
-(id)_sendingAccountForAccount:(id)arg1 ;
-(void)_handlePretendingToBeFullWithIdentifier:(id*)arg1 ;
-(char)canSendMessageWithAccount:(id)arg1 toDestination:(id)arg2 ;
-(IDSGroupContextController *)groupContextController;
-(void)groupContextController:(id)arg1 didCreateGroup:(id)arg2 ;
-(id)groupContextController:(id)arg1 accountsForAlises:(id)arg2 ;
-(id)_initWithDelegateContext:(id)arg1 ;
-(char)manuallyAckMessages;
-(void)setManuallyAckMessages:(char)arg1 ;
@end
