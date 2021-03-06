/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/ISyncManager.h>
#import <libobjc.A.dylib/ISyncAlertCallback.h>
#import <libobjc.A.dylib/ISyncNameNumberProvider.h>

@protocol ISyncServerNSObject;
@class NSMutableDictionary, NSString, NSMutableArray, NSDate, ISDNameNumberProvider, NSTask;

@interface ISyncConcreteManager : ISyncManager <ISyncAlertCallback, ISyncNameNumberProvider> {

	id<ISyncServer><NSObject> _server;
	unsigned long long _serverPID;
	unsigned long long _lastAvailableServerPID;
	unsigned _clientAnchor;
	unsigned _schemaAnchor;
	id _clients;
	id _syncPlans;
	NSMutableDictionary* _dataClasses;
	NSMutableDictionary* _entities;
	NSString* _dataDirectoryPath;
	NSString* _logDirectoryPath;
	NSString* _dataReferencesDirectory;
	NSMutableDictionary* _syncAlertHandlers;
	NSMutableArray* _runLoopModes;
	NSDate* _unavailableCheckDate;
	NSString* _unavailableReason;
	NSString* _initialPlanIdentifier;
	NSMutableDictionary* _clientPlanIdentifiers;
	int _notifyClientToken;
	int _notifySchemaToken;
	int _notifySchemaCacheInvalidToken;
	int _notifyPlansToken;
	int _notifyClientSyncStateToken;
	char _needToFetchAllClients;
	char _allSchemaDataWasFetched;
	char _enabled;
	char _removeClientFromSyncPlanIfClientDoesntBeginSession;
	ISDNameNumberProvider* _nameNumberProvider;
	NSTask* _task;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)addRequestMode:(id)arg1 ;
