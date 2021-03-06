/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation, NSArray, NSString, NSSet, VNSceneprint, NSDateComponents, NSDate;


@protocol CLSInvestigationItem <NSObject,PLRegionsClusteringItem,CLSSimilarlyStackableItem>
@property (nonatomic,readonly) CLLocation * clsLocation; 
@property (nonatomic,readonly) NSArray * clsPeopleNames; 
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames; 
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
@property (nonatomic,readonly) NSString * clsIdentifier; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) long long clsViewCount; 
@property (nonatomic,readonly) long long clsPlayCount; 
@property (nonatomic,readonly) long long clsShareCount; 
@property (nonatomic,readonly) double clsContentScore; 
@property (nonatomic,readonly) double clsExposureScore; 
@property (nonatomic,readonly) double clsSharpnessScore; 
@property (nonatomic,readonly) double clsAestheticScore; 
@property (nonatomic,readonly) double clsHighlightVisibilityScore; 
@property (nonatomic,readonly) double clsAutoplaySuggestionScore; 
@property (nonatomic,readonly) double clsFaceScore; 
@property (nonatomic,readonly) char clsIsUtility; 
@property (nonatomic,readonly) char clsIsScreenshotOrScreenRecording; 
@property (nonatomic,readonly) char isFavorite; 
@property (nonatomic,readonly) char isVideo; 
@property (nonatomic,readonly) char clsIsAestheticallyPrettyGood; 
@property (nonatomic,readonly) char clsIsBlurry; 
@property (nonatomic,readonly) char clsIsLoopOrBounce; 
@property (nonatomic,readonly) char clsIsLongExposure; 
@property (nonatomic,readonly) char clsIsInterestingVideo; 
@property (nonatomic,readonly) char clsIsInterestingLivePhoto; 
@property (nonatomic,readonly) char clsIsInterestingPanorama; 
@property (nonatomic,readonly) char clsIsInterestingSDOF; 
@property (nonatomic,readonly) char clsIsInterestingHDR; 
@property (nonatomic,readonly) char clsHasInterestingAudioClassification; 
@property (nonatomic,readonly) char clsHasCustomPlaybackVariation; 
@property (nonatomic,readonly) char clsIsNonMemorable; 
@property (nonatomic,readonly) double clsDuration; 
@property (nonatomic,readonly) char clsIsInterestingReframe; 
@property (nonatomic,copy,readonly) NSSet * clsSceneClassifications; 
@property (nonatomic,readonly) VNSceneprint * clsSceneprint; 
@property (nonatomic,readonly) NSDateComponents * cls_localDateComponents; 
@property (nonatomic,readonly) NSDate * cls_universalDate; 
@property (nonatomic,readonly) NSDate * cls_localDate; 
@property (readonly) char clsIsInhabited; 
@property (readonly) char clsAvoidIfPossibleForKeyItem; 
@property (readonly) char clsHasPoorResolution; 
@property (readonly) char clsHasInterestingScenes; 
@property (nonatomic,readonly) double clsSquareCropScore; 
@required
-(CLLocation *)location;
-(char)isFavorite;
-(char)isVideo;
-(NSArray *)peopleNames;
-(NSDate *)cls_universalDate;
-(CLLocation *)clsLocation;
-(NSString *)clsIdentifier;
-(double)clsSharpnessScore;
-(char)clsIsInterestingSDOF;
-(double)clsAestheticScore;
-(char)clsIsAestheticallyPrettyGood;
-(double)clsContentScore;
-(double)clsFaceScore;
-(char)clsIsInterestingLivePhoto;
-(char)clsIsInterestingHDR;
-(NSSet *)clsSceneClassifications;
-(char)clsHasPoorResolution;
-(char)clsIsBlurry;
-(NSArray *)clsPeopleNames;
-(char)clsIsScreenshotOrScreenRecording;
-(NSDateComponents *)cls_localDateComponents;
-(NSDate *)cls_localDate;
-(VNSceneprint *)clsSceneprint;
-(char)clsIsUtility;
-(unsigned long long)clsPeopleCount;
-(long long)clsViewCount;
-(long long)clsPlayCount;
-(long long)clsShareCount;
-(NSArray *)clsUnprefetchedPeopleNames;
-(double)clsExposureScore;
-(double)clsHighlightVisibilityScore;
-(double)clsAutoplaySuggestionScore;
-(char)clsIsLoopOrBounce;
-(char)clsIsLongExposure;
-(char)clsIsInterestingVideo;
-(char)clsIsInterestingPanorama;
-(char)clsHasInterestingAudioClassification;
-(char)clsHasCustomPlaybackVariation;
-(char)clsIsNonMemorable;
-(double)clsDuration;
-(char)clsIsInterestingReframe;
-(char)clsIsInhabited;
-(char)clsAvoidIfPossibleForKeyItem;
-(char)clsHasInterestingScenes;
-(double)clsSquareCropScore;
-(double)scoreInContext:(id)arg1;

@end

