/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <AppStoreComponents/ASCUIView.h>

@class NSString, NSColor, ASCUIView, ASCUIImageView, ASCBorderView, NSImage;

@interface ASCArtworkView : ASCUIView {

	NSString* _decoration;
	NSColor* _placeholderColor;
	ASCUIView* _overlayView;
	ASCUIImageView* _imageView;
	ASCBorderView* _borderView;
	CGSize _preferredSize;

}

@property (nonatomic,readonly) ASCUIImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) ASCBorderView * borderView;                       //@synthesize borderView=_borderView - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                               //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) NSString * decoration;                              //@synthesize decoration=_decoration - In the implementation block
@property (nonatomic,retain) NSImage * image; 
@property (nonatomic,retain) NSColor * placeholderColor;                         //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (nonatomic,retain) ASCUIView * overlayView;                            //@synthesize overlayView=_overlayView - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(CGSize)intrinsicContentSize;
-(NSImage *)image;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(ASCUIView *)overlayView;
-(void)setOverlayView:(ASCUIView *)arg1 ;
-(ASCUIImageView *)imageView;
-(void)layoutSubviews;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(NSColor *)placeholderColor;
-(ASCBorderView *)borderView;
-(void)setPlaceholderColor:(NSColor *)arg1 ;
-(NSString *)decoration;
-(void)setDataChanged;
-(double)cornerRadiusForContentRect:(CGRect)arg1 ;
-(id)cornerCurveForContentRect:(CGRect)arg1 ;
-(unsigned long long)cornerMaskForContentRect:(CGRect)arg1 ;
-(void)setDecoration:(NSString *)arg1 ;
@end
