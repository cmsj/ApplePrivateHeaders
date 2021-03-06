/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemInternal, NSString, NSDate, NSArray, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {

	AVPlayerItemInternal* _playerItem;

}

@property (getter=isAuthorizationRequiredForPlayback,nonatomic,readonly) char authorizationRequiredForPlayback; 
@property (getter=isApplicationAuthorizedForPlayback,nonatomic,readonly) char applicationAuthorizedForPlayback; 
@property (getter=isContentAuthorizedForPlayback,nonatomic,readonly) char contentAuthorizedForPlayback; 
@property (nonatomic,readonly) long long contentAuthorizationRequestStatus; 
@property (assign,setter=_setExternalProtectionRequiredForPlayback:,getter=_isExternalProtectionRequiredForPlayback,nonatomic) char _externalProtectionRequiredForPlayback; 
@property (nonatomic,readonly) NSString * _applicationAuthorizationChallengeProvider; 
@property (getter=_isRental,nonatomic,readonly) char _rental; 
@property (nonatomic,readonly) NSDate * _rentalStartDate; 
@property (nonatomic,readonly) NSDate * _rentalExpirationDate; 
@property (getter=_isRentalPlaybackStarted,nonatomic,readonly) char _rentalPlaybackStarted; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackStartedDate; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackExpirationDate; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (nonatomic,readonly) NSArray * mediaDataCollectors; 
@property (retain) id<NSObject><NSCopying> AVKitData; 
@property (assign,nonatomic) char automaticallyHandlesInterstitialEvents; 
@property (nonatomic,readonly) AVPlayerItem * templatePlayerItem; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(void)initialize;
+(char)_hasOverrideForSelector:(SEL)arg1 ;
+(id)playerItemWithURL:(id)arg1 ;
+(int)_createFigPlaybackItemForFigPlayer:(OpaqueFigPlayerRef)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned)arg4 options:(CFDictionaryRef)arg5 playbackItem:(OpaqueFigPlaybackItem*)arg6 ;
+(char)_forStreamingItemsVendAssetWithFigPlaybackItem;
+(char)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+(OpaqueCMTimebaseRef)_copyTimebaseFromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
+(id)playerItemWithAsset:(id)arg1 ;
+(id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
+(char)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+(char)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+(char)automaticallyNotifiesObserversOfVariantIndex;
+(char)automaticallyNotifiesObserversOfHasEnabledVideo;
+(char)automaticallyNotifiesObserversOfHasEnabledAudio;
+(char)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+(char)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+(char)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+(char)automaticallyNotifiesObserversOfAllowProgressiveResume;
+(char)automaticallyNotifiesObserversOfStatus;
+(char)automaticallyNotifiesObserversOfAsset;
+(char)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+(char)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+(char)automaticallyNotifiesObserversOfPlaybackBufferFull;
+(char)automaticallyNotifiesObserversOfSeekableTimeRanges;
+(char)automaticallyNotifiesObserversOfLoadedTimeRanges;
+(char)automaticallyNotifiesObserversOfPresentationSize;
+(char)automaticallyNotifiesObserversOfTracks;
+(id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2 ;
+(void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)delegate;
-(id)initWithURL:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(NSError *)error;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)_URL;
-(long long)status;
-(OpaqueCMTimebaseRef)timebase;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(SCD_Struct_CM3)duration;
-(SCD_Struct_CM3)_duration;
-(id)_weakReference;
-(SCD_Struct_CM3)currentTime;
-(CGSize)presentationSize;
-(CGSize)_presentationSize;
-(NSArray *)outputs;
-(void)removeOutput:(id)arg1 ;
-(id)asset;
-(char)hasVideo;
-(void)_setAsset:(id)arg1 ;
-(id)tracks;
-(char)_hasEnqueuedVideoFrame;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(id)_nameForLogging;
-(id)initWithAsset:(id)arg1 ;
-(id)_tracks;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(id)customVideoCompositor;
-(id)loudnessInfo;
-(void)_attachToPlayer:(id)arg1 ;
-(void)_addFPListeners;
-(void)_removeFPListeners;
-(void)_playerChangeStatusToFailedWithError:(id)arg1 ;
-(id)_preferredPixelBufferAttributes;
-(char)_suppressesVideoLayers;
-(char)_isReadyForInspectionOfPresentationSize;
-(char)_getCachedPresentationSize:(CGSize*)arg1 ;
-(char)_getCachedNonForcedSubtitleEnabled:(char*)arg1 ;
-(OpaqueCMTimebaseRef)_copyProxyTimebase;
-(void)_makeReadyForEnqueueingWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)_insertAfterItem:(id)arg1 ;
-(void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
-(id)_nextItem;
-(id)_previousItem;
-(void)_removeFromItems;
-(SCD_Struct_CM3)currentUnfoldedTime;
-(char)seekToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToTime:(SCD_Struct_CM3)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToTime:(SCD_Struct_CM3)arg1 toleranceBefore:(SCD_Struct_CM3)arg2 toleranceAfter:(SCD_Struct_CM3)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_fpNotificationNames;
-(char)seekToDate:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_CM3)arg1 ;
-(void)seekToTime:(SCD_Struct_CM3)arg1 toleranceBefore:(SCD_Struct_CM3)arg2 toleranceAfter:(SCD_Struct_CM3)arg3 ;
-(id)_player;
-(OpaqueFigPlaybackItemRef)_copyFigPlaybackItem;
-(void)_setTimedMetadata:(id)arg1 ;
-(void)cancelPendingSeeks;
-(void)setAutomaticallyHandlesInterstitialEvents:(char)arg1 ;
-(void)_setTemplatePlayerItem:(id)arg1 ;
-(id)automaticallyLoadedAssetKeys;
-(id)audioMix;
-(SCD_Struct_CM3)forwardPlaybackEndTime;
-(SCD_Struct_CM3)reversePlaybackEndTime;
-(SCD_Struct_CM3)advanceTimeForOverlappedPlayback;
-(char)advanceTimeForOverlappedPlaybackWasSet;
-(SCD_Struct_CM3)configuredTimeOffsetFromLive;
-(SCD_Struct_CM3)recommendedTimeOffsetFromLive;
-(char)seekingWaitsForVideoCompositionRendering;
-(id)textStyleRules;
-(id)textHighlightArray;
-(char)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(SCD_Struct_CM3)maximumForwardBufferDuration;
-(SCD_Struct_CM3)maximumTrailingBufferDuration;
-(double)preferredPeakBitRate;
-(char)startsOnFirstEligibleVariant;
-(unsigned)RTCReportingFlags;
-(id)gaplessInfo;
-(char)shouldOptimizeForExclusivePlayback;
-(char)reversesMoreVideoFramesInMemory;
-(char)reversesMoreVideoFramesInMemoryWasSet;
-(char)aggressivelyCachesVideoFrames;
-(char)aggressivelyCachesVideoFramesWasSet;
-(char)decodesAllFramesDuringOrdinaryPlayback;
-(char)decodesAllFramesDuringOrdinaryPlaybackWasSet;
-(char)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
-(char)usesIFrameOnlyPlaybackForHighRateScaledEdits;
-(SCD_Struct_CM3)minimumIntervalForIFrameOnlyPlayback;
-(char)minimumIntervalForIFrameOnlyPlaybackWasSet;
-(float)speedThresholdForIFrameOnlyPlayback;
-(char)speedThresholdForIFrameOnlyPlaybackWasSet;
-(id)initialDate;
-(id)initialEstimatedDate;
-(char)requiresAccessLog;
-(char)suppressesAudioOnlyVariants;
-(char)prefersOfflinePlayableVariants;
-(unsigned long long)variantPreferences;
-(double)preferredMaximumAudioSampleRate;
-(id)imageQueueInterpolationCurve;
-(char)imageQueueInterpolationCurveWasSet;
-(char)blendsVideoFrames;
-(char)blendsVideoFramesWasSet;
-(char)appliesPerFrameHDRDisplayMetadata;
-(char)appliesPerFrameHDRDisplayMetadataWasSet;
-(id)videoApertureMode;
-(char)usesMinimalLatencyForVideoCompositionRendering;
-(char)savesDownloadedDataToDiskWhenDone;
-(char)networkUsuallyExceedsMaxBitRate;
-(char)allowProgressiveSwitchUp;
-(char)allowProgressiveStartup;
-(char)allowProgressiveResume;
-(CGSize)IFramePrefetchTargetDimensions;
-(id<NSObject><NSCopying>)AVKitData;
-(CGSize)preferredMaximumResolution;
-(CGSize)preferredMinimumResolution;
-(char)canPlayFastForward;
-(char)canPlayFastReverse;
-(char)canPlayReverse;
-(char)canPlaySlowReverse;
-(char)canPlaySlowForward;
-(char)canStepForward;
-(char)canStepBackward;
-(char)restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(char)automaticallyHandlesInterstitialEvents;
-(id)seekableTimeRanges;
-(double)seekableTimeRangesLastModifiedTime;
-(id)loadedTimeRanges;
-(SCD_Struct_CM5)loopTimeRange;
-(id)currentMediaSelection;
-(id)currentStableVariantID;
-(id)timedMetadata;
-(char)audioSpatializationAllowedWasSet;
-(unsigned long long)allowedAudioSpatializationFormats;
-(char)allowedAudioSpatializationFormatsWasSet;
-(id)videoEnhancementMode;
-(char)isRenderingSpatialAudio;
-(id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
-(void)_setURL:(id)arg1 ;
-(void)_removeFAListeners;
-(void)_removeFoldedTBListeners;
-(void)_removeInterstitialEventCollector;
-(void)setAudioMix:(id)arg1 ;
-(void)setTextStyleRules:(id)arg1 ;
-(void)setTextHighlightArray:(id)arg1 ;
-(void)setRequiresAccessLog:(char)arg1 ;
-(void)setPrefersOfflinePlayableVariants:(char)arg1 ;
-(void)setForwardPlaybackEndTime:(SCD_Struct_CM3)arg1 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_CM3)arg1 ;
-(void)setAdvanceTimeForOverlappedPlayback:(SCD_Struct_CM3)arg1 ;
-(char)automaticallyPreservesTimeOffsetFromLive;
-(void)setAutomaticallyPreservesTimeOffsetFromLive:(char)arg1 ;
-(void)setConfiguredTimeOffsetFromLive:(SCD_Struct_CM3)arg1 ;
-(void)setImageQueueInterpolationCurve:(id)arg1 ;
-(void)setBlendsVideoFrames:(char)arg1 ;
-(void)setAppliesPerFrameHDRDisplayMetadata:(char)arg1 ;
-(void)setReversesMoreVideoFramesInMemory:(char)arg1 ;
-(void)setAggressivelyCachesVideoFrames:(char)arg1 ;
-(void)setDecodesAllFramesDuringOrdinaryPlayback:(char)arg1 ;
-(void)setLoudnessInfo:(id)arg1 ;
-(void)setAVKitData:(id<NSObject><NSCopying>)arg1 ;
-(char)continuesPlayingDuringPrerollForRateChange;
-(void)setContinuesPlayingDuringPrerollForRateChange:(char)arg1 ;
-(char)continuesPlayingDuringPrerollForSeek;
-(void)setContinuesPlayingDuringPrerollForSeek:(char)arg1 ;
-(void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(char)arg1 ;
-(void)setMinimumIntervalForIFrameOnlyPlayback:(SCD_Struct_CM3)arg1 ;
-(void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1 ;
-(char)isAudioSpatializationAllowed;
-(void)setAudioSpatializationAllowed:(char)arg1 ;
-(void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1 ;
-(void)setVariantPreferences:(unsigned long long)arg1 ;
-(void)setPreferredMaximumAudioSampleRate:(double)arg1 ;
-(char)isNonForcedSubtitleDisplayEnabled;
-(void)setNonForcedSubtitleDisplayEnabled:(char)arg1 ;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(void)setVideoEnhancementMode:(id)arg1 ;
-(void)setStartsOnFirstEligibleVariant:(char)arg1 ;
-(char)_isExternalProtectionRequiredForPlayback;
-(void)setSavesDownloadedDataToDiskWhenDone:(char)arg1 ;
-(void)_updateLoopTimeRangeOnFigPlaybackItem;
-(void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
-(void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
-(void)_updateAdvanceTimeForOverlappedPlaybackOnFigPlaybackItem;
-(void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
-(void)_updateBlendsVideoFramesOnFigPlaybackItem;
-(void)_updateAppliesPerFrameHDRDisplayMetadataOnFigPlaybackItem;
-(void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
-(void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
-(void)_updateDecodesAllFramesDuringOrdinaryPlaybackOnFigPlaybackItem;
-(void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
-(void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
-(void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
-(void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
-(void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
-(void)_updateAudioSpatializationAllowed;
-(void)_updateAllowedAudioSpatializationFormats;
-(void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
-(void)_updatePreservesTimeOffsetFromLive:(char)arg1 ;
-(void)_updateConfiguredTimeOffsetFromLiveOnFigPlaybackItem:(SCD_Struct_CM3)arg1 ;
-(void)_setVideoCompositionFrameDuration:(SCD_Struct_CM3)arg1 ;
-(void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)_setVideoCompositionRenderSize:(CGSize)arg1 ;
-(void)_setVideoCompositionRenderScale:(float)arg1 ;
-(void)_configureVideoCompositionColorProperties;
-(void)_setVideoCompositionInstructions:(id)arg1 ;
-(void)_setVideoCompositor:(void*)arg1 ;
-(void)_applyCurrentAudioMix;
-(void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
-(void)_updatePlaybackPropertiesOnFigPlaybackItem;
-(void)_quietlySetVariantIndex:(long long)arg1 ;
-(void)_updateLoudnessInfoOnFigPlaybackItem;
-(void)_updateAudioTapProcessorOnFigPlaybackItem;
-(void)_applyMediaSelectionOptions;
-(void)_updateTextStyleRulesOnFigPlaybackItem;
-(void)_updateTextHighlightArrayOnFigPlaybackItem;
-(void)_setSyncLayersOnFigPlaybackItem:(id)arg1 ;
-(void)_updateTimebase;
-(void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
-(void)_updatePreferredPeakBitRateOnFigPlaybackItem;
-(void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
-(void)_updatePreferredMinimumResolutionOnFigPlaybackItem;
-(void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
-(void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
-(void)_updateVideoApertureModeOnFigPlaybackItem;
-(void)_updateVariantPreferencesOnFigPlaybackItem;
-(void)_updatePreferredMaximumAudioSampleRateOnFigPlaybackItem;
-(void)_updateRTCReportingFlagsOnFigPlaybackItem;
-(id)_metadataCollectors;
-(void)_updateVideoEnhancementModeOnFigPlaybackItem;
-(void)_updateStartsOnFirstEligibleVariantOnFigPlaybackItem;
-(void)_updateShouldOptimizeForExclusivePlaybackOnFigPlaybackItem;
-(char)_configurePlaybackItemAndReturnError:(id*)arg1 ;
-(void)_updateLimitReadAheadOnFigPlaybackItem;
-(long long)playbackLikelyToKeepUpTrigger;
-(void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
-(char)willNeverSeekBackwardsHint;
-(void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
-(char)alwaysMonitorsPlayability;
-(void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
-(void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
-(void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
-(void)_updateRestrictsAutomaticMediaSelectionToAvailableOfflineOptions;
-(id)_cachedTracks;
-(void)_evaluateVideoOutputs;
-(void)_evaluateLegibleOutputs;
-(void)_evaluateMetadataOutputs;
-(void)_respondToBecomingReadyForBasicInspection;
-(void)_addInterstitialEventCollector;
-(void)_attachToFigPlayer;
-(void)_addFAListeners;
-(char)_isReadyForInspectionOfDuration;
-(void)_markAsReadyForInspectionOfDuration;
-(void)_markAsReadyForInspectionOfTracks;
-(void)_markFigAssetAsReadyForInspectionOfMediaSelectionOptions;
-(void)_informObserversAboutAvailabilityOfCurrentMediaSelection;
-(char)_isFigAssetReadyForInspectionOfMediaSelectionOptionsAndFigPlaybackItemIsReadyForInspection;
-(id)_figSelectedMediaArray;
-(id)_currentMediaSelectionFromFigSelectedMediaArray:(id)arg1 ;
-(void)_setCurrentMediaSelection:(id)arg1 ;
-(id)errorLog;
-(id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1 ;
-(char)_isReadyForInspectionOfTracks;
-(id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 ;
-(id)_tracksFromAssetTrackIDs;
-(OpaqueCMTimebaseRef)_copyFoldedTimebase;
-(void)_respondToBecomingReadyForBasicInspectionWithDuration:(SCD_Struct_CM3)arg1 ;
-(void)_informObserversAboutAvailabilityOfDuration:(SCD_Struct_CM3)arg1 ;
-(void)_markAsReadyForBasicInspection;
-(void)_markAsReadyForInspectionOfPresentationSize;
-(void)_kickAssetObserversIfAppropriate;
-(void)_informObserversAboutAvailabilityOfTracks:(id)arg1 ;
-(void)_informObserversAboutAvailabilityOfPresentationSize;
-(char)_isReadyForBasicInspection;
-(void)_invokeReadyForEnqueueingHandlers;
-(char)_canStepForward;
-(char)_isReadyForInspectionOfRecommendedTimeOffsetFromLive;
-(SCD_Struct_CM3)_currentTimeWithOptionalFoldedTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(int)_CreateSeekID;
-(int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(/*^block*/id)arg1 ;
-(void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(char)arg2 ;
-(OpaqueCMTimebaseRef)_copyProxyFoldedTimebase;
-(OpaqueCMTimebaseRef)_copyProxyUnfoldedTimebase;
-(void)_addFoldedTBListeners;
-(void)setMaximumForwardBufferDuration:(SCD_Struct_CM3)arg1 ;
-(void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2 ;
-(opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrackID:(int)arg2 ;
-(id)audioTimePitchAlgorithm;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2 ;
-(id)_copyStateDispatchQueue;
-(void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
-(id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1 ;
-(id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1 ;
-(id)_playbackProperties;
-(id)_mediaOptionsSelectedByClient;
-(void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(char)arg3 ;
-(void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2 ;
-(id)_mediaOptionsSelectedByClientForKey:(id)arg1 ;
-(id)_propertyListForMediaSelection:(id)arg1 forGroup:(id)arg2 ;
-(void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2 ;
-(void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2 ;
-(void)_selectMediaOption:(id)arg1 inGroup:(id)arg2 cacheIfAppropriate:(char)arg3 ;
-(void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(void)_clearCachedMediaSelectionGroup:(id)arg1 ;
-(id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(char)_hasSelectionInCachedMediaSelectionGroup:(id)arg1 ;
-(char)_isFigAssetReadyForInspectionOfMediaSelectionOptions;
-(char)_suppressionForOutputs:(id)arg1 ;
-(void)_setSuppressesVideoLayers:(char)arg1 ;
-(void)setPreferredPeakBitRate:(double)arg1 ;
-(void)setPreferredMaximumResolution:(CGSize)arg1 ;
-(id)_videoOutputs;
-(id)_legibleOutputsForKeys;
-(void)_updateVideoSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(void)_updateLegibleSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(void)addMediaDataCollector:(id)arg1 ;
-(void)removeMediaDataCollector:(id)arg1 ;
-(char)_canPlayFastForward;
-(char)_canPlayReverse;
-(char)_canPlayFastReverse;
-(char)_canStepBackward;
-(id)_playerConnection;
-(void)_markAsNeedingNewAssetWithFigPlaybackItem;
-(void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
-(void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
-(id)_trackWithTrackID:(int)arg1 ;
-(id)_enabledTrackFormatDescriptions;
-(char)_isAFileBasedItemThatsReadyToPlay;
-(SCD_Struct_CM3)_configuredTimeOffsetFromLive;
-(void)_markAsReadyForInspectionOfRecommendedTimeOffsetFromLive;
-(SCD_Struct_CM3)_recommendedTimeOffsetFromLive;
-(id)currentDate;
-(void)setInitialDate:(id)arg1 ;
-(id)currentEstimatedDate;
-(void)setInitialEstimatedDate:(id)arg1 ;
-(void)stepByCount:(long long)arg1 ;
-(OpaqueCMTimebaseRef)_copyUnfoldedFigTimebase;
-(OpaqueCMTimebaseRef)unfoldedTimebase;
-(void)setRTCReportingFlags:(unsigned)arg1 ;
-(char)allowsExtendedReadAhead;
-(void)setAllowsExtendedReadAhead:(char)arg1 ;
-(double)preferredForwardBufferDuration;
-(void)setPreferredForwardBufferDuration:(double)arg1 ;
-(void)setMaximumTrailingBufferDuration:(SCD_Struct_CM3)arg1 ;
-(void)setShouldOptimizeForExclusivePlayback:(char)arg1 ;
-(void)setAlwaysMonitorsPlayability:(char)arg1 ;
-(void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1 ;
-(void)setWillNeverSeekBackwardsHint:(char)arg1 ;
-(void)_setVideoCompositionColorPrimaries:(id)arg1 ;
-(void)_setVideoCompositionColorYCbCrMatrix:(id)arg1 ;
-(void)_setVideoCompositionColorTransferFunction:(id)arg1 ;
-(void)setSeekingWaitsForVideoCompositionRendering:(char)arg1 ;
-(void)setUsesMinimalLatencyForVideoCompositionRendering:(char)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(char)isPlaybackLikelyToKeepUp;
-(char)isPlaybackBufferFull;
-(char)isPlaybackBufferEmpty;
-(float)progressTowardsPlaybackLikelyToKeepUp;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(char)arg1 ;
-(id)playabilityMetrics;
-(void)setLoopTimeRange:(SCD_Struct_CM5)arg1 ;
-(id)_seekableTimeRanges;
-(id)_loadedTimeRanges;
-(void)setGaplessInfo:(id)arg1 ;
-(id)configurationGroup;
-(long long)variantIndex;
-(double)liveUpdateInterval;
-(void)setVariantIndex:(long long)arg1 ;
-(void)_removeMediaOptionsSelectedByClient;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(char)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1 ;
-(void)setRestrictsAutomaticMediaSelectionToAvailableOfflineOptions:(char)arg1 ;
-(char)_isNonForcedSubtitleDisplayEnabled;
-(OpaqueFigCPEProtectorRef)_figCPEProtector;
-(void)_removeSyncLayer:(id)arg1 ;
-(void)_addSyncLayer:(id)arg1 ;
-(id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)arg1 ;
-(char)_hasEnabledVideo;
-(char)_hasEnabledAudio;
-(void)setNetworkUsuallyExceedsMaxBitRate:(char)arg1 ;
-(void)setAllowProgressiveSwitchUp:(char)arg1 ;
-(void)setAllowProgressiveStartup:(char)arg1 ;
-(void)setAllowProgressiveResume:(char)arg1 ;
-(void)setIFramePrefetchTargetDimensions:(CGSize)arg1 ;
-(float)maximumBitRate;
-(void)setMaximumBitRate:(float)arg1 ;
-(CGSize)preferredPeakPresentationSize;
-(void)setPreferredPeakPresentationSize:(CGSize)arg1 ;
-(void)setPreferredMinimumResolution:(CGSize)arg1 ;
-(void)_renderingSuppressionDidChangeForOutput:(id)arg1 ;
-(void)setSuppressesAudioOnlyVariants:(char)arg1 ;
-(void)setVideoApertureMode:(id)arg1 ;
-(void)setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 ;
-(void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1 ;
-(char)isAuthorizationRequiredForPlayback;
-(char)isApplicationAuthorizedForPlayback;
-(char)isContentAuthorizedForPlayback;
-(void)requestContentAuthorizationAsynchronouslyWithTimeoutInterval:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelContentAuthorizationRequest;
-(long long)contentAuthorizationRequestStatus;
-(id)_isExternalProtectionRequiredForPlaybackInternal;
-(void)_setExternalProtectionRequiredForPlayback:(char)arg1 ;
-(NSString *)_applicationAuthorizationChallengeProvider;
-(id)_applicationAuthorizationChallenge;
-(void)_setApplicationAuthorizationChallengeResponse:(id)arg1 ;
-(char)_isRental;
-(NSDate *)_rentalStartDate;
-(NSDate *)_rentalExpirationDate;
-(char)_isRentalPlaybackStarted;
-(NSDate *)_rentalPlaybackStartedDate;
-(NSDate *)_rentalPlaybackExpirationDate;
-(id)accessLog;
-(id)_metadataOutputsForKeys;
-(void)_addVideoOutput:(id)arg1 ;
-(void)_addLegibleOutput:(id)arg1 ;
-(void)_addMetadataOutput:(id)arg1 ;
-(void)_removeVideoOutput:(id)arg1 ;
-(void)_removeLegibleOutput:(id)arg1 ;
-(void)_removeMetadataOutput:(id)arg1 ;
-(void)_addMetadataCollector:(id)arg1 ;
-(void)_removeMetadataCollector:(id)arg1 ;
-(NSArray *)mediaDataCollectors;
-(void)_updateTaggedMetadataArray:(id)arg1 ;
-(id)_legibleOutputForKey:(id)arg1 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(SCD_Struct_CM3)arg4 withLegibleOutputsDictionaryKey:(id)arg5 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2 ;
-(id)_metadataOutputForKey:(id)arg1 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2 ;
-(AVPlayerItem *)templatePlayerItem;
@end

