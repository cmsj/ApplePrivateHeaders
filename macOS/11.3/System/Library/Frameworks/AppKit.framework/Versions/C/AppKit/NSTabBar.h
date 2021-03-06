/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSDetachedTabDraggingImageToWindowTransitionControllerDelegate.h>
#import <libobjc.A.dylib/NSMorphingDragImageControllerDragSource.h>
#import <libobjc.A.dylib/NSAnimationDelegate.h>
#import <libobjc.A.dylib/NSDraggingDestination.h>
#import <libobjc.A.dylib/NSTabButtonDelegate.h>
#import <libobjc.A.dylib/NSTabBarSyncedButtonDelegate.h>
#import <libobjc.A.dylib/NSTabDraggingDestination.h>

@protocol NSTabBarDelegate, NSTabBarSyncedButton;
@class NSTrackingArea, NSTabButton, NSScrollView, NSLayoutConstraint, NSView, NSMutableArray, NSMapTable, CABackdropLayer, NSTitlebarSeparatorView, NSTabBarEmptyRegionPlaceholderButton, NSArray, NSString;

@interface NSTabBar : NSView <NSDetachedTabDraggingImageToWindowTransitionControllerDelegate, NSMorphingDragImageControllerDragSource, NSAnimationDelegate, NSDraggingDestination, NSTabButtonDelegate, NSTabBarSyncedButtonDelegate, NSTabDraggingDestination> {

	NSTrackingArea* _trackingArea;
	NSTabButton* _tabButtonUnderMouse;
	NSScrollView* _scrollView;
	NSLayoutConstraint* _leadingScrollViewConstraint;
	NSView* _scrollViewDocumentView;
	NSView* _tabContainer;
	NSMutableArray* _tabBarViewItems;
	NSMutableArray* _tabButtons;
	NSMapTable* _tabBarViewItemsToTabButtons;
	unsigned long long _selectedTabButtonIndex;
	unsigned long long _draggingTabButtonIndex;
	unsigned long long _firstInsertedTabButtonIndex;
	NSTabButton* _draggedTabButton;
	CGPoint _mouseOffsetOnSelectedTab;
	CGPoint _mouseLocationForDraggedTab;
	unsigned long long _dragSourceIndex;
	unsigned long long _dropIndex;
	unsigned long long _fallbackSelectedTabButtonIndex;
	CGRect _layoutBounds;
	CGRect _firstButtonFrame;
	double _remainingWidthInTabBarAfterDividingEvenlyAmongButtons;
	double _scrollViewContentWidth;
	unsigned long long _numberOfTabsForLayout;
	unsigned long long _stackingRegions;
	double _edgeScrollingFactor;
	double _titleScrollingFactor;
	double _selectedButtonSlowingFactor;
	double _slowingDistance;
	NSView* _backgroundView;
	CABackdropLayer* _backdropLayer;
	NSView* _backgroundColorView;
	NSTitlebarSeparatorView* _topBorderSeparatorView;
	unsigned long long _numberOfPinnedTabs;
	unsigned long long _numberOfPinnedTabsForLayout;
	double _timeOfLastHoveredIndexChange;
	unsigned long long _lastHoveredIndexWhileWaitingForReorderingToKickIn;
	NSTabBarEmptyRegionPlaceholderButton* _placeholderTabForEmptyUnpinnedRegion;
	NSView* _externalNextKeyView;
	NSView* _firstKeyView;
	NSView* _lastKeyView;
	id<NSTabBarDelegate> _delegate;
	id<NSTabBarSyncedButton> _buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion;
	NSView* _createTabButton;
	long long _springLoadingTargetIndex;
	unsigned _didLayOutAfterMovingToWindow : 1;
	unsigned _isDraggingInPinningRegion : 1;
	unsigned _mustDragExtraDistanceToReorder : 1;
	unsigned _needsWindowChangedKeyStateAfterMove : 1;
	unsigned _isDisabled : 1;
	unsigned _forcesActiveWindowState : 1;
	unsigned _shouldShowAddButton : 1;
	unsigned _isStackingButtons : 1;
	unsigned _selectedButtonIsDetached : 1;
	unsigned _hideWindowAfterDetachingOnlyTab : 1;
	unsigned _selectionIsChanging : 1;
	unsigned _isInteractivelyClosingTabs : 1;
	unsigned _isScrollingToRevealAddedTab : 1;
	unsigned _useModalCollapsedLayout : 1;
	unsigned _didScheduleAnimatedLayout : 1;

}

