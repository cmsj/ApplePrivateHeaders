/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImageView, NSTextField;

@interface OBBulletIconTextView : NSView {

	NSImageView* _iconView;
	NSTextField* _textLabel;
	double _padding;
	double _baselineFromBoundsTop;
	CGSize _iconSize;

}

@property (nonatomic,retain) NSImageView * iconView;                      //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                             //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) NSTextField * textLabel;                     //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double padding;                              //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) double baselineFromBoundsTop;              //@synthesize baselineFromBoundsTop=_baselineFromBoundsTop - In the implementation block
-(double)padding;
-(void)updateConstraints;
-(NSImageView *)iconView;
-(void)setIconView:(NSImageView *)arg1 ;
-(void)setPadding:(double)arg1 ;
-(void)setIconSize:(CGSize)arg1 ;
-(CGSize)iconSize;
-(NSTextField *)textLabel;
-(void)setTextLabel:(NSTextField *)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(id)initWithIcon:(id)arg1 iconSize:(CGSize)arg2 text:(id)arg3 ;
-(double)baselineFromBoundsTop;
@end

