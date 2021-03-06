/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSURL, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioRecorder : NSObject {

	void* _impl;

}

@property (assign,nonatomic) char instantaneousMetering; 
@property (getter=isRecording,readonly) char recording; 
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (__weak) id<AVAudioRecorderDelegate> delegate; 
@property (readonly) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (getter=isMeteringEnabled) char meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id<AVAudioRecorderDelegate>)delegate;
-(void)setDelegate:(id<AVAudioRecorderDelegate>)arg1 ;
-(NSURL *)url;
-(void)pause;
-(void)stop;
-(AVAudioFormat *)format;
-(AudioRecorderImpl*)impl;
-(double)currentTime;
-(NSDictionary *)settings;
-(char)record;
-(char)isRecording;
-(void)setMeteringEnabled:(char)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(id)baseInit;
-(double)deviceCurrentTime;
-(id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(char)prepareToRecord;
-(char)isMeteringEnabled;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(void)finishedRecording;
-(void)privCommonCleanup;
-(void)privRemoveSessionPropertyListeners;
-(id)initWithURL:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(char)recordAtTime:(double)arg1 ;
-(char)recordForDuration:(double)arg1 ;
-(char)recordAtTime:(double)arg1 forDuration:(double)arg2 ;
-(char)deleteRecording;
-(char)instantaneousMetering;
-(void)setInstantaneousMetering:(char)arg1 ;
@end

