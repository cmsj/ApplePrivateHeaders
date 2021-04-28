/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSResponder.h>
#import <AVKit/AVFunctionBarPlaybackControlsControlling.h>
#import <libobjc.A.dylib/NSUserInterfaceValidations.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class AVValueTiming, NSArray, AVFunctionBarMediaSelectionOption, NSURL, AVMediaSelectionOption, NSString, NSObject, AVFragmentedMovieMinder, BSSimpleAssertion, AVTimecodeController, AVPlayer, AVObservationController, AVAsset, AVAssetTrack, NSDictionary, AVPlayerLayer, NSDate, NSError;

@interface AVPlayerController : NSResponder <AVFunctionBarPlaybackControlsControlling, NSUserInterfaceValidations> {

	char _jKeyDown;
	char _kKeyDown;
	char _lKeyDown;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	AVMediaSelectionOption* _cachedSelectedAudioMediaSelectionOption;
	AVMediaSelectionOption* _cachedSelectedLegibleMediaSelectionOption;
	AVMediaSelectionOption* _cachedSelectedLegibleMediaSelectionOptionAccordingToAVFoundation;
	NSString* _lastKnownPersistedExtendedLanguageTag;
	float _rate;
	char _isResumed;
	NSObject*<OS_dispatch_source> _seekTimer;
	double _timeOfLastUpdate;
	char _playbackSuspended;
	char _dontScrubBecauseOfJump;
	double _deltaX;
	double _deltaY;
	double _eventBeginTime;
	double _momentumEndTime;
	double _rateAtEventBegan;
	NSObject*<OS_dispatch_queue> _seekQueue;
	char _ignoreRateKeyValueChange;
	void* _observationInfo;
	char _inspectionSuspended;
	id _updateAtMinMaxTimePeriodicObserverToken;
	id _timecodePeriodicObserverToken;
	/*^block*/id _listenerBlock;
	char _pictureInPictureInterrupted;
	char _handlesAudioSessionInterruptions;
	char _isDeallocating;
	/*^block*/id _retryPlayingImmediatelyBlock;
	char _shouldPlayImmediately;
	char _looping;
	long long _actionAtItemEnd;
	char _pendingSeek;
	SCD_Struct_AV19 _toleranceBefore;
	SCD_Struct_AV19 _toleranceAfter;
	char _isScanningForward;
	char _isScanningBackward;
	unsigned long long _scanningCount;
	double _preScanningRate;
	AVValueTiming* _liveStreamMinTiming;
	AVValueTiming* _liveStreamMaxTiming;
	char _liveStreamEventModePossible;
	long long _canUseNetworkResourcesForLiveStreamingWhilePausedCount;
	char _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;
	AVFragmentedMovieMinder* _fragmentedMovieMinder;
	char _shouldPlayWhenLikelyToKeepUp;
	char _forceScanning;
	double _rateBeforeForceScanning;
	char _playingOnSecondScreen;
	BSSimpleAssertion* _reduceResourceUsageAssertion;
	double _defaultPlaybackRate;
	char _touchBarRequiresLinearPlayback;
	AVTimecodeController* _timecodeController;
	char _atMaxTime;
	char _atMinTime;
	char _scrubbing;
	char _pictureInPictureSupported;
	char _seekingInternal;
	char _seeking;
	char _composable;
	char _hasProtectedContent;
	char _compatibleWithAirPlayVideo;
	char _preventingIdleSystemSleep;
	char _preventingIdleDisplaySleep;
	char _disablingAutomaticTermination;
	char _allowsPictureInPicturePlayback;
	char _pictureInPictureActive;
	char _canTogglePictureInPicture;
	char _hasBegunInspection;
	AVPlayer* _player;
	AVObservationController* _observationController;
	AVAsset* _currentAssetIfReady;
	NSObject*<OS_dispatch_queue> _assetInspectionQueue;
	AVAsset* _assetBeingPrepared;
	AVValueTiming* _timing;
	AVValueTiming* _minTiming;
	AVValueTiming* _maxTiming;
	AVAssetTrack* _currentAudioTrack;
	double _seekToTime;
	NSDictionary* _metadata;
	NSArray* _contentChapters;
	NSArray* _availableMetadataFormats;
	double _rateBeforeScrubBegan;
	AVPlayerLayer* _playerLayerForReducingResources;
	CGSize _presentationSize;
	SCD_Struct_AV19 _seekToTimeInternal;

}

