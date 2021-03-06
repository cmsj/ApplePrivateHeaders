/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSButton.h>

@class NSImageView, SiriUIKeyline, NSView;

@interface SiriUIChevronButton : NSButton {

	NSImageView* _chevronImageView;
	SiriUIKeyline* _keyline;
	char _hasChevron;
	NSView* _subview;
	double _chevronRightInset;
	double _leftSubviewInset;
	long long _keylineType;

}

@property (nonatomic,retain) NSView * subview;                      //@synthesize subview=_subview - In the implementation block
@property (assign,nonatomic) double chevronRightInset;              //@synthesize chevronRightInset=_chevronRightInset - In the implementation block
@property (assign,nonatomic) double leftSubviewInset;               //@synthesize leftSubviewInset=_leftSubviewInset - In the implementation block
@property (assign,nonatomic) long long keylineType;                 //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic) char hasChevron;                       //@synthesize hasChevron=_hasChevron - In the implementation block
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(char)hasChevron;
-(void)setSubview:(NSView *)arg1 ;
-(NSView *)subview;
-(long long)keylineType;
-(void)setKeylineType:(long long)arg1 ;
-(void)setHasChevron:(char)arg1 ;
-(double)chevronRightInset;
-(double)leftSubviewInset;
-(void)setChevronRightInset:(double)arg1 ;
-(void)setLeftSubviewInset:(double)arg1 ;
@end