-(void)removeRequestMode:(id)arg1 ;
-(id)requestModes;
-(id)clientWithIdentifier:(id)arg1 ;
-(void)_connectToServer;
-(id)clientsSyncingDataclasses;
-(void)unregisterClient:(id)arg1 ;
-(id)entityNamesInDataClassName:(id)arg1 ;
-(id)registerClientWithIdentifier:(id)arg1 description:(id)arg2 ;
-(char)isAvailable:(id*)arg1 ;
-(id)logDirectoryPath;
-(id)allClients;
-(id)nameNumberProvider;
-(unsigned)latestGenerationForEntitiesNamed:(id)arg1 ;
-(void)shutDownSyncServer;
-(void)refreshNameNumberProvider:(id)arg1 ;
-(id)schemaNameForDataclass:(id)arg1 ;
-(void)resetSyncData;
-(id)syncDatesForClientsEarlierThanDate:(id)arg1 ;
-(void)resetClientsWithLastSyncDatesEarlierThanDate:(id)arg1 purgeTruth:(char)arg2 andVacuum:(char)arg3 ;
-(oneway void)fireLocalSyncAlertForClientWithIdentifier:(bycopy id)arg1 syncPlan:(bycopy id)arg2 entityNames:(bycopy id)arg3 ;
-(id)syncPlanWithIdentifier:(id)arg1 ;
-(id)allSyncPlans;
-(id)setOneShotSyncGroupWithClients:(id)arg1 entityNames:(id)arg2 ;
-(id)addClients:(id)arg1 toSyncPlanWithIdentifier:(id)arg2 ;
-(void)cancelSyncPlan:(id)arg1 ;
-(void)reallyResetSyncData;
-(void)resetEntityNamesAndSetAllClientsToRefresh:(id)arg1 ;
-(void)unregisterSchemaWithName:(id)arg1 ;
-(void)setSyncMode:(int)arg1 forEntityNames:(id)arg2 forClientWithIdentifier:(id)arg3 ;
-(id)syncServerStatistics;
-(id)_getIdNumberForEntityNamed:(id)arg1 ;
-(void)_cancelNotifies;
-(void)_setupNotifies;
-(void)_enableFlagChanged:(id)arg1 ;
-(void)_removeAllSyncAlertHandlers:(char)arg1 ;
-(void)_disconnectFromServer:(id)arg1 ;
-(void)setSyncAlertHandler:(id)arg1 selector:(SEL)arg2 forClient:(id)arg3 notifyServer:(char)arg4 ;
-(void)_invalidateClient:(id)arg1 ;
-(id)_processChangesToClientDescription:(id)arg1 withIdentifier:(id)arg2 ;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 withArg:(void*)arg3 ;
-(id)_processChangesToClientDescriptions:(id)arg1 ;
-(void)_logDescriptionChange;
-(void)_logSyncStateChange;
-(void)_fetchChangesToClients:(id)arg1 whither:(char)arg2 ;
-(void)_processChangesToDataClassDescription:(id)arg1 withName:(id)arg2 ;
-(void)_processChangesToEntityDescription:(id)arg1 withName:(id)arg2 ;
-(char)_identifyNewSchemaNames:(id)arg1 usingDictionary:(id)arg2 intoArrayAtLocation:(id*)arg3 ;
-(void)_cleanupCyclicReferences;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 withArg:(void*)arg3 withArg:(void*)arg4 ;
-(void)_processChangesToSchemaDescriptions:(id)arg1 ;
-(void)fetchChangesToClientDescriptions;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 withArg:(void*)arg3 withArg:(void*)arg4 withArg:(void*)arg5 withArg:(void*)arg6 ;
-(id)_registerClientWithIdentifier:(id)arg1 description:(id)arg2 descriptionFilePath:(id)arg3 descriptionBundleId:(id)arg4 descriptionBundleRelativePath:(id)arg5 ;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 ;
-(void)_stopObservingClient:(id)arg1 ;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 withArg:(void*)arg3 withArg:(void*)arg4 withArg:(void*)arg5 ;
-(void)_setImagePath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 forClient:(id)arg4 ;
-(void)fetchChangesToClientSyncStates;
-(id)_performSelectorOnServer:(SEL)arg1 ;
-(id)allDataClassNames;
-(id)_newDataclassNamesForClient:(id)arg1 ;
-(void)_registerSchemaWithDescription:(id)arg1 descriptionFilePath:(id)arg2 ;
-(void)_registerSchemaWithDescription:(id)arg1 descriptionFilePath:(id)arg2 bundlePath:(id)arg3 ;
-(void)clearHasChangesIndicatorForLaggardClientsWithIdentifiers:(id)arg1 ;
-(id)dataDirectoryPath;
-(void)fetchChangesToSchemaDescriptionsForDataclassesNamed:(id)arg1 orEntitiesNamed:(id)arg2 fetchAll:(char)arg3 ;
-(id)_entityNamesInDataClassName:(id)arg1 ;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 withArg:(void*)arg3 withArg:(void*)arg4 withArg:(void*)arg5 withArg:(void*)arg6 withArg:(void*)arg7 withArg:(void*)arg8 withArg:(void*)arg9 withArg:(void*)arg10 ;
-(void)_setSyncAlertToolPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 forClient:(id)arg4 ;
-(void)_removeSyncAlertConnection:(id)arg1 forClientWithIdentifier:(id)arg2 notifyServer:(char)arg3 ;
-(void)_addRunLoopModesToConnection:(id)arg1 ;
-(void)_addAllSyncAlertHandlersToRunLoopMode:(id)arg1 ;
-(void)_removeAllSyncAlertHandlersFromRunLoopMode:(id)arg1 ;
-(void)_registerSyncAlertConnection:(id)arg1 forClientWithIdentifier:(id)arg2 ;
-(void)_fireLocalSyncAlertAfterDelay:(id)arg1 ;
-(void)_stopObservingSyncPlan:(id)arg1 ;
-(void)applySyncPlanInfo:(id)arg1 toSyncPlan:(id)arg2 ;
-(id)syncPlanWithIdentifier:(id)arg1 infoDictionary:(id)arg2 ;
-(void)_theDamnThingDied:(id)arg1 ;
-(void)setSyncClientNameNumberProvider:(id)arg1 ;
-(char)_connectToServerNoLock;
-(void)_launchServer;
-(void)_cleanupWhenSyncServerLostNoLock;
-(void)_cleanupServerConnection:(id)arg1 ;
-(void)_resetNotifies;
-(id)_performSelectorOnServer:(SEL)arg1 numberOfArguments:(long long)arg2 ;
-(void)shutDownSyncServerMach;
-(void)_syncServerCheck;
-(char)_isAvailable:(id*)arg1 ;
-(void)_registerAllClientSyncAlertConnectionsToServer;
-(void)tellServerDetectedDataDirectoryCorruption;
-(id)_truthRecordStore:(id)arg1 ;
-(void)tellServerResetClientWithIdentifier:(id)arg1 ;
-(id)allEntityNames;
-(id)snapshotOfRecordsInTruthWithEntityNames:(id)arg1 usingIdentifiersForClient:(id)arg2 ;
-(void)_clearClientSyncStateNotify;
-(id)registerClientWithIdentifier:(id)arg1 descriptionFilePath:(id)arg2 ;
-(id)registerClientWithIdentifier:(id)arg1 descriptionBundleId:(id)arg2 descriptionBundleRelativePath:(id)arg3 ;
-(void)stopObservingClient:(id)arg1 ;
-(void)setDisplayName:(id)arg1 forClient:(id)arg2 ;
-(void)setUseLocalIdsForGUIDs:(char)arg1 forClient:(id)arg2 ;
-(void)setNeverFormatsRelationships:(char)arg1 forClient:(id)arg2 ;
-(void)setImagePath:(id)arg1 forClient:(id)arg2 ;
-(void)setImageBundleId:(id)arg1 bundleRelativePath:(id)arg2 forClient:(id)arg3 ;
-(void)setEnabled:(char)arg1 forEntityNames:(id)arg2 forClient:(id)arg3 ;
-(void)setShouldReplaceClientRecords:(char)arg1 forEntityNames:(id)arg2 forClient:(id)arg3 ;
-(id)filterDataForClient:(id)arg1 ;
-(void)setFilterData:(id)arg1 filteredEntityNames:(id)arg2 forClient:(id)arg3 ;
-(void)registerSchemaWithDescription:(id)arg1 ;
-(void)registerSchemaWithDescriptionFilePath:(id)arg1 ;
-(char)registerSchemaWithBundlePath:(id)arg1 ;
-(void)clientWithIdentifier:(id)arg1 needsSyncing:(char)arg2 ;
-(id)_createEntitiesMappingForEntitiesWithNames:(id)arg1 ;
-(id)versionInformationForEntityNamed:(id)arg1 ;
-(id)versionInformationForDataclassNamed:(id)arg1 ;
-(id)entityNamesInDataClassNames:(id)arg1 ;
-(id)dataClassNamesInEntityNames:(id)arg1 ;
-(id)displayNameForEntityName:(id)arg1 ;
-(char)entityWithNameHasPropertiesWithLastModifiedResolutionPolicy:(id)arg1 ;
-(id)parentNameForEntityName:(id)arg1 ;
-(id)identityKeysForEntityName:(id)arg1 withRecord:(id)arg2 ;
-(id)identityKeysForEntityName:(id)arg1 ;
-(id)attributeNamesOnEntityName:(id)arg1 ;
-(id)relationshipNamesOnEntityName:(id)arg1 ;
-(char)excludeFromAirbagPropertyName:(id)arg1 onEntityName:(id)arg2 ;
-(id)displayNameForPropertyName:(id)arg1 onEntityName:(id)arg2 ;
-(id)typeForPropertyName:(id)arg1 onEntityName:(id)arg2 ;
-(id)subtypeForPropertyName:(id)arg1 onEntityName:(id)arg2 ;
-(id)enumValuesForPropertyName:(id)arg1 onEntityName:(id)arg2 ;
-(id)displayNameForEnumValue:(id)arg1 forAttributeName:(id)arg2 onEntityName:(id)arg3 ;
-(id)propertyDependenciesForPropertyName:(id)arg1 onEntityName:(id)arg2 ;
-(id)relationshipOrderingForRelationshipName:(id)arg1 onEntityName:(id)arg2 ;
-(id)targetTypesForRelationshipName:(id)arg1 onEntityName:(id)arg2 ;
-(id)inverseRelationshipNamesForSourceEntityName:(id)arg1 relationshipName:(id)arg2 targetEntityName:(id)arg3 ;
-(id)dataClassNameForEntityName:(id)arg1 ;
-(id)displayNameForDataClassName:(id)arg1 ;
-(id)singularDisplayNameForDataClassName:(id)arg1 ;
-(id)imageForDataClassName:(id)arg1 ;
-(id)categoryForDataClassName:(id)arg1 ;
-(id)longNameForDataClassName:(id)arg1 ;
-(Class)uiHelperForEntityName:(id)arg1 ;
-(Class)uiHelperForPropertyName:(id)arg1 onEntityName:(id)arg2 ;
-(void)sessionWantsToBegin:(id)arg1 beforeDate:(id)arg2 pushTruthForEntityNames:(id)arg3 quietlyPushTruth:(char)arg4 hasChanges:(char)arg5 skip:(char)arg6 ;
-(char)sessionWantsToBeginRightNow:(id)arg1 ;
-(void)sessionDidBeginPushingChanges:(id)arg1 negotiatedSyncStates:(id)arg2 ;
-(void)sessionDidEndPushingChanges:(id)arg1 changeStoreHasChanges:(char)arg2 ;
-(id)sessionDidEnd:(id)arg1 finishedSyncing:(char)arg2 ;
-(void)pingServerAndCheckIfSessionIsCancelled:(id)arg1 ;
-(void)setSyncAlertToolPath:(id)arg1 forClient:(id)arg2 ;
-(void)setSyncAlertToolBundleId:(id)arg1 bundleRelativePath:(id)arg2 forClient:(id)arg3 ;
-(void)setShouldSynchronize:(char)arg1 withClientsOfType:(id)arg2 forClient:(id)arg3 ;
-(void)setSyncsAfterClients:(char)arg1 forClient:(id)arg2 ;
-(void)setTrackRecordModificationTimes:(int)arg1 forClient:(id)arg2 ;
-(void)_setRemoveClientFromSyncPlanIfClientDoesntBeginSession;
-(id)setOneShotSyncGroupWithClients:(id)arg1 ;
-(void)stopObservingSyncPlan:(id)arg1 ;
-(void)fetchChangesToSyncPlan:(id)arg1 ;
-(void)_cleanupWhenSyncServerLost;
-(void)_invokeMethodOnServer:(id)arg1 ;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 withArg:(void*)arg3 withArg:(void*)arg4 withArg:(void*)arg5 withArg:(void*)arg6 withArg:(void*)arg7 ;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 withArg:(void*)arg3 withArg:(void*)arg4 withArg:(void*)arg5 withArg:(void*)arg6 withArg:(void*)arg7 withArg:(void*)arg8 ;
-(id)_performSelectorOnServer:(SEL)arg1 withArg:(void*)arg2 withArg:(void*)arg3 withArg:(void*)arg4 withArg:(void*)arg5 withArg:(void*)arg6 withArg:(void*)arg7 withArg:(void*)arg8 withArg:(void*)arg9 ;
-(int)tellServerDetectedSyncAnchorMismatch:(id)arg1 forClient:(id)arg2 ;
-(void)removeServerLock;
-(id)syncDisabledReason;
-(void)addRunLoopMode:(id)arg1 ;
-(void)removeRunLoopMode:(id)arg1 ;
-(void)_setSyncServerName:(id)arg1 dataDirectoryPath:(id)arg2 ;
-(void)_setDataReferencesDirectory:(id)arg1 ;
-(id)viewOfRecordsInTruthWithEntityNames:(id)arg1 ;
-(id)viewOfRecordsInStoreOfClientWithIdentifier:(id)arg1 identityMatchedIdMapper:(id)arg2 forEntityNames:(id)arg3 ;
-(id)viewOfRecordsApplyingConflictsForClientWithIdentifier:(id)arg1 ;
-(id)pushTruthFromClient:(id)arg1 forEntityNames:(id)arg2 ;
-(char)isAirbagEnabled;
-(void)setAirbagEnabled:(char)arg1 ;
-(long long)airbagThreshold;
-(void)setAirbagThreshold:(long long)arg1 ;
-(id)defaultConflictManager;
-(unsigned long long)unresolvedConflictCount;
-(unsigned long long)resolvedConflictCountWithEntityNames:(id)arg1 ;
-(id)laggardClientIdentifiersWithChanges:(id)arg1 ;
@end

