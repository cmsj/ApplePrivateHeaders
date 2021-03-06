/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@protocol SiriUIAccessibilityDelegate;
@class SiriUIKeyline, SiriUITintedImageView, NSLayoutConstraint, NSMutableArray, NSView, NSTextField;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {

	SiriUIKeyline* _keyline;
	SiriUITintedImageView* _chevronView;
	char _hasSetUpSubviewConstraints;
	char _hasSetupStaticSubviewConstraints;
	NSLayoutConstraint* leftChevronWidthConstraint;
	NSLayoutConstraint* rightChevronWidthConstraint;
	NSMutableArray* _subviewConstraints;
	char _hasChevron;
	char _accessibilityIsIgnored;
	char _accessibilityIsOverridden;
	long long _verticalAlignment;
	NSView* _accessoryView;
	NSTextField* _textLabel;
	long long _keylineType;
	id<SiriUIAccessibilityDelegate> _accessibilityDelegate;
	UIOffset _textOffset;
	UIOffset _accessoryOffset;
	UIOffset _chevronOffset;
	NSEdgeInsets _textAndAccessoryInsets;

}

@property (assign,nonatomic) char accessibilityIsIgnored;                                               //@synthesize accessibilityIsIgnored=_accessibilityIsIgnored - In the implementation block
@property (assign,nonatomic) char accessibilityIsOverridden;                                            //@synthesize accessibilityIsOverridden=_accessibilityIsOverridden - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                                               //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) NSEdgeInsets textAndAccessoryInsets;                                       //@synthesize textAndAccessoryInsets=_textAndAccessoryInsets - In the implementation block
@property (nonatomic,retain) NSView * accessoryView;                                                    //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) NSTextField * textLabel;                                                   //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) UIOffset textOffset;                                                       //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) UIOffset accessoryOffset;                                                  //@synthesize accessoryOffset=_accessoryOffset - In the implementation block
@property (assign,nonatomic) UIOffset chevronOffset;                                                    //@synthesize chevronOffset=_chevronOffset - In the implementation block
@property (nonatomic,readonly) double chevronLeadingMargin; 
@property (nonatomic,readonly) double chevronTrailingMargin; 
@property (nonatomic,readonly) SiriUIKeyline * keyline;                                                 //@synthesize keyline=_keyline - In the implementation block
@property (assign,nonatomic) long long keylineType;                                                     //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic) char hasChevron;                                                           //@synthesize hasChevron=_hasChevron - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
+(id)reuseIdentifier;
+(NSEdgeInsets)defaultInsets;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)setAccessoryView:(NSView *)arg1 ;
-(void)layout;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(char)accessibilityIsIgnored;
-(char)isAccessibilityElement;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(NSView *)accessoryView;
-(void)setAccessibilityElement:(char)arg1 ;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(id<SiriUIAccessibilityDelegate>)accessibilityDelegate;
-(void)setAccessibilityDelegate:(id<SiriUIAccessibilityDelegate>)arg1 ;
-(SiriUIKeyline *)keyline;
-(NSTextField *)textLabel;
-(void)setTextLabel:(NSTextField *)arg1 ;
-(char)hasChevron;
-(void)setTextOffset:(UIOffset)arg1 ;
-(UIOffset)textOffset;
-(long long)keylineType;
-(void)setKeylineType:(long long)arg1 ;
-(void)commitInit;
-(void)setNeedsUpdateSubviewConstraints;
-(void)_updateSubviewConstraints;
-(char)accessibilityIsOverridden;
-(void)setAccessibilityIsOverridden:(char)arg1 ;
-(void)setAccessibilityIsIgnored:(char)arg1 ;
-(id)accessibilitySynthesizeMouseEventWithType:(unsigned long long)arg1 clickCount:(long long)arg2 ;
-(void)setAccessoryOffset:(UIOffset)arg1 ;
-(void)setHasChevron:(char)arg1 ;
-(void)setChevronColor:(id)arg1 ;
-(double)chevronLeadingMargin;
-(double)chevronTrailingMargin;
-(NSEdgeInsets)textAndAccessoryInsets;
-(void)setTextAndAccessoryInsets:(NSEdgeInsets)arg1 ;
-(UIOffset)accessoryOffset;
-(UIOffset)chevronOffset;
-(void)setChevronOffset:(UIOffset)arg1 ;
@end

