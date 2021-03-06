/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSAudioInjectionEngine.h>
#import <libobjc.A.dylib/CSAudioInjectionEngineDelegate.h>

@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate;
@class NSObject, CSKeywordAnalyzerNDAPI, CSAudioCircularBuffer, CSAudioInjectionDevice, NSUUID, NSString;

@interface CSAudioInjectionHearstEngine : CSAudioInjectionEngine <CSAudioInjectionEngineDelegate> {

	char _voiceTriggerEnabled;
	char _isForwarding;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSAudioInjectionEngineDelegate> _delegate;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzer;
	CSAudioCircularBuffer* _circularBuffer;
	unsigned long long _lastDetectedVoiceTriggerBeginSampleCount;
	unsigned long long _lastForwardedSampleCount;
	CSAudioInjectionDevice* _connectedDevice;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioInjectionEngineDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzer;                                 //@synthesize keywordAnalyzer=_keywordAnalyzer - In the implementation block
@property (nonatomic,retain) CSAudioCircularBuffer * circularBuffer;                                   //@synthesize circularBuffer=_circularBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long lastDetectedVoiceTriggerBeginSampleCount;              //@synthesize lastDetectedVoiceTriggerBeginSampleCount=_lastDetectedVoiceTriggerBeginSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long lastForwardedSampleCount;                              //@synthesize lastForwardedSampleCount=_lastForwardedSampleCount - In the implementation block
@property (assign,nonatomic) char voiceTriggerEnabled;                                                 //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (assign,nonatomic,__weak) CSAudioInjectionDevice * connectedDevice;                          //@synthesize connectedDevice=_connectedDevice - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                            //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) char isForwarding;                                                        //@synthesize isForwarding=_isForwarding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CSAudioInjectionEngineDelegate>)delegate;
-(void)setDelegate:(id<CSAudioInjectionEngineDelegate>)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stop;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithStreamHandleId:(unsigned long long)arg1 ;
-(void)setConnectedDevice:(CSAudioInjectionDevice *)arg1 ;
-(char)isAlwaysOnVoiceTriggerAvailable;
-(void)setAlwaysOnVoiceTriggerEnabled:(char)arg1 ;
-(void)startAudioStreamWithOption:(id)arg1 ;
-(void)stopAudioStream;
-(char)injectAudio:(id)arg1 ;
-(char)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(char)arg3 error:(id)arg4 ;
-(void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2 ;
-(char)alwaysOnVoiceTriggerEnabled;
-(void)attachDevice:(id)arg1 ;
-(char)isRecording;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzer;
-(void)setKeywordAnalyzer:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(CSAudioCircularBuffer *)circularBuffer;
-(void)setCircularBuffer:(CSAudioCircularBuffer *)arg1 ;
-(unsigned long long)lastForwardedSampleCount;
-(void)setLastForwardedSampleCount:(unsigned long long)arg1 ;
-(char)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(char)arg1 ;
-(CSAudioInjectionDevice *)connectedDevice;
-(char)isForwarding;
-(void)setIsForwarding:(char)arg1 ;
-(unsigned long long)lastDetectedVoiceTriggerBeginSampleCount;
-(void)setLastDetectedVoiceTriggerBeginSampleCount:(unsigned long long)arg1 ;
@end

