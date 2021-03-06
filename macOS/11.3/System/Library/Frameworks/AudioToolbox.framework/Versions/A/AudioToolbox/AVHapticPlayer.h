/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVHapticClient, NSMutableArray, NSArray;

@interface AVHapticPlayer : NSObject {

	AVHapticClient* _client;
	char _resourcesAllocated;
	unsigned long long _behavior;
	NSMutableArray* _channelArray;
	/*^block*/id _connectionErrorHandler;
	/*^block*/id _stopRunningHandler;

}

@property (readonly) AVHapticClient * client;                          //@synthesize client=_client - In the implementation block
@property (readonly) char resourcesAllocated;                          //@synthesize resourcesAllocated=_resourcesAllocated - In the implementation block
@property (copy) id stopRunningHandler;                                //@synthesize stopRunningHandler=_stopRunningHandler - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) NSArray * channels; 
@property (readonly) double currentMediaTime; 
@property (readonly) double hapticLatency; 
@property (copy) id connectionErrorHandler; 
+(char)isSupported;
-(double)hapticLatency;
-(char)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)enableSequenceLooping:(unsigned long long)arg1 enable:(char)arg2 error:(id*)arg3 ;
-(char)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id*)arg3 ;
-(char)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id*)arg3 ;
-(char)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(char)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(char)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(char)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2 ;
-(char)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2 ;
-(void)detachHapticSequence:(unsigned long long)arg1 ;
-(id)initWithSessionID:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithSessionID:(unsigned)arg1 sessionIsShared:(char)arg2 error:(id*)arg3 ;
-(unsigned long long)getBehavior;
-(char)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)invalidateChannels;
-(char)playHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 offset:(double)arg3 ;
-(char)setSequenceChannelParam:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 param:(unsigned long long)arg4 value:(float)arg5 error:(id*)arg6 ;
-(id)stopRunningHandler;
-(char)resourcesAllocated;
-(void)dealloc;
-(AVHapticClient *)client;
-(void)deallocateRenderResources;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
-(NSArray *)channels;
-(char)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)queryServerCapabilities:(id)arg1 reply:(/*^block*/id)arg2 ;
-(double)currentMediaTime;
-(id)createOptionsFromAudioSessionID:(unsigned)arg1 shared:(char)arg2 ;
-(void)setConnectionErrorHandler:(id)arg1 ;
-(void)allocateRenderResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setStopRunningHandler:(id)arg1 ;
-(id)addChannel:(id*)arg1 ;
-(char)removeChannel:(id)arg1 error:(id*)arg2 ;
-(void)expectNotifyAfter:(double)arg1 ;
-(char)doInitWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)prewarmWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopPrewarm;
-(void)startRunningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopRunningWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(char)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(char)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(char)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)initAndReturnError:(id*)arg1 ;
-(void)releaseChannels;
-(char)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopRunning;
-(id)connectionErrorHandler;
@end

