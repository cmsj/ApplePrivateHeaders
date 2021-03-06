/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSImage, NSColor, NSView, OBTemplatePartLinkButton, NSTextField, NSImageView, NSButton, OBPrivacyLinkController, NSArray, NSStackView, NSScrollView, NSDictionary, OBAnimationView;

@interface OBTemplateView : NSView {

	char _needsExtraWideContent;
	char _usesLargeContentArea;
	char _updateTextViewToContentPaddingOnTextChange;
	NSString* _title;
	NSString* _bodyText;
	NSString* _headline;
	NSImage* _topImage;
	NSString* _topImageSymbolName;
	NSColor* _topImageTintColor;
	NSView* _topContent;
	NSView* _contentArea;
	OBTemplatePartLinkButton* _linkButton;
	long long _layoutStyle;
	NSTextField* _titleView;
	NSTextField* _headlineView;
	NSView* _topContentView;
	NSView* _contentView;
	NSImageView* _iconImageView;
	NSTextField* _bodyTextView;
	NSView* _privacyLinkView;
	NSButton* _privacyLinkButton;
	OBPrivacyLinkController* _privacyLinkController;
	NSArray* _privacyBundleIdentifiers;
	NSStackView* _outerContentStackView;
	NSStackView* _innerContentStackView;
	NSScrollView* _innerContentScrollView;
	NSDictionary* _attributesForTitle;
	NSDictionary* _attributesForHeadline;
	unsigned long long _templateType;
	OBAnimationView* _animationView;

}

