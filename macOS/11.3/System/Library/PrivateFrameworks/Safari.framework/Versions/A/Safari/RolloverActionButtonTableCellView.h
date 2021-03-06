/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTableCellView.h>

@protocol RolloverActionButtonTableCellViewDelegate;
@class NSArray, NSLayoutConstraint, RolloverImageButton, NSImage, NSTrackingArea;

@interface RolloverActionButtonTableCellView : NSTableCellView {

	char _cancelRemoveButtonAnimation;
	NSArray* _actionButtonLayoutConstraints;
	NSLayoutConstraint* _titleFieldTrailingConstraintWhenActionButtonIsVisible;
	char _showsActionButton;
	char _updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges;
	int _actionButtonState;
	id<RolloverActionButtonTableCellViewDelegate> _delegate;
	RolloverImageButton* _actionButton;
	NSImage* _actionButtonImage;
	double _actionButtonVerticalMargin;
	double _actionButtonHorizontalMargin;
	double _actionButtonYOffsetWhenVerticallyCentered;
	double _actionButtonAnimationDuration;
	NSTrackingArea* _trackingArea;

}

@property (nonatomic,retain) NSTrackingArea * trackingArea;                                                 //@synthesize trackingArea=_trackingArea - In the implementation block
@property (assign,nonatomic,__weak) id<RolloverActionButtonTableCellViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int actionButtonState;                                                         //@synthesize actionButtonState=_actionButtonState - In the implementation block
@property (assign,nonatomic,__weak) RolloverImageButton * actionButton;                                     //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) char showsActionButton;                                                        //@synthesize showsActionButton=_showsActionButton - In the implementation block
@property (assign,nonatomic) char updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges;              //@synthesize updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges=_updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges - In the implementation block
@property (nonatomic,retain) NSImage * actionButtonImage;                                                   //@synthesize actionButtonImage=_actionButtonImage - In the implementation block
@property (assign,nonatomic) double actionButtonVerticalMargin;                                             //@synthesize actionButtonVerticalMargin=_actionButtonVerticalMargin - In the implementation block
@property (assign,nonatomic) double actionButtonHorizontalMargin;                                           //@synthesize actionButtonHorizontalMargin=_actionButtonHorizontalMargin - In the implementation block
@property (assign,nonatomic) double actionButtonYOffsetWhenVerticallyCentered;                              //@synthesize actionButtonYOffsetWhenVerticallyCentered=_actionButtonYOffsetWhenVerticallyCentered - In the implementation block
@property (assign,nonatomic) double actionButtonAnimationDuration;                                          //@synthesize actionButtonAnimationDuration=_actionButtonAnimationDuration - In the implementation block
+(id)closeActionButtonImage;
+(double)actionButtonTrailingMarginBasedOnPreferredScrollerStyle;
-(id)initWithCoder:(id)arg1 ;
-(id<RolloverActionButtonTableCellViewDelegate>)delegate;
-(void)setDelegate:(id<RolloverActionButtonTableCellViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(NSTrackingArea *)trackingArea;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)_actionButtonClicked:(id)arg1 ;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(RolloverImageButton *)actionButton;
-(void)setActionButton:(RolloverImageButton *)arg1 ;
-(void)_removeTrackingArea;
-(void)_addTrackingArea;
-(void)setActionButtonImage:(NSImage *)arg1 ;
-(void)setActionButtonHorizontalMargin:(double)arg1 ;
-(void)setUpdatesTitleTextFieldFrameWhenActionButtonVisibilityChanges:(char)arg1 ;
-(void)setActionButtonState:(int)arg1 ;
-(void)setActionButtonVerticalMargin:(double)arg1 ;
-(void)setShowsActionButton:(char)arg1 ;
-(char)showsActionButton;
-(int)actionButtonState;
-(void)_positionActionButton;
-(void)_willShowActionButton;
-(void)_didHideActionButton;
-(void)updateTextFieldToAccountForButtonBeingVisible:(char)arg1 ;
-(void)_updateTitleTextFieldFrameAccountingForActionButtonBeingVisible:(char)arg1 ;
-(void)setActionButtonYOffsetWhenVerticallyCentered:(double)arg1 ;
-(void)_performSharedSetup;
-(char)updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges;
-(NSImage *)actionButtonImage;
-(double)actionButtonVerticalMargin;
-(double)actionButtonHorizontalMargin;
-(double)actionButtonYOffsetWhenVerticallyCentered;
-(double)actionButtonAnimationDuration;
-(void)setActionButtonAnimationDuration:(double)arg1 ;
@end

