/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSColor, NSView, NSImage, NSTextField, NSImageView, NSLayoutGuide, NSLayoutConstraint;

@interface PKPaymentAuthorizationPreferenceView : NSView {

	char _hasValidConstraints;
	long long _style;
	NSString* _primaryText;
	NSString* _secondaryText;
	NSColor* _primaryTextColor;
	NSColor* _secondaryTextColor;
	NSView* _iconView;
	NSImage* _badge;
	double _horizontalMargin;
	NSTextField* _primaryTextField;
	NSTextField* _secondaryTextField;
	NSImageView* _badgeView;
	NSLayoutGuide* _textFieldLeadingLayoutGuide;
	NSLayoutGuide* _textFieldTrailingLayoutGuide;
	NSLayoutConstraint* _lastBaselineConstraint;

}

@property (nonatomic,retain) NSTextField * primaryTextField;                            //@synthesize primaryTextField=_primaryTextField - In the implementation block
@property (nonatomic,retain) NSTextField * secondaryTextField;                          //@synthesize secondaryTextField=_secondaryTextField - In the implementation block
@property (nonatomic,retain) NSImageView * badgeView;                                   //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) NSLayoutGuide * textFieldLeadingLayoutGuide;               //@synthesize textFieldLeadingLayoutGuide=_textFieldLeadingLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutGuide * textFieldTrailingLayoutGuide;              //@synthesize textFieldTrailingLayoutGuide=_textFieldTrailingLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lastBaselineConstraint;               //@synthesize lastBaselineConstraint=_lastBaselineConstraint - In the implementation block
@property (assign,nonatomic) char hasValidConstraints;                                  //@synthesize hasValidConstraints=_hasValidConstraints - In the implementation block
@property (assign,nonatomic) long long style;                                           //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                                      //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                                    //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,retain) NSColor * primaryTextColor;                                //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) NSColor * secondaryTextColor;                              //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) NSView * iconView;                                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSImage * badge;                                           //@synthesize badge=_badge - In the implementation block
@property (assign,nonatomic) double horizontalMargin;                                   //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityLabelForMenuItem; 
+(id)_resizeImage:(id)arg1 toSize:(CGSize)arg2 ;
+(id)viewWithContact:(id)arg1 selected:(char)arg2 keys:(id)arg3 errors:(id)arg4 ;
+(id)_viewWithShippingMethodPreference:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)_viewWithContactPreference:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)_viewWithRemoteDevicePreference:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)_viewWithCardPreference:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)viewWithContact:(id)arg1 keys:(id)arg2 ;
+(id)viewWithPaymentPreference:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)style;
-(NSImage *)badge;
-(void)setStyle:(long long)arg1 ;
-(char)allowsVibrancy;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(NSView *)iconView;
-(void)setIconView:(NSView *)arg1 ;
-(NSImageView *)badgeView;
-(void)setBadge:(NSImage *)arg1 ;
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSColor *)primaryTextColor;
-(NSColor *)secondaryTextColor;
-(void)setPrimaryTextColor:(NSColor *)arg1 ;
-(void)setSecondaryTextColor:(NSColor *)arg1 ;
-(double)horizontalMargin;
-(void)setHorizontalMargin:(double)arg1 ;
-(void)setBadgeView:(NSImageView *)arg1 ;
-(void)_prepareConstraints;
-(NSTextField *)primaryTextField;
-(id)_primaryTextAttributedStringWithString:(id)arg1 selected:(char)arg2 ;
-(NSTextField *)secondaryTextField;
-(id)_secondaryTextAttributedStringWithString:(id)arg1 selected:(char)arg2 ;
-(void)setHasValidConstraints:(char)arg1 ;
-(char)hasValidConstraints;
-(void)_calculatePrimaryFirstBaselineMargin:(double*)arg1 primaryLastBaselineMargin:(double*)arg2 secondaryFirstBaselineMargin:(double*)arg3 secondaryLastBaselineMargin:(double*)arg4 lastBaselineMarginForOverallHeight:(double*)arg5 ;
-(NSLayoutConstraint *)lastBaselineConstraint;
-(void)setTextFieldLeadingLayoutGuide:(NSLayoutGuide *)arg1 ;
-(NSLayoutGuide *)textFieldLeadingLayoutGuide;
-(void)setTextFieldTrailingLayoutGuide:(NSLayoutGuide *)arg1 ;
-(NSLayoutGuide *)textFieldTrailingLayoutGuide;
-(void)setLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_primaryTextColorSelected:(char)arg1 ;
-(id)_primaryTextFont;
-(id)_attributedStringWithString:(id)arg1 color:(id)arg2 font:(id)arg3 ;
-(id)_secondaryTextColorSelected:(char)arg1 ;
-(NSString *)accessibilityLabelForMenuItem;
-(void)setPrimaryTextField:(NSTextField *)arg1 ;
-(void)setSecondaryTextField:(NSTextField *)arg1 ;
@end

