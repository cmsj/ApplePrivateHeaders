/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, PFUbiquityLocation, NSString, PFUbiquityKnowledgeVector, PFUbiquitySaveSnapshot, NSRecursiveLock, NSNumber;

@interface PFUbiquityTransactionLog : NSObject {

	NSMutableDictionary* _contents;
	int _transactionLogType;
	char _useTemporaryLogLocation;
	PFUbiquityLocation* _transactionLogLocation;
	PFUbiquityLocation* _temporaryTransactionLogLocation;
	PFUbiquityLocation* _stagingTransactionLogLocation;
	NSString* _fileProtectionOption;
	char _inTemporaryLocation;
	char _inStagingLocation;
	char _inPermanentLocation;
	PFUbiquityKnowledgeVector* _knowledgeVector;
	PFUbiquitySaveSnapshot* _saveSnapshot;
	NSString* _localPeerID;
	char _loadUsingRetry;
	char _loadedComparisonMetadata;
	char _loadedImportMetadata;
	char _loadedInsertedObjectData;
	char _loadedUpdatedObjectData;
	char _loadedDeletedObjectData;
	char _loadedContents;
	NSRecursiveLock* _contentsLock;

}

@property (assign,nonatomic) char useTemporaryLogLocation;                                        //@synthesize useTemporaryLogLocation=_useTemporaryLogLocation - In the implementation block
@property (nonatomic,readonly) char inTemporaryLocation;                                          //@synthesize inTemporaryLocation=_inTemporaryLocation - In the implementation block
@property (nonatomic,readonly) char inStagingLocation;                                            //@synthesize inStagingLocation=_inStagingLocation - In the implementation block
@property (nonatomic,readonly) char inPermanentLocation;                                          //@synthesize inPermanentLocation=_inPermanentLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName; 
@property (nonatomic,readonly) NSString * exportingPeerID; 
@property (nonatomic,readonly) NSString * modelVersionHash; 
@property (nonatomic,readonly) NSString * fileProtectionOption;                                   //@synthesize fileProtectionOption=_fileProtectionOption - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionNumber; 
@property (nonatomic,readonly) NSString * transactionLogFilename; 
@property (nonatomic,readonly) int transactionLogType;                                            //@synthesize transactionLogType=_transactionLogType - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * transactionLogLocation;                       //@synthesize transactionLogLocation=_transactionLogLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * temporaryTransactionLogLocation;              //@synthesize temporaryTransactionLogLocation=_temporaryTransactionLogLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * stagingTransactionLogLocation;                //@synthesize stagingTransactionLogLocation=_stagingTransactionLogLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquitySaveSnapshot * saveSnapshot;                             //@synthesize saveSnapshot=_saveSnapshot - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * currentLocation; 
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * knowledgeVector;                       //@synthesize knowledgeVector=_knowledgeVector - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                            //@synthesize localPeerID=_localPeerID - In the implementation block
@property (assign,nonatomic) char loadUsingRetry;                                                 //@synthesize loadUsingRetry=_loadUsingRetry - In the implementation block
@property (nonatomic,readonly) char loadedComparisonMetadata;                                     //@synthesize loadedComparisonMetadata=_loadedComparisonMetadata - In the implementation block
@property (nonatomic,readonly) char loadedImportMetadata;                                         //@synthesize loadedImportMetadata=_loadedImportMetadata - In the implementation block
@property (nonatomic,readonly) char loadedInsertedObjectData;                                     //@synthesize loadedInsertedObjectData=_loadedInsertedObjectData - In the implementation block
@property (nonatomic,readonly) char loadedUpdatedObjectData;                                      //@synthesize loadedUpdatedObjectData=_loadedUpdatedObjectData - In the implementation block
@property (nonatomic,readonly) char loadedDeletedObjectData;                                      //@synthesize loadedDeletedObjectData=_loadedDeletedObjectData - In the implementation block
+(char)pruneTemporaryLogDirectoryForPeerRootLocation:(id)arg1 error:(id*)arg2 ;
+(int)transactionLogTypeFromLocation:(id)arg1 ;
+(id)createTransactionLogFilenameForLogType:(int)arg1 ;
+(id)createDataFromExtendedAttrsForLog:(id)arg1 error:(id*)arg2 ;
+(void)updateModificationTimesForLocation:(id)arg1 ;
+(void)truncateLogFilesForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 beforeKnowledgeVector:(id)arg4 withLocalPeerID:(id)arg5 andUbiquityRootLocation:(id)arg6 ;
+(id)transactionLogFilenameUUID;
+(void)truncateLogFilesBeforeBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
+(id)generateTransactionLogFilename;
-(NSString *)modelVersionHash;
-(NSString *)exportingPeerID;
-(PFUbiquityLocation *)transactionLogLocation;
-(char)moveFileToPermanentLocationWithError:(id*)arg1 ;
-(id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2 andRootLocation:(id)arg3 ;
-(void)setUseTemporaryLogLocation:(char)arg1 ;
-(char)writeToDiskWithError:(id*)arg1 andUpdateFilenameInTransactionEntries:(id)arg2 ;
-(int)transactionLogType;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(char)loadInsertedObjectsDataWithError:(id*)arg1 ;
-(char)loadUpdatedObjectsDataWithError:(id*)arg1 ;
-(char)loadDeletedObjectsDataWithError:(id*)arg1 ;
-(char)releaseContents:(id*)arg1 ;
-(char)loadComparisonMetadataWithError:(id*)arg1 ;
-(char)loadImportMetadataWithError:(id*)arg1 ;
-(NSString *)transactionLogFilename;
-(id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(PFUbiquityLocation *)temporaryTransactionLogLocation;
-(PFUbiquityLocation *)stagingTransactionLogLocation;
-(char)inPermanentLocation;
-(char)inTemporaryLocation;
-(char)inStagingLocation;
-(void)releaseInsertedObjects;
-(void)releaseUpdatedObjects;
-(void)releaseDeletedObjects;
-(id)loadPlistAtLocation:(id)arg1 withError:(id*)arg2 ;
-(char)loadContents:(id*)arg1 ;
-(char)useTemporaryLogLocation;
-(void)populateContents;
-(char)writeContentsOfZipArchive:(id)arg1 intoExtendedAttributesForFile:(id)arg2 error:(id*)arg3 ;
-(void)cleanupExternalDataReferences;
-(char)deleteLogFileWithError:(id*)arg1 ;
-(id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3 ;
-(char)rewriteToDiskWithError:(id*)arg1 ;
-(id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)arg1 ;
-(NSString *)fileProtectionOption;
-(char)loadUsingRetry;
-(void)setLoadUsingRetry:(char)arg1 ;
-(char)loadedComparisonMetadata;
-(char)loadedImportMetadata;
-(char)loadedInsertedObjectData;
-(char)loadedUpdatedObjectData;
-(char)loadedDeletedObjectData;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSNumber *)transactionNumber;
-(NSString *)storeName;
-(PFUbiquityLocation *)currentLocation;
-(PFUbiquitySaveSnapshot *)saveSnapshot;
-(NSString *)localPeerID;
@end

