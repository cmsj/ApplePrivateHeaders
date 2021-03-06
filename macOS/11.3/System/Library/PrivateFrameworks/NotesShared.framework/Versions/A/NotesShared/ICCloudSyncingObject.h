/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>
#import <libobjc.A.dylib/ICLoggable.h>

@class NSMutableDictionary, CKRecord, CKShare, TTOrderedSetVersionedDocument, ICMergableDictionary, NSData, NSString, NSArray, ICCloudState;

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject, ICLoggable> {

	char _needsToLoadDecryptedValues;
	char mergingUnappliedEncryptedRecord;
	NSMutableDictionary* _decryptedValues;
	CKRecord* _serverRecord;
	CKShare* _serverShare;
	CKRecord* _userSpecificServerRecord;
	TTOrderedSetVersionedDocument* _activityEventsDocument;
	ICMergableDictionary* _replicaIDToNotesVersion;

}

@property (assign) long long failedToSyncCount; 
@property (assign) long long numberOfPushAttemptsToWaitCount; 
@property (nonatomic,readonly) NSMutableDictionary * decryptedValues;                                                    //@synthesize decryptedValues=_decryptedValues - In the implementation block
@property (assign,nonatomic) char needsToLoadDecryptedValues;                                                            //@synthesize needsToLoadDecryptedValues=_needsToLoadDecryptedValues - In the implementation block
@property (assign,nonatomic) long long minimumSupportedNotesVersion; 
@property (nonatomic,readonly) ICMergableDictionary * replicaIDToNotesVersion;                                           //@synthesize replicaIDToNotesVersion=_replicaIDToNotesVersion - In the implementation block
@property (nonatomic,retain) NSData * serverRecordData; 
@property (nonatomic,retain) CKRecord * serverRecord;                                                                    //@synthesize serverRecord=_serverRecord - In the implementation block
@property (nonatomic,retain) NSData * serverShareData; 
@property (nonatomic,retain) CKShare * serverShare;                                                                      //@synthesize serverShare=_serverShare - In the implementation block
@property (nonatomic,retain) NSData * userSpecificServerRecordData; 
@property (nonatomic,retain) CKRecord * userSpecificServerRecord;                                                        //@synthesize userSpecificServerRecord=_userSpecificServerRecord - In the implementation block
@property (nonatomic,retain) NSString * zoneOwnerName; 
@property (nonatomic,retain) NSString * primitiveZoneOwnerName; 
@property (nonatomic,readonly) char shouldBeIgnoredForSync; 
@property (nonatomic,retain) NSData * encryptedValuesJSON; 
@property (assign,getter=isMergingUnappliedEncryptedRecord,nonatomic) char mergingUnappliedEncryptedRecord; 
@property (nonatomic,readonly) CKShare * serverShareCheckingParent; 
@property (nonatomic,readonly) char canSyncPasswordProtectionFields; 
@property (nonatomic,copy,readonly) NSArray * childCloudObjects; 
@property (nonatomic,copy,readonly) NSArray * allChildCloudObjects; 
@property (nonatomic,readonly) TTOrderedSetVersionedDocument * activityEventsDocument;                                   //@synthesize activityEventsDocument=_activityEventsDocument - In the implementation block
@property (nonatomic,retain) ICCloudState * cloudState; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) char needsToBeFetchedFromCloud; 
@property (assign,nonatomic) char needsToSaveUserSpecificRecord; 
@property (assign,nonatomic) char needsInitialFetchFromCloud; 
@property (assign,nonatomic) char markedForDeletion; 
@property (assign,nonatomic) char isPasswordProtected; 
@property (assign,nonatomic) long long cryptoIterationCount; 
@property (nonatomic,retain) NSData * cryptoSalt; 
@property (nonatomic,retain) NSData * cryptoInitializationVector; 
@property (nonatomic,retain) NSData * cryptoTag; 
@property (nonatomic,retain) NSData * cryptoWrappedKey; 
@property (nonatomic,retain) NSString * passwordHint; 
@property (nonatomic,retain) NSData * unappliedEncryptedRecord; 
@property (nonatomic,retain) NSData * activityEventsData; 
@property (nonatomic,readonly) long long intrinsicNotesVersion; 
@property (nonatomic,readonly) char shouldSyncMinimumSupportedNotesVersion; 
@property (nonatomic,retain) NSData * replicaIDToNotesVersionData; 
@property (nonatomic,readonly) char isUnsupported; 
@property (nonatomic,readonly) char isVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetForData:(id)arg1 ;
+(long long)currentNotesVersion;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)allCloudObjectsInContext:(id)arg1 ;
+(id)predicateForVisibleObjects;
+(char)supportsActivityEvents;
+(char)supportsNotesVersionTracking;
+(id)newObjectWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)objectsWithRecordID:(id)arg1 context:(id)arg2 ;
+(id)failureCountQueue;
+(id)failedToSyncCountsByIdentifier;
+(id)numberOfPushAttemptsToWaitByIdentifier;
+(char)needsToReFetchServerRecordValue:(id)arg1 ;
+(void)deleteTemporaryAssetFilesForOperation:(id)arg1 ;
+(char)supportsUserSpecificRecords;
+(id)temporaryAssets;
+(id)temporaryAssetDirectoryURL;
+(void)deleteTemporaryFilesForAsset:(id)arg1 ;
+(id)versionsByOperationQueue;
+(id)versionsByRecordIDByOperation;
+(id)deletedByThisDeviceOperationQueue;
+(id)deletedByThisDeviceSet;
+(id)recordSystemFieldsTransformer;
+(id)shareSystemFieldsTransformer;
+(id)notDeletedPredicate;
+(id)keyPathsForValuesAffectingCloudAccount;
+(id)objectWithRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)keyPathsForValuesAffectingZoneOwnerName;
+(id)cloudObjectWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+(id)dataForAsset:(id)arg1 ;
+(void)deleteAllTemporaryAssetFilesForAllObjects;
+(id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)keyPathsForValuesAffectingIsSharedReadOnly;
+(id)keyPathsForValuesAffectingServerShareCheckingParent;
+(void)resetAllDeletedByThisDeviceProperties;
+(id)allPasswordProtectedObjectsInContext:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(char)isDeletable;
-(id)recordName;
-(char)isVisible;
-(id)loggingDescription;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(id)recordType;
-(id)recordID;
-(long long)databaseScope;
-(void)awakeFromInsert;
-(void)didTurnIntoFault;
-(void)willSave;
-(char)isOwnedByCurrentUser;
-(void)setMarkedForDeletion:(char)arg1 ;
-(id)shareType;
-(void)awakeFromFetch;
-(id)sharedOwnerName;
-(void)setInCloud:(char)arg1 ;
-(char)isInCloud;
-(char)validateIdentifier:(inout id*)arg1 error:(out id*)arg2 ;
-(void)setServerRecord:(CKRecord *)arg1 ;
-(CKRecord *)serverRecord;
-(id)shareDescription;
-(id)cloudAccount;
-(id)recordZoneName;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(void)clearChangeCount;
-(id)shortLoggingDescription;
-(id)newlyCreatedRecord;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1 ;
-(void)updateParentReferenceIfNecessary;
-(char)isInICloudAccount;
-(void)setNeedsToBeFetchedFromCloud:(char)arg1 ;
-(void)deleteFromLocalDatabase;
-(void)markForDeletion;
-(void)updateChangeCount;
-(char)hasAllMandatoryFields;
-(char)needsToBePushedToCloud;
-(char)canSyncPasswordProtectionFields;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 ;
-(void)setCryptoTag:(NSData *)arg1 ;
-(void)setCryptoInitializationVector:(NSData *)arg1 ;
-(void)setCryptoIterationCount:(long long)arg1 ;
-(void)setCryptoSalt:(NSData *)arg1 ;
-(void)setCryptoWrappedKey:(NSData *)arg1 ;
-(void)fixBrokenReferences;
-(id)objectsToBeDeletedBeforeThisObject;
-(char)supportsDeletionByTTL;
-(void)resetUniqueIdentifier;
-(char)wantsUserSpecificRecord;
-(id)userSpecificRecordID;
-(id)newlyCreatedUserSpecificRecord;
-(void)didFetchUserSpecificRecord:(id)arg1 accountID:(id)arg2 ;
-(void)didSaveUserSpecificRecord:(id)arg1 ;
-(void)didFailToSaveUserSpecificRecord:(id)arg1 accountID:(id)arg2 error:(id)arg3 ;
-(void)didDeleteUserSpecificRecordID:(id)arg1 ;
-(char)needsToBeDeletedFromCloud;
-(char)isValidObject;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2 ;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(char)isSharedViaICloud;
-(CKShare *)serverShare;
-(id)ic_loggingIdentifier;
-(id)ic_loggingValues;
-(void)clearServerRecord;
-(void)setServerShareIfNewer:(id)arg1 ;
-(char)isSharedRootObject;
-(void)incrementFailureCounts;
-(char)shouldBeIgnoredForSync;
-(void)decrementFailureCounts;
-(void)setServerShare:(CKShare *)arg1 ;
-(char)canBeRootShareObject;
-(char)needsToDeleteShare;
-(char)isUnsupported;
-(char)isSharedReadOnly;
-(long long)intrinsicNotesVersion;
-(void)mergeUnappliedEncryptedRecord;
-(void)unmarkForDeletion;
-(void)resetToIntrinsicNotesVersionAndPropagateToChildObjects;
-(void)saveAndClearDecryptedData;
-(id)deviceReplicaIDs;
-(char)shouldSyncMinimumSupportedNotesVersion;
-(char)supportsEncryptedValuesDictionary;
-(id)parentEncryptableObject;
-(void)willUpdateDeviceReplicaIDsToNotesVersion:(long long)arg1 ;
-(void)initializeCryptoProperties;
-(void)initializeCryptoPropertiesFromObject:(id)arg1 ;
-(char)canBeSharedViaICloud;
-(void)didAcceptShare:(id)arg1 ;
-(id)parentCloudObject;
-(NSArray *)childCloudObjects;
-(id)childCloudObjectsForMinimumSupportedVersionPropagation;
-(id)shareTitle;
-(void)setNeedsToLoadDecryptedValues:(char)arg1 ;
-(char)updateDeviceReplicaIDsToCurrentNotesVersionIfNeeded;
-(long long)numberOfPushAttemptsToWaitCount;
-(void)setNumberOfPushAttemptsToWaitCount:(long long)arg1 ;
-(long long)failedToSyncCount;
-(void)setFailedToSyncCount:(long long)arg1 ;
-(void)deleteChangeTokensAndReSync;
-(NSString *)zoneOwnerName;
-(void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg1 ;
-(unsigned long long)mergeActivityEventsDocument:(id)arg1 ;
-(void)mergeWithReplicaIDToNotesVersionData:(id)arg1 ;
-(void)mergeEncryptedDataFromRecord:(id)arg1 ;
-(char)isMergingUnappliedEncryptedRecord;
-(void)loadDecryptedValuesIfNecessary;
-(void)setMergingUnappliedEncryptedRecord:(char)arg1 ;
-(void)decryptAndMergeEncryptedJSON:(id)arg1 ;
-(void)saveEncryptedJSON;
-(char)hasSuccessfullyPushedLatestVersionToCloud;
-(long long)isPushingSameOrLaterThanVersion:(long long)arg1 ;
-(char)shouldBeDeletedFromLocalDatabase;
-(void)setVersion:(long long)arg1 forOperation:(id)arg2 ;
-(char)needsToFetchAfterServerRecordChanged:(id)arg1 ;
-(long long)versionForOperation:(id)arg1 ;
-(void)resetFailureCounts;
-(TTOrderedSetVersionedDocument *)activityEventsDocument;
-(void)requireMinimumSupportedVersionAndPropagateToChildObjects:(long long)arg1 ;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(ICMergableDictionary *)replicaIDToNotesVersion;
-(id)notesVersionForReplicaID:(id)arg1 ;
-(id)deviceNotesVersion;
-(void)setNotesVersion:(id)arg1 forReplicaID:(id)arg2 ;
-(id)userSpecificRecordType;
-(CKRecord *)userSpecificServerRecord;
-(void)mergeDataFromUserSpecificRecord:(id)arg1 accountID:(id)arg2 ;
-(void)setUserSpecificServerRecord:(CKRecord *)arg1 ;
-(char)deletedByThisDevice;
-(void)setDeletedByThisDevice:(char)arg1 ;
-(NSArray *)allChildCloudObjects;
-(void)updateChangeCountsForUnsavedParentReferences;
-(id)sharedRootObject;
-(CKShare *)serverShareCheckingParent;
-(id)shareDescriptionForShareParticipants:(id)arg1 ;
-(char)needsToLoadDecryptedValues;
-(char)isEncryptableKeyBinaryData:(id)arg1 ;
-(NSMutableDictionary *)decryptedValues;
-(id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3 ;
-(id)primitiveValueForEncryptableKey:(id)arg1 ;
-(id)decryptedValueForKey:(id)arg1 ;
-(void)setPrimitiveValue:(id)arg1 forEncryptableKey:(id)arg2 ;
-(void)setDecryptedValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEncryptedValuesJSON:(NSData *)arg1 ;
-(void)unitTest_setMinimumSupportedNotesVersion:(long long)arg1 ;
-(void)saveAndClearDecryptedDataIfNecessary;
-(id)valueForEncryptableKey:(id)arg1 ;
-(void)setValue:(id)arg1 forEncryptableKey:(id)arg2 ;
-(id)cryptoMasterKey;
-(void)setCryptoMasterKey:(id)arg1 ;
-(id)cryptoPassphraseVerifier;
-(char)shouldFallBackToCheckAllCryptoKeys;
@end