@property (readonly) double contentDuration; 
@property (readonly) AVValueTiming * timing; 
@property (getter=isSeeking,readonly) char seeking; 
@property (readonly) double seekToTime; 
@property (readonly) char hasEnabledAudio; 
@property (readonly) char hasEnabledVideo; 
@property (getter=isPlaying) char playing; 
@property (readonly) char canTogglePlayback; 
@property (readonly) NSArray * seekableTimeRanges; 
@property (readonly) NSArray * audioFunctionBarMediaSelectionOptions; 
@property (retain) AVFunctionBarMediaSelectionOption * currentAudioFunctionBarMediaSelectionOption; 
@property (readonly) NSArray * legibleFunctionBarMediaSelectionOptions; 
@property (retain) AVFunctionBarMediaSelectionOption * currentLegibleFunctionBarMediaSelectionOption; 
@property (readonly) char canBeginFunctionBarScrubbing; 
@property (readonly) NSURL * assetURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPlayingOnSecondScreen) char playingOnSecondScreen; 
@property (readonly) CGSize maximumVideoResolution; 
@property (assign) char handlesAudioSessionInterruptions; 
@property (readonly) AVTimecodeController * timecodeController; 
@property (readonly) char hasReadableTimecodes; 
@property (getter=isAtMaxTime) char atMaxTime;                                                                     //@synthesize atMaxTime=_atMaxTime - In the implementation block
@property (getter=isAtMinTime) char atMinTime;                                                                     //@synthesize atMinTime=_atMinTime - In the implementation block
@property (getter=isScrubbing) char scrubbing;                                                                     //@synthesize scrubbing=_scrubbing - In the implementation block
@property (retain) AVPlayer * player;                                                                              //@synthesize player=_player - In the implementation block
@property (readonly) AVObservationController * observationController;                                              //@synthesize observationController=_observationController - In the implementation block
@property (assign) CGSize presentationSize;                                                                        //@synthesize presentationSize=_presentationSize - In the implementation block
@property (retain) AVAsset * currentAssetIfReady;                                                                  //@synthesize currentAssetIfReady=_currentAssetIfReady - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> assetInspectionQueue;                                              //@synthesize assetInspectionQueue=_assetInspectionQueue - In the implementation block
@property (retain) AVAsset * assetBeingPrepared;                                                                   //@synthesize assetBeingPrepared=_assetBeingPrepared - In the implementation block
@property (getter=isPictureInPictureSupported) char pictureInPictureSupported;                                     //@synthesize pictureInPictureSupported=_pictureInPictureSupported - In the implementation block
@property (getter=isReadyToPlay,readonly) char readyToPlay; 
@property (retain) AVValueTiming * timing;                                                                         //@synthesize timing=_timing - In the implementation block
@property (retain) AVValueTiming * minTiming;                                                                      //@synthesize minTiming=_minTiming - In the implementation block
@property (retain) AVValueTiming * maxTiming;                                                                      //@synthesize maxTiming=_maxTiming - In the implementation block
@property (retain) AVAssetTrack * currentAudioTrack;                                                               //@synthesize currentAudioTrack=_currentAudioTrack - In the implementation block
@property (getter=isSeekingInternal) char seekingInternal;                                                         //@synthesize seekingInternal=_seekingInternal - In the implementation block
@property (getter=isSeeking) char seeking;                                                                         //@synthesize seeking=_seeking - In the implementation block
@property (assign) SCD_Struct_AV19 seekToTimeInternal;                                                             //@synthesize seekToTimeInternal=_seekToTimeInternal - In the implementation block
@property (assign) double seekToTime;                                                                              //@synthesize seekToTime=_seekToTime - In the implementation block
@property (retain) NSDictionary * metadata;                                                                        //@synthesize metadata=_metadata - In the implementation block
@property (retain) NSArray * contentChapters;                                                                      //@synthesize contentChapters=_contentChapters - In the implementation block
@property (getter=isComposable) char composable;                                                                   //@synthesize composable=_composable - In the implementation block
@property (assign) char hasProtectedContent;                                                                       //@synthesize hasProtectedContent=_hasProtectedContent - In the implementation block
@property (retain) NSArray * availableMetadataFormats;                                                             //@synthesize availableMetadataFormats=_availableMetadataFormats - In the implementation block
@property (getter=isCompatibleWithAirPlayVideo) char compatibleWithAirPlayVideo;                                   //@synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo - In the implementation block
@property (assign) double rateBeforeScrubBegan;                                                                    //@synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan - In the implementation block
@property (getter=isPreventingIdleSystemSleep) char preventingIdleSystemSleep;                                     //@synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep - In the implementation block
@property (getter=isPreventingIdleDisplaySleep) char preventingIdleDisplaySleep;                                   //@synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep - In the implementation block
@property (getter=isDisablingAutomaticTermination) char disablingAutomaticTermination;                             //@synthesize disablingAutomaticTermination=_disablingAutomaticTermination - In the implementation block
@property (assign,nonatomic) char allowsPictureInPicturePlayback;                                                  //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (assign,getter=isPictureInPictureActive,nonatomic) char pictureInPictureActive;                          //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (assign,nonatomic) char canTogglePictureInPicture;                                                       //@synthesize canTogglePictureInPicture=_canTogglePictureInPicture - In the implementation block
@property (assign,nonatomic) char hasBegunInspection;                                                              //@synthesize hasBegunInspection=_hasBegunInspection - In the implementation block
@property (retain) BSSimpleAssertion * reduceResourceUsageAssertion; 
@property (__weak) AVPlayerLayer * playerLayerForReducingResources;                                                //@synthesize playerLayerForReducingResources=_playerLayerForReducingResources - In the implementation block
@property (readonly) NSObject*<OS_dispatch_source> seekTimer; 
@property (readonly) NSDate * currentDate; 
@property (readonly) NSDate * currentOrEstimatedDate; 
@property (assign) double defaultPlaybackRate; 
@property (assign) char touchBarRequiresLinearPlayback; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(void)initialize;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCompletelySeekable;
+(id)keyPathsForValuesAffectingCurrentAudioTouchBarMediaSelectionOption;
+(id)keyPathsForValuesAffectingCurrentLegibleTouchBarMediaSelectionOption;
+(id)keyPathsForValuesAffectingHasTouchBarMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioTouchBarMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleTouchBarMediaSelectionOptions;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingHasEnabledAudio;
+(id)keyPathsForValuesAffectingHasEnabledVideo;
+(id)keyPathsForValuesAffectingCurrentAudioFunctionBarMediaSelectionOption;
+(id)keyPathsForValuesAffectingCurrentLegibleFunctionBarMediaSelectionOption;
+(id)keyPathsForValuesAffectingHasFunctionBarMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleFunctionBarMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioFunctionBarMediaSelectionOptions;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingReadyToPlay;
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingHasContent;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingReversePlaybackEndTime;
+(id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+(id)keyPathsForValuesAffectingLoadedTimeRanges;
+(id)keyPathsForValuesAffectingHasVideo;
+(id)keyPathsForValuesAffectingHasContentChapters;
+(id)keyPathsForValuesAffectingStreaming;
+(id)keyPathsForValuesAffectingHasTrimmableContent;
+(id)keyPathsForValuesAffectingHasShareableContent;
+(id)keyPathsForValuesAffectingTimeControlStatus;
+(id)keyPathsForValuesAffectingCanSeek;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingCanSeekChapterForward;
+(id)keyPathsForValuesAffectingCanSeekChapterBackward;
+(id)keyPathsForValuesAffectingAllowsExternalPlayback;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingExternalPlaybackType;
+(id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingUsesExternalPlaybackWhileExternalScreenIsActive;
+(id)keyPathsForValuesAffectingMaximumVideoResolution;
-(void)dealloc;
-(id)init;
-(void)setObservationInfo:(void*)arg1 ;
-(NSError *)error;
-(double)volume;
-(long long)status;
-(void*)observationInfo;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(char)hasContent;
-(void)swipeWithEvent:(id)arg1 ;
-(char)isPlaying;
-(double)currentTime;
-(void)setVolume:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(CGSize)presentationSize;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setMuted:(char)arg1 ;
-(AVValueTiming *)timing;
-(char)hasVideo;
-(char)isMuted;
-(char)isStreaming;
-(AVPlayer *)player;
-(CGSize)maximumVideoResolution;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(NSArray *)availableMetadataFormats;
-(char)hasProtectedContent;
-(char)isComposable;
-(char)isCompatibleWithAirPlayVideo;
-(float)nominalFrameRate;
-(char)allowsExternalPlayback;
-(char)usesExternalPlaybackWhileExternalScreenIsActive;
-(long long)timeControlStatus;
-(void)setAllowsExternalPlayback:(char)arg1 ;
-(char)isExternalPlaybackActive;
-(void)seekToTime:(double)arg1 ;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(long long)externalPlaybackType;
-(SCD_Struct_AV19)forwardPlaybackEndTime;
-(SCD_Struct_AV19)reversePlaybackEndTime;
-(char)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(NSArray *)seekableTimeRanges;
-(id)loadedTimeRanges;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV19)arg1 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV19)arg1 ;
-(NSDate *)currentDate;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(char)arg1 ;
-(id)_queuePlayer;
-(id)audioOptions;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(AVAssetTrack *)currentAudioTrack;
-(void)setCurrentAudioTrack:(AVAssetTrack *)arg1 ;
-(double)defaultPlaybackRate;
-(void)setDefaultPlaybackRate:(double)arg1 ;
-(void)pause:(id)arg1 ;
-(void)play:(id)arg1 ;
-(char)canPause;
-(char)canSeek;
-(char)isLooping;
-(id)initWithPlayer:(id)arg1 ;
-(char)isScrubbing;
-(double)contentDuration;
-(void)setAudioMediaSelectionOptions:(id)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 ;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(void)setPlaying:(char)arg1 ;
-(void)setCanTogglePictureInPicture:(char)arg1 ;
-(void)togglePlayback:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(char)hasSeekableLiveStreamingContent;
-(AVValueTiming *)maxTiming;
-(AVValueTiming *)minTiming;
-(char)canPlay;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(char)hasAudioMediaSelectionOptions;
-(char)hasLegibleMediaSelectionOptions;
-(id)audioMediaSelectionOptions;
-(id)legibleMediaSelectionOptions;
-(char)isPlayingOnSecondScreen;
-(void)updateMinMaxTiming;
-(char)hasLiveStreamingContent;
-(double)minTime;
-(double)maxTime;
-(void)setMinTiming:(AVValueTiming *)arg1 ;
-(void)setMaxTiming:(AVValueTiming *)arg1 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(char)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(char)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(char)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(char)canSeekFrameBackward;
-(char)canSeekFrameForward;
-(char)hasMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(id)currentLegibleMediaSelectionOption;
-(char)isPlayingOnExternalScreen;
-(char)isPictureInPicturePossible;
-(char)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(char)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(char)canScanBackward;
-(char)hasContentChapters;
-(char)canTogglePlayback;
-(CGSize)contentDimensions;
-(double)contentDurationWithinEndTimes;
-(void)setPlayingOnSecondScreen:(char)arg1 ;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
-(void)setPictureInPictureActive:(char)arg1 ;
-(void)setCurrentAudioTouchBarMediaSelectionOption:(id)arg1 ;
-(void)setCurrentLegibleTouchBarMediaSelectionOption:(id)arg1 ;
-(char)isSeeking;
-(double)seekToTime;
-(void)beginTouchBarScrubbing;
-(void)endTouchBarScrubbing;
-(void)controlsViewWillAppear;
-(void)controlsViewDidDisappear;
-(char)allowsPictureInPicturePlayback;
-(char)isPictureInPictureActive;
-(char)canTogglePictureInPicture;
-(id)audioTouchBarMediaSelectionOptions;
-(id)currentAudioTouchBarMediaSelectionOption;
-(id)legibleTouchBarMediaSelectionOptions;
-(id)currentLegibleTouchBarMediaSelectionOption;
-(char)canBeginTouchBarScrubbing;
-(void)setSeekToTime:(double)arg1 ;
-(void)setAllowsPictureInPicturePlayback:(char)arg1 ;
-(char)hasTouchBarMediaSelectionOptions;
-(char)hasAudioTouchBarMediaSelectionOptions;
-(char)hasLegibleTouchBarMediaSelectionOptions;
-(void)togglePictureInPicture:(id)arg1 ;
-(void)scanForward:(id)arg1 ;
-(void)scanBackward:(id)arg1 ;
-(void)generateTouchBarThumbnailsForTimes:(id)arg1 tolerance:(double)arg2 size:(CGSize)arg3 requestType:(long long)arg4 thumbnailHandler:(/*^block*/id)arg5 ;
-(void)cancelThumbnailGenerationForRequestType:(long long)arg1 ;
-(id)audioWaveform;
-(char)isCompletelySeekable;
-(void)setMinTime:(double)arg1 ;
-(id)touchBarThumbnailGenerator;
-(char)isTouchBarThumbnailGeneratorLoaded;
-(long long)_typeForMediaSelectionOption:(id)arg1 ;
-(AVObservationController *)observationController;
-(char)hasFunctionBarMediaSelectionOptions;
-(char)hasAudioFunctionBarMediaSelectionOptions;
-(NSArray *)audioFunctionBarMediaSelectionOptions;
-(AVFunctionBarMediaSelectionOption *)currentAudioFunctionBarMediaSelectionOption;
-(void)setCurrentAudioFunctionBarMediaSelectionOption:(AVFunctionBarMediaSelectionOption *)arg1 ;
-(char)hasLegibleFunctionBarMediaSelectionOptions;
-(NSArray *)legibleFunctionBarMediaSelectionOptions;
-(AVFunctionBarMediaSelectionOption *)currentLegibleFunctionBarMediaSelectionOption;
-(void)setCurrentLegibleFunctionBarMediaSelectionOption:(AVFunctionBarMediaSelectionOption *)arg1 ;
-(void)beginFunctionBarScrubbing;
-(void)endFunctionBarScrubbing;
-(char)canBeginFunctionBarScrubbing;
-(void)generateFunctionBarThumbnailsForTimes:(id)arg1 size:(CGSize)arg2 requestType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)generateFunctionBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelThumbnailAndAudioAmplitudeSampleGenerationForRequestTypeLegacy:(long long)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(char)isPictureInPictureSupported;
-(char)isFunctionBarThumbnailGeneratorLoaded;
-(id)functionBarThumbnailGenerator;
-(void)setLegibleMediaSelectionOptions:(id)arg1 audioMediaSelectionOptions:(id)arg2 assumeMediaOptionMayHaveChanged:(char)arg3 ;
-(id)_optionsForGroup:(id)arg1 ;
-(void)_performAutomaticMediaSelectionForUserCaptionDisplayType:(long long)arg1 ;
-(id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
-(void)selectedMediaOptionMayHaveChanged;
-(void)reloadOptions;
-(void)reloadOptionsAndCurrentSelections;
-(void)reloadAudioOptions;
-(void)reloadLegibleOptions;
-(void)selectedMediaOptionMayHaveChanged:(char)arg1 ;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1 ;
-(void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2 ;
-(char)_mediaSelectionCriteriaCanBeAppliedAutomaticallyToLegibleMediaSelectionGroup;
-(void)_disableLegibleMediaSelectionOptions:(id)arg1 ;
-(void)_enableAutoMediaSelection:(id)arg1 ;
-(void)_ensureUserCaptionDisplayType:(long long)arg1 ;
-(void)reloadOptionsAssumingMediaOptionsMayHaveChanged:(char)arg1 ;
-(id)legibleOptions;
-(id)_timecodeTrack;
-(id)maxFrameCountString;
-(void)startInspectionIfNeeded;
-(void)startKVO;
-(char)isReadyToPlay;
-(void)_observeValueForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(void)_retryPlayImmediatelyIfNeeded;
-(char)canPlayImmediately;
-(NSObject*<OS_dispatch_source>)seekTimer;
-(void)_handleSeekTimerEvent;
-(void)autoplay:(id)arg1 ;
-(char)touchBarRequiresLinearPlayback;
-(void)setTouchBarRequiresLinearPlayback:(char)arg1 ;
-(void)setLooping:(char)arg1 ;
-(void)updateAtMinMaxTime;
-(void)increaseVolume:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(char)isInspectionSuspended;
-(void)setInspectionSuspended:(char)arg1 ;
-(void)_setMinTiming:(id)arg1 maxTiming:(id)arg2 ;
-(NSDate *)currentOrEstimatedDate;
-(char)hasTrimmableContent;
-(char)hasShareableContent;
-(char)_assetIsRestrictedFromSaving:(id)arg1 ;
-(char)_assetIsMarkedNotSerializable:(id)arg1 ;
-(char)_assetContainsProResRaw:(id)arg1 ;
-(void)_updateCurrentAudioTrackIfNeeded;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)seekToCMTime:(SCD_Struct_AV19)arg1 toleranceBefore:(SCD_Struct_AV19)arg2 toleranceAfter:(SCD_Struct_AV19)arg3 ;
-(void)throttledSeekToTime:(SCD_Struct_AV19)arg1 toleranceBefore:(SCD_Struct_AV19)arg2 toleranceAfter:(SCD_Struct_AV19)arg3 ;
-(void)actuallySeekToTime;
-(void)_updateScanningForwardRate;
-(void)_updateScanningBackwardRate;
-(void)seekFrameForward:(id)arg1 ;
-(void)seekFrameBackward:(id)arg1 ;
-(void)seekOrStepByFrameCount:(long long)arg1 ;
-(void)seekToChapter:(id)arg1 ;
-(char)canSeekChapterForward;
-(char)canSeekChapterBackward;
-(void)updateTiming;
-(void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg1 ;
-(void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg1 ;
-(void)acquireResourceReductionAssertion;
-(void)setReduceResourceUsageAssertion:(BSSimpleAssertion *)arg1 ;
-(BSSimpleAssertion *)reduceResourceUsageAssertion;
-(char)isReducingResourcesForPictureInPicture;
-(void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)_cancelPendingSeeksIfNeeded;
-(void)_updateRateForScrubbingAndSeeking;
-(id)scanningDelays;
-(void)_prepareAssetForInspectionIfNeeded;
-(char)isAtMaxTime;
-(void)setAtMaxTime:(char)arg1 ;
-(char)isAtMinTime;
-(void)setAtMinTime:(char)arg1 ;
-(void)setScrubbing:(char)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(AVAsset *)currentAssetIfReady;
-(void)setCurrentAssetIfReady:(AVAsset *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetInspectionQueue;
-(void)setAssetInspectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AVAsset *)assetBeingPrepared;
-(void)setAssetBeingPrepared:(AVAsset *)arg1 ;
-(void)setPictureInPictureSupported:(char)arg1 ;
-(char)isSeekingInternal;
-(void)setSeekingInternal:(char)arg1 ;
-(void)setSeeking:(char)arg1 ;
-(SCD_Struct_AV19)seekToTimeInternal;
-(void)setSeekToTimeInternal:(SCD_Struct_AV19)arg1 ;
-(NSArray *)contentChapters;
-(void)setContentChapters:(NSArray *)arg1 ;
-(void)setComposable:(char)arg1 ;
-(void)setHasProtectedContent:(char)arg1 ;
-(void)setAvailableMetadataFormats:(NSArray *)arg1 ;
-(void)setCompatibleWithAirPlayVideo:(char)arg1 ;
-(double)rateBeforeScrubBegan;
-(void)setRateBeforeScrubBegan:(double)arg1 ;
-(char)isPreventingIdleSystemSleep;
-(void)setPreventingIdleSystemSleep:(char)arg1 ;
-(char)isPreventingIdleDisplaySleep;
-(void)setPreventingIdleDisplaySleep:(char)arg1 ;
-(char)isDisablingAutomaticTermination;
-(void)setDisablingAutomaticTermination:(char)arg1 ;
-(char)hasBegunInspection;
-(void)setHasBegunInspection:(char)arg1 ;
-(AVPlayerLayer *)playerLayerForReducingResources;
-(void)setPlayerLayerForReducingResources:(AVPlayerLayer *)arg1 ;
-(void)stopGeneratingTimecodes;
-(char)handlesAudioSessionInterruptions;
-(void)setHandlesAudioSessionInterruptions:(char)arg1 ;
-(char)hasTimecodes;
-(id)loadTimecodeControllerIfNeeded;
-(AVTimecodeController *)timecodeController;
-(long long)frameNumberForCurrentTime;
-(char)hasReadableTimecodes;
-(double)timecodeObservationInterval;
-(char)startGeneratingTimecodesUsingBlock:(/*^block*/id)arg1 ;
-(void)seekToTimecode:(id)arg1 ;
-(void)seekToFrame:(long long)arg1 ;
-(id)timecodeForCurrentTime;
-(id)maxTimecode;
-(char)_shouldHandleSwipeWithEvent:(id)arg1 ;
-(char)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(char)arg3 ;
-(long long)_handleJKLWithEvent:(id)arg1 ;
-(char)_shouldHandleScrollWheelWithEvent:(id)arg1 ;
@end
