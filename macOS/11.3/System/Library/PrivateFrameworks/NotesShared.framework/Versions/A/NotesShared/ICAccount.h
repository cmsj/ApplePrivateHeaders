/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICNoteContainer.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class ICFolder, ICAccountProxy, NSString, NSSet, NSPersistentStore, NSData, ICAccountData;

@interface ICAccount : ICNoteContainer <ICCloudObject> {

	char _didAddObservers;
	char _didAddTrashObservers;
	ICFolder* _defaultFolder;
	ICFolder* _trashFolder;
	ICAccountProxy* _accountProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ICAccountProxy * accountProxy;                      //@synthesize accountProxy=_accountProxy - In the implementation block
@property (assign,nonatomic) char didAddObservers;                               //@synthesize didAddObservers=_didAddObservers - In the implementation block
@property (assign,nonatomic) char didAddTrashObservers;                          //@synthesize didAddTrashObservers=_didAddTrashObservers - In the implementation block
@property (nonatomic,retain) NSSet * ownerInverse; 
@property (nonatomic,retain) ICFolder * defaultFolder;                           //@synthesize defaultFolder=_defaultFolder - In the implementation block
@property (nonatomic,retain) ICFolder * trashFolder;                             //@synthesize trashFolder=_trashFolder - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSPersistentStore * persistentStore; 
@property (nonatomic,retain) NSSet * folders; 
@property (nonatomic,retain) NSSet * notes; 
@property (nonatomic,retain) NSSet * serverChangeTokens; 
@property (nonatomic,retain) NSSet * deviceMigrationStates; 
@property (nonatomic,retain) NSSet * legacyTombstones; 
@property (assign,nonatomic) int accountType; 
@property (assign,nonatomic) char didChooseToMigrate; 
@property (assign,nonatomic) char didFinishMigration; 
@property (assign,nonatomic) char didMigrateOnMac; 
@property (assign,nonatomic) char storeDataSeparately; 
@property (nonatomic,retain) NSString * userRecordName; 
@property (nonatomic,retain) NSData * cryptoVerifier; 
@property (nonatomic,retain) ICAccountData * accountData; 
@property (nonatomic,readonly) char isManaged; 
+(void)initialize;
+(void)deleteAccount:(id)arg1 ;
+(void)localeDidChange:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)cloudKitAccountWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)allCloudObjectsInContext:(id)arg1 ;
+(id)allAccountsInContext:(id)arg1 ;
+(id)cloudKitAccountInContext:(id)arg1 ;
+(char)isCloudKitAccountAvailable;
+(id)allActiveCloudKitAccountsInContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)passwordProtectedNoteIdentifiersInAccountIdentifier:(id)arg1 context:(id)arg2 ;
+(id)allAccountIdentifiersInContext:(id)arg1 ;
+(id)accountUtilities;
+(id)defaultAccountInContext:(id)arg1 ;
+(id)localizedLocalAccountName;
+(id)localizedLocalAccountNameMidSentence;
+(id)allActiveAccountsInContext:(id)arg1 ;
+(id)localAccountInContext:(id)arg1 ;
+(id)newLocalAccountInContext:(id)arg1 ;
+(id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3 ;
+(void)setAccountUtilities:(id)arg1 ;
+(id)keyPathsForValuesAffectingLocalizedName;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)accountWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newAccountWithIdentifier:(id)arg1 type:(int)arg2 context:(id)arg3 ;
+(id)accountsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)cloudKitIfMigratedElseLocalAccountInContext:(id)arg1 ;
+(id)allActiveAccountsInContext:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 ;
+(id)accountsWithAccountType:(int)arg1 context:(id)arg2 ;
+(unsigned long long)numberOfCloudKitAccountsInContext:(id)arg1 onlyMigrated:(char)arg2 ;
+(void)initializeLocalAccountNamesInBackground;
+(id)inMemoryAccountInContext:(id)arg1 ;
+(void)deleteAccountWithBatchDelete:(id)arg1 ;
+(id)allActiveAccountsInContextSortedByAccountType:(id)arg1 ;
+(id)allActiveAccountsInContextWithDefaultBeingFirstIfApplicable:(id)arg1 ;
+(id)allCloudKitAccountsInContext:(id)arg1 ;
+(char)clearAccountForAppleCloudKitTable;
+(char)hasActiveCloudKitAccountInContext:(id)arg1 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(ICFolder *)trashFolder;
-(char)isDeletable;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)recordName;
-(char)isLeaf;
-(id)accountName;
-(id)containerIdentifier;
-(id)recordType;
-(void)setAccountType:(int)arg1 ;
-(void)awakeFromInsert;
-(id)cacheKey;
-(NSPersistentStore *)persistentStore;
-(void)prepareForDeletion;
-(void)setMarkedForDeletion:(char)arg1 ;
-(void)awakeFromFetch;
-(char)isManaged;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)setDidChooseToMigrate:(char)arg1 ;
-(void)willTurnIntoFault;
-(id)recordZoneName;
-(ICFolder *)defaultFolder;
-(ICAccountProxy *)accountProxy;
-(void)setAccountProxy:(ICAccountProxy *)arg1 ;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(id)newlyCreatedRecord;
-(char)isInICloudAccount;
-(char)needsToBePushedToCloud;
-(char)needsToBeDeletedFromCloud;
-(id)ic_loggingIdentifier;
-(id)ic_loggingValues;
-(id)accountDataCreateIfNecessary;
-(void)setDidAddObservers:(char)arg1 ;
-(char)didAddObservers;
-(char)supportsEditingNotes;
-(char)supportsLegacyTombstones;
-(char)canPasswordProtectNotes;
-(char)canBeSharedViaICloud;
-(id)predicateForPinnedNotes;
-(char)shouldBeDeletedFromLocalDatabase;
-(id)cryptoPassphraseVerifier;
-(id)mediaDirectoryURL;
-(char)shouldExcludeFilesFromCloudBackup;
-(id)exportableMediaDirectoryURL;
-(id)predicateForVisibleNotes;
-(id)subFolderOrderMergeableData;
-(void)setSubFolderOrderMergeableData:(id)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForNavigationBar;
-(id)titleForTableViewCell;
-(void)updateSubFolderMergeableDataChangeCount;
-(id)noteVisibilityTestingForSearchingAccount;
-(char)isAllNotesContainer;
-(id)visibleSubFolders;
-(id)subFolderIdentifiersOrderedSet;
-(id)allItemsFolderLocalizedTitle;
-(id)accountFilesDirectoryURL;
-(id)fallbackImageDirectoryURL;
-(id)folderWithIdentifier:(id)arg1 ;
-(id)passwordProtectedNotes;
-(void)removeAllObserversIfNecessary;
-(char)didAddTrashObservers;
-(void)setDidAddTrashObservers:(char)arg1 ;
-(void)removeTrashObserversIfNecessary;
-(void)updateTrashFolderHiddenNoteContainerState;
-(id)defaultFolderIdentifier;
-(id)trashFolderIdentifier;
-(void)createDefaultFolder;
-(void)createTrashFolder;
-(void)addTrashObserversIfNecessary;
-(id)standardFolderIdentifierWithPrefix:(id)arg1 ;
-(id)predicateForVisibleFolders;
-(id)predicateForCustomFolders;
-(id)visibleFolders;
-(id)customRootLevelFolders;
-(id)predicateForFolders;
-(id)predicateForNotesInAccount;
-(id)visibleFoldersWithParent:(id)arg1 ;
-(id)reservedAccountFolderTitles;
-(id)localizedNameMidSentence;
-(id)predicateForVisibleNotesIncludingTrash;
-(id)predicateForVisibleAttachmentsIncludingTrash;
-(void)updateAccountNameForAccountListSorting;
-(id)predicateForAttachmentsInAccount;
-(id)customNoteSortTypeValue;
-(void)performBlockInPersonaContextIfNecessary:(/*^block*/id)arg1 ;
-(void)createStandardFolders;
-(char)hasSameCryptoKeyAsAccount:(id)arg1 ;
-(unsigned long long)visibleCustomFoldersCount;
-(char)containsSharedFolders;
-(unsigned long long)indexOfCustomRootLevelFolder:(id)arg1 ;
-(char)visibleRootFoldersContainFolderWithTitle:(id)arg1 ;
-(char)hasAnyCustomFolders;
-(id)visibleNoteContainers;
-(id)visibleNoteContainerChildren;
-(id)allChildObjects;
-(id)previewImageDirectoryURL;
-(unsigned long long)visibleNotesIncludingTrashCount;
-(unsigned long long)visibleAttachmentsIncludingTrashCount;
-(id)predicateForVisibleAttachments;
-(void)setDefaultFolder:(ICFolder *)arg1 ;
-(void)setTrashFolder:(ICFolder *)arg1 ;
@end

