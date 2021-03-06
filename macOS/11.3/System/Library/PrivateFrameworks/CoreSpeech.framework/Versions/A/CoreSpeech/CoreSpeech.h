#import <CoreSpeech/CSGestureMonitor.h>
#import <CoreSpeech/CSBluetoothWirelessSplitterInfo.h>
#import <CoreSpeech/CSAudioInjectionBuiltInEngine.h>
#import <CoreSpeech/CSVoiceTriggerAOPModeEnabledPolicyMac.h>
#import <CoreSpeech/NviDataLogger.h>
#import <CoreSpeech/CSVoiceTriggerAssetHandler.h>
#import <CoreSpeech/CSAudioSessionController.h>
#import <CoreSpeech/CSSiriDebugConnection.h>
#import <CoreSpeech/CSPhoneCallStateMonitor.h>
#import <CoreSpeech/CSCommandControlListenerOption.h>
#import <CoreSpeech/CSMediaPlayingMonitor.h>
#import <CoreSpeech/CSAudioInjectionFileOption.h>
#import <CoreSpeech/CSMSNExceptionManager.h>
#import <CoreSpeech/CSVolumeMonitor.h>
#import <CoreSpeech/CSTimerMonitor.h>
#import <CoreSpeech/CSAlarmMonitor.h>
#import <CoreSpeech/CSAudioStreamHolding.h>
#import <CoreSpeech/CSAssetManagerEnablePolicyFactory.h>
#import <CoreSpeech/CSBiometricMatchMonitor.h>
#import <CoreSpeech/CSAudioInjectionHearstEngine.h>
#import <CoreSpeech/CSAudioZeroCounter.h>
#import <CoreSpeech/CSAudioDeviceInfo.h>
#import <CoreSpeech/CSVoiceTriggerXPCService.h>
#import <CoreSpeech/CSAudioFileManager.h>
#import <CoreSpeech/CSVoiceTriggerAssetDownloadMonitor.h>
#import <CoreSpeech/CSAudioPreprocessor.h>
#import <CoreSpeech/CSAssetDownloadingOption.h>
#import <CoreSpeech/CSBluetoothManager.h>
#import <CoreSpeech/CSSiriAssertionMonitor.h>
#import <CoreSpeech/CSSpeakerRecognitionAssetDownloadMonitor.h>
#import <CoreSpeech/CSPowerAssertionMac.h>
#import <CoreSpeech/CSContinuousVoiceTrigger.h>
#import <CoreSpeech/CSAdBlockerAssetDownloadMonitor.h>
#import <CoreSpeech/CSHearstSecondPassRequest.h>
#import <CoreSpeech/CSVoiceTriggerFirstPassHearst.h>
#import <CoreSpeech/CSAudioRouteChangeMonitorImplWatch.h>
#import <CoreSpeech/CSAudioSampleRateConverter.h>
#import <CoreSpeech/CSLanguageDetectorAssetMonitor.h>
#import <CoreSpeech/CSSmartSiriVolumeClient.h>
#import <CoreSpeech/CSAudioInjectionProvider.h>
#import <CoreSpeech/CSOpportuneSpeakListener.h>
#import <CoreSpeech/CSVoiceIdXPCClient.h>
#import <CoreSpeech/CSVoiceTriggerFirstPassJarvis.h>
#import <CoreSpeech/CSSelfTriggerDetectorEnabledPolicyGibraltar.h>
#import <CoreSpeech/CSVoiceTriggerHeartBeatMetricsProvider.h>
#import <CoreSpeech/CSNNVADEndpointAnalyzer.h>
#import <CoreSpeech/CSBuiltInVoiceTriggerEnabledPolicy.h>
#import <CoreSpeech/CSActivationXPCClient.h>
#import <CoreSpeech/CSLanguageDetector.h>
#import <CoreSpeech/CSAudioRecordContext.h>
#import <CoreSpeech/CSStopRecordingOptions.h>
#import <CoreSpeech/CSMacWakeSleepMonitor.h>
#import <CoreSpeech/CSMyriadSelfTriggerCoordinator.h>
#import <CoreSpeech/CSCommandControlStreamEventMonitor.h>
#import <CoreSpeech/CSSelfTriggerDetectorEnabledPolicyFactory.h>
#import <CoreSpeech/CSAVVCRecordingClientMonitor.h>
#import <CoreSpeech/CSSelectiveChannelAudioFileWriter.h>
#import <CoreSpeech/CSAudioSessionMonitor.h>
#import <CoreSpeech/CSCoreSpeechServices.h>
#import <CoreSpeech/CSSelfTriggerDetectorEnabledPolicyMac.h>
#import <CoreSpeech/CSOpportuneSpeakListenerDeviceManager.h>
#import <CoreSpeech/CSAVVoiceTriggerClientManager.h>
#import <CoreSpeech/CSSpeechManager.h>
#import <CoreSpeech/CSSpeechEndHostTimeEstimator.h>
#import <CoreSpeech/CSClamshellStateMonitor.h>
#import <CoreSpeech/CSCommandControlListener.h>
#import <CoreSpeech/CSAssetManager.h>
#import <CoreSpeech/NviDirectionalitySignalProvider.h>
#import <CoreSpeech/CSAudioRecorderFactory.h>
#import <CoreSpeech/CSKeywordAnalyzerNDEAPIResult.h>
#import <CoreSpeech/CSKeywordAnalyzerNDEAPI.h>
#import <CoreSpeech/CSSpeechController.h>
#import <CoreSpeech/SpeechModelTrainingClient.h>
#import <CoreSpeech/CSRemoteAssetManager.h>
#import <CoreSpeech/CSPreferences.h>
#import <CoreSpeech/NviSignalProvidersController.h>
#import <CoreSpeech/CSVoiceTriggerFirstPassHearstAP.h>
#import <CoreSpeech/CSXPCClient.h>
#import <CoreSpeech/CSStateMachine.h>
#import <CoreSpeech/CSPlainAudioFileWriter.h>
#import <CoreSpeech/CSEventMonitor.h>
#import <CoreSpeech/CSSmartSiriVolumeManager.h>
#import <CoreSpeech/CSVoiceTriggerDataCollector.h>
#import <CoreSpeech/CSAudioFileLog.h>
#import <CoreSpeech/CSVoiceTriggerFileLogger.h>
#import <CoreSpeech/CSAudioStreamRequest.h>
#import <CoreSpeech/CSActivationEvent.h>
#import <CoreSpeech/CSScreenLockMonitor.h>
#import <CoreSpeech/CSAssetController.h>
#import <CoreSpeech/CSSyncKeywordAnalyzerQuasar.h>
#import <CoreSpeech/CSAudioInjectionTvRemoteEngine.h>
#import <CoreSpeech/CSSiriLauncher.h>
#import <CoreSpeech/CSAudioRouteChangeMonitor.h>
#import <CoreSpeech/CSSmartSiriVolumeEnablePolicy.h>
#import <CoreSpeech/CSAudioInjectionEngine.h>
#import <CoreSpeech/CSVoiceTriggerAssetChangeMonitor.h>
#import <CoreSpeech/NviAudioFileWriter.h>
#import <CoreSpeech/CSAcousticSLProxy.h>
#import <CoreSpeech/CSBluetoothWirelessSplitterMonitor.h>
#import <CoreSpeech/CSSiriClientBehaviorMonitor.h>
#import <CoreSpeech/CSSpeechEndpointAssetMetaUpdateMonitor.h>
#import <CoreSpeech/CSSmartSiriVolumeEstimate.h>
#import <CoreSpeech/CSVoiceTriggerAssetHandlerMac.h>
#import <CoreSpeech/CSVoiceTriggerAOPModeEnabledPolicyIOS.h>
#import <CoreSpeech/CSVoiceTriggerStatAggregator.h>
#import <CoreSpeech/CSOpportuneSpeakBehaviorMonitor.h>
#import <CoreSpeech/CSMyriadPHash.h>
#import <CoreSpeech/NviConstants.h>
#import <CoreSpeech/CSAudioRouteChangeMonitorImplMac.h>
#import <CoreSpeech/NviUtils.h>
#import <CoreSpeech/CSVoiceTriggerFidesClient.h>
#import <CoreSpeech/CSHostPowerSourceMonitor.h>
#import <CoreSpeech/CSAudioStartStreamOption.h>
#import <CoreSpeech/CSAssetControllerFactory.h>
#import <CoreSpeech/CSVoiceTriggerXPCServiceProxy.h>
#import <CoreSpeech/CSAdBlockerAssetDecoderV2.h>
#import <CoreSpeech/CSSmartSiriVolumeController.h>
#import <CoreSpeech/CSBluetoothDeviceInfo.h>
#import <CoreSpeech/CSP2PService.h>
#import <CoreSpeech/CSVoiceTriggerAwareZeroFilter.h>
#import <CoreSpeech/CSAlwaysDisabledPolicy.h>
#import <CoreSpeech/CSPostBuildInstallService.h>
#import <CoreSpeech/CSContinuousAudioFingerprintProvider.h>
#import <CoreSpeech/CSKeywordAnalyzerNDAPIResult.h>
#import <CoreSpeech/CSKeywordAnalyzerNDAPI.h>
#import <CoreSpeech/CSBuiltinSpeakerStateMonitor.h>
#import <CoreSpeech/NviDirectionalitySignalData.h>
#import <CoreSpeech/CSEndpointerMetrics.h>
#import <CoreSpeech/CSSmartSiriVolume.h>
#import <CoreSpeech/CSSACInfoMonitor.h>
#import <CoreSpeech/CSVoiceTriggerRTModel.h>
#import <CoreSpeech/CSSpeakerRecognitionAssetMetaUpdateMonitor.h>
#import <CoreSpeech/CSVoiceProfileRetrainManager.h>
#import <CoreSpeech/CSVoiceTriggerEnabledMonitor.h>
#import <CoreSpeech/CSRemoteRecordClient.h>
#import <CoreSpeech/CSSiriEnabledMonitor.h>
#import <CoreSpeech/NviCSAudioDataSource.h>
#import <CoreSpeech/CSAlertBehaviorPredictor.h>
#import <CoreSpeech/CSBeepCanceller.h>
#import <CoreSpeech/CSDefaultAudioRouteChangeMonitorMac.h>
#import <CoreSpeech/CSAudioInjectionEngineFactory.h>
#import <CoreSpeech/CSBuiltInVoiceTrigger.h>
#import <CoreSpeech/CSVoiceTriggerSecondPass.h>
#import <CoreSpeech/RMSSample.h>
#import <CoreSpeech/CSShadowMicScoreCreator.h>
#import <CoreSpeech/SSREncryptedAudioFileWriter.h>
#import <CoreSpeech/CSActivationEventNotifier.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitorImpl.h>
#import <CoreSpeech/CSVoiceTriggerEventsCoordinator.h>
#import <CoreSpeech/CSSoftwareUpdateCheckingMonitor.h>
#import <CoreSpeech/CSAssetManagerEnablePolicy.h>
#import <CoreSpeech/CSVoiceTriggerAOPModeEnabledPolicyFactory.h>
#import <CoreSpeech/CSBatteryMonitor.h>
#import <CoreSpeech/CSVoiceTriggerAssetMetaUpdateMonitor.h>
#import <CoreSpeech/CSDarkWakePowerAssertionMac.h>
#import <CoreSpeech/CSAlwaysEnabledPolicy.h>
#import <CoreSpeech/CSRemoteVADCircularBuffer.h>
#import <CoreSpeech/CSAdBlockerAssetMetaUpdateMonitor.h>
#import <CoreSpeech/CSAudioStream.h>
#import <CoreSpeech/CSServerEndpointFeatures.h>
#import <CoreSpeech/CSActivationEventNotificationHandler.h>
#import <CoreSpeech/CoreSpeechXPC.h>
#import <CoreSpeech/CSRawAudioInjectionProvider.h>
#import <CoreSpeech/CSSpringboardStartMonitor.h>
#import <CoreSpeech/CSAudioProvider.h>
#import <CoreSpeech/CSListeningEnabledPolicyWatch.h>
#import <CoreSpeech/CSAlwaysOnProcessorStateMonitor.h>
#import <CoreSpeech/CSAdBlockerAssetDecoderFactory.h>
#import <CoreSpeech/CSMyriadNotifier.h>
#import <CoreSpeech/CSNovDetectorResult.h>
#import <CoreSpeech/CSNovDetector.h>
#import <CoreSpeech/CSAdBlockerAssetDecoderV1.h>
#import <CoreSpeech/CSUserSessionActiveMonitor.h>
#import <CoreSpeech/CSTrialAssetDownloadMonitor.h>
#import <CoreSpeech/CSRemoteDeviceProtocolInfo.h>
#import <CoreSpeech/CSHybridEndpointAnalyzer.h>
#import <CoreSpeech/CSOpportuneSpeakListenerOption.h>
#import <CoreSpeech/CSAudioInjectionDevice.h>
#import <CoreSpeech/CSVoiceTriggerEnabledPolicyMac.h>
#import <CoreSpeech/CSRemoteControlClient.h>
#import <CoreSpeech/CSAudioSessionInfoProvider.h>
#import <CoreSpeech/CSEndpointerProxy.h>
#import <CoreSpeech/CSVoiceTriggerStatistics.h>
#import <CoreSpeech/CSCATAssetManager.h>
#import <CoreSpeech/CSFirstUnlockMonitor.h>
#import <CoreSpeech/CSPhraseSpotterEnabledMonitor.h>
#import <CoreSpeech/CSVoiceIdXPCConnection.h>
#import <CoreSpeech/CSVoiceTriggerAlwaysOnProcessor.h>
#import <CoreSpeech/CSVoiceTriggerInfo.h>
#import <CoreSpeech/CSFallbackAudioSessionReleaseProvider.h>
#import <CoreSpeech/CSSPGEndpointAnalyzer.h>
#import <CoreSpeech/CSLanguageDetectorOption.h>
#import <CoreSpeech/CSTrialAssetManager.h>
#import <CoreSpeech/CSStartOfSpeechDetector.h>
#import <CoreSpeech/CSAudioServerCrashMonitor.h>
#import <CoreSpeech/CSVoiceTriggerXPCClient.h>
#import <CoreSpeech/CSCoreSpeechDaemonStateMonitor.h>
#import <CoreSpeech/CSKeywordAnalyzerQuasar.h>
#import <CoreSpeech/CSNetworkAvailabilityMonitor.h>
#import <CoreSpeech/CSSpeechDetectionDevicePresentMonitor.h>
#import <CoreSpeech/CSAudioRecordDeviceInfo.h>
#import <CoreSpeech/CSOpportuneSpeakListnerTestService.h>
#import <CoreSpeech/CSAudioConverter.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitor.h>
#import <CoreSpeech/CSAudioInjectionServices.h>
#import <CoreSpeech/CSSelfTriggerDetector.h>
#import <CoreSpeech/CSGestureDropEvent.h>
#import <CoreSpeech/CSUserIdentityClassifier.h>
#import <CoreSpeech/CSVTSecondPassPhraseScore.h>
#import <CoreSpeech/CSVTSecondPassScorer.h>
#import <CoreSpeech/CSAudioRecorder.h>
#import <CoreSpeech/CSCommandControlBehaviorMonitor.h>
#import <CoreSpeech/CSVoiceProfileContext.h>
#import <CoreSpeech/NviContext.h>
#import <CoreSpeech/CSJarvisTriggerModeMonitor.h>
#import <CoreSpeech/CSOpportuneSpeakEventMonitor.h>
#import <CoreSpeech/CSKeywordDetector.h>
#import <CoreSpeech/NviSignalData.h>
#import <CoreSpeech/CSSRFUserSettingMonitor.h>
#import <CoreSpeech/CSVoiceTriggerEnabledPolicyHorseman.h>
