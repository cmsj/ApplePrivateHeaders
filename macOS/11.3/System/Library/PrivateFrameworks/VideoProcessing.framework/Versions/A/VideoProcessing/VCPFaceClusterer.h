/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHPhotoLibrary, PVClusterer, PVContext, VCPFaceVisionIntegrating, VCPPhotosPersistenceDelegate;

@interface VCPFaceClusterer : NSObject {

	PHPhotoLibrary* _photoLibrary;
	PVClusterer* _clusterer;
	PVContext* _context;
	VCPFaceVisionIntegrating* _visionIntegrating;
	VCPPhotosPersistenceDelegate* _persistenceDelegate;
	/*^block*/id _updateBlock;

}

@property (nonatomic,copy) id updateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)stop;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(char)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(char)arg2 withContext:(id)arg3 extendTimeout:(/*^block*/id)arg4 cancel:(/*^block*/id)arg5 error:(id*)arg6 ;
-(id)clusterer;
-(void)startAndSyncClusterCacheWithLibrary:(char)arg1 reply:(/*^block*/id)arg2 ;
-(char)resetFaceClusteringState:(id*)arg1 ;
-(void)performFaceClusteringAndWait;
-(long long)clustererState;
-(char)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(int)clusterFacesWithExtendTimeoutBlock:(/*^block*/id)arg1 andCancelBlock:(/*^block*/id)arg2 ;
-(id)clusteringStatus;
-(void)performFaceClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelFaceClustering;
-(void)performFaceClusteringIfNecessaryAndWait;
-(void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1 ;
-(void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1 ;
-(unsigned long long)numberOfFacesPendingClustering;
-(char)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(char)arg2 error:(id*)arg3 ;
-(char)getFaceClusters:(id*)arg1 clusteringThreshold:(double*)arg2 utilizingGPU:(char*)arg3 error:(id*)arg4 ;
-(char)clustererIsReadyToReturnSuggestions;
-(void)resetClusterer;
-(int)clusterFacesIfNecessaryWithExtendTimeoutBlock:(/*^block*/id)arg1 andCancelBlock:(/*^block*/id)arg2 ;
@end

