/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAVisionServiceWorker.h>
#import <libobjc.A.dylib/PVNotificationListener.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>
#import <libobjc.A.dylib/PVPersonPromoterDelegate.h>
#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceFaceProcessingProtocol.h>

@class PhotoVision, PHAVisionServicePersistenceDelegate, NSMutableDictionary, NSURL, NSString;

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PVNotificationListener, PVVisionIntegrating, PVPersonPromoterDelegate, PLPhotoAnalysisVisionServiceFaceProcessingProtocol> {

	PhotoVision* _photoVision;
	PHAVisionServicePersistenceDelegate* _persistenceDelegate;
	SCD_Struct_PH5 _analysisStatistics;
	NSMutableDictionary* _state;
	unsigned long long _incrementalPersonProcessingStage;
	char _disabledByUserDefaults;
	unsigned long long _faceAnalysisOptions;
	unsigned long long _faceIDModelRebuildPeriod;
	NSURL* _suggestionLoggingDirectory;
	char _suggestionLoggingSessionOpen;
	char _suggestionsLoggingEnabled;
	char _clustererNeedsSyncing;
	char _personBuilderMergeCandidatesEnabled;
	unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;

}

@property (assign,nonatomic) unsigned long long incrementalPersonProcessingStage;                                //@synthesize incrementalPersonProcessingStage=_incrementalPersonProcessingStage - In the implementation block
@property (assign,nonatomic) char personBuilderMergeCandidatesEnabled;                                           //@synthesize personBuilderMergeCandidatesEnabled=_personBuilderMergeCandidatesEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long lastMinimumFaceGroupSizeForCreatingMergeCandidates;              //@synthesize lastMinimumFaceGroupSizeForCreatingMergeCandidates=_lastMinimumFaceGroupSizeForCreatingMergeCandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(char)runsExclusively;
-(char)isEnabled;
-(void)shutdown;
-(char)_validateAsset:(id)arg1 error:(id*)arg2 ;
-(id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3 ;
-(id)_faceToFaceCountMapForFaces:(id)arg1 ;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(char)arg3 updateBlock:(/*^block*/id)arg4 ;
-(id)fetchPersonsForFaceIDModel;
-(void)_appendToSuggestionsLog:(id)arg1 ;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(char)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_closeSuggestionsLoggingSession;
-(void)_openSuggestionsLoggingSession;
-(void)_logFaceToSuggestionsLog:(id)arg1 ;
-(void)_finalizeSuggestionsLog;
-(char)_deleteAllVerifiedPersonsWithError:(id*)arg1 ;
-(void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1 ;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1 ;
-(char)_setAllFaceGroupsNeedPersonBuilding;
-(void)setPersonBuilderMergeCandidatesEnabled:(char)arg1 ;
-(char)performPersonBuildingWithCanceler:(id)arg1 extendTimeoutBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)resetFaceClassificationModelWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)processPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handlePVNotification:(id)arg1 ;
-(void)cooldown;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(char)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(char)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(id)statusAsDictionary;
-(void)willCompleteJob:(id)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(char)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3 ;
-(char)processAsset:(id)arg1 error:(id*)arg2 ;
-(char)classifyContactsWithProgress:(id)arg1 extendTimeoutBlock:(/*^block*/id)arg2 ;
-(char)processDirtyFaceCrop:(id)arg1 error:(id*)arg2 ;
-(void)terminatePhotoVision;
-(char)performFaceClusteringWithCompletion:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)generateFaceIDModelShouldForce:(char)arg1 progress:(id)arg2 extendTimeoutBlock:(/*^block*/id)arg3 ;
-(unsigned long long)incrementalPersonProcessingStage;
-(char)personBuilderMergeCandidatesEnabled;
-(unsigned long long)lastMinimumFaceGroupSizeForCreatingMergeCandidates;
-(void)pingFaceWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_performIntermediateVisionCleanup;
-(void)_performFullVisionCleanup;
-(void)_resetAnalysisStatistics;
-(void)_logAnalysisStatistics;
-(id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 operation:(id)arg4 context:(id)arg5 error:(id*)arg6 ;
-(id)_photoVisionAllowingCreation:(char)arg1 syncClusterCache:(char)arg2 error:(id*)arg3 ;
-(void)interruptPhotoVision;
-(id)_pvImageForAssetResource:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(id)_pvImageForAssetResourceFileURL:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(id)_pvImageForAsset:(id)arg1 targetSize:(CGSize)arg2 error:(id*)arg3 ;
-(int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 operation:(id)arg4 error:(id*)arg5 ;
-(void)_willPerformFaceClustering;
-(void)_didPerformFaceClustering;
-(void)_performFaceCropProcessingWhileKeepingAliveJob:(id)arg1 ;
-(char)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 createFaceTorsoprint:(char)arg2 error:(id*)arg3 ;
-(char)_updateFaceCropFace:(id)arg1 withFaceprintForFaceCrop:(id)arg2 createFaceTorsoprint:(char)arg3 error:(id*)arg4 ;
-(char)_needToRunFaceCropProcessingJobForScenario:(unsigned long long)arg1 ;
-(char)_needToRunClusteringJobForScenario:(unsigned long long)arg1 ;
-(char)_needToRunPersonBuildingJobForScenario:(unsigned long long)arg1 ;
-(char)_needToRunPersonPromoterForScenario:(unsigned long long)arg1 ;
-(char)_needToRunFaceIDModelCreationForScenario:(unsigned long long)arg1 ;
-(char)_needsToRunContactClassificationForScenario:(unsigned long long)arg1 ;
-(char)hasStandaloneJobsForScenario:(unsigned long long)arg1 ;
-(id)workerStateFileURL;
-(void)_readState;
-(void)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIncrementalPersonProcessingStage:(unsigned long long)arg1 ;
-(char)_generateAndPersistFaceCropsOfFaces:(id)arg1 inImage:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(id)_facesRequiringFaceCropGenerationForAsset:(id)arg1 error:(id*)arg2 ;
-(char)_generateAndPersistFaceCropsOfUserConfirmedFacesInImage:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(int)_faceWorkerTasksToPerformOnAsset:(id)arg1 accordingToAnalysisAttributes:(id)arg2 ;
-(unsigned long long)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)processDirtyFaceCrops;
-(void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(char)_clusterFacesWithPhotoVision:(id)arg1 incrementally:(char)arg2 error:(id*)arg3 ;
-(char)_buildPersonsIncrementally:(char)arg1 error:(id*)arg2 ;
-(char)_promotePersonsWithError:(id*)arg1 ;
-(void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)shouldRebuildFaceIDModel;
-(char)faceIDModelLastGenerationDidExceedTimeInterval;
-(void)markLastBackgroundFaceIDModelRebuildJobDate;
-(id)personModelPath;
-(char)persistPersonModel:(id)arg1 ;
-(char)deletePersonModelWithError:(id*)arg1 ;
-(char)shouldReclassifyContacts;
-(char)contactClassificationDidExceedTimeInterval;
-(void)markLastBackgroundContactClassificationJobDate;
-(id)_loadPersonsModelWithPhotoLibrary:(id)arg1 ;
-(id)_persistentStorageDirectoryURLWithPhotoLibrary:(id)arg1 ;
-(id)sortedPoolOfContactIdentifiersExcludingContactIdentifiers:(id)arg1 ;
-(char)shouldProcessContact:(id)arg1 ;
-(id)generateFaceCropForFaceCropSourceDescriptors:(id)arg1 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidates:(unsigned long long)arg1 ;
@end

