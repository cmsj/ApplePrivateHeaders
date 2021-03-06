/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSAssetsBeautifier, CLSSimilarStacker;

@interface PGKeyCurator : NSObject {

	CLSAssetsBeautifier* _beautifier;
	CLSSimilarStacker* _similarStacker;

}
-(id)init;
-(id)keyItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 ;
-(id)keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)keyItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)bestItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 criteria:(id)arg4 curationOptions:(id)arg5 ;
-(id)_keyItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(char)item:(id)arg1 passesCriteria:(id)arg2 score:(double*)arg3 ;
-(id)clusterWithSubclusters:(id)arg1 keyItem:(id)arg2 ;
-(char)scoreLevelOfCluster:(id)arg1 isAboveScoreLevelOfCluster:(id)arg2 ;
-(char)cluster:(id)arg1 scoresBetterThanCluster:(id)arg2 ;
-(char)cluster:(id)arg1 isBetterThanCluster:(id)arg2 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 minimumCriteriaScore:(double)arg4 ;
@end

