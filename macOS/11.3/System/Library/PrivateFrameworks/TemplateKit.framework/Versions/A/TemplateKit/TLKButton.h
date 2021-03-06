/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, TLKTapContainerButton, CAShapeLayer, TLKImageView, NSView;

@interface TLKButton : NSView {

	char _toggled;
	char _indeterminate;
	NSImage* _untoggledImage;
	NSImage* _toggledImage;
	NSImage* _overlayImage;
	TLKTapContainerButton* _button;
	CAShapeLayer* _outerProgressLayer;
	CAShapeLayer* _innerProgressLayer;
	double _progress;
	TLKImageView* _imageView;
	NSView* _backgroundView;
	CGSize _fixedSize;

}

@property (nonatomic,retain) TLKTapContainerButton * button;                           //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerProgressLayer;                        //@synthesize outerProgressLayer=_outerProgressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * innerProgressLayer;                        //@synthesize innerProgressLayer=_innerProgressLayer - In the implementation block
@property (assign,nonatomic) double progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) TLKImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,getter=isToggled,nonatomic) char toggled;                            //@synthesize toggled=_toggled - In the implementation block
@property (assign,nonatomic,__weak) NSView * containerView; 
@property (nonatomic,retain) NSImage * untoggledImage;                                 //@synthesize untoggledImage=_untoggledImage - In the implementation block
@property (nonatomic,retain) NSImage * toggledImage;                                   //@synthesize toggledImage=_toggledImage - In the implementation block
@property (nonatomic,retain) NSImage * overlayImage;                                   //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) CGSize fixedSize;                                         //@synthesize fixedSize=_fixedSize - In the implementation block
@property (getter=isIndeterminate,nonatomic,readonly) char indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
@property (readonly) NSImage * imageOnImageView; 
@property (readonly) NSView * hitView; 
+(id)blurColorForImage:(id)arg1 forButtonSize:(CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4 ;
+(SCD_Struct_TL5)_calculateStatistics:(CGImageRef)arg1 withSize:(CGSize)arg2 ;
+(id)blurColorForColor:(id)arg1 ;
-(id)init;
-(void)layout;
-(double)progress;
-(char)isIndeterminate;
-(CGSize)intrinsicContentSize;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(void)setBackgroundView:(NSView *)arg1 ;
-(NSView *)backgroundView;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(void)_setBackgroundStyleForSubtree:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(TLKTapContainerButton *)button;
-(TLKImageView *)imageView;
-(void)setImageView:(TLKImageView *)arg1 ;
-(NSImage *)overlayImage;
-(void)setProgress:(double)arg1 ;
-(void)setButton:(TLKTapContainerButton *)arg1 ;
-(void)setOverlayImage:(NSImage *)arg1 ;
-(NSView *)hitView;
-(char)isToggled;
-(id)iconColor;
-(void)setProgress:(float)arg1 animated:(char)arg2 ;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)hideProgressAnimated:(char)arg1 ;
-(void)showPlayIndicator:(char)arg1 ;
-(void)setToggled:(char)arg1 ;
-(void)setButtonSelectionState:(char)arg1 ;
-(void)_updateInnerProgressLayerStroke;
-(void)updateOuterProgressLayerStroke;
-(NSImage *)toggledImage;
-(NSImage *)untoggledImage;
-(id)_outerProgressLayer;
-(id)_innerProgressLayer;
-(void)endIndeterminateAnimation;
-(CAShapeLayer *)outerProgressLayer;
-(void)_beginIndeterminateAnimation;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(NSImage *)imageOnImageView;
-(void)beginIndeterminateAnimation;
-(void)addTarget:(id)arg1 forAction:(SEL)arg2 ;
-(void)setUntoggledImage:(NSImage *)arg1 ;
-(void)setToggledImage:(NSImage *)arg1 ;
-(void)setOuterProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)innerProgressLayer;
-(void)setInnerProgressLayer:(CAShapeLayer *)arg1 ;
@end

