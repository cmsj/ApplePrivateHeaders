/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>

@protocol _TVRXVoiceRecorderDelegate;
@class AVAudioFormat, AVVoiceController, NSString;

@interface _TVRXVoiceRecorder : NSObject <AVVoiceControllerRecordDelegate> {

	long long _state;
	AudioStreamBasicDescription _audioFormat;
	AVAudioFormat* _avAudioFormat;
	AVVoiceController* _voiceController;
	char _recordsAutomatically;
	id<_TVRXVoiceRecorderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRXVoiceRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char recordsAutomatically;                                   //@synthesize recordsAutomatically=_recordsAutomatically - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<_TVRXVoiceRecorderDelegate>)delegate;
-(void)setDelegate:(id<_TVRXVoiceRecorderDelegate>)arg1 ;
-(id)_init;
-(void)start;
-(void)stop;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)_processAudioBufferOnMainQueue:(id)arg1 ;
-(id)audioFormatSettings;
-(char)recordsAutomatically;
-(void)setRecordsAutomatically:(char)arg1 ;
@end
