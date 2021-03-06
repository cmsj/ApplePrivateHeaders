/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/RolloverTextButton.h>
#import <libobjc.A.dylib/NSGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NSMenuDelegate.h>

@class WebBookmark, NSMenu, NSPressGestureRecognizer, NSString;

@interface FavoriteButton : RolloverTextButton <NSGestureRecognizerDelegate, NSMenuDelegate> {

	WebBookmark* _bookmark;
	NSMenu* _contentsMenu;
	char _drawForDragging;
	char _ignoreModifiers;
	char _menuOpen;
	NSMenu* _contextMenu;
	NSPressGestureRecognizer* _longPressRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)font;
+(id)draggedButton;
+(void)_updateCellClass;
+(void)setDraggedButton:(id)arg1 ;
+(double)maxWidthForBookmarkType:(long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setTitle:(id)arg1 ;
-(id)menu;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(void)performClick:(id)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(id)_hitTest:(const CGPoint*)arg1 dragTypes:(id)arg2 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysWhileDragging;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(char)_shouldDrawDragged;
-(void)menuWillOpen:(id)arg1 ;
-(void)menuDidClose:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)_setAttributes;
-(void)quickLookWithEvent:(id)arg1 ;
-(char)canSmoothFontsInLayer;
-(id)_clipViewAncestor;
-(id)bookmark;
-(void)setBookmark:(id)arg1 ;
-(TabPlacementHint)_tabPlacementHint;
-(char)automaticallyOpensInTabs;
-(void)_didRecognizeImmediateAction:(id)arg1 ;
-(void)_configurePressGestureRecognizerIfNeeded;
-(void)_goToBookmark;
-(void)_didClickButton:(id)arg1 ;
-(void)registerForDraggedTypes;
-(id)_menuBuilder;
-(char)_shouldShowOpenInTabs;
-(void)_openInNewTabs:(id)arg1 ;
-(void)_replaceTabs:(id)arg1 ;
-(void)_editTitle:(id)arg1 ;
-(void)_editAddress:(id)arg1 ;
-(id)bookmarkSource;
-(char)hasContentsMenu;
-(void)_setShouldDrawDragged:(char)arg1 ;
-(void)_bookmarksReloaded:(id)arg1 ;
-(void)startObservingBookmarkReloads;
-(id)contentsMenu;
-(void)popUpContentsMenu;
-(char)shouldShowContentsMenuFromEvent:(id)arg1 waitedForDragDelay:(char)arg2 ;
-(char)mouseDownIsInMenuArrow:(id)arg1 ;
-(char)canDragHorizontally:(char)arg1 fromMouseDown:(id)arg2 ;
-(void)performDragFromMouseDown:(id)arg1 withViewFrameOrigin:(CGPoint)arg2 ;
-(void)stopObservingBookmarkReloads;
-(void)confirmDeletingFolder;
-(void)deleteAfterDrag;
-(unsigned long long)determineDragOperation:(id)arg1 ;
-(char)_canAcceptDroppedBookmarkAtPoint:(CGPoint)arg1 ;
-(char)_canEditOnLongPress;
-(void)_didRecognizeLongPressGesture:(id)arg1 ;
-(void)_didRecognizeRenameGesture;
-(id)initWithBookmark:(id)arg1 frame:(CGRect)arg2 ;
-(void)drawForDraggingImageInRect:(CGRect)arg1 ;
-(char)isMenuOpen;
-(void)performClickIgnoringModifiers:(id)arg1 ;
@end

