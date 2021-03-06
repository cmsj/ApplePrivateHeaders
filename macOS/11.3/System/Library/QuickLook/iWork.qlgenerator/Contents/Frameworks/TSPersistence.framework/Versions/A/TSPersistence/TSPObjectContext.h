/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPDataReferenceMapDelegate.h>
#import <TSPersistence/TSPObjectUUIDMapDelegate.h>
#import <TSPersistence/TSPFileCoordinatorDelegate.h>
#import <TSPersistence/TSPLazyReferenceDelegate.h>
#import <TSPersistence/TSPObjectDelegate.h>
#import <TSPersistence/TSPSupportDirectoryDelegate.h>
#import <TSPersistence/TSPDataProviding.h>
#import <TSPersistence/TSPPassphraseConsumer.h>

@protocol OS_dispatch_queue, OS_dispatch_group, TSPObjectContextDelegate;
@class NSString, NSData, SFUCryptoKey, NSURL, TSPPackage, NSProgress, TSPCancellationState, TSPDocumentProperties, NSMapTable, TSPObjectUUIDMap, NSMutableDictionary, TSPDocumentRevision, NSSet, NSObject, NSRecursiveLock, TSPDocumentSaveOperationState, TSPPackageWriteCoordinator, NSHashTable, TSUTemporaryDirectory, NSMutableArray, TSPObject, TSPSupportPackageWriteCoordinator, TSPRegistry, TSPComponentManager, TSPResourceContext, TSPDataManager, TSPDataReferenceMap, TSPDataDownloadManager, TSPDownloadObserverManager, TSPSupportManager, TSPObjectContainer, TSPDocumentMetadata, TSPSupportMetadata, NSArray, NSUUID;

@interface TSPObjectContext : NSObject <TSPDataReferenceMapDelegate, TSPObjectUUIDMapDelegate, TSPFileCoordinatorDelegate, TSPLazyReferenceDelegate, TSPObjectDelegate, TSPSupportDirectoryDelegate, TSPDataProviding, TSPPassphraseConsumer> {