@property (nonatomic,retain) NSTextField * titleView;                                      //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSTextField * headlineView;                                   //@synthesize headlineView=_headlineView - In the implementation block
@property (nonatomic,retain) NSView * topContentView;                                      //@synthesize topContentView=_topContentView - In the implementation block
@property (nonatomic,retain) NSView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSImageView * iconImageView;                                  //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) NSTextField * bodyTextView;                                   //@synthesize bodyTextView=_bodyTextView - In the implementation block
@property (nonatomic,retain) NSView * privacyLinkView;                                     //@synthesize privacyLinkView=_privacyLinkView - In the implementation block
@property (nonatomic,retain) NSButton * privacyLinkButton;                                 //@synthesize privacyLinkButton=_privacyLinkButton - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;              //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (nonatomic,retain) NSArray * privacyBundleIdentifiers;                           //@synthesize privacyBundleIdentifiers=_privacyBundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSStackView * outerContentStackView;                          //@synthesize outerContentStackView=_outerContentStackView - In the implementation block
@property (nonatomic,retain) NSStackView * innerContentStackView;                          //@synthesize innerContentStackView=_innerContentStackView - In the implementation block
@property (nonatomic,retain) NSScrollView * innerContentScrollView;                        //@synthesize innerContentScrollView=_innerContentScrollView - In the implementation block
@property (nonatomic,retain) OBTemplatePartLinkButton * linkButton;                        //@synthesize linkButton=_linkButton - In the implementation block
@property (nonatomic,retain) NSDictionary * attributesForTitle;                            //@synthesize attributesForTitle=_attributesForTitle - In the implementation block
@property (nonatomic,retain) NSDictionary * attributesForHeadline;                         //@synthesize attributesForHeadline=_attributesForHeadline - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                        //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign) char usesLargeContentArea;                                              //@synthesize usesLargeContentArea=_usesLargeContentArea - In the implementation block
@property (assign,nonatomic) unsigned long long templateType;                              //@synthesize templateType=_templateType - In the implementation block
@property (nonatomic,retain) OBAnimationView * animationView;                              //@synthesize animationView=_animationView - In the implementation block
@property (assign,nonatomic) char updateTextViewToContentPaddingOnTextChange;              //@synthesize updateTextViewToContentPaddingOnTextChange=_updateTextViewToContentPaddingOnTextChange - In the implementation block
@property (nonatomic,retain) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * bodyText;                                          //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,retain) NSString * headline;                                          //@synthesize headline=_headline - In the implementation block
@property (assign) long long bodyTextAlignment; 
@property (nonatomic,retain) NSImage * topImage;                                           //@synthesize topImage=_topImage - In the implementation block
@property (nonatomic,retain) NSString * topImageSymbolName;                                //@synthesize topImageSymbolName=_topImageSymbolName - In the implementation block
@property (nonatomic,retain) NSColor * topImageTintColor;                                  //@synthesize topImageTintColor=_topImageTintColor - In the implementation block
@property (nonatomic,retain) NSView * topContent;                                          //@synthesize topContent=_topContent - In the implementation block
@property (nonatomic,retain) NSView * contentArea;                                         //@synthesize contentArea=_contentArea - In the implementation block
@property (assign) char needsExtraWideContent;                                             //@synthesize needsExtraWideContent=_needsExtraWideContent - In the implementation block
+(id)_createTextFieldForBodyText:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)updateLayer;
-(NSView *)contentView;
-(void)viewDidMoveToWindow;
-(void)setContentView:(NSView *)arg1 ;
-(void)awakeFromNib;
-(void)viewWillDraw;
-(void)_removeImageView;
-(void)_addImageView;
-(void)commonInit;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setTitleView:(NSTextField *)arg1 ;
-(NSTextField *)titleView;
-(NSString *)bodyText;
-(void)setBodyText:(NSString *)arg1 ;
-(NSImageView *)iconImageView;
-(void)setIconImageView:(NSImageView *)arg1 ;
-(void)setTopImageSymbolName:(NSString *)arg1 ;
-(void)setTopImage:(NSImage *)arg1 ;
-(void)setTopImageHidden:(char)arg1 ;
-(void)setContentArea:(NSView *)arg1 ;
-(void)setPrivacyLinkHidden:(char)arg1 ;
-(NSView *)contentArea;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 symbol:(id)arg3 contentLayoutStyle:(long long)arg4 ;
-(void)setNeedsExtraWideContent:(char)arg1 ;
-(OBTemplatePartLinkButton *)linkButton;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 icon:(id)arg3 contentLayoutStyle:(long long)arg4 ;
-(void)setLinkButton:(OBTemplatePartLinkButton *)arg1 ;
-(void)_createInnerContentContainer;
-(void)setUsesLargeContentArea:(char)arg1 ;
-(id)_createImageViewForImage;
-(void)setInnerContentScrollView:(NSScrollView *)arg1 ;
-(NSScrollView *)innerContentScrollView;
-(void)setInnerContentStackView:(NSStackView *)arg1 ;
-(NSStackView *)innerContentStackView;
-(unsigned long long)templateType;
-(char)needsExtraWideContent;
-(NSStackView *)outerContentStackView;
-(void)setOuterContentStackView:(NSStackView *)arg1 ;
-(NSString *)topImageSymbolName;
-(NSView *)topContentView;
-(OBAnimationView *)animationView;
-(NSTextField *)headlineView;
-(NSTextField *)bodyTextView;
-(NSButton *)privacyLinkButton;
-(NSView *)privacyLinkView;
-(char)usesLargeContentArea;
-(void)updateScrollElasticity;
-(NSColor *)topImageTintColor;
-(id)_createImageViewForSymbolImage;
-(id)_symbolIconForSymbolName:(id)arg1 ;
-(NSImage *)topImage;
-(NSDictionary *)attributesForTitle;
-(NSDictionary *)attributesForHeadline;
-(void)_updateBodyTextToContentViewPadding:(id)arg1 ;
-(void)setPrivacyLinkForBundles:(id)arg1 withLanguage:(id)arg2 ;
-(void)setPrivacyLinkButton:(NSButton *)arg1 ;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)setPrivacyBundleIdentifiers:(NSArray *)arg1 ;
-(char)updateTextViewToContentPaddingOnTextChange;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 animationView:(id)arg3 ;
-(id)initLargeContentTemplateWithTitle:(id)arg1 contentArea:(id)arg2 needsBodyText:(char)arg3 ;
-(long long)bodyTextAlignment;
-(void)setBodyTextAlignment:(long long)arg1 ;
-(void)setTopImageTintColor:(NSColor *)arg1 ;
-(void)setTopContent:(NSView *)arg1 ;
-(void)setPrivacyLinkForBundles:(id)arg1 ;
-(void)addLeadingImageToTemplateTitle:(id)arg1 customBounds:(CGRect)arg2 ;
-(NSView *)topContent;
-(void)setHeadlineView:(NSTextField *)arg1 ;
-(void)setTopContentView:(NSView *)arg1 ;
-(void)setBodyTextView:(NSTextField *)arg1 ;
-(void)setPrivacyLinkView:(NSView *)arg1 ;
-(NSArray *)privacyBundleIdentifiers;
-(void)setAttributesForTitle:(NSDictionary *)arg1 ;
-(void)setAttributesForHeadline:(NSDictionary *)arg1 ;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(void)setAnimationView:(OBAnimationView *)arg1 ;
-(void)setUpdateTextViewToContentPaddingOnTextChange:(char)arg1 ;
@end

