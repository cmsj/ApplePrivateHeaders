/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKUILayoutItem.h>

@protocol EKUILayoutItem;
@class NSString, EKUIGadget, EKViewController, NSMutableOrderedSet, EKUIGadgetContainerView, EKUIVibrantView, CalUIDividerView, NSDictionary, NSMutableDictionary, NSArray, CalDefaultDictionary, NSColor;

@interface EKUIGadgetContainer : NSObject <EKUILayoutItem> {

	char _doNotPassdownExpandedState;
	char _ignoresMouseEvents;
	char _canBecomeKey;
	char _selectsFirstKeyViewOnClick;
	char _isTopLevelContainer;
	char _isExpanded;
	char _isHovered;
	char _activeKeyboardHover;
	double _maximumHeightBeforeScrolling;
	NSString* _accessibilityDescription;
	EKUIGadgetContainer* _nextContainer;
	EKUIGadgetContainer* _previousContainer;
	EKUIGadget* _firstGadget;
	/*^block*/id _shouldDisplayDividerAboveBlock;
	/*^block*/id _shouldDisplayDividerBelowBlock;
	/*^block*/id _shouldDisplayDividerExpandedAboveBlock;
	EKViewController* _viewController;
	id<EKUILayoutItem> _parentItem;
	NSString* _uuid;
	NSMutableOrderedSet* _mutableSubitems;
	NSMutableOrderedSet* _currentlyDisplayedItems;
	EKUIGadgetContainerView* _containerView;
	EKUIVibrantView* _backgroundView;
	CalUIDividerView* _topDivider;
	CalUIDividerView* _bottomDivider;
	NSDictionary* _metrics;
	NSMutableDictionary* _conditionalMetrics;
	NSArray* _topConstraints;
	NSArray* _bottomConstraints;
	NSArray* _subitemLabelConstraints;
	CalDefaultDictionary* _spacingOverrides;
	NSColor* _backgroundColor;

}

