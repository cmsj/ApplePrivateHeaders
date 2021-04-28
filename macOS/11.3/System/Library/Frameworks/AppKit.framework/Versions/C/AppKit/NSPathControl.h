/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>

@class NSArray, NSString, NSAttributedString, NSURL, NSPathControlItem, NSColor, NSMenu;

@interface NSPathControl : NSControl {

	unsigned long long _draggingSourceOperationMaskForLocal;
	unsigned long long _draggingSourceOperationMaskForNonLocal;
	id _delegate;
	id _pathAux;

}

@property (getter=isEditable) char editable; 
@property (copy) NSArray * allowedTypes; 
@property (copy) NSString * placeholderString; 
@property (copy) NSAttributedString * placeholderAttributedString; 
@property (copy) NSURL * URL; 
@property (assign) SEL doubleAction; 
@property (assign) long long pathStyle; 
@property (readonly) NSPathControlItem * clickedPathItem; 
@property (copy) NSArray * pathItems; 
@property (copy) NSColor * backgroundColor; 
@property (__weak) id<NSPathControlDelegate> delegate; 
@property (retain) NSMenu * menu; 
+(Class)cellClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<NSPathControlDelegate>)delegate;
-(void)setDelegate:(id<NSPathControlDelegate>)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSMenu *)menu;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSColor *)backgroundColor;
-(NSEdgeInsets)alignmentRectInsets;
-(id)_preferredAppearance;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setMenu:(NSMenu *)arg1 ;
-(char)isEditable;
-(void)setEditable:(char)arg1 ;
-(void)setCell:(id)arg1 ;
-(void)_windowChangedKeyState;
-(char)resignFirstResponder;
-(char)preservesContentDuringLiveResize;
-(SEL)doubleAction;
-(char)_dragShouldBeginFromMouseDown:(id)arg1 ;
-(void)setDoubleAction:(SEL)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(char)arg2 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 beganAt:(CGPoint)arg2 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysWhileDragging;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(CGPoint)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(double)baselineOffsetFromBottom;
-(void)_commonInit;
-(void)updateTrackingAreas;
-(void)setPlaceholderString:(NSString *)arg1 ;
-(char)_hasRectangularFocusRingAroundFrame;
-(void)concludeDragOperation:(id)arg1 ;
-(void)_removeTrackingRects;
-(NSString *)placeholderString;
-(void)setPlaceholderAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)placeholderAttributedString;
-(void)_toolTipManagerWillRecomputeToolTipsByRemoving:(char)arg1 adding:(char)arg2 ;
-(id)clickedPathComponentCell;
-(id)pathComponentCells;
-(void)setPathStyle:(long long)arg1 ;
-(void)setAllowedTypes:(NSArray *)arg1 ;
-(long long)pathStyle;
-(void)pathCell:(id)arg1 willPopUpMenu:(id)arg2 ;
-(void)pathCell:(id)arg1 willDisplayOpenPanel:(id)arg2 ;
-(NSArray *)allowedTypes;
-(void)setPathComponentCells:(id)arg1 ;
-(CGRect)_mainContentBounds;
-(void)_setNeedsDisplay;
-(id)arrayWithArray:(id)arg1 transformedByBlock:(/*^block*/id)arg2 ;
-(id)_dragImageForCell:(id)arg1 withEvent:(id)arg2 offset:(CGPoint*)arg3 ;
-(char)_performDragOfCell:(id)arg1 fromMouseDown:(id)arg2 ;
-(id)_draggedURL:(id)arg1 ;
-(void)_updateDropTargetToCell:(id)arg1 ;
-(void)_ensureDragContext;
-(void)_updateDropTargetForDraggingInfo:(id)arg1 ;
-(void)_cleanUpTransientDragState;
-(NSPathControlItem *)clickedPathItem;
-(NSArray *)pathItems;
-(void)setPathItems:(NSArray *)arg1 ;
-(id)ns_widgetType;
@end
