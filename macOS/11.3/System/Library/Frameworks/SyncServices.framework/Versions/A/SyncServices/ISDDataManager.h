/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISyncNameNumberProvider.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSString, ISDAdminDatabase, NSMutableDictionary, ISDDataDirectoryVersion, ISDNameNumberProvider;

@interface ISDDataManager : NSObject <ISyncNameNumberProvider, NSKeyedUnarchiverDelegate> {

	NSString* _dataDirectory;
	NSString* _adminDatabasePath;
	NSString* _schemasArchivePath;
	ISDAdminDatabase* _adminDatabase;
	NSString* _syncingClientListPath;
	unsigned _anchor;
	char _shouldBumpAnchorOnNextChange;
	char _shouldUpdateMetadataOnEnableFlush;
	NSMutableDictionary* _clients;
	NSMutableDictionary* _schemas;
	NSMutableDictionary* _dataClasses;
	NSMutableDictionary* _entities;
	unsigned _syncGeneration;
	char _clientAdminDataChanged;
	char _clientSyncStateChanged;
	char _schemaAdminDataChanged;
	ISDDataDirectoryVersion* _dataVersion;
	ISDNameNumberProvider* _associatedNameNumberProvider;
	char _shouldWriteSchemasArchiveToDisk;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setDataVersionIsPreNameNumber:(char)arg1 ;
+(char)dataVersionIsPreNameNumber;
-(void)dealloc;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(void)rollback;
-(id)entities;
-(id)clientWithIdentifier:(id)arg1 ;
-(id)dataDirectory;
-(unsigned)anchor;
-(void)unregisterClientWithIdentifier:(id)arg1 ;
-(id)allClients;
-(char)_releaseAdminDBLockIfNecessary;
-(void)recordSyncPlanInformation:(id)arg1 ;
-(void)purgeSyncPlanDetailBefore:(id)arg1 ;
-(id)entityWithName:(id)arg1 ;
-(char)dataVersionIsTigerOrOlder;
-(char)dataVersionIsLeopard;
-(void)readObjectGraph;
-(id)dataClasses;
-(void)_updateDataClassNamesToClientIdentifiers:(id)arg1 forClient:(id)arg2 ;
-(char)shouldWriteSchemasArchiveToDisk;
-(void)writeSchemasArchive;
-(id)nameNumberProvider;
-(void)readSchemasArchive;
-(void)_updateListOfClientsThatSyncWithOtherClients;
-(void)updateMetadataAndPostChangeNotifications;
-(void)bumpAnchor;
-(id)dataClassWithName:(id)arg1 ;
-(id)replacementObjectForObject:(id)arg1 ;
-(id)fileReferenceWithPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 windowsBinRelativePath:(id)arg4 ;
-(void)_replaceFileReferenceInObject:(id)arg1 forKey:(id)arg2 withPath:(id)arg3 bundleId:(id)arg4 bundleRelativePath:(id)arg5 binRelativePath:(id)arg6 ;
-(void)_replaceFileReferenceInObject:(id)arg1 forKey:(id)arg2 withPath:(id)arg3 bundleId:(id)arg4 bundleRelativePath:(id)arg5 ;
-(id)fileReferenceWithPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 ;
-(id)latestGenerationForEntitiesNamed:(id)arg1 ;
-(char)_shouldValidateClient:(id)arg1 ;
-(id)_isInvalidClient:(id)arg1 ;
-(void)_replaceFileReferenceInObject:(id)arg1 forKey:(id)arg2 withPath:(id)arg3 relativeToAnchorFilePath:(id)arg4 bundleId:(id)arg5 bundleRelativePath:(id)arg6 ;
-(void)_updateSyncAlertToolForClient:(id)arg1 fromDescription:(id)arg2 ;
-(void)_updateSyncStatesForClient:(id)arg1 fromDescription:(id)arg2 forceRefresh:(char)arg3 ;
-(void)_updatePullOnlyEntitiesForClient:(id)arg1 fromDescription:(id)arg2 ;
-(void)_updatePushOnlyEntitiesForClient:(id)arg1 fromDescription:(id)arg2 ;
-(void)_updateClientInfoForClient:(id)arg1 fromDescription:(id)arg2 ;
-(void)_validateClient:(id)arg1 ;
-(char)shouldReparseDescriptionFileForObject:(id)arg1 ;
-(void)_updateClient:(id)arg1 fromDescription:(id)arg2 forceRefresh:(char)arg3 ;
-(char)shouldParseDescriptionForObject:(id)arg1 withDescriptionFilePath:(id)arg2 descriptionBundleId:(id)arg3 descriptionBundleRelativePath:(id)arg4 descriptionBinRelativePath:(id)arg5 updateFileReference:(char)arg6 ;
-(void)disableFlush;
-(void)_ensureDataDirectoryExistsForClientWithId:(id)arg1 ;
-(void)enableFlush;
-(void)_removeDataDirectoryForClientWithId:(id)arg1 ;
-(char)shouldSyncClient:(id)arg1 withClient:(id)arg2 entityNames:(id)arg3 ;
-(id)_entityNamesToDataclassNames:(id)arg1 ;
-(id)entitiesMapping;
-(id)schemas;
-(id)_dataClassNameFromStubEntity:(id)arg1 ;
-(id)schemaDefiningEntityComponentWithExtensionName:(id)arg1 entityName:(id)arg2 ;
-(void)_validateExtensionNameSuppliedInParsedSchemas:(id)arg1 schemaBundlePath:(id)arg2 ;
-(void)_validateUndefinedObjectsInParsedSchemas:(id)arg1 schemaBundlePath:(id)arg2 ;
-(void)_validateNoCrossDataClassRelationshipsInParsedSchemas:(id)arg1 schemaBundlePath:(id)arg2 ;
-(id)schemaWithName:(id)arg1 ;
-(void)_applyChangesFromDataClassesFromSchema:(id)arg1 ;
-(void)_applyChangesFromEntityComponentsFromSchema:(id)arg1 ;
-(char)_shouldUpdateSyncStateForClient:(id)arg1 entityName:(id)arg2 ;
-(void)noteChangesFromSyncState:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)_entityNamesSetFromEntities:(id)arg1 ;
-(id)entityNamesToTruthSegmentNames:(id)arg1 ;
-(void)_applyChangesFromSchemas:(id)arg1 ;
-(void)_removeSyncStates:(id)arg1 forClient:(id)arg2 ;
-(void)_updateClientSyncStatesForModifiedEntities:(id)arg1 incompatiblyModifiedEntities:(id)arg2 ;
-(void)_whackDeletedDataClasses:(id)arg1 ;
-(void)_whackDeletedEntityComponents:(id)arg1 ;
-(void)registerSchemaWithDescription:(id)arg1 descriptionFilePath:(id)arg2 bundlePath:(id)arg3 helper:(id)arg4 linkedOnTiger:(char)arg5 ;
-(void)_ensureTruthDirectoryExistsForDataclassNamed:(id)arg1 ;
-(void)_validateParsedSchemas:(id)arg1 schemaBundlePath:(id)arg2 ;
-(void)_getDataClassesDeleted:(id)arg1 dataClassesAdded:(id)arg2 inParsedSchemas:(id)arg3 ;
-(void)_getEntityComponentsDeleted:(id)arg1 modified:(id)arg2 incompatiblyModified:(id)arg3 inParsedSchemas:(id)arg4 ;
-(void)_processChangesForSchemas:(id)arg1 ecDeletions:(id)arg2 ecModifications:(id)arg3 ecIncompatibleModifications:(id)arg4 dcDeletions:(id)arg5 helper:(id)arg6 ;
-(void)_ensureTruthDatabasesExistForDataclasses:(id)arg1 andNoteDeletedDataclasses:(id)arg2 ;
-(void)_unregisterInvalidatedClientsRegisteredForEntities:(id)arg1 usingHelper:(id)arg2 ;
-(void)noteSyncServicesDirectoryNeedsToBeResetRemovingAdminDB:(char)arg1 ;
-(id)_recoveryTempFileInfo;
-(void)removeTruthSegmentDatabasesInDirectory:(id)arg1 usingFileManager:(id)arg2 ;
-(void)_clearClientStateForClientWithDirectory:(id)arg1 ;
-(void)createTruthSegmentsIfNecessaryInDirectory:(id)arg1 usingFileManager:(id)arg2 ;
-(unsigned)nextSyncGeneration;
-(void)purgeDeletedRecordsAndTuplesInTruth:(char)arg1 ;
-(void)resetSyncDataIncludingClientsAndSchemas:(char)arg1 ;
-(void)resetSyncModesForClientWithIdentifier:(id)arg1 ;
-(void)resetClientWithIdentifier:(id)arg1 ;
-(void)refreshNameNumberProvider:(id)arg1 ;
-(id)initWithDataDirectory:(id)arg1 ;
-(void)rememberIfDataVersionIsPreNameNumber;
-(void)loadAdminDatabase;
-(void)loadAdminDatabaseWithoutNotifications;
-(void)assignNameNumberMappings:(id)arg1 ;
-(void)setShouldBumpAnchorOnNextChange:(char)arg1 ;
-(void)noteChangesFromClient:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)noteChangesFromFileReference:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)noteChangesFromSchema:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)noteChangesFromDataClass:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)noteChangesFromEntity:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)dataDirectoryForClientWithIdentifier:(id)arg1 ;
-(id)allClientIdentifiers;
-(id)clientIdentifiersThatSyncEntityNamesForMingler:(id)arg1 ;
-(id)clientsSyncingEntityNames:(id)arg1 ;
-(void)_validateClientDescriptionFilesAndUnregisterIfNecessary;
-(void)updateClientIfDescriptionFileChanged:(id)arg1 ;
-(void)registerClientWithIdentifier:(id)arg1 description:(id)arg2 descriptionFilePath:(id)arg3 descriptionBundleId:(id)arg4 descriptionBundleRelativePath:(id)arg5 descriptionBinRelativePath:(id)arg6 wasChanged:(char*)arg7 ;
-(id)clientsToAlertForClient:(id)arg1 entityNames:(id)arg2 ;
-(char)shouldSyncClient:(id)arg1 forEntityNames:(id)arg2 ;
-(id)entitiesWithDataClassName:(id)arg1 ;
-(id)dataclassNamesForEntitiesWithNames:(id)arg1 ;
-(id)dataClassNamesForEntities:(id)arg1 ;
-(id)entitiesIncludingRelatedEntities:(id)arg1 ;
-(id)computeConservativeClosureOfEntityNames:(id)arg1 ;
-(id)computeClosureOfEntityNames:(id)arg1 includeReferringEntities:(char)arg2 ;
-(id)schemaNameForDataclass:(id)arg1 ;
-(void)registerSchemaWithDescription:(id)arg1 descriptionFilePath:(id)arg2 helper:(id)arg3 linkedOnTiger:(char)arg4 ;
-(void)unregisterSchemaWithName:(id)arg1 helper:(id)arg2 ;
-(unsigned)syncGeneration;
-(void)noteSyncServicesDirectoryNeedsToBeReset;
-(void)purgeDeletedRecordsAndTuplesInTruth;
-(void)resetSyncData;
-(void)resetSyncHistory;
-(void)probeTruthAndAdminDatabasesForStaleLocksAndRepairIfNecessary;
-(void)probeClientDatabasesForStaleLocksAndRepairIfNecessary;
-(void)checkForInconsistentResetDataStateAndRepairIfNeeded;
-(void)checkForInconsistentRunningStateAndRepairIfNeeded;
-(id)resetSyncModesForAllClientsSyncingEntities:(id)arg1 ;
-(id)syncDatesForClientsEarlierThanDate:(id)arg1 ;
-(char)resetClientsWithLastSyncDatesEarlierThanDate:(id)arg1 purgeTruth:(char)arg2 andVacuum:(char)arg3 ;
-(void)setShouldWriteSchemasArchiveToDisk:(char)arg1 ;
@end

