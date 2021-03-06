/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioRecorderDelegate <NSObject>
@optional
-(void)audioRecorderStreamHandleIdInvalidated:(unsigned long long)arg1;
-(void)audioRecorderWillBeDestroyed:(id)arg1;
-(void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(char)arg3 error:(id)arg4;
-(void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
-(void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
-(void)audioRecorderDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
-(void)audioRecorderBeginRecordInterruption:(id)arg1;
-(void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
-(void)audioRecorderEndRecordInterruption:(id)arg1;
-(void)audioRecorder:(id)arg1 willSetAudioSessionActive:(char)arg2;
-(void)audioRecorder:(id)arg1 didSetAudioSessionActive:(char)arg2;
-(void)voiceTriggerDetectedOnAOP:(id)arg1;
-(void)audioRecorderDisconnected:(id)arg1;
-(void)audioRecorderLostMediaserverd:(id)arg1;
-(void)audioRecorderBuiltInAudioStreamInvalidated:(id)arg1 error:(id)arg2;
-(void)remoteRecorderDidDetectedTwoShotAtTime:(double)arg1;

@required
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;

@end

