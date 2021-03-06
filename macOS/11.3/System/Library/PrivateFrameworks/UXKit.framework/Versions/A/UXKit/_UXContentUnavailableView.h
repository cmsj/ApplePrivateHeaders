/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXView.h>

@class NSString, NSButton, NSProgressIndicator, UXView, NSTextField, NSMutableArray;

@interface _UXContentUnavailableView : UXView {

	char _showProgress;
	NSString* _title;
	NSString* _message;
	NSString* _buttonTitle;
	NSButton* _actionButton;
	/*^block*/id _buttonAction;
	NSProgressIndicator* _progressIndicator;
	unsigned long long _progressIndicatorStyle;
	unsigned long long _vibrantOptions;
	UXView* _containerView;
	NSTextField* _titleLabel;
	NSTextField* _messageLabel;
	NSMutableArray* _containerViewContraints;

}

@property (nonatomic,retain) UXView * containerView;                                 //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSTextField * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSTextField * messageLabel;                             //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerViewContraints;               //@synthesize containerViewContraints=_containerViewContraints - In the implementation block
@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                     //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * buttonTitle;                                 //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,retain) NSButton * actionButton;                                //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,copy) id buttonAction;                                          //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,nonatomic) char showProgress;                                      //@synthesize showProgress=_showProgress - In the implementation block
@property (nonatomic,retain) NSProgressIndicator * progressIndicator;                //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic) unsigned long long progressIndicatorStyle;              //@synthesize progressIndicatorStyle=_progressIndicatorStyle - In the implementation block
@property (assign,nonatomic) unsigned long long vibrantOptions;                      //@synthesize vibrantOptions=_vibrantOptions - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)layout;
-(NSString *)title;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_tintColor;
-(UXView *)containerView;
-(void)setContainerView:(UXView *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)_textColor;
-(NSProgressIndicator *)progressIndicator;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)commonInit;
-(NSTextField *)titleLabel;
-(NSButton *)actionButton;
-(void)setActionButton:(NSButton *)arg1 ;
-(void)setTitleLabel:(NSTextField *)arg1 ;
-(NSTextField *)messageLabel;
-(id)buttonAction;
-(void)setButtonAction:(id)arg1 ;
-(void)setMessageLabel:(NSTextField *)arg1 ;
-(char)showProgress;
-(void)setShowProgress:(char)arg1 ;
-(void)setProgressIndicatorStyle:(unsigned long long)arg1 ;
-(unsigned long long)progressIndicatorStyle;
-(char)_hasVibrantButton;
-(char)_hasVibrantText;
-(id)_vibrantBaseColor;
-(double)_labelAlpha;
-(void)_actionButtonPressed:(id)arg1 ;
-(double)_buttonAlpha;
-(unsigned long long)vibrantOptions;
-(void)setVibrantOptions:(unsigned long long)arg1 ;
-(id)_buttonTitleAttributes;
-(id)placeholderTitleTextAttributes;
-(id)placeholderMessageTextAttributes;
-(id)_textFieldWithFontSize:(double)arg1 ;
-(void)_updateTextField:(id)arg1 withAttributedText:(id)arg2 ;
-(void)_updateProgressLayout;
-(NSMutableArray *)containerViewContraints;
-(void)setContainerViewContraints:(NSMutableArray *)arg1 ;
@end