@property (__weak) EKViewController * viewController;                          //@synthesize viewController=_viewController - In the implementation block
@property (__weak) id<EKUILayoutItem> parentItem;                              //@synthesize parentItem=_parentItem - In the implementation block
@property (retain) NSString * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSMutableOrderedSet * mutableSubitems;                      //@synthesize mutableSubitems=_mutableSubitems - In the implementation block
@property (retain) NSMutableOrderedSet * currentlyDisplayedItems;              //@synthesize currentlyDisplayedItems=_currentlyDisplayedItems - In the implementation block
@property (retain) EKUIGadgetContainerView * containerView;                    //@synthesize containerView=_containerView - In the implementation block
@property (retain) EKUIVibrantView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) CalUIDividerView * topDivider;                              //@synthesize topDivider=_topDivider - In the implementation block
@property (retain) CalUIDividerView * bottomDivider;                           //@synthesize bottomDivider=_bottomDivider - In the implementation block
@property (retain) NSDictionary * metrics;                                     //@synthesize metrics=_metrics - In the implementation block
@property (retain) NSMutableDictionary * conditionalMetrics;                   //@synthesize conditionalMetrics=_conditionalMetrics - In the implementation block
@property (retain) NSArray * topConstraints;                                   //@synthesize topConstraints=_topConstraints - In the implementation block
@property (retain) NSArray * bottomConstraints;                                //@synthesize bottomConstraints=_bottomConstraints - In the implementation block
@property (retain) NSArray * subitemLabelConstraints;                          //@synthesize subitemLabelConstraints=_subitemLabelConstraints - In the implementation block
@property (retain) CalDefaultDictionary * spacingOverrides;                    //@synthesize spacingOverrides=_spacingOverrides - In the implementation block
@property (retain) NSColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign) char isExpanded;                                            //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign) char isHovered;                                             //@synthesize isHovered=_isHovered - In the implementation block
@property (assign,nonatomic) char activeKeyboardHover;                         //@synthesize activeKeyboardHover=_activeKeyboardHover - In the implementation block
@property (assign) char isTopLevelContainer;                                   //@synthesize isTopLevelContainer=_isTopLevelContainer - In the implementation block
@property (assign) double maximumHeightBeforeScrolling;                        //@synthesize maximumHeightBeforeScrolling=_maximumHeightBeforeScrolling - In the implementation block
@property (assign) char doNotPassdownExpandedState;                            //@synthesize doNotPassdownExpandedState=_doNotPassdownExpandedState - In the implementation block
@property (assign) char ignoresMouseEvents;                                    //@synthesize ignoresMouseEvents=_ignoresMouseEvents - In the implementation block
@property (assign) char canBecomeKey;                                          //@synthesize canBecomeKey=_canBecomeKey - In the implementation block
@property (assign) char selectsFirstKeyViewOnClick;                            //@synthesize selectsFirstKeyViewOnClick=_selectsFirstKeyViewOnClick - In the implementation block
@property (copy) NSString * accessibilityDescription;                          //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (readonly) char isAnimating; 
@property (readonly) char hasKeyboardFocus; 
@property (__weak) EKUIGadgetContainer * nextContainer;                        //@synthesize nextContainer=_nextContainer - In the implementation block
@property (__weak) EKUIGadgetContainer * previousContainer;                    //@synthesize previousContainer=_previousContainer - In the implementation block
@property (__weak) EKUIGadget * firstGadget;                                   //@synthesize firstGadget=_firstGadget - In the implementation block
@property (copy) id shouldDisplayDividerAboveBlock;                            //@synthesize shouldDisplayDividerAboveBlock=_shouldDisplayDividerAboveBlock - In the implementation block
@property (copy) id shouldDisplayDividerBelowBlock;                            //@synthesize shouldDisplayDividerBelowBlock=_shouldDisplayDividerBelowBlock - In the implementation block
@property (copy) id shouldDisplayDividerExpandedAboveBlock;                    //@synthesize shouldDisplayDividerExpandedAboveBlock=_shouldDisplayDividerExpandedAboveBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)enclosingGadgetContainerForLayoutItem:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)object;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(id)view;
-(id)event;
-(id)item;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(void)updateConstraints;
-(double)preferredWidth;
-(NSColor *)backgroundColor;
-(void)setBackgroundView:(EKUIVibrantView *)arg1 ;
-(EKUIVibrantView *)backgroundView;
-(id)scrollView;
-(char)isAnimating;
-(void)setIgnoresMouseEvents:(char)arg1 ;
-(NSString *)accessibilityDescription;
-(char)isEditable;
-(char)performDragOperation:(id)arg1 ;
-(char)ignoresMouseEvents;
-(EKUIGadgetContainerView *)containerView;
-(void)setContainerView:(EKUIGadgetContainerView *)arg1 ;
-(void)setViewController:(EKViewController *)arg1 ;
-(void)setNeedsUpdateConstraints:(char)arg1 ;
-(id)firstKeyView;
-(id)lastKeyView;
-(EKViewController *)viewController;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(id<EKUILayoutItem>)parentItem;
-(void)setExpanded:(char)arg1 ;
-(char)isExpanded;
-(void)setParentItem:(id<EKUILayoutItem>)arg1 ;
-(char)needsExpansion;
-(char)isScrolling;
-(char)isContainer;
-(NSDictionary *)metrics;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(id)topConstraint;
-(id)bottomConstraint;
-(id)initWithViewController:(id)arg1 ;
-(char)hasKeyboardFocus;
-(void)setIsExpanded:(char)arg1 ;
-(id)_lastItem;
-(char)shouldDisplay;
-(void)setActiveKeyboardHover:(char)arg1 ;
-(char)updateWithDiff:(id)arg1 ;
-(char)wantsAnimationSuppression;
-(id)enclosingGadgetContainer;
-(void)updateScrollState;
-(id)subItems;
-(void)animationDidFinish:(id)arg1 ;
-(double)horizontalInset;
-(id)claimedPboardTypes;
-(void)enumerateSubitemsUsingBlock:(/*^block*/id)arg1 ;
-(void)savePendingChanges;
-(char)isExpansionAllowed;
-(void)setExpanded:(char)arg1 andUpdateFirstResponder:(char)arg2 ;
-(void)saveCompleteChange;
-(void)savePartialChange;
-(void)setDoNotPassdownExpandedState:(char)arg1 ;
-(void)addSubitems:(id)arg1 ;
-(void)addSubitem:(id)arg1 ;
-(void)setShouldDisplayDividerAboveBlock:(id)arg1 ;
-(void)setShouldDisplayDividerBelowBlock:(id)arg1 ;
-(void)setTopSpacing:(double)arg1 bottomSpacing:(double)arg2 betweenSpacing:(double)arg3 ;
-(void)setCanBecomeKey:(char)arg1 ;
-(void)setShouldDisplayDividerExpandedAboveBlock:(id)arg1 ;
-(void)addSubitemsByClasses:(id)arg1 ;
-(void)setFirstGadget:(EKUIGadget *)arg1 ;
-(void)setSelectsFirstKeyViewOnClick:(char)arg1 ;
-(void)setTopSpacing:(double)arg1 topSpacingExpanded:(double)arg2 bottomSpacing:(double)arg3 bottomSpacingExpanded:(double)arg4 betweenSpacing:(double)arg5 betweenSpacingExpanded:(double)arg6 ;
-(void)setConditionalSpacing:(double)arg1 forKey:(id)arg2 withCondition:(/*^block*/id)arg3 ;
-(void)setSpacing:(double)arg1 betweenTopSubitem:(id)arg2 bottomSubitem:(id)arg3 withCondition:(/*^block*/id)arg4 ;
-(void)firstResponderChanged:(id)arg1 ;
-(id)initWithViewController:(id)arg1 isTopLevel:(char)arg2 ;
-(void)setNextContainer:(EKUIGadgetContainer *)arg1 ;
-(void)setPreviousContainer:(EKUIGadgetContainer *)arg1 ;
-(void)calculateKeyViewLoop;
-(void)updateGadgetVisibility;
-(id)lastVisibleGadget;
-(void)updateConstraintsIncludingSubtree;
-(void)toggleIsExpanded;
-(void)setIsTopLevelContainer:(char)arg1 ;
-(void)setMutableSubitems:(NSMutableOrderedSet *)arg1 ;
-(void)setCurrentlyDisplayedItems:(NSMutableOrderedSet *)arg1 ;
-(void)setTopConstraints:(NSArray *)arg1 ;
-(void)setBottomConstraints:(NSArray *)arg1 ;
-(void)setSpacingOverrides:(CalDefaultDictionary *)arg1 ;
-(void)setSubitemLabelConstraints:(NSArray *)arg1 ;
-(void)setConditionalMetrics:(NSMutableDictionary *)arg1 ;
-(void)setTopDivider:(CalUIDividerView *)arg1 ;
-(void)setBottomDivider:(CalUIDividerView *)arg1 ;
-(CalUIDividerView *)bottomDivider;
-(CalUIDividerView *)topDivider;
-(id)shouldDisplayDividerExpandedAboveBlock;
-(char)itemIsAdjacentlyBelowExpandedContainer:(id)arg1 ;
-(id)shouldDisplayDividerAboveBlock;
-(id)shouldDisplayDividerBelowBlock;
-(char)makeFirstValidKeyViewFirstResponder;
-(void)setExpanded:(char)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(char)doNotPassdownExpandedState;
-(NSMutableOrderedSet *)mutableSubitems;
-(char)_performExpansionAnimationIfNeeded:(char)arg1 ;
-(void)_subItem:(id)arg1 didSetExpandedState:(char)arg2 willPerformAnimation:(char)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(char)canBecomeKey;
-(id)_firstVisibleItem;
-(id)_lastVisibleItem;
-(void)collapseAllSubitemsExceptItem:(id)arg1 ;
-(void)enumerateAllDescendantsDepthFirstUsingBlock:(/*^block*/id)arg1 ;
-(void)removeSubitem:(id)arg1 ;
-(NSMutableOrderedSet *)currentlyDisplayedItems;
-(EKUIGadgetContainer *)nextContainer;
-(EKUIGadgetContainer *)previousContainer;
-(void)enumerateCurrentlyDisplayedItemsWithNeighborsUsingBlock:(/*^block*/id)arg1 ;
-(char)shouldDrawBottomDivider;
-(NSArray *)topConstraints;
-(id)getSpacingForKey:(id)arg1 ;
-(NSArray *)bottomConstraints;
-(CalDefaultDictionary *)spacingOverrides;
-(EKUIGadget *)firstGadget;
-(id)firstValidKeyView;
-(void)_updateTopConstraint;
-(void)_updateBottomConstraint;
-(void)_addConstraintBetweenTopItem:(id)arg1 bottomItem:(id)arg2 ;
-(void)_addHorizontalConstraintToSubitem:(id)arg1 previousItem:(id)arg2 nextItem:(id)arg3 ;
-(NSMutableDictionary *)conditionalMetrics;
-(char)subItemsAreAnimating;
-(void)mouseUpInContainerView:(id)arg1 ;
-(char)selectsFirstKeyViewOnClick;
-(void)_collapseAllSubItemsForThisContainerOnlyExceptItem:(id)arg1 ;
-(void)enumerateAllDescendantsBreadthFirstUsingBlock:(/*^block*/id)arg1 ;
-(char)activeKeyboardHover;
-(char)shouldDrawTopDivider;
-(void)_printKeyViewLoop;
-(void)subitemWantsFirstResponder:(id)arg1 ;
-(void)subitemDidBecomeFirstResponder:(id)arg1 ;
-(id)alignmentLabel;
-(void)removeSubitems:(id)arg1 ;
-(char)itemIsAdjacentToExpandedContainer:(id)arg1 ;
-(char)itemIsAdjacentlyBelowVisibleDividerLine:(id)arg1 ;
-(void)enumerateSubcontainersUsingBlock:(/*^block*/id)arg1 ;
-(void)_addHiddenConstraintToSubitem:(id)arg1 ;
-(id)_firstItem;
-(void)configureWithBackgroundColor:(id)arg1 ;
-(char)_windowIsVisible;
-(void)containerViewBecameFirstResponder:(id)arg1 ;
-(void)containerViewResignedFirstResponder:(id)arg1 ;
-(char)containerView:(id)arg1 didReceiveOpenEvent:(id)arg2 ;
-(void)updateDividers;
-(double)maximumHeightBeforeScrolling;
-(void)setMaximumHeightBeforeScrolling:(double)arg1 ;
-(char)isTopLevelContainer;
-(NSArray *)subitemLabelConstraints;
-(char)isHovered;
-(void)setIsHovered:(char)arg1 ;
@end