	Aq _lastObjectIdentifier;
	Aq _modifyObjectToken;
	Ai _modifyObjectCount;
	Ai _ignoreDataLifecycleErrorsCount;
	Ac _didClose;
	unsigned _mode;
	SFUCryptoKey* _decryptionKey;
	NSURL* _documentURL;
	TSPPackage* _documentPackage;
	TSPPackage* _supportPackage;
	NSURL* _supportURL;
	NSProgress* _readProgress;
	TSPCancellationState* _readCancellationState;
	os_unfair_lock_s _documentPropertiesLock;
	TSPDocumentProperties* _documentProperties;
	NSMapTable* _objects;
	TSPObjectUUIDMap* _objectUUIDMap;
	NSMutableDictionary* _deterministicObjectUUIDSetPerObject;
	TSPDocumentRevision* _documentRevision;
	long long _preferredPackageType;
	NSSet* _featureIdentifiers;
	NSSet* _unsupportedFeatureIdentifiers;
	NSObject*<OS_dispatch_queue> _objectsQueue;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSRecursiveLock* _readLock;
	NSObject*<OS_dispatch_queue> _documentStateQueue;
	NSObject*<OS_dispatch_queue> _dataAttributesQueue;
	NSObject*<OS_dispatch_queue> _loadObserversQueue;
	NSObject*<OS_dispatch_queue> _runLoadObserversQueue;
	Aq _runLoadObserversQueueSuspendCount;
	NSObject*<OS_dispatch_queue> _resourceAccessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSProgress* _nextSaveProgress;
	TSPDocumentSaveOperationState* _saveOperationState;
	TSPPackageWriteCoordinator* _packageWriteCoordinator;
	NSHashTable* _objectsToIgnoreModifications;
	NSHashTable* _objectModifyDelegates;
	char _isWaitingForEndSave;
	NSObject*<OS_dispatch_group> _pendingEndSaveGroup;
	NSObject*<OS_dispatch_group> _outstandingReadsGroup;
	NSObject*<OS_dispatch_queue> _temporaryDirectoryQueue;
	TSUTemporaryDirectory* _temporaryDirectory;
	IdentifierMap<NSMutableArray<TSPObjectContextObserver *> *>* _loadObservers;
	NSObject*<OS_dispatch_queue> _asynchronousObjectModifierQueue;
	NSHashTable* _asynchronousObjectModifiers;
	NSMutableArray* _suspendedAsynchronousObjectModifierStack;
	TSPObject* _supportObject;
	TSPSupportPackageWriteCoordinator* _supportWriteCoordinator;
	os_unfair_lock_s _dataObserversLock;
	NSHashTable* _dataObservers;
	os_unfair_lock_s _deferredInitialDataPropertiesBlocksLock;
	NSMutableArray* _deferredInitialDataPropertiesBlocks;
	struct {
		unsigned delegateRespondsToAdditionalDocumentPropertiesForWrite : 1;
		unsigned delegateRespondsToAdditionalDocumentSupportPropertiesForWrite : 1;
		unsigned delegateRespondsToDocumentPasswordHintForWrite : 1;
		unsigned delegateRespondsToPackageDataForWrite : 1;
		unsigned delegateRespondsToAreNewExternalReferencesToDataAllowed : 1;
		unsigned delegateRespondsToAreExternalReferencesToDataAllowedAtURL : 1;
		unsigned delegateRespondsToBaseUUIDForObjectUUID : 1;
		unsigned delegateRespondsToPreserveDocumentRevisionIdentifierForSaveURL : 1;
		unsigned delegateRespondsToFilePresenter : 1;
		unsigned delegateRespondsToSupportDirectoryURLReturningIsUnique : 1;
		unsigned delegateRespondsToSupportDirectoryURL : 1;
		unsigned delegateRespondsToDocumentLoadValidationPolicy : 1;
		unsigned delegateRespondsToDocumentSaveValidationPolicy : 1;
		unsigned delegateRespondsToIgnoreDocumentSupport : 1;
		unsigned delegateRespondsToIsDocumentSupportTemporary : 1;
		unsigned delegateRespondsToShouldLoadAllComponents : 1;
		unsigned delegateRespondsToIsInCollaborationMode : 1;
		unsigned delegateRespondsToIsInReadOnlyMode : 1;
		unsigned delegateRespondsToContextDidUpdateDocumentRevision : 1;
		unsigned delegateRespondsToRetryUploadForData : 1;
		unsigned delegateRespondsToShouldDisableCloneMode : 1;
		unsigned skipDocumentUpgrade : 1;
	}  _flags;
	char _nested;
	char _losesDataOnWrite;
	NSString* _documentPasswordHint;
	TSPObject* _documentObject;
	id<TSPObjectContextDelegate> _delegate;
	TSPRegistry* _registry;
	TSPComponentManager* _componentManager;
	TSPResourceContext* _resourceContext;
	TSPDataManager* _dataManager;
	TSPDataReferenceMap* _dataReferenceMap;
	TSPDataDownloadManager* _dataDownloadManager;
	TSPDownloadObserverManager* _downloadObserverManager;
	TSPSupportManager* _supportManager;
	TSPObjectContainer* _documentObjectContainer;
	TSPObjectContainer* _supportObjectContainer;
	TSPDocumentMetadata* _documentMetadata;
	TSPSupportMetadata* _supportMetadata;
	unsigned long long _saveToken;
	NSData* _passwordVerifier;

}

