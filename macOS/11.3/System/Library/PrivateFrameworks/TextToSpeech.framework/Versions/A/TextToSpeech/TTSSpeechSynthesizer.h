/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Versions/A/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/TTSSpeechConnectionDelegate.h>

@protocol TTSSpeechSynthesizerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray, NSArray, NSString;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate> {

	long long _footprint;
	id<TTSSpeechSynthesizerDelegate> _delegate;
	char _useSharedSession;
	char _audioSessionIDIsValid;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	char _useMonarchStyleRate;
	NSMutableDictionary* _channels;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _currentRequestOwners;
	NSMutableArray* _speechRequests;
	struct {
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned delegateSynthesizedSilentlyURL : 1;
		unsigned willUseInput : 1;
	}  _synthesizerFlags;
	unsigned long long _synthesizerInstanceID;
	NSArray* _outputChannels;
	NSMutableDictionary* _testingLastRuleConversion;
	char _supportsAccurateWordCallbacks;
	char _ignoreSubstitutions;
	char _synthesizeSilently;
	float _rate;
	float _pitch;
	float _volume;
	NSString* _voiceIdentifier;
	NSString* _bundleIdentifier;
	unsigned long long _requestClientIdentifier;
	void* _speakingRequestClientContext;
	NSArray* _userSubstitutions;
	NSArray* _phonemeSubstitutions;
	/*^block*/id _audioBufferCallback;

}

