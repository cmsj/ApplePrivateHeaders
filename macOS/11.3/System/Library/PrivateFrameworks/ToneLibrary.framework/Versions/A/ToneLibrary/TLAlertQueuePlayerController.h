/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TLAlertPlaybackBackEndController.h>

@protocol OS_dispatch_queue, TLAlertPlaybackObserver;
@class NSObject, NSString, AVQueuePlayer, TLAlert, AVAsset;

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController> {

	NSObject*<OS_dispatch_queue> _audioEventQueue;
	NSString* _audioEventQueueLabel;
	char _isObservingQueuePlayer;
	AVQueuePlayer* _queuePlayer;
	TLAlert* _playingAlert;
	NSString* _playingToneIdentifier;
	/*^block*/id _playingAlertCompletionHandler;
	id<TLAlertPlaybackObserver> _playbackObserver;
	AVAsset* _toneAssetForPendingPlayingAlert;
	char _hasToneAssetForPendingPlayingAlert;
	char _isAudioEnvironmentSetup;
	char _isAlertActivationAssertionAcquired;
	TLAlert* _alertForAudioEnvironmentSetup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_propertyKeysOfInterestForToneAssets;
+(long long)_audioVolumeApplicationPolicyForAlert:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2 ;
-(void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(char)arg2 ;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_destroyQueuePlayer;
-(void)_performBlockOnAudioEventQueue:(/*^block*/id)arg1 ;
-(void)_updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2 ;
-(void)_handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(char)arg2 ;
-(void)_assertRunningOnAudioEventQueue;
-(void)_beginPreventingAudioSessionDeactivation;
-(void)_stopPlayback;
-(void)_didCompletePlaybackWithCompletionType:(long long)arg1 error:(id)arg2 ;
-(void)_reloadPlaybackForPlayingAlertWithToneIdentifier:(id)arg1 ;
-(void)_endPreventingAudioSessionDeactivation;
-(void)_stopPlaybackWithOptions:(id)arg1 playerWasAlreadyPausedExternally:(char)arg2 ;
-(void)_applyAudioVolume:(float)arg1 forAlert:(id)arg2 ;
-(void)_restoreAudioEnvironment;
-(void)_prepareAudioEnvironment;
-(void)_createQueuePlayerIfNecessary;
-(void)_startPlaybackForAssetWithLoadedProperties:(id)arg1 alert:(id)arg2 ;
-(id)_fallbackToneIdentifierForPlayingAlert;
-(char)_canPlayToneAsset:(id)arg1 ;
-(void)_startPlaybackForPlayingAlertUsingConfirmedPlayableAsset:(id)arg1 ;
-(void)_stopObservingQueuePlayer;
-(void)_willBeginPlayingAlert;
-(void)_startPlaybackForPlayingAlertUsingConfirmedPlayableAsset:(id)arg1 hasAlreadyDetectedUserAttention:(char)arg2 ;
-(id)_audioMixForVolumeRampingWithDuration:(double)arg1 toneAsset:(id)arg2 toneAssetDuration:(double)arg3 itemIndex:(unsigned long long)arg4 ;
-(void)_startObservingQueuePlayer;
-(void)_performDelayedAudioPlaybackInitiationForAlert:(id)arg1 ;
-(void)_didEndPlayingAlert;
-(float)_audioVolumeForAlert:(id)arg1 ;
-(void)_queuePlayer:(id)arg1 currentItemWasUpdatedFromValue:(id)arg2 ;
-(void)_queuePlayer:(id)arg1 currentItemStatusWasUpdatedToValue:(long long)arg2 ;
-(float)_adjustAudioVolumeForOptimalRampingPerception:(float)arg1 ;
-(void)_resetClientPriority;
@end
