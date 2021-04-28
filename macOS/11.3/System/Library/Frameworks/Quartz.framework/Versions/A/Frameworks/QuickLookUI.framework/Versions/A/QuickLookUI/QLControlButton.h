/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSButton.h>
#import <libobjc.A.dylib/QLControl.h>

@class NSImage, QLControlCommon, NSControl, NSString;

@interface QLControlButton : NSButton <QLControl> {

	int _style;
	int _segmentedStyle;
	char _alternate;
	char _sendActionOnMouseDown;
	char _shown;
	double _tooltipMargin;
	NSImage* _originalImage;
	QLControlCommon* _common;
	double buttonPadding;
	double preferredButtonWidth;

}

@property (retain) QLControlCommon * common;                        //@synthesize common=_common - In the implementation block
@property (copy) id menuProvider; 
@property (readonly) NSControl * control; 
@property (copy) NSString * controlIdentifier; 
@property (assign) int style;                                       //@synthesize style=_style - In the implementation block
@property (assign) int segmentedStyle;                              //@synthesize segmentedStyle=_segmentedStyle - In the implementation block
@property (assign) char alternate;                                  //@synthesize alternate=_alternate - In the implementation block
@property (assign) char sendActionOnMouseDown;                      //@synthesize sendActionOnMouseDown=_sendActionOnMouseDown - In the implementation block
@property (assign) double tooltipMargin;                            //@synthesize tooltipMargin=_tooltipMargin - In the implementation block
@property (getter=isEnabled) char enabled; 
@property (getter=isShown) char shown;                              //@synthesize shown=_shown - In the implementation block
@property (retain) NSImage * image; 
@property (readonly) NSImage * originalImage; 
@property (copy) NSString * toolTip; 
@property (copy) NSString * title; 
@property (copy) NSString * keyEquivalent; 
@property (getter=isHidden) char hidden; 
@property (assign) SEL action; 
@property (__weak) id target; 
@property (assign) double preferredButtonWidth; 
@property (assign) double buttonPadding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setControlIdentifier:(NSString *)arg1 ;
-(NSString *)controlIdentifier;
-(int)segmentedStyle;
-(char)sendActionOnMouseDown;
-(void)setSendActionOnMouseDown:(char)arg1 ;
-(double)tooltipMargin;
-(void)setTooltipMargin:(double)arg1 ;
-(void)_updateTooltip;
-(double)MediaUI_slice;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(int)style;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(QLControlCommon *)common;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)preferredButtonWidth;
-(void)setPreferredButtonWidth:(double)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)setAlternate:(char)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)rightMouseDown:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)isShown;
-(char)alternate;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(NSControl *)control;
-(void)setShown:(char)arg1 ;
-(void)setCommon:(QLControlCommon *)arg1 ;
-(void)_updateStyle;
-(NSImage *)originalImage;
-(double)buttonPadding;
-(void)setButtonPadding:(double)arg1 ;
-(void)setMenuProvider:(id)arg1 ;
-(id)menuProvider;
-(void)setSegmentedStyle:(int)arg1 ;
@end