@property (assign,nonatomic,__weak) id<TTSSpeechSynthesizerDelegate> delegate; 
@property (assign,nonatomic) float rate;                                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                                  //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentifier;                                    //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * resolvedVoiceIdentifier; 
@property (assign,nonatomic) unsigned long long requestClientIdentifier;                    //@synthesize requestClientIdentifier=_requestClientIdentifier - In the implementation block
@property (assign,nonatomic) void* speakingRequestClientContext;                            //@synthesize speakingRequestClientContext=_speakingRequestClientContext - In the implementation block
@property (assign,nonatomic) char supportsAccurateWordCallbacks;                            //@synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                                      //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (nonatomic,copy) NSArray * userSubstitutions;                                     //@synthesize userSubstitutions=_userSubstitutions - In the implementation block
@property (nonatomic,copy) NSArray * phonemeSubstitutions;                                  //@synthesize phonemeSubstitutions=_phonemeSubstitutions - In the implementation block
@property (nonatomic,copy) id audioBufferCallback;                                          //@synthesize audioBufferCallback=_audioBufferCallback - In the implementation block
@property (nonatomic,retain) NSArray * outputChannels; 
@property (assign,nonatomic) char ignoreSubstitutions;                                      //@synthesize ignoreSubstitutions=_ignoreSubstitutions - In the implementation block
@property (assign,nonatomic) char synthesizeSilently;                                       //@synthesize synthesizeSilently=_synthesizeSilently - In the implementation block
+(void)initialize;
+(id)availableVoices;
+(id)supportedIPAPhonemeLanguages;
+(id)audioFileSettingsForVoice:(id)arg1 ;
+(void)_initializeServers;
+(id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(char)arg2 ;
+(id)voiceForIdentifier:(id)arg1 ;
+(id)allAvailableVoices;
+(id)refreshAllAvailableVoices:(char)arg1 ;
+(id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3 ;
+(id)availableLanguageCodes;
+(id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3 useFallbackDefault:(char)arg4 ;
+(char)isSystemVoice:(id)arg1 ;
+(char)employSpeechMarkupForType:(long long)arg1 identifier:(id)arg2 withLanguage:(id)arg3 ;
+(id)speechMarkupStringForType:(long long)arg1 forIdentifier:(id)arg2 string:(id)arg3 ;
+(void)testingSetAllVoices:(id)arg1 ;
+(void)setVoiceAssetsForTesting:(id)arg1 ;
+(id)voiceAssetsForTesting;
+(id)synthesizerForSynthesizerID:(unsigned long long)arg1 ;
+(id)refreshAllAvailableVoices;
+(id)voiceAccessQueue;
+(void)setTestingAvailableVoicesForLanguageCode:(id)arg1 ;
+(void)setSpeechJobFinishedUnitTestBlock:(/*^block*/id)arg1 ;
+(void)setSpeechJobStartedUnitTestBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TTSSpeechSynthesizerDelegate>)delegate;
-(void)setDelegate:(id<TTSSpeechSynthesizerDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(float)volume;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)isSpeaking;
-(void)_setDelegate:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(void)setPitch:(float)arg1 ;
-(float)pitch;
-(long long)footprint;
-(NSString *)voiceIdentifier;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(void)setAudioBufferCallback:(id)arg1 ;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(char)supportsAccurateWordCallbacks;
-(void)setSupportsAccurateWordCallbacks:(char)arg1 ;
-(unsigned)audioQueueFlags;
-(char)useMonarchStyleRate;
-(void)setUseMonarchStyleRate:(char)arg1 ;
-(unsigned long long)synthesizerInstanceID;
-(id)audioBufferCallback;
-(char)synthesizeSilently;
-(void)setSynthesizeSilently:(char)arg1 ;
-(char)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(char)arg3 error:(id*)arg4 ;
-(char)ignoreSubstitutions;
-(char)_substitutionLanguageMatchesSpecialCase:(id)arg1 withLanguage:(id)arg2 ;
-(char)_skipSubstition:(id)arg1 language:(id)arg2 bundleIdentifier:(id)arg3 voice:(id)arg4 ;
-(id)_determineSubstitution:(id)arg1 text:(id)arg2 wordRange:(NSRange)arg3 request:(id)arg4 ;
-(id)_preprocessText:(id)arg1 languageCode:(id)arg2 ;
-(NSArray *)phonemeSubstitutions;
-(NSArray *)userSubstitutions;
-(void)_processUserSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5 ;
-(char)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4 ;
-(char)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6 ;
-(char)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(char)arg2 error:(id*)arg3 ;
-(char)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(char)arg2 error:(id*)arg3 ;
-(char)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(char)arg3 error:(id*)arg4 ;
-(char)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(char)arg3 phonemesSpoken:(id)arg4 error:(id)arg5 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didSynthesizeSilentlyToURL:(id)arg3 ;
-(id)testingLastRuleConversion;
-(void)testingSetLastRuleConversion:(id)arg1 replacement:(id)arg2 ;
-(void)_mediaServicesDied;
-(void)setUserSubstitutions:(NSArray *)arg1 ;
-(void)setPhonemeSubstitutions:(NSArray *)arg1 ;
-(NSString *)resolvedVoiceIdentifier;
-(id)resolvedVoiceIdentifierForLanguageCode:(id)arg1 ;
-(char)startSpeakingString:(id)arg1 error:(id*)arg2 ;
-(char)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3 ;
-(char)stopSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(char)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(char)continueSpeakingWithError:(id*)arg1 ;
-(id)speechString;
-(float)minimumRate;
-(float)maximumRate;
-(void)setFootprint:(long long)arg1 ;
-(void)useSpecificAudioSession:(unsigned)arg1 ;
-(void)useAudioQueueFlags:(unsigned)arg1 ;
-(char)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3 ;
-(char)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(char)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 request:(id*)arg4 error:(id*)arg5 ;
-(char)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(char)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(char)arg3 error:(id*)arg4 ;
-(char)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(char)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(char)arg3 error:(id*)arg4 ;
-(char)continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(unsigned long long)requestClientIdentifier;
-(void)setRequestClientIdentifier:(unsigned long long)arg1 ;
-(void*)speakingRequestClientContext;
-(void)setSpeakingRequestClientContext:(void*)arg1 ;
-(void)setIgnoreSubstitutions:(char)arg1 ;
@end
