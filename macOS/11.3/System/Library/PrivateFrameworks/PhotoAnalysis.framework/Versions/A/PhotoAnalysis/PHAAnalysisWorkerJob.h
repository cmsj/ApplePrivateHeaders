/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@class NSDictionary, NSMutableDictionary;

@interface PHAAnalysisWorkerJob : PHAAssetProcessingJob {

	char _persistsAnalysisState;
	char _canUseNetwork;
	char _shouldBackoffForFailedNoResourceErrors;
	NSDictionary* _workerFlagsByAssetLocalIdentifier;
	NSMutableDictionary* _ignoreUntilDatesByAssetLocalIdentifier;

}

@property (nonatomic,readonly) char canUseNetwork;                                                        //@synthesize canUseNetwork=_canUseNetwork - In the implementation block
@property (nonatomic,readonly) char shouldBackoffForFailedNoResourceErrors;                               //@synthesize shouldBackoffForFailedNoResourceErrors=_shouldBackoffForFailedNoResourceErrors - In the implementation block
@property (nonatomic,readonly) NSDictionary * workerFlagsByAssetLocalIdentifier;                          //@synthesize workerFlagsByAssetLocalIdentifier=_workerFlagsByAssetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * ignoreUntilDatesByAssetLocalIdentifier;              //@synthesize ignoreUntilDatesByAssetLocalIdentifier=_ignoreUntilDatesByAssetLocalIdentifier - In the implementation block
@property (assign,nonatomic) char persistsAnalysisState;                                                  //@synthesize persistsAnalysisState=_persistsAnalysisState - In the implementation block
-(id)description;
-(void)finish;
-(void)prepare;
-(char)canUseNetwork;
-(char)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(char)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 workInfos:(id)arg3 canUseNetwork:(char)arg4 shouldBackoffForFailedNoResource:(char)arg5 library:(id)arg6 ;
-(id)statusAsDictionary;
-(void)setPersistsAnalysisState:(char)arg1 ;
-(void)setIgnoreUntilDate:(id)arg1 forAssetLocalIdentifier:(id)arg2 ;
-(id)dataLoaderOptions;
-(char)shouldBackoffForFailedNoResourceErrors;
-(NSDictionary *)workerFlagsByAssetLocalIdentifier;
-(NSMutableDictionary *)ignoreUntilDatesByAssetLocalIdentifier;
-(char)persistsAnalysisState;
-(id)_fetchAllAssetsForLocalIdentifiers:(id)arg1 ;
-(void)_markAssetsPending;
-(void)_processFailures;
-(id)_resultsDescription;
-(int)workerFlagsForAssetLocalIdentifier:(id)arg1 ;
-(id)ignoreUntilDateForAssetLocalIdentifier:(id)arg1 ;
@end

