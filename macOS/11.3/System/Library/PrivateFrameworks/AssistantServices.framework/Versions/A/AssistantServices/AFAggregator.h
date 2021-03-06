/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AFAggregator : NSObject {

	unsigned long long _type;
	double _startTime;
	char _hasActiveRequest;
	char _sessionIsRetrying;
	char _retryPrefersWWAN;

}

@property (assign,nonatomic) unsigned long long connectionType;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasActiveRequest;                          //@synthesize hasActiveRequest=_hasActiveRequest - In the implementation block
+(void)logSiriSpeechRequestStarted;
+(void)logSiriOtherRequestStarted;
+(void)logSiriRequestCancelled;
+(void)logSiriRequestFailedWithError:(id)arg1 ;
+(void)logSiriRequestSucceeded;
+(void)logSiriInvokedVia:(long long)arg1 ;
+(void)logDictationStarted;
+(void)logDictationCancelled;
+(void)logDictationFailedWithError:(id)arg1 ;
+(void)logDictationSucceeded;
+(id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2 ;
+(void)logRequestCompletedWithDuration:(double)arg1 ;
+(void)missedAppContextForRequest;
+(void)missedAlertContextForRequest;
+(void)logRequestCancelAfterSeconds:(double)arg1 ;
+(void)logSiriQuickStopAction:(unsigned long long)arg1 ;
+(void)logSiriMediaVolumeAction:(long long)arg1 ;
+(void)logSiriPausedMedia;
+(void)logRequestLaunchedApp;
+(void)logDictationFollowedByContinueOccurredForLanguage:(id)arg1 ;
+(void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg1 ;
+(void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg1 ;
+(void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg1 ;
+(void)logUILockCanceledVTActivation;
+(void)logCreateAssistant;
+(void)logLoadAssistant;
+(void)logPingTimeout;
+(void)logEnabledState:(unsigned long long)arg1 ;
+(void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1 ;
+(void)logLocalSpeechStartedWithDuration:(double)arg1 ;
+(void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1 ;
+(void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2 ;
+(void)logLocalRecognitionWonForLanguage:(id)arg1 ;
+(void)logLocalRecognitionLostForLanguage:(id)arg1 ;
+(void)logDESRecordingForLanguage:(id)arg1 error:(id)arg2 ;
+(void)logDESEvaluationForLanguage:(id)arg1 error:(id)arg2 ;
+(void)logCDMAssetEvictedForAssetType:(id)arg1 language:(id)arg2 ;
+(void)noteConnectedToCarPlayHeadunit;
+(void)noteSuccessOfRequest:(id)arg1 inCar:(char)arg2 ;
+(char)_hadUserEventSinceIntervalAgo:(double)arg1 ;
+(char)_timestamp:(id)arg1 isAfter:(id)arg2 ;
+(void)logPeriodicUsageIfNeeded;
+(id)_stringForGatekeeperType:(unsigned long long)arg1 ;
+(void)logTimeToBeepWithDuration:(double)arg1 ;
+(void)logHomeButtonPressToActivationDuration:(double)arg1 ;
+(void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1 ;
+(void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1 ;
-(unsigned long long)connectionType;
-(void)setConnectionType:(unsigned long long)arg1 ;
-(char)hasActiveRequest;
-(void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2 ;
-(void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(char)arg2 forTimeInterval:(double)arg3 ;
-(void)recordSessionRetrySuccess;
-(void)connectionDidFail;
-(void)connectionDidDrop;
-(void)beginSessionRetryPreferringWWAN:(char)arg1 ;
-(void)startWaitingForSpeechResponse;
-(void)speechResponseReceived;
-(void)speechResponseFailure;
-(void)setHasActiveRequest:(char)arg1 ;
@end

