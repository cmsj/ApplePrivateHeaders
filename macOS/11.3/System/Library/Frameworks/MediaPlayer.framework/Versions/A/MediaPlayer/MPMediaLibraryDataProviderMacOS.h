/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPMediaLibraryDataProviderPrivate.h>
#import <libobjc.A.dylib/MPUserIdentityConsuming.h>

@protocol OS_dispatch_queue, MPArtworkDataSource;
@class NSString, NSArray, NSObject, NSMutableDictionary, ITMediaLibrary, MPMediaEntityCache, ICUserIdentity, MPMediaLibrary, NSSet;

@interface MPMediaLibraryDataProviderMacOS : NSObject <MPMediaLibraryDataProviderPrivate, MPUserIdentityConsuming> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _uniqueIdentifier;
	NSMutableDictionary* _addedItemsNotifications;
	ITMediaLibrary* _library;
	MPMediaEntityCache* _entityCache;
	id<MPArtworkDataSource> _artworkDataSource;
	ICUserIdentity* _userIdentity;
	MPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) ITMediaLibrary * library;                                                     //@synthesize library=_library - In the implementation block
@property (assign,nonatomic,__weak) MPMediaLibrary * mediaLibrary;                                         //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) long long playbackHistoryPlaylistPersistentID; 
@property (nonatomic,readonly) char isGeniusEnabled; 
@property (nonatomic,readonly) NSArray * preferredAudioLanguages; 
@property (nonatomic,readonly) NSArray * preferredSubtitleLanguages; 
@property (nonatomic,readonly) id<MPArtworkDataSource> completeMyCollectionArtworkDataSource; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) MPMediaEntityCache * entityCache;                                           //@synthesize entityCache=_entityCache - In the implementation block
@property (nonatomic,readonly) id<MPArtworkDataSource> artworkDataSource;                                  //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
@property (nonatomic,readonly) char requiresAuthentication; 
@property (nonatomic,readonly) NSSet * propertiesToCache; 
@property (nonatomic,readonly) NSString * syncValidity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                                  //@synthesize userIdentity=_userIdentity - In the implementation block
+(id)onDiskProviders;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(NSString *)uniqueIdentifier;
-(NSString *)databasePath;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(id)lastModifiedDate;
-(id<MPArtworkDataSource>)artworkDataSource;
-(ITMediaLibrary *)library;
-(char)writable;
-(NSString *)accountDSID;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setLibrary:(ITMediaLibrary *)arg1 ;
-(unsigned long long)currentEntityRevision;
-(char)hasMediaOfType:(unsigned long long)arg1 ;
-(char)hasGeniusMixes;
-(char)hasUbiquitousBookmarkableItems;
-(char)itemExistsWithPersistentID:(unsigned long long)arg1 ;
-(char)playlistExistsWithPersistentID:(unsigned long long)arg1 ;
-(char)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 ;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(NSArray *)localizedSectionIndexTitles;
-(void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3 ;
-(NSString *)syncValidity;
-(MPMediaEntityCache *)entityCache;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(char)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(char)deleteDatabaseProperty:(id)arg1 ;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1 ;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2 ;
-(char)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4 ;
-(char)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(char)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(char)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(char)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(char)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addTracksToMyLibrary:(id)arg1 ;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 ;
-(char)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5 ;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)recordPlayEventForAlbumPersistentID:(long long)arg1 ;
-(char)recordPlayEventForPlaylistPersistentID:(long long)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(long long)addPlaylistWithValuesForProperties:(id)arg1 ;
-(long long)sdk_addPlaylistWithValuesForProperties:(id)arg1 ;
-(char)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 ;
-(char)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 ;
-(char)removePlaylistWithIdentifier:(long long)arg1 ;
-(void)setItemsWithIdentifiers:(id)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)sdk_addItemWithOpaqueIdentifier:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeItemsAtIndexes:(id)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1 ;
-(void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)sdk_addItemWithOpaqueID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)playbackHistoryPlaylistPersistentID;
-(void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(char)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(char)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 inUsersLibrary:(char)arg3 itemBlock:(/*^block*/id)arg4 collectionBlock:(/*^block*/id)arg5 ;
-(void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(id)collectionResultSetForQueryCriteria:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)getQueryCriteriaPlaylistPersistentID:(id)arg1 singleCriteria:(char)arg2 ;
-(unsigned long long)getQueryCriteriaAlbumPersistentID:(id)arg1 ;
-(unsigned long long)getQueryCriteriaArtistPersistentID:(id)arg1 ;
-(unsigned long long)getQueryCriteriaComposerPersistentID:(id)arg1 ;
-(void)loadProperties:(id)arg1 ofMediaEntity:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)loadProperties:(id)arg1 ofMediaCollection:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemNonnullDateOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedExplicitLyricsOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(void)invalidateLibrary;
-(void)_libraryContentsDidChange:(id)arg1 ;
-(void)_addToLibraryComplete:(id)arg1 ;
@end

