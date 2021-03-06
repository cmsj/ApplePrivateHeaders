/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSCurationModel <NSObject>
@property (readonly) double minimumDurationForVideoToNotBeJunk; 
@property (readonly) double minimumDurationForTimelapseVideoToNotBeJunk; 
@property (readonly) double minimumDurationForHighFramerateVideoToNotBeJunk; 
@required
+(unsigned long long)minimumRequiredSceneAnalysisVersion;
+(char)minimumRequiredAnalysisVersionsAreMatchedBySpecification:(id)arg1;
+(char)maximumAllowedAnalysisVersionsAreMatchedBySpecification:(id)arg1;
+(unsigned long long)minimumRequiredMediaAnalysisVersion;
+(unsigned long long)minimumRequiredFaceAnalysisVersion;
+(unsigned long long)maximumAllowedSceneAnalysisVersion;
+(unsigned long long)maximumAllowedMediaAnalysisVersion;
+(unsigned long long)maximumAllowedFaceAnalysisVersion;
-(char)isTragicFailureWithImageAsset:(id)arg1;
-(char)avoidIfPossibleForKeyAssetWithAsset:(id)arg1;
-(char)hasPoorResolutionWithAsset:(id)arg1;
-(char)isUtilityForMemoriesWithAsset:(id)arg1;
-(char)filterForFoodieWithClassification:(id)arg1;
-(char)isShowcasingFoodWithSceneClassification:(id)arg1;
-(void)enumerateSignalModelsUsingBlock:(/*^block*/id)arg1;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(/*^block*/id)arg1;
-(id)junkClassificationModel;
-(double)scoreWithAsset:(id)arg1 inContext:(id)arg2;
-(char)isShinyGemWithAsset:(id)arg1;
-(char)isRegularGemWithAsset:(id)arg1;
-(char)isBlurryWithAsset:(id)arg1;
-(char)isInhabitedWithAsset:(id)arg1;
-(char)hasInterestingScenesWithAsset:(id)arg1;
-(char)isInterestingVideoWithAsset:(id)arg1;
-(char)isInterestingLivePhotoWithAsset:(id)arg1;
-(char)isInterestingPanoramaWithAsset:(id)arg1;
-(char)isInterestingSDOFWithAsset:(id)arg1;
-(char)isInterestingHDRWithAsset:(id)arg1;
-(char)isInterestingReframeWithAsset:(id)arg1;
-(char)hasInterestingAudioClassificationWithAsset:(id)arg1;
-(short)interestingAudioClassificationsWithAsset:(id)arg1;
-(id)processedSignalsFromSignals:(id)arg1;
-(id)faceInformationSummaryWithFaces:(id)arg1 personUUIDs:(id)arg2 hiddenPersonLocalIdentifiers:(id)arg3;
-(char)isNonMemorableWithAsset:(id)arg1;
-(char)isUtilityWithAsset:(id)arg1;
-(char)isAestheticallyPrettyGoodWithAsset:(id)arg1;
-(char)isGoldWithAsset:(id)arg1;
-(id)mediaPreAnalysisModel;
-(id)mediaAnalysisModel;
-(id)aestheticsModel;
-(id)faceModel;
-(double)faceSizeUpperLimit;
-(double)faceSizeLowerLimit;
-(double)minimumDurationForVideoToNotBeJunk;
-(double)minimumDurationForTimelapseVideoToNotBeJunk;
-(double)minimumDurationForHighFramerateVideoToNotBeJunk;
-(float)interactionScoreWithAsset:(id)arg1;
-(char)assetIsJunkWithSceneClassifications:(id)arg1 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg2 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg3 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)arg4;

@end

