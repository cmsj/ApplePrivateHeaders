/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMOutputComponent.h>

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent {

	AVAudioEngine* _engine;
	AVAudioPlayerNode* _oneShotSoundPlayer;
	NSMutableArray* _activeSounds;
	id _configChangedObserverToken;

}

@property (nonatomic,retain) id configChangedObserverToken;              //@synthesize configChangedObserverToken=_configChangedObserverToken - In the implementation block
+(char)isSupported;
-(void)dealloc;
-(id)init;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)canHandleRequest:(id)arg1 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(char)_startEngineIfNeeded:(id*)arg1 ;
-(void)_scheduleOneShotSound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_scheduleActiveSound:(id)arg1 ;
-(void)_stopActiveSound:(id)arg1 ;
-(void)_logAudioFileInfo:(id)arg1 ;
-(id)configChangedObserverToken;
-(void)setConfigChangedObserverToken:(id)arg1 ;
@end

