/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/SearchableWKView.h>
#import <libobjc.A.dylib/_WKIconLoadingDelegate.h>

@protocol BrowserViewIconLoadingDelegate, NSTouchBarProvider;
@class NSMutableSet, NSUUID, NSArray, BrowserViewController, NSString;

@interface BrowserWKView : SearchableWKView <_WKIconLoadingDelegate> {

	NSMutableSet* _WKViewMouseTrackingBlockerSet;
	char _shouldBlockAllMouseEvents;
	char _shouldBlockAllKeyEvents;
	char _shouldBlockFirstResponder;
	char _isVisible;
	char _forPagePreviews;
	char _hadPotentiallyCompromisingInteraction;
	char _overrideMaintainsInactiveSelectionForVoiceOver;
	id<BrowserViewIconLoadingDelegate> _iconDelegate;
	NSUUID* _uuid;
	NSArray* _previewWKViews;
	id<NSTouchBarProvider> _alternateFunctionBarProvider;

}

@property (assign,nonatomic,__weak) id<BrowserViewIconLoadingDelegate> iconDelegate;              //@synthesize iconDelegate=_iconDelegate - In the implementation block
@property (assign,nonatomic) char shouldBlockAllMouseEvents;                                      //@synthesize shouldBlockAllMouseEvents=_shouldBlockAllMouseEvents - In the implementation block
@property (assign,nonatomic) char shouldBlockAllKeyEvents;                                        //@synthesize shouldBlockAllKeyEvents=_shouldBlockAllKeyEvents - In the implementation block
@property (assign,nonatomic) char shouldBlockFirstResponder;                                      //@synthesize shouldBlockFirstResponder=_shouldBlockFirstResponder - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) char isVisible;                                                    //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,getter=isForPagePreviews,nonatomic) char forPagePreviews;                       //@synthesize forPagePreviews=_forPagePreviews - In the implementation block
@property (nonatomic,copy,readonly) NSArray * previewWKViews;                                     //@synthesize previewWKViews=_previewWKViews - In the implementation block
@property (nonatomic,readonly) BrowserViewController * browserViewController; 
@property (assign,nonatomic) char hadPotentiallyCompromisingInteraction;                          //@synthesize hadPotentiallyCompromisingInteraction=_hadPotentiallyCompromisingInteraction - In the implementation block
@property (assign,nonatomic) char overrideMaintainsInactiveSelectionForVoiceOver;                 //@synthesize overrideMaintainsInactiveSelectionForVoiceOver=_overrideMaintainsInactiveSelectionForVoiceOver - In the implementation block
@property (nonatomic,retain) id<NSTouchBarProvider> alternateFunctionBarProvider;                 //@synthesize alternateFunctionBarProvider=_alternateFunctionBarProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)acceptsFirstResponder;
-(void)viewDidChangeEffectiveAppearance;
-(char)isVisible;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)touchBar;
-(char)mouseDownCanMoveWindow;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)startObserving:(id)arg1 ;
-(void)_updateVisibility;
-(void)_windowDidChangeOcclusionState:(id)arg1 ;
-(void)stopObserving:(id)arg1 ;
-(void)_web_didChangeContentSize:(CGSize)arg1 ;
-(id)createFullScreenWindow;
-(void)webView:(id)arg1 shouldLoadIconWithParameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BrowserViewController *)browserViewController;
-(char)isForPagePreviews;
-(void)setHadPotentiallyCompromisingInteraction:(char)arg1 ;
-(id)tabContentView;
-(id)initWithBrowserViewController:(id)arg1 configuration:(id)arg2 ;
-(void)setOverrideMaintainsInactiveSelectionForVoiceOver:(char)arg1 ;
-(void)setShouldBlockAllMouseEvents:(char)arg1 ;
-(void)setShouldBlockAllKeyEvents:(char)arg1 ;
-(void)setShouldBlockFirstResponder:(char)arg1 ;
-(void)setIconDelegate:(id<BrowserViewIconLoadingDelegate>)arg1 ;
-(char)hadPotentiallyCompromisingInteraction;
-(void)setAlternateFunctionBarProvider:(id<NSTouchBarProvider>)arg1 ;
-(void)blockWKViewMouseTrackingWithObject:(id)arg1 ;
-(void)unblockWKViewMouseTrackingWithObject:(id)arg1 ;
-(void)setForPagePreviews:(char)arg1 ;
-(char)shouldBlockAllMouseEvents;
-(char)shouldBlockAllKeyEvents;
-(char)shouldBlockFirstResponder;
-(char)overrideMaintainsInactiveSelectionForVoiceOver;
-(id)sourceProviderForAppleScript;
-(id)textProviderForAppleScript;
-(id)handleDoJavaScriptCommand:(id)arg1 ;
-(id)initWithWebViewController:(id)arg1 configuration:(id)arg2 ;
-(void)pageDidClose;
-(char)_isBlockingWKViewMouseTracking;
-(id)_hitTestWindowAtWindowCoordinate:(CGPoint)arg1 ;
-(id)playbackControlsPresenter;
-(id)presentingBrowserViewController;
-(id<BrowserViewIconLoadingDelegate>)iconDelegate;
-(NSArray *)previewWKViews;
-(id<NSTouchBarProvider>)alternateFunctionBarProvider;
@end

