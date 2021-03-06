/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXBar.h>

@protocol UXNavigationBarDelegate;
@class NSView, NSArray, NSImage, NSMutableArray, _UXNavigationItemContainerView, UXNavigationItem;

@interface UXNavigationBar : UXBar {

	char _needsRecalculateWindowKeyViewLoop;
	char _recalculatingKeyViewLoop;
	char _translucent;
	char _recalculatingWindowKeyViewLoop;
	char _alternateTitleEnabled;
	char _detached;
	id<UXNavigationBarDelegate> _delegate;
	NSView* _titleCenteringTrackedView;
	NSArray* _items;
	NSImage* _backIndicatorImage;
	NSView* _globalTrailingView;
	double _globalTrailingViewWidthMultiplier;
	NSMutableArray* _internalItems;
	_UXNavigationItemContainerView* _topItemContainer;
	long long _currentOperation;
	UXNavigationItem* _transitioningItem;
	NSView* _alternateTitleView;
	NSView* _alternateCondensedTitleView;
	double _leftInteritemSpacing;
	double _rightInteritemSpacing;
	double _centerYOffset;
	NSEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) NSMutableArray * internalItems;                                 //@synthesize internalItems=_internalItems - In the implementation block
@property (nonatomic,retain) _UXNavigationItemContainerView * topItemContainer;              //@synthesize topItemContainer=_topItemContainer - In the implementation block
@property (assign,nonatomic) long long currentOperation;                                     //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,retain) UXNavigationItem * transitioningItem;                           //@synthesize transitioningItem=_transitioningItem - In the implementation block
@property (assign,nonatomic) char recalculatingWindowKeyViewLoop;                            //@synthesize recalculatingWindowKeyViewLoop=_recalculatingWindowKeyViewLoop - In the implementation block
@property (nonatomic,retain) NSView * alternateTitleView;                                    //@synthesize alternateTitleView=_alternateTitleView - In the implementation block
@property (nonatomic,retain) NSView * alternateCondensedTitleView;                           //@synthesize alternateCondensedTitleView=_alternateCondensedTitleView - In the implementation block
@property (assign,nonatomic) char alternateTitleEnabled;                                     //@synthesize alternateTitleEnabled=_alternateTitleEnabled - In the implementation block
@property (assign,getter=isDetached,nonatomic) char detached;                                //@synthesize detached=_detached - In the implementation block
@property (assign,nonatomic) double leftInteritemSpacing;                                    //@synthesize leftInteritemSpacing=_leftInteritemSpacing - In the implementation block
@property (assign,nonatomic) double rightInteritemSpacing;                                   //@synthesize rightInteritemSpacing=_rightInteritemSpacing - In the implementation block
@property (assign,nonatomic) double centerYOffset;                                           //@synthesize centerYOffset=_centerYOffset - In the implementation block
@property (assign,nonatomic,__weak) id<UXNavigationBarDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) char translucent;                          //@synthesize translucent=_translucent - In the implementation block
@property (assign,nonatomic) NSEdgeInsets edgeInsets;                                        //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) NSView * titleCenteringTrackedView;                      //@synthesize titleCenteringTrackedView=_titleCenteringTrackedView - In the implementation block
@property (nonatomic,readonly) UXNavigationItem * topItem; 
@property (nonatomic,readonly) UXNavigationItem * backItem; 
@property (nonatomic,copy) NSArray * items;                                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSImage * backIndicatorImage;                                   //@synthesize backIndicatorImage=_backIndicatorImage - In the implementation block
@property (nonatomic,retain) NSView * globalTrailingView;                                    //@synthesize globalTrailingView=_globalTrailingView - In the implementation block
@property (assign,nonatomic) double globalTrailingViewWidthMultiplier;                       //@synthesize globalTrailingViewWidthMultiplier=_globalTrailingViewWidthMultiplier - In the implementation block
+(id)_itemKeyPathsToObserve;
-(void)dealloc;
-(id<UXNavigationBarDelegate>)delegate;
-(void)setDelegate:(id<UXNavigationBarDelegate>)arg1 ;
-(void)setEdgeInsets:(NSEdgeInsets)arg1 ;
-(void)layout;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)currentOperation;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSEdgeInsets)edgeInsets;
-(void)mouseDown:(id)arg1 ;
-(void)recalculateKeyViewLoop;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setCurrentOperation:(long long)arg1 ;
-(void)_snapshot;
-(char)isDetached;
-(void)_removeItem:(id)arg1 ;
-(UXNavigationItem *)backItem;
-(UXNavigationItem *)topItem;
-(NSImage *)backIndicatorImage;
-(void)setBackIndicatorImage:(NSImage *)arg1 ;
-(char)isTranslucent;
-(void)setTranslucent:(char)arg1 ;
-(long long)barPosition;
-(void)pushNavigationItem:(id)arg1 animated:(char)arg2 ;
-(id)popNavigationItemAnimated:(char)arg1 ;
-(void)_updateTitleView;
-(NSMutableArray *)internalItems;
-(void)setInternalItems:(NSMutableArray *)arg1 ;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setTitleCenteringTrackedView:(NSView *)arg1 ;
-(NSView *)titleCenteringTrackedView;
-(double)centerYOffset;
-(double)rightInteritemSpacing;
-(double)leftInteritemSpacing;
-(char)alternateTitleEnabled;
-(NSView *)alternateTitleView;
-(NSView *)alternateCondensedTitleView;
-(void)setCenterYOffset:(double)arg1 ;
-(void)setAlternateTitleView:(NSView *)arg1 ;
-(void)setAlternateTitleEnabled:(char)arg1 ;
-(void)_addObserversForItem:(id)arg1 ;
-(void)_removeObserversForItem:(id)arg1 ;
-(void)_pushItem:(id)arg1 ;
-(id)_popNavigationItem;
-(void)_prepareForNavigationItemTransition;
-(void)_pushNavigationItem:(id)arg1 animated:(char)arg2 duration:(double)arg3 ;
-(id)_popNavigationItemAnimated:(char)arg1 duration:(double)arg2 ;
-(void)_updateItemContainer;
-(void)beginInteractivePushToItem:(id)arg1 ;
-(void)beginInteractivePop;
-(void)_completeInteractiveTransition:(char)arg1 duration:(double)arg2 ;
-(void)setNeedsRecalcuateWindowKeyViewLoop;
-(NSView *)globalTrailingView;
-(void)setGlobalTrailingView:(NSView *)arg1 ;
-(double)globalTrailingViewWidthMultiplier;
-(void)setGlobalTrailingViewWidthMultiplier:(double)arg1 ;
-(_UXNavigationItemContainerView *)topItemContainer;
-(void)setTopItemContainer:(_UXNavigationItemContainerView *)arg1 ;
-(UXNavigationItem *)transitioningItem;
-(void)setTransitioningItem:(UXNavigationItem *)arg1 ;
-(char)recalculatingWindowKeyViewLoop;
-(void)setRecalculatingWindowKeyViewLoop:(char)arg1 ;
-(void)setAlternateCondensedTitleView:(NSView *)arg1 ;
-(void)setDetached:(char)arg1 ;
-(void)setLeftInteritemSpacing:(double)arg1 ;
-(void)setRightInteritemSpacing:(double)arg1 ;
@end

