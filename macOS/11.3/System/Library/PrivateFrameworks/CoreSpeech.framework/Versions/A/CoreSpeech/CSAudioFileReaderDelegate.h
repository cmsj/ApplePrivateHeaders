/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioFileReaderDelegate <NSObject>
@required
-(void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
-(void)audioFileReaderDidStartRecording:(id)arg1 successfully:(char)arg2 error:(id)arg3;
-(void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;

@end

