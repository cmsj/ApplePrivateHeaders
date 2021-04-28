/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol PLMomentGenerationDataManagement <NSObject>
@property (assign,nonatomic) char shouldPerformLightweightValidation; 
@property (assign,nonatomic) long long previousValidatedModelVersion; 
@property (assign,nonatomic) char previousValidationSucceeded; 
@property (nonatomic,readonly) char isLightweightMigrationManager; 
@property (nonatomic,readonly) NSDictionary * generationOptions; 
@required
-(char)hasChanges;
-(char)save:(id*)arg1;
-(void)refreshObject:(id)arg1 mergeChanges:(char)arg2;
-(id)insertedObjects;
-(void)refreshAllObjects;
-(char)isNetworkReachable;
-(id)updatedObjects;
-(id)deletedObjects;
-(void)stopObservingNetworkReachabilityChanges;
-(id)locationsOfInterest;
-(char)routineIsAvailable;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(char)arg2 completionHandler:(/*^block*/id)arg3;
-(id)orphanedAssetIDsWithError:(id*)arg1;
-(char)isLightweightMigrationManager;
-(char)shouldPerformLightweightValidation;
-(long long)previousValidatedModelVersion;
-(char)previousValidationSucceeded;
-(NSDictionary *)generationOptions;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(char)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(char)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(unsigned long long)hardGenerationBatchSizeLimit;
-(void)invalidateLocationDataForAssetsInMoment:(id)arg1;
-(void)invalidateLocationDataForAssetsWithOIDs:(id)arg1;
-(void)pendingChangesUpdated:(unsigned long long)arg1;
-(id)momentAnalysisTransactionWithName:(const char*)arg1;
-(id)assetWithUniqueID:(id)arg1 error:(id*)arg2;
-(id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(id)momentWithUniqueID:(id)arg1 error:(id*)arg2;
-(void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
-(id)momentsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(id)momentsSinceDate:(id)arg1;
-(id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(char)arg3;
-(id)yearMomentListForYear:(long long)arg1;
-(id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2;
-(id)allMomentsWithError:(id*)arg1;
-(id)allInvalidMomentsWithError:(id*)arg1;
-(id)momentsWithLocationTypeUnprocessedWithError:(id*)arg1;
-(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id*)arg1;
-(id)allMomentIDsWithError:(id*)arg1;
-(id)allInvalidMomentIDsWithError:(id*)arg1;
-(id)allMomentsWithInvalidReverseLocationData;
-(id)allMomentListsForLevel:(short)arg1;
-(id)allMomentLists;
-(id)momentsIntersectingDateInterval:(id)arg1;
-(id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1;
-(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 error:(id*)arg2;
-(id)allInvalidAssetsWithError:(id*)arg1;
-(id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1;
-(id)highlightsIntersectingDateInterval:(id)arg1 ofKind:(unsigned short)arg2;
-(id)allPhotosHighlightsOfAllKindsWithError:(id*)arg1;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(id)arg2 error:(id*)arg3;
-(id)allPhotosHighlightsWithPredicate:(id)arg1 error:(id*)arg2;
-(id)allInvalidPhotosHighlightsOfAllKindsWithError:(id*)arg1;
-(id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2;
-(char)deleteAllMomentsWithError:(id*)arg1;
-(char)deleteAllHighlightsWithError:(id*)arg1;
-(char)deleteAllMomentListsWithError:(id*)arg1;
-(Class)momentListDataClassForGranularityLevel:(short)arg1;
-(Class)momentDataClass;
-(Class)momentAssetDataClass;
-(id)insertNewMomentListForGranularityLevel:(short)arg1;
-(id)insertNewMoment;
-(id)insertNewPhotosHighlight;
-(void)resetOnFailure;
-(void)beginObservingNetworkReachabilityChangesWithBlock:(/*^block*/id)arg1;
-(id)homeAddressDictionary;
-(char)cameraIsActive;
-(void)fetchLocationsOfInterestIfNeeded;
-(void)logRoutineInformation;
-(id)lastLocationOfInterestVisit;
-(id)locationCoordinatesForAssetIDs:(id)arg1;
-(void)invalidateShiftedLocationForAllAssetsInMoments;
-(id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1;
-(void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2;
-(void)invalidateAllHighlightSubtitles;
-(char)wantsMomentReplayLogging;
-(id)replayLogPath;
-(void)setShouldPerformLightweightValidation:(char)arg1;
-(void)setPreviousValidatedModelVersion:(long long)arg1;
-(void)setPreviousValidationSucceeded:(char)arg1;

@end
