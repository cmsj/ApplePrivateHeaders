/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/PIPViewControllerDelegate.h>
#import <WebCore/WebVideoViewContainerDelegate.h>

@class NSString;

@interface WebVideoFullscreenInterfaceMacObjC : NSObject <PIPViewControllerDelegate, WebVideoViewContainerDelegate> {

	VideoFullscreenInterfaceMac* _videoFullscreenInterfaceMac;
	CGSize _videoDimensions;
	RetainPtr<PIPViewController>* _pipViewController;
	RetainPtr<NSViewController>* _videoViewContainerController;
	RetainPtr<WebVideoViewContainer>* _videoViewContainer;
	int _pipState;
	RetainPtr<NSWindow>* _returningWindow;
	CGRect _returningRect;
	char _playing;
	char _exitingToStandardFullscreen;

}

@property (assign,nonatomic) CGSize videoDimensions;                                                             //@synthesize videoDimensions=_videoDimensions - In the implementation block
@property (assign,getter=isPlaying,nonatomic) char playing;                                                      //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isExitingToStandardFullscreen,nonatomic) char exitingToStandardFullscreen;              //@synthesize exitingToStandardFullscreen=_exitingToStandardFullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(char)isPlaying;
-(CGSize)videoDimensions;
-(void)setPlaying:(char)arg1 ;
-(void)boundsDidChangeForVideoViewContainer:(id)arg1 ;
-(void)superviewDidChangeForVideoViewContainer:(id)arg1 ;
-(void)invalidateFullscreenState;
-(void)setVideoDimensions:(CGSize)arg1 ;
-(void)exitPIP;
-(void)pipActionStop:(id)arg1 ;
-(char)isExitingToStandardFullscreen;
-(void)pipDidClose:(id)arg1 ;
-(void)pipActionPlay:(id)arg1 ;
-(void)pipActionPause:(id)arg1 ;
-(id)initWithVideoFullscreenInterfaceMac:(VideoFullscreenInterfaceMac*)arg1 ;
-(void)updateIsPlaying:(char)arg1 newPlaybackRate:(float)arg2 ;
-(void)setUpPIPForVideoView:(id)arg1 withFrame:(CGRect)arg2 inWindow:(id)arg3 ;
-(void)enterPIP;
-(void)exitPIPAnimatingToRect:(CGRect)arg1 inWindow:(id)arg2 ;
-(char)pipShouldClose:(id)arg1 ;
-(void)setExitingToStandardFullscreen:(char)arg1 ;
@end

