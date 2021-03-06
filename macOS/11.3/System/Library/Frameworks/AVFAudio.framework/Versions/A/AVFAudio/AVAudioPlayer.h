/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSData, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioPlayer : NSObject {

	id _impl;

}

@property (getter=isPlaying,readonly) char playing; 
@property (readonly) unsigned long long numberOfChannels; 
@property (readonly) double duration; 
@property (copy) NSString * currentDevice; 
@property (__weak) id<AVAudioPlayerDelegate> delegate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (assign) float pan; 
@property (assign) float volume; 
@property (assign) char enableRate; 
@property (assign) float rate; 
@property (assign) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (assign) long long numberOfLoops; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (getter=isMeteringEnabled) char meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(void)finalize;
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(id<AVAudioPlayerDelegate>)delegate;
-(void)setDelegate:(id<AVAudioPlayerDelegate>)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(float)volume;
-(NSURL *)url;
-(void)pause;
-(void)stop;
-(AVAudioFormat *)format;
-(double)duration;
-(id)impl;
-(char)play;
-(char)isPlaying;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setNumberOfLoops:(long long)arg1 ;
-(void)setCurrentDevice:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)settings;
-(char)prepareToPlay;
-(NSString *)currentDevice;
-(void)setMeteringEnabled:(char)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(unsigned long long)numberOfChannels;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(long long)numberOfLoops;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(id)initBase;
-(char)playAtTime:(double)arg1 ;
-(double)deviceCurrentTime;
-(char)isMeteringEnabled;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(void)setVolume:(float)arg1 fadeDuration:(double)arg2 ;
-(void)setEnableRate:(char)arg1 ;
-(char)enableRate;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(char)mixToUplink;
-(void)setMixToUplink:(char)arg1 ;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
-(void)privRemoveSessionListener;
@end

