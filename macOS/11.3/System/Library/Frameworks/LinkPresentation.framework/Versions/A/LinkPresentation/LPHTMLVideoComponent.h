/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPHTMLComponent.h>
#import <libobjc.A.dylib/DOMEventListener.h>

@class LPVideo, DOMElement, DOMHTMLVideoElement, DOMHTMLIFrameElement, WebScriptObject, LPCSSResolver, DOMDocument, NSString;

@interface LPHTMLVideoComponent : LPHTMLComponent <DOMEventListener> {

	LPVideo* _video;
	DOMElement* _playButton;
	DOMElement* _muteButton;
	DOMElement* _muteButtonContainer;
	DOMElement* _videoPosterFrame;
	DOMElement* _videoOverlay;
	DOMHTMLVideoElement* _videoElement;
	DOMHTMLIFrameElement* _youTubeContainerElement;
	char _isVisible;
	char _wasPlayingWhenHidden;
	WebScriptObject* _isVisibleFunction;
	LPCSSResolver* _CSSResolver;
	DOMDocument* _document;

}

@property (assign,getter=isMuted,nonatomic) char muted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)additionalGlobalOutOfLineStyleDeclarations;
-(void)pause;
-(char)isVisible;
-(void)play;
-(void)handleEvent:(id)arg1 ;
-(char)isPlaying;
-(void)setMuted:(char)arg1 ;
-(char)isMuted;
-(void)updateVisibility;
-(char)shouldAutoPlay;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6 ;
-(void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2 ;
-(id)createVideoElement;
-(id)resolvedVideoElement;
-(id)youTubeParametersForVideoURL:(id)arg1 ;
-(void)togglePlaying;
@end

