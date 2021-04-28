/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButton.h>
#import <libobjc.A.dylib/NSDraggingDestination.h>
#import <libobjc.A.dylib/NSTabBarSyncedButton.h>

@protocol NSTabBarSyncedButtonDelegate;
@class NSTrackingArea, NSColor, NSImageView, NSTitlebarSeparatorView, NSBox, NSView, NSLayoutConstraint, NSString;

@interface NSTabBarNewTabButton : NSButton <NSDraggingDestination, NSTabBarSyncedButton> {

	NSTrackingArea* _trackingArea;
	NSColor* _backgroundColor;
	NSImageView* _addImageView;
	NSTitlebarSeparatorView* _topBorderView;
	NSBox* _leadingBorderView;
	NSView* _backgroundHighlightView;
	NSLayoutConstraint* _backgroundHighlightLeadingConstraint;
	char _mouseIsOverButton;
	char _forcesActiveWindowState;
	id<NSTabBarSyncedButtonDelegate> _buttonInTabSyncGroupDelegate;
	char _syncedWithOtherButton;

}

@property (assign,nonatomic) char forcesActiveWindowState; 
@property (assign,nonatomic,__weak) id<NSTabBarSyncedButtonDelegate> buttonInTabSyncGroupDelegate;              //@synthesize buttonInTabSyncGroupDelegate=_buttonInTabSyncGroupDelegate - In the implementation block
@property (assign,getter=isSyncedWithOtherButton,nonatomic) char syncedWithOtherButton;                         //@synthesize syncedWithOtherButton=_syncedWithOtherButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)width;
+(id)installNewTabButtonInView:(id)arg1 ;
-(id)init;
-(char)allowsVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)awakeFromNib;
-(void)_windowChangedKeyState;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)setHighlightStateToPressed:(char)arg1 hovered:(char)arg2 ;
-(id<NSTabBarSyncedButtonDelegate>)buttonInTabSyncGroupDelegate;
-(void)setButtonInTabSyncGroupDelegate:(id<NSTabBarSyncedButtonDelegate>)arg1 ;
-(char)isSyncedWithOtherButton;
-(void)setSyncedWithOtherButton:(char)arg1 ;
-(void)updateDraggingItemsForDrag:(id)arg1 ;
-(id)_dragTypes;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
-(void)setForcesActiveWindowState:(char)arg1 ;
-(char)forcesActiveWindowState;
-(void)_finishInitialization;
-(void)_updateButtonHighlightWhenPressed:(char)arg1 hovered:(char)arg2 notifyNSTabBarSyncedButtonDelegate:(char)arg3 ;
-(id)_backgroundDefaultColor;
-(void)_setBackgroundColor:(id)arg1 withAnimation:(id)arg2 ;
-(char)_windowIsActive;
-(id)_leadingBorderDefaultColor;
-(void)_updateButtonHighlightWhenPressed:(char)arg1 hovered:(char)arg2 ;
-(void)_updateButtonColors;
-(id)associatedWindow;
-(id)draggingDestination;
@end
