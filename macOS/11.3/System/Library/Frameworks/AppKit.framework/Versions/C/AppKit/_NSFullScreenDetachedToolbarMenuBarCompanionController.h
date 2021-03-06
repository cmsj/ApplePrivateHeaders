/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSFullScreenMenuBarCompanionController.h>

@class NSTitlebarContainerView, NSTitlebarView, NSTitlebarAccessoryViewController, NSToolbarFullScreenWindow, NSToolbar;

@interface _NSFullScreenDetachedToolbarMenuBarCompanionController : _NSFullScreenMenuBarCompanionController {

	NSTitlebarContainerView* _titlebarContainerView;
	NSTitlebarView* _titlebarView;
	NSTitlebarAccessoryViewController* _auxiliaryViewController;
	NSToolbarFullScreenWindow* _toolbarWindow;
	NSToolbar* _toolbar;
	char _isHandlingHotKeyEvent;
	unsigned _autohideDisabledCounter;
	unsigned _forceWindowVisibleCounter;
	double _autohideHeight;
	double _lastSetAutohideHeight;
	unsigned long long _lastMenuBarCompanionSpaceID;
	char _isForcingToolbarVisibleForSheet;
	char _toolbarWantsToAttachToMenubar;
	char _hasAutohideToolbar;
	char _shouldAutomaticallyAutohideToolbar;
	char _registeredForNotes;
	char _inLayout;
	char _windowIsInFullScreen;
	char _sidebarOverlaid;

}

@property (assign,nonatomic) NSTitlebarContainerView * titlebarContainerView;                          //@synthesize titlebarContainerView=_titlebarContainerView - In the implementation block
@property (assign,nonatomic) NSTitlebarView * titlebarView;                                            //@synthesize titlebarView=_titlebarView - In the implementation block
@property (nonatomic,retain) NSTitlebarAccessoryViewController * auxiliaryViewController; 
@property (assign,nonatomic) char isHandlingHotKeyEvent;                                               //@synthesize isHandlingHotKeyEvent=_isHandlingHotKeyEvent - In the implementation block
@property (assign,nonatomic) char needsOpaqueBackstop; 
@property (nonatomic,retain) NSToolbar * toolbar; 
@property (assign,getter=isSidebarOverlaid,nonatomic) char sidebarOverlaid;                            //@synthesize sidebarOverlaid=_sidebarOverlaid - In the implementation block
-(void)dealloc;
-(void)layout;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)contentController;
-(id)toolbarWindow;
-(void)dispose;
-(void)setContentController:(id)arg1 ;
-(NSToolbar *)toolbar;
-(void)setToolbar:(NSToolbar *)arg1 ;
-(void)updateForTabbedWindowOrderFront;
-(void)reshapeToolbarForSpaceShapeChange;
-(void)updateWindowLayout;
-(void)tile;
-(void)detachFromMenuBar;
-(void)_doDidEnterFullScreen;
-(char)_originalWindowHasAutohideToolbarSet;
-(char)_originalWindowShouldAutomaticallyAutohide;
-(void)registerForWindowNotifications:(char)arg1 ;
-(void)removeAsChildOfContentWindow;
-(void)setTitlebarContainerView:(NSTitlebarContainerView *)arg1 ;
-(NSToolbarFullScreenContentViewLayout_t)getToolbarLayout;
-(void)setAuxiliaryViewController:(NSTitlebarAccessoryViewController *)arg1 ;
-(char)_isTiledUnderMenuBar;
-(void)setTitlebarView:(NSTitlebarView *)arg1 ;
-(void)windowDidChangeFullScreenStatus:(id)arg1 ;
-(void)setMenuBarReveal:(double)arg1 ;
-(void)updateContentViewForMenuBarReveal;
-(char)_shouldDrawBaselineForEffectiveReveal:(double)arg1 ;
-(NSTitlebarContainerView *)titlebarContainerView;
-(char)autohideDisabled;
-(void)updateWindowAlpha;
-(void)updateMenuBarScreenRevealHeight;
-(unsigned long long)windowStyleMask;
-(double)_visibleWindowHeight;
-(double)effectiveAutohideHeight;
-(double)desiredWindowHeight;
-(char)_shouldToolbarFloatAboveSiblings;
-(CGSize)toolbarWindowSize;
-(long long)_currentChildWindowOrderingPriority;
-(double)effectiveClampedAutohideHeight;
-(double)correctWindowTopTarget;
-(void)_updateSpaceAndMenubarCompanionWindowAutohideHeight;
-(void)updateWindowVisibility;
-(void)layoutTitlebarViews;
-(void)_updateSpaceIfNecessary;
-(void)_updateMenubarCompanionWindowAutohideHeight;
-(void)_addViewControllerToWindow;
-(void)_disableFullScreenAutohidingForToolbar:(id)arg1 ;
-(void)updateWindowAndContentView;
-(void)updateWindowHeight;
-(void)resizeContentWindow;
-(void)windowDidChangeSheetNotification:(id)arg1 ;
-(char)_calcAttachesToMenuBar;
-(CGPoint)_calcWindowTopLeft;
-(void)updateTitlebarViewBlendingMode;
-(void)_synchronizeMenuBarReveal;
-(void)addAsChildOfContentWindow;
-(void)_makeWindowIfNecessary;
-(void)_forceUpdateSpaceAndMenubarCompanionWindowAutohideHeight;
-(void)_enableFullScreenForceVisibleForToolbar:(id)arg1 ;
-(void)_disableFullScreenForceVisibleForToolbar:(id)arg1 ;
-(char)needsOpaqueBackstop;
-(void)setNeedsOpaqueBackstop:(char)arg1 ;
-(void)_relinquishTitlebar;
-(void)toolbar:(id)arg1 didChangeFrameSizeFromOldSize:(CGSize)arg2 ;
-(void)updateWindowPositionAnimation:(double)arg1 startTop:(double)arg2 ;
-(CGPoint)topCenterForSheet:(id)arg1 ;
-(NSTitlebarAccessoryViewController *)auxiliaryViewController;
-(void)didChangeAuxiliaryViewControllers;
-(void)toolbarDidChangeAttachesToMenuBar:(id)arg1 ;
-(void)_enableFullScreenAutohidingForToolbar:(id)arg1 ;
-(void)autohideHeightChanged;
-(char)isHandlingHotKeyEvent;
-(void)setIsHandlingHotKeyEvent:(char)arg1 ;
-(NSTitlebarView *)titlebarView;
-(char)isSidebarOverlaid;
-(void)setSidebarOverlaid:(char)arg1 ;
@end