@property (assign,nonatomic,__weak) id<NSTabBarSyncedButton> buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion;              //@synthesize buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion=_buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion - In the implementation block
@property (assign,nonatomic,__weak) NSView * firstKeyView;                                                                        //@synthesize firstKeyView=_firstKeyView - In the implementation block
@property (assign,nonatomic,__weak) NSView * lastKeyView;                                                                         //@synthesize lastKeyView=_lastKeyView - In the implementation block
@property (__weak) id<NSTabBarDelegate> delegate;                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign) char forcesActiveWindowState; 
@property (copy) NSArray * tabBarViewItems; 
@property (readonly) NSArray * tabButtons;                                                                                        //@synthesize tabButtons=_tabButtons - In the implementation block
@property (assign) char shouldShowAddButton; 
@property (assign) char useModalCollapsedLayout; 
@property (assign) unsigned long long selectedTabButtonIndex; 
@property (getter=isEnabled) char enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_tabBarColorNamed:(id)arg1 ;
+(id)accessibilityLabelForNumberOfTabs:(unsigned long long)arg1 andNumberOfPinnedTabs:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<NSTabBarDelegate>)delegate;
-(void)setDelegate:(id<NSTabBarDelegate>)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)layout;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(void)setNeedsLayout:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)hitTest:(CGPoint)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)isAccessibilityElement;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setNextKeyView:(id)arg1 ;
-(void)_windowChangedKeyState;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(unsigned long long)springLoadingEntered:(id)arg1 ;
-(void)springLoadingHighlightChanged:(id)arg1 ;
-(void)springLoadingActivated:(char)arg1 draggingInfo:(id)arg2 ;
-(char)worksWhenModal;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)button:(id)arg1 didSetHighlightStateToPressed:(char)arg2 hovered:(char)arg3 ;
-(void)otherMouseUp:(id)arg1 ;
-(unsigned long long)springLoadingUpdated:(id)arg1 ;
-(void)springLoadingExited:(id)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
-(void)setFirstKeyView:(NSView *)arg1 ;
-(void)setLastKeyView:(NSView *)arg1 ;
-(NSView *)firstKeyView;
-(NSView *)lastKeyView;
-(void)_commonTabBarViewInit;
-(void)_clipViewBoundsChanged:(id)arg1 ;
-(void)updateCloseButtonVisibilityForTabBarViewItem:(id)arg1 ;
-(void)setUseModalCollapsedLayout:(char)arg1 ;
-(void)_updateButtonsAndLayOutAnimated:(char)arg1 isSelectingButton:(char)arg2 ;
-(void)_updateIndexOfTabUnderCurrentMouseLocation:(char)arg1 ;
-(void)_restackButtonViews;
-(char)_shouldLayOutButtonsNow;
-(void)_reallyUpdateButtonsAndLayOutAnimated:(char)arg1 isSelectingButton:(char)arg2 ;
-(unsigned long long)_numberOfTabsForLayout;
-(void)_updatePinnedTabs;
-(void)_updateNewTabButton;
-(void)_recalculateLayoutAndUpdateContainerViewFrames;
-(void)_scrollToButtonAtIndex:(unsigned long long)arg1 canScrollSelectedButton:(char)arg2 ;
-(void)_beginAnimationGrouping;
-(void)_layOutButtonsAnimated:(char)arg1 ;
-(void)_updateButtonStateAndKeyLoop;
-(void)_endAnimationGrouping;
-(void)_updateButtonsAndLayOutAnimated:(char)arg1 ;
-(void)_updateBackdropLayer;
-(char)_isInFullscreenToolbarWindow;
-(double)_pinnedTabsWidth;
-(void)_recalculateLayout;
-(char)_canDetachTab;
-(void)_startReorderingRestrictionsAfterPinning;
-(void)_cancelReorderingRestrictionsAfterPinning;
-(void)_animateButtonLayout:(id)arg1 ;
-(char)_shouldAlignTabButtonTitleWithWindowCenter;
-(unsigned long long)_frontmostButtonIndex;
-(void)_layOutDraggedButtonAnimated:(char)arg1 ;
-(CGRect)_adjustedFrameForButtonAtIndex:(unsigned long long)arg1 isHidden:(char*)arg2 ;
-(CGRect)_viewFrameForAdjustedButtonFrame:(CGRect)arg1 ;
-(double)_titleCenterOffsetForButton:(id)arg1 ;
-(double)_titleCenterOffsetForButtonAtIndex:(unsigned long long)arg1 frontmostButtonIndex:(unsigned long long)arg2 ;
-(CGRect)_placeholderTabForEmptyUnpinnedRegionButtonFrame;
-(double)_layoutBoundsWidth;
-(char)_shouldCreatePlaceholderTabForEmptyUnpinnedRegion;
-(void)_uninstallPlaceholderTabForEmptyUnpinnedRegion;
-(void)_newTabWithinWindow:(id)arg1 ;
-(void)setButtonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion:(id<NSTabBarSyncedButton>)arg1 ;
-(char)shouldShowAddButton;
-(void)_addNewTabButton;
-(id<NSTabBarSyncedButton>)buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion;
-(double)_offsetFromLeftEdge;
-(CGRect)_layoutBounds;
-(unsigned long long)_numberOfPinnedTabsForLayout;
-(void)_updateButtonWidthAndRemainingWidthInTabBarToDivideAmongButtons;
-(unsigned long long)_calculateStackingRegions;
-(double)_buttonWidthForNumberOfButtons:(unsigned long long)arg1 inWidth:(double)arg2 remainderWidth:(double*)arg3 ;
-(CGRect)_unstackedFrameForButtonAtIndex:(unsigned long long)arg1 ;
-(CGRect)_frameForButtonAtIndex:(unsigned long long)arg1 firstButtonOffset:(double)arg2 buttonWidth:(double)arg3 supplementalWidth:(double)arg4 ;
-(char)_shouldLayOutButtonsToAlignWithWindowCenter;
-(CGRect)_centeringFrameForButtonAtIndex:(unsigned long long)arg1 ;
-(double)_horizontalOffsetForButtonAtIndex:(unsigned long long)arg1 frontmostButtonIndex:(unsigned long long)arg2 slowingFactor:(double)arg3 ;
-(double)_centerXInLeftToRight;
-(unsigned long long)_tabIndexAtPointWhenLayingOutButtonsToAlignWithWindowCenter:(CGPoint)arg1 ;
-(unsigned long long)_tabIndexAtPoint:(CGPoint)arg1 withButtonWidth:(double)arg2 supplementalWidth:(double)arg3 ;
-(unsigned long long)_visibleTabIndexAtPoint:(CGPoint)arg1 stackingRegion:(unsigned long long*)arg2 ignorePointsOutsideOfLayoutBounds:(char)arg3 ;
-(unsigned long long)_tabIndexAtPoint:(CGPoint)arg1 ;
-(CGPoint)_scrollTargetPointForStackingRegion:(unsigned long long)arg1 ;
-(void)_syncedScrollBoundsToOrigin:(CGPoint)arg1 animated:(char)arg2 ;
-(NSArray *)tabBarViewItems;
-(void)selectTabBarViewItem:(id)arg1 ;
-(NSEdgeInsets)_layoutBoundsEdgeInsetsForUnstackedButtons;
-(CGRect)_rectWithUnstackedButtons;
-(double)_effectiveRightStackWidthForButtonAtIndex:(unsigned long long)arg1 ;
-(double)_effectiveLeftStackWidthForButtonAtIndex:(unsigned long long)arg1 ;
-(void)setForcesActiveWindowState:(char)arg1 ;
-(void)insertTabBarViewItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertTabBarViewItem:(id)arg1 atIndex:(unsigned long long)arg2 animated:(char)arg3 ;
-(void)_insertTabButtonWithTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_scheduleButtonLayOutAnimated:(char)arg1 ;
-(void)_installPlaceholderTabForEmptyUnpinnedRegion;
-(void)removeTabBarViewItemAtIndex:(unsigned long long)arg1 ;
-(void)selectTabBarViewItem:(id)arg1 animated:(char)arg2 ;
-(void)_moveButton:(id)arg1 forTabBarViewItem:(id)arg2 toIndex:(unsigned long long)arg3 ;
-(void)_setIndexOfTabUnderMouse:(unsigned long long)arg1 animated:(char)arg2 ;
-(char)_shouldShowCloseButtonForTabBarViewItem:(id)arg1 ;
-(id)tabButton:(id)arg1 menuForEvent:(id)arg2 ;
-(void)_animateTabBackgroundOnClickEventIfAppropriate:(id)arg1 ;
-(void)_trackMouseEventsForEvent:(id)arg1 inStackingRegion:(unsigned long long)arg2 ;
-(void)_trackMouseEventsForEvent:(id)arg1 onTabAtIndex:(unsigned long long)arg2 ;
-(id)_trackMouseEventsUntilMouseUp:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_visibleTabIndexAtPoint:(CGPoint)arg1 stackingRegion:(unsigned long long*)arg2 ;
-(void)_scrollAfterClickingOnStackingRegion:(unsigned long long)arg1 ;
-(char)_canDragItems;
-(void)selectTabButton:(id)arg1 ;
-(char)_dragShouldBeginFromMouseDown:(id)arg1 withExpiration:(id)arg2 xHysteresis:(float)arg3 yHysteresis:(float)arg4 ;
-(void)_trackReorderingEventsWithStartEvent:(id)arg1 forTabButton:(id)arg2 ;
-(void)_setTabButtonUnderMouse:(id)arg1 shouldAnimateHighlight:(char)arg2 ;
-(char)_shouldHighlightButtonOnHover;
-(long long)_tabDragResultForInitialDragWithStartEvent:(id)arg1 ;
-(long long)_tabDragResultForEventTrackingWithStartEvent:(id)arg1 ;
-(void)_detachTabAndPositionUnderCursor:(id)arg1 ;
-(CGSize)_currentEventOffsetFromEvent:(id)arg1 ;
-(char)_shouldDetachTabForMouseEvent:(id)arg1 ;
-(void)_updateDropIndexWithDraggingLocation:(CGPoint)arg1 ;
-(double)_pinningRegionWidth;
-(void)_autoscrollButtonsForStackingRegion:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfUnpinnedTabs;
-(id)_miniWindowDragImageForTabButton:(id)arg1 ;
-(unsigned long long)selectedTabButtonIndex;
-(id)_tabDragImageForTabButton:(id)arg1 ;
-(id)_pinnedTabDragImageForTabButton:(id)arg1 ;
-(CGPoint)_mouseLocationInDragImageForTabButton:(id)arg1 ;
-(double)_buttonWidthForDrag;
-(double)_miniWindowDragImageWidth;
-(id)_destinationWindowForDropOnScreenOperation;
-(unsigned long long)_updateDropIndexWithTabDraggingInfo:(id)arg1 ;
-(unsigned long long)_dragOperationForDraggingInfo:(id)arg1 ;
-(void)_setIsSpringLoadingFlashing:(char)arg1 index:(long long)arg2 ;
-(void)_setSpringLoadingTargetIndex:(long long)arg1 draggingInfo:(id)arg2 ;
-(unsigned long long)_doSpringLoadingSetupForDraggingInfo:(id)arg1 ;
-(void)_autoSelectIndex:(long long)arg1 ;
-(CGRect)_defaultTabItemRectForTabCount:(long long)arg1 ;
-(CGRect)_getFirstTabRectForInsertingTabCount:(long long)arg1 ;
-(char)destinationWindowShouldMoveToDropPointInSpace:(unsigned long long)arg1 forDetachedTabDraggingImageToWindowTransitionController:(id)arg2 ;
-(id)destinationWindowForDetachedTabDraggingImageToWindowTransitionController:(id)arg1 ;
-(void)detachedTabDraggingImageToWindowTransitionController:(id)arg1 didFinishTransitionAnimationForWindow:(id)arg2 ;
-(void)morphingDragImage:(id)arg1 wasDroppedAtPointOnScreen:(CGPoint)arg2 ;
-(id)dragDestinationWindowForMorphingDragImage:(id)arg1 ;
-(void)closeTabButton:(id)arg1 ;
-(void)tabButtonDidBecomeFirstResponder:(id)arg1 ;
-(unsigned long long)tabDraggingEntered:(id)arg1 ;
-(unsigned long long)tabDraggingUpdated:(id)arg1 ;
-(void)tabDraggingExited:(id)arg1 ;
-(char)performTabDragOperation:(id)arg1 ;
-(char)wantsPeriodicTabDraggingUpdates;
-(char)willPinTabForTabDragOperation:(id)arg1 ;
-(void)setShouldShowAddButton:(char)arg1 ;
-(char)useModalCollapsedLayout;
-(void)_layoutSublayersOfLayer:(id)arg1 ;
-(CGRect)tabButtonFrameForItem:(id)arg1 ;
-(double)currentButtonWidth;
-(void)setSelectedTabButtonIndex:(unsigned long long)arg1 ;
-(char)forcesActiveWindowState;
-(void)setTabBarViewItems:(NSArray *)arg1 ;
-(void)addTabBarViewItem:(id)arg1 ;
-(void)removeTabBarViewItem:(id)arg1 ;
-(void)moveTabBarViewItem:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)_getTabRectsForInsertingTabCount:(long long)arg1 ;
-(NSArray *)tabButtons;
@end

