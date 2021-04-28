/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/_PLGenericAlbum.h>
#import <libobjc.A.dylib/PLSearchableAssetCollection.h>
#import <libobjc.A.dylib/PLSyncableObject.h>
#import <libobjc.A.dylib/PLAlbumProtocol.h>
#import <libobjc.A.dylib/PLDerivedAlbumOrigin.h>
#import <libobjc.A.dylib/PLIndexMappersDataOrigin.h>

@protocol PLIndexMappingCache;
@class NSString, NSDate, NSMutableOrderedSet, PLPhotoLibrary, NSNumber, NSObject, NSURL, NSData, NSOrderedSet, PLManagedAsset, NSArray;

@interface PLGenericAlbum : _PLGenericAlbum <PLSearchableAssetCollection, PLSyncableObject, PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin> {

	NSObject*<PLIndexMappingCache> _derivedAlbums[5];
	char isRegisteredForChanges;
	char didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id localID; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (assign,nonatomic) short trashedState; 
@property (nonatomic,retain) NSDate * trashedDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) int kindValue; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSString * creatorBundleID; 
@property (assign,nonatomic) char isPinned; 
@property (assign,nonatomic) char isPrototype; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (nonatomic,retain) NSData * userQueryData; 
@property (nonatomic,readonly) char isLibrary; 
@property (nonatomic,readonly) char isCameraAlbum; 
@property (nonatomic,readonly) char isSmartAlbum; 
@property (nonatomic,readonly) char isUserCreated; 
@property (nonatomic,readonly) char isOwnPhotoStreamAlbum; 
@property (nonatomic,readonly) char isProjectAlbumRootFolder; 
@property (nonatomic,readonly) char isRegularRootFolder; 
@property (nonatomic,readonly) char isRecentlyAddedAlbum; 
@property (nonatomic,readonly) char isUserLibraryAlbum; 
@property (nonatomic,readonly) char isProjectAlbum; 
@property (nonatomic,readonly) char shouldDeleteWhenEmpty; 
@property (assign,nonatomic) char isRegisteredForChanges; 
@property (assign,nonatomic) char didRegisteredWithUserInterfaceContext; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (assign,nonatomic) char hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSObject * posterImage; 
@property (nonatomic,readonly) char isPanoramasAlbum; 
@property (nonatomic,readonly) char isPhotoStreamAlbum; 
@property (nonatomic,readonly) char isCloudSharedAlbum; 
@property (nonatomic,readonly) char isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) char isStandInAlbum; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,readonly) char isInTrash; 
@property (nonatomic,readonly) char isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) char isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) char isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) char canContributeToCloudSharedAlbum; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) char canShowComments; 
@property (nonatomic,readonly) char canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
+(id)insertNewSmartAlbumIntoLibrary:(id)arg1 ;
+(id)localizedTitleForAlbumKind:(int)arg1 cplEnabled:(char)arg2 ;
+(id)uuidFromGroupURL:(id)arg1 ;
+(id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2 ;
+(id)insertNewAlbumIntoLibrary:(id)arg1 ;
+(id)defaultAlbumKindsForFetchingWithCPLEnabled:(char)arg1 ;
+(id)baseSearchIndexPredicate;
+(id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)filesystemImportProgressAlbumInLibrary:(id)arg1 ;
+(id)otaRestoreProgressAlbumInLibrary:(id)arg1 ;
+(id)syncProgressAlbumInLibrary:(id)arg1 ;
+(id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3 ;
+(id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)projectAlbumRootFolderInLibrary:(id)arg1 ;
+(id)rootFolderInLibrary:(id)arg1 ;
+(id)albumWithUUID:(id)arg1 inLibrary:(id)arg2 ;
+(char)is1WaySyncKind:(int)arg1 ;
+(char)isSmartAlbumForKind:(int)arg1 ;
+(char)isUserCreatedForKind:(int)arg1 ;
+(id)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2 ;
+(id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(id)childKeyForOrdering;
+(id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1 ;
+(char)isFolder:(int)arg1 ;
+(id)localizedRecoveredTitle;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingKindValue;
+(id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2 ;
+(id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2 ;
+(id)userLibraryAlbumInLibrary:(id)arg1 ;
+(id)allAssetsAlbumInLibrary:(id)arg1 ;
+(id)allPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allVerticalPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allHorizontalPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allVideosAlbumInLibrary:(id)arg1 ;
+(id)allFavoritesAlbumInLibrary:(id)arg1 ;
+(id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1 ;
+(id)iTunesLibraryAlbumInLibrary:(id)arg1 ;
+(id)trashBinAlbumInLibrary:(id)arg1 ;
+(id)unableToUploadAlbumInLibrary:(id)arg1 ;
+(id)allAlbumsInLibrary:(id)arg1 ;
+(id)albumWithName:(id)arg1 inLibrary:(id)arg2 ;
+(id)_unpushedParentsOfAlbums:(id)arg1 ;
+(void)resetAlbumStateForCloudInLibrary:(id)arg1 ;
+(void)_removeAlbumsAndFolders:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)removeAllUserAlbumsAndFoldersInLibrary:(id)arg1 ;
+(void)removeEmptyAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg1 ;
+(void)removeTrashedAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg1 ;
+(void)removeInvalidAlbumsAndFoldersInManagedObjectContext:(id)arg1 ;
+(id)albumsMatchingPredicate:(id)arg1 expectedResultCount:(id)arg2 inLibrary:(id)arg3 ;
+(id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4 ;
+(id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewProjectAlbumWithTitle:(id)arg1 documentType:(id)arg2 intoLibrary:(id)arg3 ;
+(id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewSyncedEventIntoLibrary:(id)arg1 ;
+(id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3 ;
+(id)insertNewLegacyFaceAlbumIntoLibrary:(id)arg1 ;
+(id)allAlbumsInManagedObjectContext:(id)arg1 ;
+(id)allSyncedAlbumsInManagedObjectContext:(id)arg1 ;
+(id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)_albumsMatchingPredicate:(id)arg1 expectedResultCount:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(id)searchIndexAllowedPredicate;
+(id)_predicateForSupportedAlbumTypes;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(unsigned long long)count;
-(char)isEmpty;
-(unsigned long long)approximateCount;
-(char)isInTrash;
-(NSString *)subtitle;
-(char)canMoveToTrash;
-(NSString *)localizedTitle;
-(char)isUserCreated;
-(void)awakeFromInsert;
-(unsigned long long)photosCount;
-(void)delete;
-(void)willSave;
-(char)isFolder;
-(PLPhotoLibrary *)photoLibrary;
-(void)awakeFromFetch;
-(char)canPerformEditOperation:(unsigned long long)arg1 ;
-(NSArray *)localizedLocationNames;
-(char)canShowAvalancheStacks;
-(char)canShowComments;
-(char)isPendingPhotoStreamAlbum;
-(char)shouldDeleteWhenEmpty;
-(char)isLibrary;
-(char)isCloudSharedAlbum;
-(char)isOwnedCloudSharedAlbum;
-(char)isMultipleContributorCloudSharedAlbum;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(char)hasUnseenContentBoolValue;
-(char)canContributeToCloudSharedAlbum;
-(id)momentShare;
-(char)isSmartAlbum;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(int)kindValue;
-(void)setHasUnseenContentBoolValue:(char)arg1 ;
-(NSObject *)posterImage;
-(char)isCameraAlbum;
-(char)isPanoramasAlbum;
-(char)isPhotoStreamAlbum;
-(char)isStandInAlbum;
-(char)isFamilyCloudSharedAlbum;
-(char)isRecentlyAddedAlbum;
-(char)isUserLibraryAlbum;
-(char)isProjectAlbum;
-(unsigned long long)assetsCount;
-(unsigned long long)videosCount;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
-(id)cplAlbumChangeInPhotoLibrary:(id)arg1 ;
-(id)cplFullRecord;
-(char)supportsCloudUpload;
-(NSString *)keyAssetUUID;
-(unsigned long long)numberOfAssets;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(char)isRegularRootFolder;
-(char)isProjectAlbumRootFolder;
-(char)isOwnPhotoStreamAlbum;
-(void)applyTrashedState:(short)arg1 cascade:(char)arg2 ;
-(char)isSyncableChange;
-(id)localID;
-(unsigned long long)searchIndexCategory;
-(NSDate *)keyAssetCreationDate;
-(NSDate *)searchableEndDate;
-(NSDate *)searchableStartDate;
-(id)searchIndexContents;
-(void)setKindValue:(int)arg1 ;
-(char)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(id)childKeyForOrdering;
-(void)registerForChanges;
-(void)unregisterForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(char)arg1 ;
-(char)didRegisteredWithUserInterfaceContext;
-(char)isRegisteredForChanges;
-(void)willTurnIntoFault;
-(id)_kindDescription;
-(id)_compactDebugDescription;
-(id)_prettyDescription;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(void)enumerateDerivedIndexMappers:(/*^block*/id)arg1 ;
-(char)hasDerivedIndexMappers;
-(void)registerDerivedAlbum:(id)arg1 ;
-(void)unregisterAllDerivedAlbums;
-(void)enumerateDerivedAlbums:(/*^block*/id)arg1 ;
-(id)childManagedObject;
-(void)_applyTrashedState:(short)arg1 date:(char)arg2 :(id)arg3 cascade:(char)arg4 ;
-(void)repairUuidAndTitleWithRecoveryReason:(const char*)arg1 ;
-(void)_repairTitleIfEmpty;
-(id)assetsByObjectIDAtIndexes:(id)arg1 ;
-(void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2 ;
-(void)setIsRegisteredForChanges:(char)arg1 ;
-(char)isProjectAlbumSupportingCloudUpload;
-(id)_searchableExtremityDateFromStart:(char)arg1 ;
-(void)applyPropertiesFromAlbumChange:(id)arg1 ;
-(id)_scopedIdentifier;
@end
