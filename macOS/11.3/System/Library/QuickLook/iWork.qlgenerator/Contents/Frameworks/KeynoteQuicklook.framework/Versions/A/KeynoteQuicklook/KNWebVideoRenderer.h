/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KNBuildRenderer.h>
#import <libobjc.A.dylib/KNAmbientBuildRenderer.h>

@class TSDTextureSet, KNBuildRenderer, NSString;

@interface KNWebVideoRenderer : KNBuildRenderer <KNAmbientBuildRenderer> {

	double _startTime;
	char _needsVideoAtStartTime;
	char _animationsPaused;
	double _playbackAtStartTimePauseTime;
	double _playbackAtStartTimePauseOffset;
	id _ambientBuildStartCallbackTarget;
	SEL _ambientBuildCallbackSelector;
	char _needsToSendAmbientBuildStartCallback;
	char _needsToSendBuildEndCallback;
	TSDTextureSet* _posterImageTextureSet;
	char _hasAmbientBuildStarted;
	KNBuildRenderer* _buildInRenderer;

}

@property (assign,nonatomic,__weak) KNBuildRenderer * buildInRenderer;              //@synthesize buildInRenderer=_buildInRenderer - In the implementation block
@property (nonatomic,readonly) char hasAmbientBuildStarted;                         //@synthesize hasAmbientBuildStarted=_hasAmbientBuildStarted - In the implementation block
@property (nonatomic,readonly) char shouldActionBuildsStopAnimations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopAnimations;
-(void)animate;
-(void)setBuildInRenderer:(KNBuildRenderer *)arg1 ;
-(void)removeAnimationsAndFinish:(char)arg1 ;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)forceRemoveAnimations;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
-(char)addAnimationsAtLayerTime:(double)arg1 ;
-(void)pauseAnimations;
-(void)resumeAnimationsIfPaused;
-(KNBuildRenderer *)buildInRenderer;
-(void)registerForAmbientBuildStartCallback:(SEL)arg1 target:(id)arg2 ;
-(void)interruptAndReset;
-(char)hasAmbientBuildStarted;
-(char)shouldActionBuildsStopAnimations;
-(void)p_scheduleVideoAtStartTime;
-(void)p_didFailWithError:(id)arg1 ;
-(void)p_startVideo;
-(void)p_stopVideo;
-(void)p_didStopVideo;
-(void)p_unscheduleVideoAtStartTime;
-(void)p_didStartVideo;
-(void)p_cancelVideoAtStartTime;
-(void)p_showVideoAtStartTime;
@end
