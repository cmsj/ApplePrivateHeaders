/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerAwareZeroFilterDelegate.h>
#import <libobjc.A.dylib/CSBeepCancellerDelegate.h>

@protocol CSAudioPreprocessorDelegate;
@class CSAudioSampleRateConverter, CSVoiceTriggerAwareZeroFilter, CSBeepCanceller, CSAudioZeroCounter, NSString;

@interface CSAudioPreprocessor : NSObject <CSVoiceTriggerAwareZeroFilterDelegate, CSBeepCancellerDelegate> {

	float _sampleRate;
	int _numChannels;
	id<CSAudioPreprocessorDelegate> _delegate;
	CSAudioSampleRateConverter* _upsampler;
	CSVoiceTriggerAwareZeroFilter* _zeroFilter;
	CSBeepCanceller* _beepCanceller;
	CSAudioZeroCounter* _zeroCounter;

}

@property (assign,nonatomic) float sampleRate;                                             //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,retain) CSAudioSampleRateConverter * upsampler;                       //@synthesize upsampler=_upsampler - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerAwareZeroFilter * zeroFilter;                   //@synthesize zeroFilter=_zeroFilter - In the implementation block
@property (nonatomic,retain) CSBeepCanceller * beepCanceller;                              //@synthesize beepCanceller=_beepCanceller - In the implementation block
@property (nonatomic,retain) CSAudioZeroCounter * zeroCounter;                             //@synthesize zeroCounter=_zeroCounter - In the implementation block
@property (assign,nonatomic) int numChannels;                                              //@synthesize numChannels=_numChannels - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioPreprocessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSAudioPreprocessorDelegate>)delegate;
-(void)setDelegate:(id<CSAudioPreprocessorDelegate>)arg1 ;
-(float)sampleRate;
-(void)flush;
-(void)setZeroFilter:(CSVoiceTriggerAwareZeroFilter *)arg1 ;
-(CSVoiceTriggerAwareZeroFilter *)zeroFilter;
-(void)setSampleRate:(float)arg1 ;
-(void)setNumChannels:(int)arg1 ;
-(void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(char)arg2 voiceTriggerInfo:(id)arg3 ;
-(char)_isNarrowBand:(float)arg1 ;
-(CSAudioSampleRateConverter *)upsampler;
-(void)setUpsampler:(CSAudioSampleRateConverter *)arg1 ;
-(CSBeepCanceller *)beepCanceller;
-(void)_reportMetrics;
-(void)zeroFilter:(id)arg1 zeroFilteredBufferAvailable:(id)arg2 atHostTime:(unsigned long long)arg3 ;
-(void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)initWithSampleRate:(float)arg1 withNumberOfChannels:(int)arg2 ;
-(void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3 ;
-(void)willBeepWithRecordRoute:(id)arg1 playbackRoute:(id)arg2 ;
-(void)setBeepCanceller:(CSBeepCanceller *)arg1 ;
-(CSAudioZeroCounter *)zeroCounter;
-(void)setZeroCounter:(CSAudioZeroCounter *)arg1 ;
-(int)numChannels;
@end

