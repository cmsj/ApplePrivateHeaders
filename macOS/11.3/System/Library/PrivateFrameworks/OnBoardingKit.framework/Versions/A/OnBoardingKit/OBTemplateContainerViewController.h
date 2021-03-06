/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class OBTemplateView, NSButton, OBTemplatePartLinkButton, NSView, NSBox, NSProgressIndicator, NSTextField, NSTimer;

@interface OBTemplateContainerViewController : NSViewController {

	char _spinnerVisible;
	OBTemplateView* _templateView;
	NSButton* _firstButton;
	NSButton* _secondButton;
	OBTemplatePartLinkButton* _linkButton;
	NSView* _templateContainerView;
	NSView* _buttonTray;
	NSBox* _divider;
	NSProgressIndicator* _spinner;
	NSTextField* _statusMessage;
	NSTimer* _spinnerDisplayTimer;

}

@property (nonatomic,retain) NSView * templateContainerView;                             //@synthesize templateContainerView=_templateContainerView - In the implementation block
@property (nonatomic,retain) NSView * buttonTray;                                        //@synthesize buttonTray=_buttonTray - In the implementation block
@property (nonatomic,retain) NSBox * divider;                                            //@synthesize divider=_divider - In the implementation block
@property (nonatomic,retain) NSButton * firstButton;                                     //@synthesize firstButton=_firstButton - In the implementation block
@property (nonatomic,retain) NSButton * secondButton;                                    //@synthesize secondButton=_secondButton - In the implementation block
@property (nonatomic,retain) OBTemplatePartLinkButton * linkButton;                      //@synthesize linkButton=_linkButton - In the implementation block
@property (nonatomic,retain) NSProgressIndicator * spinner;                              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSTextField * statusMessage;                                //@synthesize statusMessage=_statusMessage - In the implementation block
@property (nonatomic,retain) NSTimer * spinnerDisplayTimer;                              //@synthesize spinnerDisplayTimer=_spinnerDisplayTimer - In the implementation block
@property (assign,setter=setSpinnerVisible:,nonatomic) char spinnerVisible;              //@synthesize spinnerVisible=_spinnerVisible - In the implementation block
@property (nonatomic,retain) OBTemplateView * templateView;                              //@synthesize templateView=_templateView - In the implementation block
-(void)loadView;
-(void)viewDidLoad;
-(OBTemplateView *)templateView;
-(NSTextField *)statusMessage;
-(NSProgressIndicator *)spinner;
-(void)setSpinner:(NSProgressIndicator *)arg1 ;
-(void)setTemplateView:(OBTemplateView *)arg1 ;
-(OBTemplatePartLinkButton *)linkButton;
-(void)setDivider:(NSBox *)arg1 ;
-(NSBox *)divider;
-(void)setLinkButton:(OBTemplatePartLinkButton *)arg1 ;
-(void)setFirstButton:(NSButton *)arg1 ;
-(NSButton *)firstButton;
-(void)setSecondButton:(NSButton *)arg1 ;
-(NSButton *)secondButton;
-(id)initWithFirstButtonTitle:(id)arg1 secondButtonTitle:(id)arg2 linkButtonTitle:(id)arg3 ;
-(id)makeButtonTray;
-(NSView *)buttonTray;
-(void)makeDivider;
-(NSView *)templateContainerView;
-(void)updateButtonConstraints;
-(id)attributedStatusStringForString:(id)arg1 ;
-(NSTimer *)spinnerDisplayTimer;
-(void)setSpinnerDisplayTimer:(NSTimer *)arg1 ;
-(void)setSpinnerVisible:(char)arg1 ;
-(void)setControlsEnabled:(char)arg1 ;
-(id)initWithTemplateView:(id)arg1 firstButtonTitle:(id)arg2 secondButtonTitle:(id)arg3 linkButtonTitle:(id)arg4 ;
-(void)disableControlsWithStatus:(id)arg1 showingSpinnerAfter:(long long)arg2 ;
-(void)setTemplateContainerView:(NSView *)arg1 ;
-(void)setButtonTray:(NSView *)arg1 ;
-(void)setStatusMessage:(NSTextField *)arg1 ;
-(char)spinnerVisible;
@end

