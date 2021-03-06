/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AFInstanceContext;

@interface AFPreferences : NSObject {

	char _registeredForInternalPrefs;
	char _registeredForLanguageCode;
	char _registeredForOutputVoice;
	char _registeredForNanoPrefs;
	NSObject*<OS_dispatch_queue> _navTokenQueue;
	char _navTokenIsValid;
	int _navToken;
	long long _tlsSessionTicketFlushRequestPending;
	AFInstanceContext* _instanceContext;

}
+(id)sharedPreferences;
+(id)sharedPreferencesWithInstanceContext:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)synchronize;
-(id)languageCode;
-(char)cloudSyncEnabled;
-(void)setLanguageCode:(id)arg1 ;
-(char)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(char)arg1 ;
-(char)applySASToFirstPartyDomains;
-(void)setApplySASToFirstPartyDomains:(char)arg1 ;
-(char)useSASAutoSelectionFeature;
-(void)setUseSASAutoSelectionFeature:(char)arg1 ;
-(char)assistantIsEnabled;
-(id)initWithInstanceContext:(id)arg1 ;
-(char)isLocaleIdentifierNativelySupported:(id)arg1 ;
-(id)outputVoice;
-(char)alwaysShowRecognizedSpeech;
-(char)siriResponseShouldAlwaysPrint;
-(char)alwaysObscureBackgroundContentWhenActive;
-(long long)useDeviceSpeakerForTTS;
-(id)bestSupportedLanguageCodeForLanguageCode:(id)arg1 ;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpokenNotificationTemporarilyDisabledUntil:(id)arg1 ;
-(void)clearSpokenNotificationTemporarilyDisabledStatus;
-(void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSpokenNotificationTemporarilyDisabledForApp:(id)arg1 until:(id)arg2 ;
-(void)getSpokenNotificationShouldAlwaysSpeakNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpokenNotificationShouldAlwaysSpeakNotifications:(char)arg1 ;
-(void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpokenNotificationShouldSkipTriggerlessReplies:(char)arg1 ;
-(void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSiriDataSharingOptInAlertPresented:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOnDeviceDictationAvailableAlertPresented:(char)arg1 ;
-(void)_registerForInternalPrefs;
-(long long)siriDataSharingOptInStatus;
-(char)dictationIsEnabled;
-(id)_languageCodeWithFallback:(char)arg1 ;
-(void)_registerForLanguageCodeChangeNotifications;
-(id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(char*)arg2 ;
-(id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(char*)arg2 ;
-(id)_languagePreferencesForCurrentSystemConfiguration;
-(char)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2 ;
-(id)_outputVoiceWithFallback:(char)arg1 ;
-(void)_registerForOutputVoice;
-(void)setOutputVoice:(id)arg1 ;
-(unsigned long long)currentNavigationState;
-(void)setCurrentNavigationState:(unsigned long long)arg1 ;
-(void)_registerForNavStatusIfNeeded;
-(void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(id)configOverrides;
-(void)setConfigOverrides:(id)arg1 ;
-(void)_registerForNanoPrefsChangeNotifications;
-(id)_nanoPreferencesValueForKey:(id)arg1 ;
-(void)_setNanoPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(void)_preferencesDidChangeExternally;
-(void)_internalPreferencesDidChangeExternally;
-(void)_languageCodeDidChangeExternally;
-(void)_outputVoiceDidChangeExternally;
-(void)_nanoPrefsDidChangeExternally;
-(void)synchronizeLogPreferencesDomain;
-(void)synchronizeAVVCPreferencesDomain;
-(id)dictationSLSLanguagesEnabled;
-(char)isSmartLanguageSelectionEnabled;
-(void)setSmartLanguageSelection:(char)arg1 ;
-(char)offlineDictationOverride;
-(void)setOfflineDictationOverride:(char)arg1 ;
-(id)offlineDictationStatus;
-(void)setOfflineDictationStatus:(id)arg1 ;
-(id)offlineDictationProfileOverridePath;
-(void)setOfflineDictationProfileOverridePath:(id)arg1 ;
-(void)_setAssistantIsEnabledLocal:(char)arg1 ;
-(void)_setDictationIsEnabledLocal:(char)arg1 ;
-(void)setAssistantIsEnabled:(char)arg1 ;
-(void)setDictationIsEnabled:(char)arg1 ;
-(char)onDeviceDictationAvailableAlertPresented;
-(void)_setOnDeviceDictationAvailableAlertPresentedLocal:(char)arg1 ;
-(char)forceOfflineRecognitionEnabled;
-(void)setForceOfflineRecognitionEnabled:(char)arg1 ;
-(char)utteranceDetectionEnabled;
-(void)setUtteranceDetectionEnabled:(char)arg1 ;
-(char)preferOnlineRecognitionEnabled;
-(void)setPreferOnlineRecognitionEnabled:(char)arg1 ;
-(void)setDictationSLSLanguagesEnabled:(id)arg1 ;
-(void)resetSessionLanguage;
-(char)isDictationHIPAACompliant;
-(char)isOnDeviceDictationForced;
-(char)soundAlertEnabled;
-(void)setSoundAlertEnabled:(char)arg1 ;
-(char)showServerOnUI;
-(void)setShowServerOnUI:(char)arg1 ;
-(char)debugButtonIsEnabled;
-(void)setDebugButtonIsEnabled:(char)arg1 ;
-(char)showsHoldToTalkIndicator;
-(void)setShowsHoldToTalkIndicator:(char)arg1 ;
-(char)suppressAssistantOptIn;
-(void)setSuppressAssistantOptIn:(char)arg1 ;
-(char)suppressDictationOptIn;
-(void)setSuppressDictationOptIn:(char)arg1 ;
-(void)_setSuppressDictationOptInLocal:(char)arg1 ;
-(char)alwaysAllowVoiceActivation;
-(void)setAlwaysAllowVoiceActivation:(char)arg1 ;
-(void)setSiriResponseShouldAlwaysPrint:(char)arg1 ;
-(void)setAlwaysObscureBackgroundContentWhenActive:(char)arg1 ;
-(void)setAlwaysShowRecognizedSpeech:(char)arg1 ;
-(char)crownActivationEnabled;
-(void)setCrownActivationEnabled:(char)arg1 ;
-(char)listenAfterSpeakingDisabled;
-(void)setListenAfterSpeakingDisabled:(char)arg1 ;
-(void)setCloudSyncEnabled:(char)arg1 ;
-(id)cloudSyncEnabledModificationDate;
-(void)setInternalUserClassification:(unsigned long long)arg1 ;
-(unsigned long long)internalUserClassification;
-(void)getSpokenNotificationTemporarilyDisabledStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)getSpokenNotificationTemporarilyDisabledForApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSpokenNotificationsProxCardSeen;
-(void)setSpokenNotificationSkipTriggerlessReplyConfirmation:(char)arg1 ;
-(char)spokenNotificationSkipTriggerlessReplyConfirmation;
-(char)designModeIsEnabled;
-(void)setDesignModeEnabled:(char)arg1 ;
-(char)shouldSuppressSiriDataSharingOptInAlert;
-(id)supplementalLanguageDictionaryForProduct:(id)arg1 ;
-(id)supplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 ;
-(id)supplementalLanguages;
-(id)supplementalLanguagesModificationDate;
-(id)horsemanSupplementalLanguageDictionary;
-(id)activitySummaryReportDate;
-(void)setActivitySummaryReportDateToNow;
-(char)ignoreServerManualEndpointingThreshold;
-(void)setIgnoreServerManualEndpointingThreshold:(char)arg1 ;
-(id)manualEndpointingThreshold;
-(void)setManualEndpointingThreshold:(id)arg1 ;
-(char)streamingDictationEnabled;
-(void)setStreamingDictationEnabled:(char)arg1 ;
-(char)companionConnectionsOverBLEEnabled;
-(void)setCompanionConnectionsOverBLEEnabled:(char)arg1 ;
-(char)myriadCoordinationEnabled;
-(void)setMyriadCoordinationEnabled:(char)arg1 ;
-(char)disableMyriadBLEActivity;
-(char)myriadDuckingEnabled;
-(void)setMyriadDuckingEnabled:(char)arg1 ;
-(id)myriadDeviceGroup;
-(void)setMyriadDeviceGroup:(id)arg1 ;
-(char)myriadServerHasProvisioned;
-(void)setMyriadServerHasProvisioned:(char)arg1 ;
-(char)myriadServerProvisioning;
-(void)setMyriadServerProvisioning:(char)arg1 ;
-(unsigned char)myriadDeviceClass;
-(void)setMyriadDeviceClass:(unsigned char)arg1 ;
-(int)myriadConstantGoodness;
-(void)setMyriadConstantGoodness:(int)arg1 ;
-(float)myriadDeviceAdjust;
-(void)setMyriadDeviceAdjust:(float)arg1 ;
-(double)myriadDeviceDelay;
-(void)setMyriadDeviceDelay:(double)arg1 ;
-(double)myriadTestDeviceDelay;
-(void)setMyriadTestDeviceDelay:(double)arg1 ;
-(double)myriadDeviceSlowdown;
-(void)setMyriadDeviceSlowdown:(double)arg1 ;
-(double)myriadDeviceTrumpDelay;
-(void)setMyriadDeviceTrumpDelay:(double)arg1 ;
-(id)myriadLastWin;
-(void)setMyriadLastWin;
-(double)myriadDeviceVTEndTimeDistanceThreshold;
-(void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)arg1 ;
-(char)myriadShouldIgnoreAdjustedBoost;
-(void)setIgnoreMyriadAdjustedBoost:(char)arg1 ;
-(char)ignoreMyriadPlatformBias;
-(void)setIgnoreMyriadPlatformBias:(char)arg1 ;
-(id)myriadMonitorTimeOutInterval;
-(double)opportuneSpeakingPauseInterval;
-(void)setOpportuneSpeakingPauseInterval:(double)arg1 ;
-(double)opportuneSpeakingTimeoutInterval;
-(void)setOpportuneSpeakingTimeoutInterval:(double)arg1 ;
-(char)limitedAudioLoggingEnabled;
-(void)setLimitedAudioLoggingEnabled:(char)arg1 ;
-(void)setDatabaseSyncEnabled:(char)arg1 ;
-(char)databaseSyncEnabled;
-(void)setSiriVocabularyEnabled:(char)arg1 ;
-(char)siriVocabularyEnabled;
-(char)includeProbePacketCaptureForABC;
-(double)autoDismissalIdleTimeout;
-(void)setAutoDismissalIdleTimeout:(double)arg1 ;
-(double)autoDismissalExtendedIdleTimeout;
-(void)setAutoDismissalExtendedIdleTimeout:(double)arg1 ;
-(double)autoDismissalMaxAttentionSamplingTime;
-(void)setAutoDismissalMaxAttentionSamplingTime:(double)arg1 ;
-(char)siriDebugUIEnabled;
-(void)setSiriDebugUIEnabled:(char)arg1 ;
-(char)siriSpeakerGradingDebugUIEnabled;
-(void)setSiriSpeakerGradingDebugUIEnabled:(char)arg1 ;
-(char)enableDragAndDrop;
-(void)setEnableDragAndDrop:(char)arg1 ;
-(char)enableNonFullScreenAppearance;
-(void)setEnableNonFullScreenAppearance:(char)arg1 ;
-(char)disableAssistantWhilePasscodeLocked;
-(void)setDisableAssistantWhilePasscodeLocked:(char)arg1 ;
-(char)assistantLanguageForceRTL;
-(void)setAssistantLanguageForceRTL:(char)arg1 ;
-(char)isCurrentLocaleNativelySupported;
-(id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(char*)arg2 ;
-(void)synchronizeVoiceServicesLanguageCode;
-(id)inProgressOutputVoice;
-(void)setInProgressOutputVoice:(id)arg1 ;
-(void)setLanguageCode:(id)arg1 outputVoice:(id)arg2 ;
-(void)setUseDeviceSpeakerForTTS:(long long)arg1 ;
-(void)setLanguageDetectorEnabled:(char)arg1 ;
-(char)isLanguageDetectorEnabled;
-(char)isLanguageDetectorEnabledByServer;
-(char)isDictationOnDeviceSamplingDisabled;
-(void)setKeepRecordedAudioFiles:(char)arg1 ;
-(char)keepRecordedAudioFiles;
-(void)setMediaPlaybackEnabled:(char)arg1 ;
-(char)mediaPlaybackEnabled;
-(id)valueForSessionContextPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forSessionContextKey:(id)arg2 ;
-(void)setTLSSessionTicketsFlushPending:(char)arg1 ;
-(char)tlsSessionTicketsFlushPending;
-(char)shouldLogForQA;
-(void)setCardLoggingEnabled:(char)arg1 ;
-(char)cardLoggingEnabled;
-(void)setCommandLoggingEnabled:(char)arg1 ;
-(char)commandLoggingEnabled;
-(void)setNetworkLoggingEnabled:(char)arg1 ;
-(char)networkLoggingEnabled;
-(void)setAVVCLoggingEnabled:(char)arg1 ;
-(char)avvcLoggingEnabled;
-(char)autoDismissal2018Enabled;
-(void)setAutoDismissal2018Enabled:(char)arg1 ;
-(char)dismissWhenFaceAttentionIsLostEnabled;
-(void)setDismissWhenFaceAttentionIsLostEnabled:(char)arg1 ;
-(char)dismissWhenDeviceIsLoweredEnabled;
-(void)setDismissWhenDeviceIsLoweredEnabled:(char)arg1 ;
-(double)handsOnIdleTimeInterval;
-(void)setHandsOnIdleTimeInterval:(double)arg1 ;
-(double)handsOffIdleTimeInterval;
-(void)setHandsOffIdleTimeInterval:(double)arg1 ;
-(void)setConfigOverrideWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeConfigOverrideForKey:(id)arg1 ;
-(char)nanoAssistantEnabled;
-(void)setNanoAssistantEnabled:(char)arg1 ;
-(char)nanoDictationEnabled;
-(void)setNanoDictationEnabled:(char)arg1 ;
-(void)setNanoLanguageCode:(id)arg1 outputVoice:(id)arg2 forTinkerDevice:(id)arg3 ;
-(char)nanoPhraseSpotterEnabled;
-(void)setNanoPhraseSpotterEnabled:(char)arg1 ;
-(char)nanoRaiseToSpeakEnabled;
-(void)setNanoRaiseToSpeakEnabled:(char)arg1 ;
-(long long)nanoUseDeviceSpeakerForTTS;
-(void)setNanoUseDeviceSpeakerForTTS:(long long)arg1 ;
-(float)nanoTTSSpeakerVolume;
-(void)setNanoTTSSpeakerVolume:(float)arg1 ;
-(id)nanoLanguageCode;
-(void)setNanoLanguageCode:(id)arg1 ;
-(id)nanoOutputVoice;
-(void)setNanoOutputVoice:(id)arg1 ;
-(char)nanoCrownActivationEnabled;
-(void)setNanoCrownActivationEnabled:(char)arg1 ;
-(long long)nanoSiriDataSharingOptInStatus;
-(void)setNanoSiriDataSharingOptInStatus:(long long)arg1 ;
-(id)nanoOfflineDictationStatus;
@end

