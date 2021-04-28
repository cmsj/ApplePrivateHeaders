/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncContextObject.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/_DKKnowledgeStorageEventNotificationDelegate.h>
#import <libobjc.A.dylib/_DKSyncRemoteKnowledgeStorageFetchDelegate.h>
#import <libobjc.A.dylib/_DKSyncCoordinator.h>

@protocol NSObject, OS_xpc_object, _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSyncType, _DKThrottledActivity, NSMutableSet, NSMutableArray, _DKDataProtectionStateMonitor, NSString, _DKSync2State, APSConnection, _CDMutablePerfMetric, _DKSyncToggle, _CDPeriodicSchedulerJob, NSObject, _DKKnowledgeStorage, NSUUID;

@interface _DKSync2Coordinator : _DKSyncContextObject <APSConnectionDelegate, _DKKnowledgeStorageEventNotificationDelegate, _DKSyncRemoteKnowledgeStorageFetchDelegate, _DKSyncCoordinator> {

	_DKThrottledActivity* _activityThrottler;
	id<NSObject> _observerToken;
	NSMutableSet* _busyTransactions;
	NSMutableArray* _insertedSyncedEvents;
	NSMutableArray* _deletedSyncedEvents;
	NSMutableSet* _activatedPeers;
	_DKDataProtectionStateMonitor* _dataProtectionMonitor;
	char _hasRegisteredOptionalObservers;
	char _isEnabled;
	NSString* _triggeredSyncDelayActivityName;
	NSString* _syncActivityName;
	_DKSync2State* _syncState;
	double _periodicJobInterval;
	char _databaseObserversRegistered;
	char _cloudDeviceCountChangedObserverRegistered;
	char _cloudSyncAvailablityObserverRegistered;
	char _rapportAvailablityObserverRegistered;
	char _siriSyncEnabledObserverRegistered;
	char _syncPolicyChangedObserverRegistered;
	APSConnection* _connection;
	NSMutableSet* _streamNamesObservedForAdditions;
	NSMutableSet* _streamNamesObservedForDeletions;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	_DKSyncToggle* _syncEnabledToggler;
	_DKSyncToggle* _someTransportIsAvailableToggler;
	_DKSyncToggle* _cloudIsAvailableToggler;
	_DKSyncToggle* _rapportIsAvailableToggler;
	_CDPeriodicSchedulerJob* _periodicJob;
	char _triggeredSyncActivityRegistered;
	NSObject*<OS_xpc_object> _triggeredSyncActivity;
	char _isBusy;
	char _hasSyncedUpHistoryToCloud;
	_DKKnowledgeStorage* _storage;
	id<_DKKeyValueStore> _keyValueStore;
	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transportCloudDown;
	id<_DKSyncRemoteKnowledgeStorage> _transportCloudUp;
	id<_DKSyncRemoteKnowledgeStorage> _transportRapport;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _DKSyncType * syncType; 
@property (nonatomic,readonly) NSUUID * deviceUUID; 
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(void)start;
-(id)policyForSyncTransportType:(long long)arg1 ;
-(void)_syncEnabledToggle;
-(void)_syncDisabledToggle;
-(void)_someTransportIsAvailableToggle;
-(void)_noTransportIsAvailableToggle;
-(void)_cloudIsAvailableToggle;
-(void)_cloudIsUnavailableToggle;
-(void)_rapportIsAvailableToggle;
-(void)_rapportIsUnavailableToggle;
-(NSUUID *)deviceUUID;
-(void)setupStorage;
-(void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2 ;
-(void)_cloudSyncAvailabilityDidChange:(id)arg1 ;
-(void)_syncPolicyDidChange:(id)arg1 ;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5 ;
-(void)syncWithReply:(/*^block*/id)arg1 ;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deleteRemoteStateWithReply:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)_databaseDidDeleteFromStreamNameCounts:(id)arg1 ;
-(void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2 ;
-(void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2 ;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6 ;
-(id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5 ;
-(_DKSyncType *)syncType;
@end
