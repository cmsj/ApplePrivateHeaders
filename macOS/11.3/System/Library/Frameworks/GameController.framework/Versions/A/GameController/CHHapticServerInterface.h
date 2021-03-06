/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHHapticServerInterface
@required
-(void)stopPrewarm;
-(void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3;
-(void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5;
-(void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)configureWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCapabilities:(id)arg1 reply:(/*^block*/id)arg2;
-(void)allocateClientResources:(/*^block*/id)arg1;
-(void)releaseClientResources;
-(void)getHapticLatency:(/*^block*/id)arg1;
-(void)setPlayerBehavior:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)releaseChannels;
-(void)requestChannels:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)removeChannel:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadVibePattern:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)prepareHapticSequence:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)detachSequence:(unsigned long long)arg1;
-(void)prewarm:(/*^block*/id)arg1;
-(void)startRunning:(/*^block*/id)arg1;
-(void)stopRunning;
-(void)stopRunning:(/*^block*/id)arg1;
-(void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(/*^block*/id)arg2;

@end

