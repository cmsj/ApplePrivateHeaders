/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSDate, NSString, NSManagedObjectID, NSSortDescriptor, NSArray;

@interface PHCollection : PHObject {

	char _trashed;
	char _customSortAscending;
	unsigned _customSortKey;
	unsigned long long _estimatedPhotosCount;
	unsigned long long _estimatedVideosCount;
	NSDate* _creationDate;
	NSString* _localizedSubtitle;

}

@property (nonatomic,readonly) NSManagedObjectID * parentFolderID; 
@property (nonatomic,copy,readonly) NSString * effectiveCustomSortKey; 
@property (nonatomic,copy,readonly) NSSortDescriptor * defaultSortDescriptor; 
@property (nonatomic,readonly) char isAlbumContentSort; 
@property (nonatomic,readonly) char isAlbumContentTitleSort; 
@property (nonatomic,readonly) char isUserSmartAlbum; 
@property (nonatomic,readonly) unsigned long long estimatedPhotosCount;                               //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedVideosCount;                               //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) char hasLocalizedTitle; 
@property (nonatomic,readonly) char hasLocationInfo; 
@property (nonatomic,readonly) NSDate * creationDate;                                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                                          //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (getter=isTrashed,nonatomic,readonly) char trashed;                                         //@synthesize trashed=_trashed - In the implementation block
@property (nonatomic,readonly) char customSortAscending;                                              //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (nonatomic,readonly) unsigned customSortKey;                                                //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * effectiveCustomSortDescriptors; 
@property (nonatomic,copy,readonly) id<PHCollectionPresentationHints> presentationHints; 
@property (nonatomic,readonly) char startsAtEnd; 
@property (nonatomic,readonly) char canContainAssets; 
@property (nonatomic,readonly) char canContainCollections; 
@property (nonatomic,readonly) NSString * localizedTitle; 
+(id)managedEntityName;
+(id)fetchType;
+(char)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2 ;
+(id)fetchTopLevelUserCollectionsWithOptions:(id)arg1 ;
+(id)predicateForUserCollections;
+(id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForAssetsWithOIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFilteredAssetCollections:(id)arg1 containingAssetsMatchingPredicate:(id)arg2 ;
-(id)description;
-(NSDate *)creationDate;
-(NSString *)localizedTitle;
-(char)isDeleted;
-(char)isTrashed;
-(char)hasLocalizedTitle;
-(char)hasLocationInfo;
-(NSManagedObjectID *)parentFolderID;
-(NSString *)localizedSubtitle;
-(unsigned)customSortKey;
-(char)customSortAscending;
-(char)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(char)canPerformEditOperation:(long long)arg1 ;
-(unsigned long long)estimatedPhotosCount;
-(unsigned long long)estimatedVideosCount;
-(unsigned long long)collectionFixedOrderPriority;
-(char)isUserSmartAlbum;
-(NSString *)effectiveCustomSortKey;
-(char)isAlbumContentSort;
-(char)isAlbumContentTitleSort;
-(char)canContainAssets;
-(char)startsAtEnd;
-(char)canContainCollections;
-(NSSortDescriptor *)defaultSortDescriptor;
-(id<PHCollectionPresentationHints>)presentationHints;
-(id)objectReference;
-(unsigned long long)ancestryIndexOfCollectionList:(id)arg1 context:(id)arg2 ;
-(NSArray *)effectiveCustomSortDescriptors;
-(id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg1 ;
@end

