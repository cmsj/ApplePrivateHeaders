/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <Mondrian/MOMediaViewCell.h>
#import <libobjc.A.dylib/MOMediaViewCellThumbnailViewDelegate.h>

@class MOMediaViewCellThumbnailView, CALayer, NSView, NSString;

@interface MOMediaViewDefaultCell : MOMediaViewCell <MOMediaViewCellThumbnailViewDelegate> {

	char _thumbnailViewImageInitialized;
	double _thumbnailCornerRadiusForLayout;
	CGSize _thumbnailSizeForLayout;
	MOMediaViewCellThumbnailView* _thumbnailView;
	unsigned long long _thumbnailVersion;
	CALayer* _selectionLayer;
	CALayer* _selectionInterspaceLayer;
	CALayer* _modalSelectionDimmingLayer;
	NSView* _modalSelectionIndicatorView;
	double _thumbnailCornerRadius;

}

@property (nonatomic,readonly) NSView * thumbnailView;                                //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,readonly) char wantsTransparentThumbnailBackground; 
@property (nonatomic,readonly) CGRect thumbnailViewFrame; 
@property (nonatomic,readonly) CGRect effectiveThumbnailViewFrame; 
@property (nonatomic,readonly) CALayer * thumbnailCornerLayer; 
@property (assign,nonatomic) double thumbnailCornerRadius;                            //@synthesize thumbnailCornerRadius=_thumbnailCornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGColorRef)thumbnailEmptyColor;
+(id)thumbnailEmptyImage;
+(CGColorRef)modalSelectionDimmingColor;
+(char)supportsSelectionAnimation;
+(void)clearColorCaches;
+(id)thumbnailContentsGravity;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layout;
-(char)_isEmpty;
-(char)wantsUpdateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(id)accessibilityRole;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)isAccessibilityElement;
-(void)setSelected:(char)arg1 ;
-(NSView *)thumbnailView;
-(id)thumbnailImage;
-(unsigned long long)thumbnailVersion;
-(void)layoutSubviews;
-(id)selectionLayer;
-(void)setSelectionBorderShouldUsePrimaryColor:(char)arg1 ;
-(void)_updateSelectionBorderColor;
-(void)_setMediaView:(id)arg1 ;
-(void)prepareForRecycling;
-(void)setThumbnailImage:(id)arg1 usingNearestInterpolation:(char)arg2 animated:(char)arg3 ;
-(void)_setNeedsUpdateColors;
-(void)updateWithMediaItem:(id)arg1 ;
-(CGRect)mouseTrackingBounds;
-(char)useNearestInterpolation;
-(id)accessibilityRoleDescriptionForMediaViewCellThumbnailView:(id)arg1 ;
-(id)accessibilityIdentifierForMediaViewCellThumbnailView:(id)arg1 ;
-(char)mediaViewCellThumbnailViewWantsTransparentThumbnailBackground:(id)arg1 ;
-(CGColorRef)thumbnailEmptyColorForMediaViewCellThumbnailView:(id)arg1 ;
-(id)thumbnailEmptyImageForMediaViewCellThumbnailView:(id)arg1 ;
-(void)_layoutSelectionLayerIfNeeded;
-(void)_layoutModalSelectionIfNeeded;
-(CGRect)thumbnailViewFrame;
-(CGRect)effectiveThumbnailViewFrame;
-(CALayer *)thumbnailCornerLayer;
-(void)setThumbnailCornerRadius:(double)arg1 ;
-(void)setThumbnailContentsGravity:(id)arg1 ;
-(void)indicateSelectionState:(char)arg1 animated:(char)arg2 ;
-(CGColorRef)primarySelectionBorderColor;
-(CGColorRef)secondarySelectionBorderColor;
-(CGColorRef)selectionBorderInterspaceColor;
-(double)selectionBorderCornerRadius;
-(double)selectionBorderWidth;
-(double)selectionBorderInterspaceWidth;
-(id)selectionBorderAnchorView;
-(CGRect)selectionBorderFrame;
-(void)_updateModalSelection:(char)arg1 ;
-(void)_updateModalState;
-(id)newModalSelectionIndicatorView;
-(CGRect)rectForModalSelectionIndicatorOfSize:(CGSize)arg1 ;
-(char)wantsTransparentThumbnailBackground;
-(double)thumbnailCornerRadius;
@end

