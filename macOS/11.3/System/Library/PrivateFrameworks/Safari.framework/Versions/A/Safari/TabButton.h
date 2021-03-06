/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/TabBarViewButton.h>
#import <libobjc.A.dylib/NSAccessibilityRadioButton.h>
#import <libobjc.A.dylib/RolloverTrackingButtonDelegate.h>

@protocol TabButtonDelegate, TabBarViewItem;
@class NSMutableArray, NSView, NSStackView, NSTextField, RolloverImageButton, NSImageView, NSLayoutConstraint, NSString, NSImage, NSArray;

@interface TabButton : TabBarViewButton <NSAccessibilityRadioButton, RolloverTrackingButtonDelegate> {

	char _didEstablishTabBarViewItemBindings;
	NSMutableArray* _accessoryViews;
	NSView* _placeholderAccessoryViewForCentering;
	NSView* _mainContentClippingContainer;
	NSStackView* _mainContentContainer;
	NSStackView* _titleContainerView;
	NSTextField* _titleTextField;
	NSView* _focusRingView;
	RolloverImageButton* _closeButton;
	NSImageView* _iconView;
	char _isMouseOver;
	NSLayoutConstraint* _mainContentContainerWidthConstraint;
	NSLayoutConstraint* _mainContentContainerLeftConstraint;
	NSLayoutConstraint* _mainContentContainerRightConstraint;
	NSLayoutConstraint* _mainContentContainerHorizontalCenteringConstraint;
	NSLayoutConstraint* _titleContainerViewHorizontalCenteringConstraint;
	id _flagsChangedEventMonitor;
	long long _tabButtonLayoutMode;
	char _canShowCloseButton;
	char _pinned;
	char _showIcon;
	id<TabButtonDelegate> _delegate;
	id<TabBarViewItem> _tabBarViewItem;
	NSString* _title;
	long long _alignment;
	NSImage* _image;
	double _buttonWidthForTitleLayout;
	double _mainContentContainerCenterOffset;
	double _titleTextFieldCenterOffset;

}

@property (assign,nonatomic,__weak) id<TabButtonDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) id<TabBarViewItem> tabBarViewItem;                            //@synthesize tabBarViewItem=_tabBarViewItem - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long alignment;                                  //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSArray * accessoryViews;                               //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (assign,nonatomic) char canShowCloseButton;                              //@synthesize canShowCloseButton=_canShowCloseButton - In the implementation block
@property (assign,getter=isPinned,nonatomic) char pinned;                          //@synthesize pinned=_pinned - In the implementation block
@property (assign,nonatomic) char showIcon;                                        //@synthesize showIcon=_showIcon - In the implementation block
@property (nonatomic,retain) NSImage * image;                                      //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double buttonWidthForTitleLayout;                     //@synthesize buttonWidthForTitleLayout=_buttonWidthForTitleLayout - In the implementation block
@property (assign,nonatomic) double mainContentContainerCenterOffset;              //@synthesize mainContentContainerCenterOffset=_mainContentContainerCenterOffset - In the implementation block
@property (assign,nonatomic) double titleTextFieldCenterOffset;                    //@synthesize titleTextFieldCenterOffset=_titleTextFieldCenterOffset - In the implementation block
@property (getter=isNarrowMode,nonatomic,readonly) char narrowMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleFont;
+(double)titleWidthForButtonWidth:(double)arg1 ;
+(long long)tabButtonLayoutModeForTabWidth:(double)arg1 ;
-(void)dealloc;
-(id<TabButtonDelegate>)delegate;
-(void)setDelegate:(id<TabButtonDelegate>)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(NSString *)title;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)setActive:(char)arg1 ;
-(NSImage *)image;
-(void)viewDidMoveToWindow;
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 tabBarViewItem:(id)arg2 ;
-(char)mouseDownCanMoveWindow;
-(char)accessibilityPerformPress;
-(char)accessibilityPerformShowMenu;
-(id)accessibilityValue;
-(void)_updateTitleTextField;
-(void)_windowChangedKeyState;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(id)menuForEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id<TabBarViewItem>)tabBarViewItem;
-(char)isPinned;
-(void)setButtonWidthForTitleLayout:(double)arg1 ;
-(void)setPinned:(char)arg1 ;
-(void)setMainContentContainerCenterOffset:(double)arg1 ;
-(void)setTitleTextFieldCenterOffset:(double)arg1 ;
-(void)setForcesActiveWindowState:(char)arg1 ;
-(void)setCanShowCloseButton:(char)arg1 ;
-(id)tabDragImageOfSize:(CGSize)arg1 ;
-(id)pinnedTabDragImageOfSize:(CGSize)arg1 ;
-(NSArray *)accessoryViews;
-(void)setAccessoryViews:(NSArray *)arg1 ;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
-(void)_closeButtonClicked:(id)arg1 ;
-(void)_setUpAccessoryViewsIncludingPlaceholder;
-(void)_updateAccessibilityProperties;
-(void)_updateAccessibilityChildren;
-(id)_accessoryViewsIncludingPlaceholder;
-(void)_updateConstraints;
-(char)_canShowCloseButton;
-(char)_shouldShowIconView;
-(char)_shouldShowCloseButton;
-(double)buttonWidthForTitleLayout;
-(double)mainContentContainerCenterOffset;
-(double)titleTextFieldCenterOffset;
-(char)canShowCloseButton;
-(void)rolloverTrackingButton:(id)arg1 flagsDidChangeDuringMouseOver:(id)arg2 ;
-(void)rolloverTrackingButtonDidBecomeFirstResponder:(id)arg1 ;
-(void)rolloverTrackingButtonDidResignFirstResponder:(id)arg1 ;
-(char)rolloverTrackingButtonCanBecomeKeyViewWhenHidden:(id)arg1 ;
-(void)prepareForOffscreenRendering;
-(void)_removeFlagsChangedEventMonitorIfNecessary;
-(void)_addFlagsChangedEventMonitorIfNecessary;
-(void)setTabButtonState:(unsigned long long)arg1 animated:(char)arg2 ;
-(void)setTabButtonLayoutMode:(long long)arg1 animatingLayout:(char)arg2 ;
-(char)isNarrowMode;
-(void)_setUpTabButtonConstraints;
-(void)_updateKeyViewLoop;
-(void)_establishTabBarViewItemBindingsIfNecessary;
-(NSEdgeInsets)_mainContentContainerEdgeInsets;
-(void)_updateCloseButtonAndTitleContainerVisibilityForNarrowTab;
-(id)_titleColorForMainWindow:(char)arg1 activeTab:(char)arg2 ;
-(void)_addPositionAnimationOnView:(id)arg1 fromPosition:(CGPoint)arg2 ;
-(id)_titleAttributedStringForDragAndDrop;
@end

