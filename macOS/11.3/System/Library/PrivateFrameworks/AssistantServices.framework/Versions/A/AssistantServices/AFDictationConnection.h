/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFNetworkAvailabilityObserver.h>

@protocol AFDictationDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCConnection, NSString, NSSet, AFCallSiteInfo, AFAudioPowerUpdater, NSObject, AFSpeechRequestOptions, NSMutableData, NSArray, AFInstanceContext, AFAnalyticsEvent, AFAnalyticsTurnBasedInstrumentationContext;

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver> {

	NSXPCConnection* _connection;
	NSString* _lastUsedLanguage;
	NSSet* _knownOfflineInstalledLanguages;
	char _isWaitingForKnownOfflineInstalledLanguages;
	id<AFDictationDelegate> _delegate;
	AFCallSiteInfo* _initiationCallSiteInfo;
	AFAudioPowerUpdater* _inputAudioPowerUpdater;
	char _isCapturingSpeech;
	char _hasActiveRequest;
	char _isWaitingForAudioFile;
	char _recognizingIncrementally;
	NSObject*<OS_dispatch_group> _speechCallbackGroup;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_source> _bufferTimer;
	char _forceOfflineRecognition;
	AFSpeechRequestOptions* _stopOptions;
	NSMutableData* _buffer;
	double _audioStartTime;
	double _amountDataSent;
	char _narrowband;
	NSString* _requestIdString;
	NSArray* _previouslyRecognizedPhrases;
	NSString* _onDeviceDictationUIInteractionIdentifier;
	AFInstanceContext* _instanceContext;
	AFAnalyticsEvent* _preheatEvent;
	AFAnalyticsTurnBasedInstrumentationContext* _intstrumentationContext;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<AFDictationDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)dictationIsEnabled;
+(void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(/*^block*/id)arg1 ;
+(char)languageDetectorIsEnabled;
+(char)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(void)fetchSupportedLanguageCodes:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AFDictationDelegate>)delegate;
-(void)setDelegate:(id<AFDictationDelegate>)arg1 ;
-(id)_connection;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)endSession;
-(void)preheat;
-(float)peakPower;
-(void)_availabilityChanged;
-(void)cancelSpeech;
-(void)_clearConnection;
-(void)networkAvailability:(id)arg1 isAvailable:(char)arg2 ;
-(id)initWithInstanceContext:(id)arg1 ;
-(void)_stopInputAudioPowerUpdates;
-(void)_dispatchCallbackGroupBlock:(/*^block*/id)arg1 ;
-(void)_checkAndSetIsCapturingSpeech:(char)arg1 ;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)updateSpeechOptions:(id)arg1 ;
-(void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(void)stopSpeech;
-(float)averagePower;
-(id)_dictationService;
-(void)_willFailDictationWithError:(id)arg1 ;
-(void)_willCompleteDictation;
-(void)_delegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 delegate:(id)arg3 ;
-(void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2 ;
-(void)_cancelTimerClearBuffer;
-(void)_connectionClearedForInterruption:(char)arg1 ;
-(void)_registerInvalidationHandlerForXPCConnection:(id)arg1 ;
-(void)_dispatchAsync:(/*^block*/id)arg1 ;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 ;
-(void)addRecordedSpeechSampleData:(id)arg1 ;
-(void)preheatTestWithLanguage:(id)arg1 options:(id)arg2 ;
-(void)preheatWithRecordDeviceIdentifier:(id)arg1 ;
-(void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportIssueForError:(id)arg1 eventType:(long long)arg2 context:(id)arg3 ;
-(void)reportIssueForError:(id)arg1 eventType:(long long)arg2 subtype:(id)arg3 context:(id)arg4 ;
-(void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg1 ;
-(void)_invokeRequestTimeout;
-(void)_cancelRequestTimeout;
-(void)_scheduleRequestTimeout;
-(char)dictationIsAvailableForLanguage:(id)arg1 synchronous:(char)arg2 ;
-(char)forcedOfflineDictationIsAvailableForLanguage:(id)arg1 synchronous:(char)arg2 ;
-(void)_tellSpeechDelegateAvailabilityChanged;
-(void)_sendPendingAnalyticsEvents;
-(void)_logRequestCompetionStatusWithEventType:(long long)arg1 error:(id)arg2 ;
-(void)_addPreheatAnalyticsEvent;
-(void)_setActivationTimeOnOptionsIfNecessary:(id)arg1 ;
-(void)_willStartDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 machAbsoluteTime:(unsigned long long)arg4 ;
-(id)_dictationServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(char)arg3 forceSampling:(char)arg4 ;
-(void)_sendDataIfNeeded;
-(void)_willCancelDictation;
-(void)_delayedStopSpeechWithOptions:(id)arg1 ;
-(id)_dequeueAudioWithLength:(unsigned long long)arg1 ;
-(void)_updateBufferFlushTimerWithDelay:(double)arg1 ;
-(void)_cancelBufferFlushTimer;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidBeginWithOptions:(id)arg1 ;
-(void)_tellSpeechDelegateDidRecognizePackage:(id)arg1 ;
-(void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 utterances:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 audioAnalytics:(id)arg5 ;
-(void)_tellSpeechDelegateDidRecognizePartialResult:(id)arg1 ;
-(void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 ;
-(void)_tellSpeechDelegateDidProcessAudioDuration:(double)arg1 ;
-(void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2 ;
-(void)_tellSpeechDelegateSpeechRecognitionDidSucceed;
-(void)_tellSpeechDelegateSearchResultsReceived:(id)arg1 recognitionText:(id)arg2 stable:(char)arg3 final:(char)arg4 ;
-(void)_tellSpeechDelegateLanguageDetected:(id)arg1 confidenceScores:(id)arg2 isConfident:(char)arg3 ;
-(void)_tellSpeechDelegateMultilingualSpeechRecognized:(id)arg1 ;
-(void)_tellSpeechDelegateLanguageDetectorDidFail:(id)arg1 ;
-(void)_tellSpeechDelegateDidBeginLocalRecognitionWithModelInfo:(id)arg1 ;
-(void)_extendRequestTimeout;
-(char)dictationIsAvailableForLanguage:(id)arg1 ;
-(char)forcedOfflineDictationIsAvailableForLanguage:(id)arg1 ;
-(void)beginAvailabilityMonitoring;
-(void)cancelAvailabilityMonitoring;
-(/*^block*/id)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 ;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 ;
-(void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(char)arg3 ;
-(void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2 ;
-(void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(char)arg2 options:(id)arg3 forLanguage:(id)arg4 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3 ;
-(void)sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2 ;
@end

