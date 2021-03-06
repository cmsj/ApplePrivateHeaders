/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
#import <PhotosGraph/PhotosGraph-Structs.h>
@class NSMutableArray, NSObject, PGCurationCache, PHPhotoLibrary;

@interface PGCurationManager : NSObject {

	NSMutableArray* _prefetchCuratedKeyAssetsBlocks;
	NSMutableArray* _prefetchCuratedAssetsBlocks;
	NSObject*<OS_dispatch_queue> _curationPrefetchQueue;
	NSObject*<OS_os_log> _curationLoggingConnection;
	PGCurationCache* _cache;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSMutableArray * prefetchCuratedKeyAssetsBlocks;                 //@synthesize prefetchCuratedKeyAssetsBlocks=_prefetchCuratedKeyAssetsBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * prefetchCuratedAssetsBlocks;                    //@synthesize prefetchCuratedAssetsBlocks=_prefetchCuratedAssetsBlocks - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> curationPrefetchQueue;              //@synthesize curationPrefetchQueue=_curationPrefetchQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> curationLoggingConnection;                  //@synthesize curationLoggingConnection=_curationLoggingConnection - In the implementation block
@property (nonatomic,readonly) PGCurationCache * cache;                                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(id)assetPropertySetsForCuration;
+(id)representativeAssetsForAssetCollection:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
+(id)dejunkAndDedupeAssetsInAssetCollection:(id)arg1 options:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
+(id)defaultAssetSortDescriptors;
+(id)_filteredAssetsWithFaceFilter:(unsigned long long)arg1 forAssets:(id)arg2 ;
+(id)assetsBeautifierForPrecision:(unsigned long long)arg1 ;
+(id)summaryClusteringForDuration:(unsigned long long)arg1 andPrecision:(unsigned long long)arg2 ;
+(double)contentScoreForAssets:(id)arg1 ;
+(unsigned long long)maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2 ;
+(char)areAssetsInteresting:(id)arg1 minimumNumberOfCuratedAssets:(unsigned long long)arg2 duration:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
+(unsigned long long)minimumNumberOfItemsForDuration:(unsigned long long)arg1 withMaximumNumberOfItems:(unsigned long long)arg2 ;
+(id)dejunkAndDedupeItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
+(id)sceneInfoWithAsset:(id)arg1 ;
+(id)dedupedAssetsWithAssets:(id)arg1 precision:(unsigned long long)arg2 ;
+(unsigned long long)maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2 spanningNumberOfDays:(double)arg3 ;
+(id)_filteredAssetCollectionFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3 ;
+(id)_filteredAssetsFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3 ;
-(PGCurationCache *)cache;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 options:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(unsigned long long)optimalDurationForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 ;
-(id)curatedAssetsForPersonLocalIdentifier:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 referencePeople:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 ;
-(id)_curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curatedKeyAsset:(id*)arg5 ;
-(id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 ;
-(id)curatedKeyAssetForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 ;
-(id)bestAssetsForAssetFeeder:(id)arg1 options:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(double)contentScoreForAssetCollection:(id)arg1 precision:(unsigned long long)arg2 ;
-(char)isAssetCollectionInteresting:(id)arg1 precision:(unsigned long long)arg2 ;
-(void)invalidateCurationCacheForMomentIdentifiers:(id)arg1 ;
-(void)invalidateCurationCacheForCollectionWithIdentifier:(id)arg1 ;
-(void)cancelAllCurationPrefetches;
-(void)prefetchCuratedKeyAssetsForMoments:(id)arg1 options:(id)arg2 ;
-(void)prefetchCuratedAssetsForMoments:(id)arg1 options:(id)arg2 ;
-(void)prefetchAreMomentsInteresting:(id)arg1 precision:(unsigned long long)arg2 ;
-(char)isAssetFeederInteresting:(id)arg1 withAlternateJunking:(char)arg2 precision:(unsigned long long)arg3 ;
-(double)contentScoreForAssetFeeder:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)bestAssetInAssets:(id)arg1 options:(id)arg2 ;
-(id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2 ;
-(id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2 minimumNumberOfCommonPeople:(unsigned long long)arg3 avoidVideoIfPossible:(char)arg4 ;
-(id)_bestAssetsInAssets:(id)arg1 forReferencePersons:(id)arg2 minimumRatioOfReferencePersonsPerAsset:(double)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)_bestAssetInSummarizedAssets:(id)arg1 forReferencePeople:(id)arg2 ;
-(id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 ;
-(id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 ;
-(id)_contextualBestAssetInAssets:(id)arg1 ;
-(id)_extendedAssetsForCurationForAssets:(id)arg1 matchingAssetsRange:(NSRange)arg2 ;
-(id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)arg1 ;
-(id)fetchAssetWithLocalIdentifier:(id)arg1 ;
-(NSMutableArray *)prefetchCuratedKeyAssetsBlocks;
-(NSMutableArray *)prefetchCuratedAssetsBlocks;
-(NSObject*<OS_dispatch_queue>)curationPrefetchQueue;
-(NSObject*<OS_os_log>)curationLoggingConnection;
-(id)_timeBasedAssetClustersForAssets:(id)arg1 maximumClusterCount:(unsigned long long)arg2 ;
-(id)_firstBestFacedAssetInAssetCluster:(id)arg1 facesByAssetIdentifiers:(id)arg2 ;
-(id)_libraryDateInterval;
-(id)_filteredAssetsForAssets:(id)arg1 inMoments:(id)arg2 keepFavorites:(char)arg3 ;
@end

