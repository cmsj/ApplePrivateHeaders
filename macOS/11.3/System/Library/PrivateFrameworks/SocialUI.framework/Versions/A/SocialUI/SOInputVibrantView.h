/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSView.h>

@class NSVisualEffectView;

@interface SOInputVibrantView : NSView {

	char _drawBorder;
	NSVisualEffectView* _blurView;

}

@property (nonatomic,retain) NSVisualEffectView * blurView;              //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic) char drawBorder;                            //@synthesize drawBorder=_drawBorder - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(char)allowsVibrancy;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSVisualEffectView *)blurView;
-(void)setBlurView:(NSVisualEffectView *)arg1 ;
-(void)setDrawBorder:(char)arg1 ;
-(char)drawBorder;
-(void)_commonInitInputLineBackground;
-(void)setupBlurView;
-(void)setToDefaultAppearance;
@end

