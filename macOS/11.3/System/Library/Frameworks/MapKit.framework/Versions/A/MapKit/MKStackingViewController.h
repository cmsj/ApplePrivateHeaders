/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKUIViewController.h>
#import <libobjc.A.dylib/_MKStackViewDelegate.h>
#import <libobjc.A.dylib/_MKAnimationStackViewDelegate.h>

@protocol MKStackingViewControllerDelegate;
@class _MKStackView, _MKStackingContentView, NSLayoutConstraint, NSScrollView, NSMapTable, NSArray, NSHashTable, NSView, NSString;

@interface MKStackingViewController : _MKUIViewController <_MKStackViewDelegate, _MKAnimationStackViewDelegate> {

	_MKStackView* _stackView;
	_MKStackingContentView* _contentView;
	NSLayoutConstraint* _heightCompressionResistanceConstraint;
	NSLayoutConstraint* _heightHuggingConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _stackViewWidthConstraint;
	char _isScrollDisabled;
	unsigned long long _countOfCurrentLayoutInvocations;
	NSScrollView* _scrollView;
	NSLayoutConstraint* _titleViewLeadingConstraint;
	char _hasRegisteredForPreferredScrollerStyleNotifications;
	char _currentlyScrolling;
	NSMapTable* _viewsToViewControllers;
	NSArray* _titleViewConstraints;
	char _willRelayoutForPreferredContentSizeChange;
	char _isSettingStackedViews;
	char _contentViewConstraintsAdded;
	NSHashTable* _minimallyVisibleViews;
	char _needsToPerformLayout;
	NSView* _overlayView;
	double _overlayViewOriginY;
	char _mayWantSpearators;
	char _needToCallViewControllerLayoutDelegate;
	NSView* _titleView;
	NSArray* _viewControllers;
	id<MKStackingViewControllerDelegate> _stackingDelegate;
	double _verticalScrollerInset;

}

@property (nonatomic,copy) NSArray * viewControllers;                                                   //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic,__weak) id<MKStackingViewControllerDelegate> stackingDelegate;              //@synthesize stackingDelegate=_stackingDelegate - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) char scrollEnabled; 
@property (nonatomic,retain) NSView * titleView;                                                        //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleViewLeadingConstraint; 
@property (nonatomic,readonly) double verticalScrollerInset;                                            //@synthesize verticalScrollerInset=_verticalScrollerInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(char)isScrollEnabled;
-(void)setScrollEnabled:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setStackingDelegate:(id<MKStackingViewControllerDelegate>)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)setTitleView:(NSView *)arg1 ;
-(NSView *)titleView;
-(void)stackViewNeedsLayout:(id)arg1 ;
-(void)_didScroll;
-(void)_didScrollFromBoundsDidChangeNotification:(id)arg1 ;
-(void)_scrollViewWillStartScroll:(id)arg1 ;
-(void)_scrollViewDidEndScroll:(id)arg1 ;
-(void)_updateScrollerInsetFromFrameChange;
-(void)_setScrollEnabled:(char)arg1 forcedUpdate:(char)arg2 ;
-(void)_addTitleViewToHierarchyIfPossible;
-(double)_titleHeight;
-(id<MKStackingViewControllerDelegate>)stackingDelegate;
-(double)_fittingHeightForView:(id)arg1 ;
-(void)_updateFixedHeightAwareControllers;
-(char)_isSafeToPerformLayout;
-(void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2 ;
-(void)_setUpEnteringViewController:(id)arg1 ;
-(void)_tearDownExitingViewController:(id)arg1 ;
-(void)_callViewControllersLayoutDelegateIfNeeded;
-(void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1 ;
-(void)_removePreferredHeightConstraintFromViewController:(id)arg1 ;
-(void)_setOverlayViewFrame;
-(void)_updateScrollerInsetWithPhase:(long long)arg1 ;
-(double)verticalScrollerInset;
-(void)setVerticalScrollerInset:(double)arg1 ;
-(void)_updateViewControllerVisibilityAfterPositionChange;
-(void)_preferredScrollerStyleDidChange;
-(char)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2 ;
-(double)currentHeight;
-(void)setWidthConstraintConstant:(double)arg1 ;
-(void)setOverlayView:(id)arg1 withOriginY:(double)arg2 ;
-(void)removeOverlayViewAnimated:(char)arg1 ;
-(NSLayoutConstraint *)titleViewLeadingConstraint;
-(void)setTitleViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
@end

