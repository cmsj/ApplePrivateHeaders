/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/PKPassPageDotViewDelegate.h>

@protocol PKPassViewerDelegate;
@class NSMutableArray, PKPassInfoTextField, NSButton, NSView, PKPassScrollView, PKPassDocumentView, NSTimer, NSSegmentedControl, PKPassPageDotView, NSImageView, PKPassFrontView, PKPassBackView, NSTextField, NSArray, NSString;

@interface PKPassViewerViewController : NSViewController <PKPassPageDotViewDelegate> {

	NSMutableArray* _passes;
	PKPassInfoTextField* _infoTextField;
	NSButton* _addToPassbookButton;
	NSButton* _closeButton;
	NSButton* _cancelButton;
	NSView* _aboutPassbookView;
	char _aboutPassbookIsTransitioning;
	NSMutableArray* _cachedPassViewController;
	PKPassScrollView* _passScrollView;
	PKPassDocumentView* _passScrollingDocumentView;
	char _snappingScroll;
	NSTimer* _scrollValidateTimer;
	char _scrollPointNeedsValidation;
	char _scrollAnimationInProgress;
	NSSegmentedControl* _passNavigationSegment;
	NSView* _prevPassView;
	NSView* _curPassView;
	NSView* _nextPassView;
	char _suppressRightPocket;
	char _suppressLeftPocket;
	PKPassPageDotView* _passPageDotView;
	char _validatingScrollPosition;
	NSView* _passScrollEnclosingView;
	NSImageView* _leftPocketImageView;
	NSImageView* _rightPocketImageView;
	NSMutableArray* _passViewControllers;
	char _ubiquityContainerExists;
	char _canGoBack;
	char _canGoForward;
	PKPassFrontView* passFrontView;
	PKPassBackView* passBackView;
	NSTextField* _titleTextField;
	id<PKPassViewerDelegate> _delegate;

}

@property (readonly) NSArray * passes;                              //@synthesize passes=_passes - In the implementation block
@property (readonly) PKPassFrontView * passFrontView; 
@property (readonly) PKPassBackView * passBackView; 
@property (retain) NSTextField * titleTextField;                    //@synthesize titleTextField=_titleTextField - In the implementation block
@property (__weak) id<PKPassViewerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign) char canGoBack;                                  //@synthesize canGoBack=_canGoBack - In the implementation block
@property (assign) char canGoForward;                               //@synthesize canGoForward=_canGoForward - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKPassViewerDelegate>)delegate;
-(void)setDelegate:(id<PKPassViewerDelegate>)arg1 ;
-(void)performClose:(id)arg1 ;
-(NSTextField *)titleTextField;
-(void)setTitleTextField:(NSTextField *)arg1 ;
-(char)canGoBack;
-(char)canGoForward;
-(NSArray *)passes;
-(void)setCanGoBack:(char)arg1 ;
-(void)_layoutWindowForPass:(id)arg1 resizeWindow:(char)arg2 ;
-(void)_scrollToPassIndex:(long long)arg1 atScrollPoint:(CGPoint)arg2 animate:(char)arg3 ;
-(void)scrollingFrameChanged:(id)arg1 ;
-(void)ubiquitousContainerSeen:(id)arg1 ;
-(id)selectedPassViewController;
-(void)aboutPassbookClicked:(id)arg1 ;
-(void)closeClicked:(id)arg1 ;
-(void)addToPassbookClicked:(id)arg1 ;
-(CGRect)_centeredRectWithSize:(CGSize)arg1 inRect:(CGRect)arg2 ;
-(id)_createScrollingViewWithCurrentIndex:(long long)arg1 scrollOffset:(CGPoint*)arg2 ;
-(void)passDocumentViewGestureEnded:(id)arg1 ;
-(void)validateScroll:(id)arg1 ;
-(void)scrollForwardToPassAtIndex:(long long)arg1 ;
-(void)scrollBackToPassAtIndex:(long long)arg1 ;
-(void)aboutPassbookDoneClicked:(id)arg1 ;
-(void)pageDotView:(id)arg1 dotClickedAtIndex:(unsigned long long)arg2 ;
-(id)initWithPasses:(id)arg1 showCloseButton:(char)arg2 ;
-(void)passNavigationSegmentClicked:(id)arg1 ;
-(PKPassFrontView *)passFrontView;
-(PKPassBackView *)passBackView;
-(void)setCanGoForward:(char)arg1 ;
@end

