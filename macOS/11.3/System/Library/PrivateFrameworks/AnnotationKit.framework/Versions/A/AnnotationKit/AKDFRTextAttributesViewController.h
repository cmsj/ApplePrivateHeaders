/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKTextAttributesViewController.h>

@class NSStackView, NSButton, NSStepperTouchBarItem;

@interface AKDFRTextAttributesViewController : AKTextAttributesViewController {

	NSStackView* _stackView;
	NSStackView* _textStyleView;
	NSButton* _boldButton;
	NSButton* _italicsButton;
	NSButton* _underlineButton;
	NSStepperTouchBarItem* _textSizeStepperItem;

}

@property (retain) NSStackView * stackView;                                            //@synthesize stackView=_stackView - In the implementation block
@property (retain) NSStackView * textStyleView;                                        //@synthesize textStyleView=_textStyleView - In the implementation block
@property (retain) NSButton * boldButton;                                              //@synthesize boldButton=_boldButton - In the implementation block
@property (retain) NSButton * italicsButton;                                           //@synthesize italicsButton=_italicsButton - In the implementation block
@property (retain) NSButton * underlineButton;                                         //@synthesize underlineButton=_underlineButton - In the implementation block
@property (nonatomic,retain) NSStepperTouchBarItem * textSizeStepperItem;              //@synthesize textSizeStepperItem=_textSizeStepperItem - In the implementation block
-(id)initWithController:(id)arg1 ;
-(void)viewDidLoad;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(id)_createTextSizeStepperItem;
-(void)setBoldEnabled:(char)arg1 ;
-(void)setBoldSelected:(char)arg1 ;
-(void)setItalicsEnabled:(char)arg1 ;
-(void)setItalicsSelected:(char)arg1 ;
-(char)isBoldUIEnabled;
-(char)isItalicsUIEnabled;
-(void)setUnderlineSelected:(char)arg1 ;
-(void)syncFontsToUI:(id)arg1 ;
-(NSButton *)boldButton;
-(NSButton *)italicsButton;
-(NSButton *)underlineButton;
-(NSStackView *)textStyleView;
-(void)_fontSizeDidChange:(id)arg1 ;
-(void)textStyleAction:(id)arg1 ;
-(void)setTextStyleView:(NSStackView *)arg1 ;
-(void)setBoldButton:(NSButton *)arg1 ;
-(void)setItalicsButton:(NSButton *)arg1 ;
-(void)setUnderlineButton:(NSButton *)arg1 ;
-(NSStepperTouchBarItem *)textSizeStepperItem;
-(void)setTextSizeStepperItem:(NSStepperTouchBarItem *)arg1 ;
@end