@property (nonatomic,readonly) NSArray * allDataWithLastDigestMismatch; 
@property (nonatomic,readonly) NSArray * allErasedDataWithLastDigestMismatch; 
@property (nonatomic,readonly) TSPRegistry * registry;                                            //@synthesize registry=_registry - In the implementation block
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) char ignoreDocumentSupport; 
@property (nonatomic,readonly) char isDocumentSupportTemporary; 
@property (nonatomic,readonly) char ignoreDocumentSupportVersioning; 
@property (nonatomic,readonly) char ignoreUnknownContentWhileReading; 
@property (nonatomic,readonly) char ignoreVersionCheckingWhileReading; 
@property (nonatomic,readonly) char ignoreDocumentResourcesWhileReading; 
@property (nonatomic,readonly) char ignoreDataLifecycleErrors; 
@property (nonatomic,readonly) char isInCollaborationMode; 
@property (nonatomic,readonly) TSPComponentManager * componentManager;                            //@synthesize componentManager=_componentManager - In the implementation block
@property (nonatomic,readonly) TSPResourceContext * resourceContext;                              //@synthesize resourceContext=_resourceContext - In the implementation block
@property (nonatomic,readonly) TSPDataManager * dataManager;                                      //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,readonly) TSPDataReferenceMap * dataReferenceMap;                            //@synthesize dataReferenceMap=_dataReferenceMap - In the implementation block
@property (nonatomic,readonly) TSPDataDownloadManager * dataDownloadManager;                      //@synthesize dataDownloadManager=_dataDownloadManager - In the implementation block
@property (nonatomic,readonly) TSPDownloadObserverManager * downloadObserverManager;              //@synthesize downloadObserverManager=_downloadObserverManager - In the implementation block
@property (nonatomic,readonly) TSPSupportManager * supportManager;                                //@synthesize supportManager=_supportManager - In the implementation block
@property (nonatomic,readonly) TSPPackage * documentPackage; 
@property (nonatomic,readonly) TSPPackage * supportPackage; 
@property (nonatomic,readonly) TSPObjectContainer * documentObjectContainer;                      //@synthesize documentObjectContainer=_documentObjectContainer - In the implementation block
@property (nonatomic,readonly) TSPObjectContainer * supportObjectContainer;                       //@synthesize supportObjectContainer=_supportObjectContainer - In the implementation block
@property (nonatomic,readonly) TSPDocumentMetadata * documentMetadata;                            //@synthesize documentMetadata=_documentMetadata - In the implementation block
@property (nonatomic,readonly) TSPSupportMetadata * supportMetadata;                              //@synthesize supportMetadata=_supportMetadata - In the implementation block
@property (assign,nonatomic) long long lastObjectIdentifier; 
@property (nonatomic,readonly) unsigned long long saveToken;                                      //@synthesize saveToken=_saveToken - In the implementation block
@property (nonatomic,readonly) NSData * passwordVerifier;                                         //@synthesize passwordVerifier=_passwordVerifier - In the implementation block
@property (nonatomic,readonly) char areNewExternalReferencesToDataAllowed; 
@property (nonatomic,readonly) NSUUID * documentUUID; 
@property (nonatomic,readonly) NSUUID * versionUUID; 
@property (nonatomic,retain) TSPObject * supportObject; 
@property (readonly) long long aggregateReadabilityForDocumentResources; 
@property (readonly) SFUCryptoKey * decryptionKey; 
@property (nonatomic,readonly) char isReadCancelled; 
@property (nonatomic,readonly) NSURL * documentURL; 
@property (assign,nonatomic) char nested;                                                         //@synthesize nested=_nested - In the implementation block
@property (nonatomic,readonly) char hasCurrentFileFormatVersion; 
@property (nonatomic,readonly) unsigned long long documentReadVersion; 
@property (nonatomic,readonly) NSSet * featureIdentifiers; 
@property (nonatomic,readonly) char losesDataOnWrite;                                             //@synthesize losesDataOnWrite=_losesDataOnWrite - In the implementation block
@property (nonatomic,readonly) NSSet * unsupportedFeatureIdentifiers; 
@property (readonly) char closed; 
@property (nonatomic,readonly) char isDocumentModified; 
@property (nonatomic,readonly) char isSupportModified; 
@property (nonatomic,readonly) char isPasswordProtected; 
@property (nonatomic,readonly) NSString * documentPasswordHint;                                   //@synthesize documentPasswordHint=_documentPasswordHint - In the implementation block
@property (nonatomic,readonly) char isInReadOnlyMode; 
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties; 
@property (nonatomic,readonly) TSPObject * documentObject;                                        //@synthesize documentObject=_documentObject - In the implementation block
@property (assign,nonatomic,__weak) id<TSPObjectContextDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long packageType; 
@property (assign) long long preferredPackageType; 
@property (nonatomic,readonly) unsigned long long documentSize; 
@property (nonatomic,readonly) unsigned long long documentDataSize; 
@property (nonatomic,readonly) unsigned long long documentObjectSize; 
@property (nonatomic,readonly) unsigned long long reservedDocumentSize; 
@property (nonatomic,readonly) unsigned long long reservedDocumentDataSize; 
@property (retain) TSPDocumentRevision * documentRevision; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char ignoreReferencesToUnknownObjects; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) NSString * lastPasswordAttempted; 
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) char requiresNetworkValidation; 
+(void)waitForPendingEndSaveGroup:(id)arg1 ;
+(long long)documentTypeAtURL:(id)arg1 hasNativeUTI:(char)arg2 ;
+(char)isNativeDirectoryFormatURL:(id)arg1 ;
+(char)isTangierEditingDirectoryFormatURL:(id)arg1 ;
+(char)isTangierEditingFormatURL:(id)arg1 ;
+(id)releaseQueue;
+(id)supportBundleURLForDocumentUUID:(id)arg1 delegate:(id)arg2 ;
+(void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2 ;
+(char)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 ;
+(long long)documentTypeAtURL:(id)arg1 ;
+(long long)documentTypeAtURL:(id)arg1 hasNativeUTI:(char)arg2 nestedDocumentFilename:(id)arg3 ;
+(id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id*)arg3 ;
+(void)removeDefaultSupportDirectory;
+(char)validateCRCForDocumentAtURL:(id)arg1 error:(id*)arg2 ;
+(char)shouldValidateCRCOnWrite;
+(void)setShouldValidateCRCOnWrite:(char)arg1 ;
+(id)downloadURLForDataWithDigest:(id)arg1 ;
-(void)proxyObjectMapping:(id)arg1 willProxyReferencedObject:(id)arg2 ;
-(id)documentRoot;
-(id)objectLocale;
-(void)dealloc;
-(id)init;
-(id<TSPObjectContextDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<TSPObjectContextDelegate>)arg1 ;
-(id)temporaryDirectory;
-(TSPObjectContext *)context;
-(NSURL *)documentURL;
-(char)closed;
-(id)initWithDelegate:(id)arg1 ;
-(unsigned long long)documentSize;
-(id)objectForIdentifier:(long long)arg1 ;
-(TSPRegistry *)registry;
-(char)setPassphrase:(id)arg1 ;
-(NSString *)passphraseHint;
-(NSString *)lastPasswordAttempted;
-(char)nested;
-(void)setNested:(char)arg1 ;
-(TSPDataManager *)dataManager;
-(SFUCryptoKey *)decryptionKey;
-(void)addDataObserver:(id)arg1 ;
-(void)removeDataObserver:(id)arg1 ;
-(char)isPasswordProtected;
-(long long)modifyObjectTokenForNewObject;
-(void)setDocumentObject:(TSPObject *)arg1 ;
-(long long)newObjectIdentifier;
-(char)areExternalReferencesSupported;
-(char)areExternalReferencesToDataAllowedAtURL:(id)arg1 ;
-(char)areNewExternalReferencesToDataAllowed;
-(char)ignoreDocumentSupport;
-(char)isDocumentSupportTemporary;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4 ;
-(NSData *)keychainGenericItem;
-(void)beginWriteOperation;
-(void)endWriteOperation;
-(void)performReadOperation:(/*^block*/id)arg1 ;
-(void)beginAssertOnModify;
-(void)endAssertOnModify;
-(void)performReadOperationOnKnownObjects:(/*^block*/id)arg1 ;
-(void)beginIgnoringCachedObjectEviction;
-(void)endIgnoringCachedObjectEviction;
-(void)didMoveToURL:(id)arg1 ;
-(void)didMoveSupportToURL:(id)arg1 ;
-(char)isDocumentModified;
-(char)isSupportModified;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(void)resumeLoadingModifiedFlushedComponents;
-(void)waitForSaveToFinishIfNeeded;
-(char)ignoreUnknownContentWhileReading;
-(char)ignoreVersionCheckingWhileReading;
-(char)ignoreDocumentResourcesWhileReading;
-(void)didReadDocumentObject:(id)arg1 ;
-(long long)lastObjectIdentifier;
-(void)setLastObjectIdentifier:(long long)arg1 ;
-(long long)incrementLastObjectIdentifier:(long long)arg1 ;
-(long long)updateModifyObjectToken;
-(void)addLoadedObjectsAndEnqueueNotifications:(id)arg1 ;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3 ;
-(NSString *)documentPasswordHint;
-(TSPObject *)documentObject;
-(TSPObjectContainer *)documentObjectContainer;
-(TSPObjectContainer *)supportObjectContainer;
-(NSData *)passwordVerifier;
-(NSUUID *)documentUUID;
-(NSUUID *)versionUUID;
-(TSPObject *)supportObject;
-(void)setSupportObject:(TSPObject *)arg1 ;
-(void)presentPersistenceError:(id)arg1 ;
-(id<NSFilePresenter>)filePresenter;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(id)objectWithUUID:(id)arg1 ;
-(id)objectWithUUIDIfAvailableAndLoaded:(id)arg1 ;
-(id)objectWithUUIDIfAvailable:(id)arg1 ;
-(char)isInReadOnlyMode;
-(id)objectWithUUIDPath:(id)arg1 ;
-(id)dataWithContentsOfPackagePath:(id)arg1 ;
-(id)initForQuickLookWithURL:(id)arg1 registry:(id)arg2 delegate:(id)arg3 passphrase:(id)arg4 error:(id*)arg5 ;
-(id)supportDirectoryURLReturningIsBundleURL:(char*)arg1 ;
-(void)didEncounterValidationError:(id)arg1 forData:(id)arg2 timing:(long long)arg3 ;
-(char)isInCollaborationMode;
-(void)suspendAutosaveWithReason:(id)arg1 ;
-(void)resumeAutosaveWithReason:(id)arg1 ;
-(void)suspendSaveAndAutosaveWithReason:(id)arg1 ;
-(void)resumeSaveAndAutosaveWithReason:(id)arg1 ;
-(void)requestAutosave;
-(void)requestAutosaveForExpensiveCalculation;
-(id)documentLoadValidationPolicy;
-(id)documentSaveValidationPolicy;
-(id)baseUUIDForObjectUUID;
-(char)setDecryptionKey:(SFUCryptoKey *)arg1 ;
-(void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3 documentUUID:(id)arg4 ;
-(void)beginWriteWithOriginalURL:(id)arg1 ;
-(char)writeToURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3 ;
-(char)endWriteWithSuccess:(char)arg1 error:(id*)arg2 ;
-(void)endSaveWithSuccess:(char)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(void)setDocumentRevision:(TSPDocumentRevision *)arg1 ;
-(TSPDocumentRevision *)documentRevision;
-(TSPDocumentProperties *)documentProperties;
-(id)newObjectUUIDForObject:(id)arg1 uuidNamespace:(unsigned char)arg2 offset:(unsigned long long)arg3 ignoringBaseUUIDForObjectUUID:(char)arg4 requireDeterministicUUID:(char)arg5 ;
-(void)beginIgnoringModificationsForObject:(id)arg1 ;
-(void)endIgnoringModificationsForObject:(id)arg1 ;
-(void)willModifyObject:(id)arg1 options:(unsigned long long)arg2 ;
-(char)canModifyObject:(id)arg1 ;
-(char)canSetObjectUUIDForObject:(id)arg1 ;
-(id)objectUUIDMap;
-(void)ensureObject:(id)arg1 isKnownWithIdentifier:(long long)arg2 ;
-(TSPDataReferenceMap *)dataReferenceMap;
-(char)ignoreDataLifecycleErrors;
-(id)initWithDelegate:(id)arg1 registry:(id)arg2 resourceContext:(id)arg3 isLoadingDocument:(char)arg4 ;
-(void)createInternalMetadataIfNeeded;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 resourceContext:(id)arg3 passphrase:(id)arg4 skipDocumentUpgrade:(char)arg5 error:(id*)arg6 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 resourceContext:(id)arg3 mode:(unsigned)arg4 passphrase:(id)arg5 skipDocumentUpgrade:(char)arg6 error:(id*)arg7 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 resourceContext:(id)arg4 mode:(unsigned)arg5 passphrase:(id)arg6 skipDocumentUpgrade:(char)arg7 error:(id*)arg8 ;
-(char)readDocumentObjectFromPackageURL:(id)arg1 error:(id*)arg2 ;
-(char)readDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id*)arg2 ;
-(void)updateAdditionalResourceRequests;
-(void)logDocumentStatistics;
-(void)applyDeferredInitialDataProperties;
-(void)closeFromDealloc:(char)arg1 ;
-(TSPDocumentMetadata *)documentMetadata;
-(void)beginWriteWithOriginalURL:(id)arg1 relativeURLForExternalData:(id)arg2 ;
-(long long)packageType;
-(void)suspendAsynchronousModificationsForObjectTargetType:(unsigned long long)arg1 ;
-(void)setDocumentProperties:(TSPDocumentProperties *)arg1 ;
-(void)performReadOperationOnDataAttributes:(/*^block*/id)arg1 ;
-(unsigned long long)saveToken;
-(char)writeToURL:(id)arg1 originalPackage:(id)arg2 supportURL:(id)arg3 originalSupportPackage:(id)arg4 encryptionKey:(id)arg5 error:(id*)arg6 ;
-(unsigned long long)estimatedProgressTotalUnitCountForURL:(id)arg1 packageType:(long long)arg2 originalDocumentURL:(id)arg3 ;
-(char)shouldUseCloneModeToWriteToURL:(id)arg1 originalURL:(id)arg2 ;
-(char)copyIfAppropriateFromOriginalURL:(id)arg1 toURL:(id)arg2 cloneMode:(char)arg3 originalPackage:(id)arg4 packageType:(long long)arg5 inheritAttributes:(char)arg6 ;
-(void)performAsynchronousWriteOperationOnDocumentState:(/*^block*/id)arg1 ;
-(void)resumeAsynchronousModifications;
-(void)prepareForDocumentReplacementWithSuccess:(char)arg1 forSafeSave:(char)arg2 ;
-(NSSet *)featureIdentifiers;
-(void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3 ;
-(void)performReadOperationOnDocumentState:(/*^block*/id)arg1 ;
-(void)enumerateDataInDocumentUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)documentObjectSize;
-(unsigned long long)documentDataSize;
-(unsigned long long)reservedDocumentDataSize;
-(void)beginAddingLoadedObjects;
-(char)continueReadingDocumentObjectFromPackageURL:(id)arg1 areExternalDataReferencesAllowed:(char)arg2 finalizeHandlerQueue:(id)arg3 readCoordinator:(id*)arg4 objects:(id*)arg5 error:(id*)arg6 ;
-(void)prepareToReadSupportObjectExternalDataReferencesAllowed:(char)arg1 finalizeHandlerQueue:(id)arg2 objects:(id*)arg3 accessor:(/*^block*/id)arg4 ;
-(char)didFinishSuccessfullyReadingObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3 ;
-(char)endAddingLoadedObjects;
-(void)checkForDataWarnings;
-(long long)preferredPackageType;
-(char)readWithReadCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 rootObject:(id*)arg3 error:(id*)arg4 readCompletion:(/*^block*/id)arg5 ;
-(char)losesDataOnWrite;
-(NSSet *)unsupportedFeatureIdentifiers;
-(char)continueReadingDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id*)arg2 ;
-(void)didReadSupportObject:(id)arg1 ;
-(id)dataObserversConformingToProtocol:(id)arg1 ;
-(void)enumerateAllDataUsingBlock:(/*^block*/id)arg1 ;
-(void)setSupportObjectImpl:(id)arg1 ;
-(char)ignoreDocumentSupportVersioning;
-(char)readComponent:(id)arg1 isWeakReference:(char)arg2 documentPackage:(id)arg3 supportPackage:(id)arg4 rootObject:(id*)arg5 allObjects:(id*)arg6 error:(id*)arg7 ;
-(void)performReadUsingAccessorImpl:(/*^block*/id)arg1 ;
-(char)readObjectForIdentifier:(long long)arg1 isWeakReference:(char)arg2 ignoreUnknownContentWhileReading:(char)arg3 rootObjectComponent:(id)arg4 object:(id*)arg5 error:(id*)arg6 ;
-(char)readComponent:(id)arg1 isWeakReference:(char)arg2 rootObject:(id*)arg3 allObjects:(id*)arg4 error:(id*)arg5 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)performResourceAccessUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(TSPDataDownloadManager *)dataDownloadManager;
-(void)enumerateDocumentResourcesUsingBlock:(/*^block*/id)arg1 ;
-(TSPPackage *)documentPackage;
-(unsigned long long)documentReadVersion;
-(id)readObjectIfNeededForIdentifier:(long long)arg1 isWeakReference:(char)arg2 componentIdentifier:(long long)arg3 ;
-(id)objectWithUUID:(id)arg1 onlyIfLoaded:(char)arg2 validateNewObjects:(char)arg3 identifier:(long long*)arg4 ;
-(void)dataInDocumentDidChangeForDataReferenceMap:(id)arg1 ;
-(id)dataManagingForDataReferenceMap:(id)arg1 ;
-(id)objectInDocumentContainingForDataReferenceMap:(id)arg1 ;
-(id)lazyReferenceDelegateForDataReferenceMap:(id)arg1 ;
-(id)objectUUIDMap:(id)arg1 needsObjectForIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 onlyIfLoaded:(char)arg4 ;
-(void)objectUUIDMap:(id)arg1 didUpdateWithObjectIdentifierAddedToDocument:(long long)arg2 objectIdentifierRemovedFromDocument:(long long)arg3 ;
-(char)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3 ;
-(char)ignoreReferencesToUnknownObjects;
-(char)isObjectInDocument:(id)arg1 ;
-(char)isReadCancelled;
-(void)performAsynchronousWriteOperationOnDataAttributes:(/*^block*/id)arg1 ;
-(void)setProperties:(DataProperties)arg1 forData:(id)arg2 ;
-(id)prepareSaveProgress;
-(id)currentPackageDataWriter;
-(char)saveToURL:(id)arg1 packageType:(long long)arg2 encryptionKey:(id)arg3 originalURL:(id)arg4 error:(id*)arg5 ;
-(void)replaceDocumentObject:(id)arg1 ;
-(unsigned long long)reservedDocumentSize;
-(unsigned long long)sizeOfComponentsWithLocator:(id)arg1 ;
-(id)incrementDocumentRevisionWithIdentifier:(id)arg1 ;
-(void)resetDocumentRevision;
-(void)setPreferredPackageType:(long long)arg1 ;
-(void)addDataInDocumentObserver:(id)arg1 ;
-(void)addDataPackageObserver:(id)arg1 ;
-(void)performBlockIgnoringDataLifecycleErrors:(/*^block*/id)arg1 ;
-(id)documentResourceDataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 canDownload:(char)arg4 ;
-(long long)aggregateReadabilityForDocumentResources;
-(id)anonymousIdentifierForDigest:(id)arg1 ;
-(char)containsDataConformingToUTI:(id)arg1 ;
-(void)addObjectModifyDelegate:(id)arg1 ;
-(void)removeObjectModifyDelegate:(id)arg1 ;
-(void)registerAsynchronousObjectModifier:(id)arg1 ;
-(char)hasCurrentFileFormatVersion;
-(char)canPerformUserActions;
-(void)canPerformUserActionUsingBlock:(/*^block*/id)arg1 ;
-(id)initForSpotlightWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 error:(id*)arg4 ;
-(id)initWithPartialDocumentURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id*)arg4 ;
-(void)prepareForDocumentReplacement;
-(char)shouldLoadAllComponentsForDocumentURL:(id)arg1 ;
-(TSPPackage *)supportPackage;
-(char)updateDocumentUUIDPreserveOriginalDocumentSupport:(char)arg1 preserveShareUUID:(char)arg2 error:(id*)arg3 ;
-(TSPComponentManager *)componentManager;
-(TSPResourceContext *)resourceContext;
-(TSPDownloadObserverManager *)downloadObserverManager;
-(TSPSupportManager *)supportManager;
-(TSPSupportMetadata *)supportMetadata;
-(NSArray *)allDataWithLastDigestMismatch;
-(NSArray *)allDataWithLastDigestMismatch;
-(NSArray *)allErasedDataWithLastDigestMismatch;
-(id)allValidatedDataWithDigestMismatchCreatedPriorToVersion:(unsigned long long)arg1 ;
-(id)dataWithDigest:(id)arg1 length:(unsigned long long)arg2 preferredFilename:(id)arg3 canDownload:(char)arg4 isMissingFromServer:(char)arg5 documentRevision:(id)arg6 downloadPriority:(long long)arg7 uploadStatus:(long long)arg8 ;
-(id)dataWithDigest:(id)arg1 ;
-(id)objectsFromUUIDs:(id)arg1 ;
-(id)UUIDsFromObjects:(id)arg1 ;
-(id)dataWithLegacyDataIdentifier:(long long)arg1 ;
@end

