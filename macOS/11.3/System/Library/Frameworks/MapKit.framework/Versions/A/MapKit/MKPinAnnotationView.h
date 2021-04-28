/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@protocol _MKPinAnnotationViewDelegate;
@class MKImageView, NSColor;

@interface MKPinAnnotationView : MKAnnotationView {

	MKImageView* _shadowView;
	NSColor* _pinTintColor;
	id<_MKPinAnnotationViewDelegate> _delegate;
	int _state;
	char _animatesDrop;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<_MKPinAnnotationViewDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSColor * pinTintColor; 
@property (assign,nonatomic) char animatesDrop; 
@property (assign,nonatomic) unsigned long long pinColor; 
+(id)_reuseIdentifier;
+(Class)layerClass;
+(Class)_mapkitLeafClass;
+(id)redPinColor;
+(id)_imageCache;
+(CGSize)_perceivedSize;
+(CGPoint)_calloutOffset;
+(id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3 ;
+(id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 pinColor:(id)arg3 effectiveAppearance:(id)arg4 ;
+(id)_shadowImage;
+(CGPoint)_leftCalloutOffset;
+(CGPoint)_rightCalloutOffset;
+(id)greenPinColor;
+(id)purplePinColor;
+(id)_pinsWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 effectiveAppearance:(id)arg3 ;
+(id)_bounceAnimation;
+(id)_dropBounceAnimation;
+(CGRect)_pinFrameForPosition:(CGPoint)arg1 ;
+(CGPoint)_perceivedAnchorPoint;
+(CGPoint)_shadowAnchorPoint;
-(id)description;
-(int)_state;
-(id<_MKPinAnnotationViewDelegate>)_delegate;
-(void)updateLayer;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)_image;
-(void)_setDelegate:(id)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPinTintColor:(NSColor *)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(CGRect)_significantBounds;
-(void)setDragState:(unsigned long long)arg1 animated:(char)arg2 ;
-(CGPoint)_draggingDropOffset;
-(void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3 ;
-(void)_stopDrop;
-(char)animatesDrop;
-(void)_updateAnchorPosition:(CGPoint)arg1 alignToPixels:(char)arg2 ;
-(void)_didUpdatePosition;
-(NSEdgeInsets)_defaultCollisionAlignmentRectInsets;
-(NSColor *)pinTintColor;
-(void)_removeAllAnimations;
-(void)_invalidateImage;
-(id)_pins;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)_updateShadowLayer;
-(id)_pinBounceImages;
-(id)_pinJumpImages;
-(id)_floatingImage;
-(id)_bounceAnimation:(char)arg1 withDelay:(double)arg2 addToLayer:(char)arg3 ;
-(void)_liftForDraggingAnimated:(char)arg1 ;
-(void)_dropAfterDraggingAndRevertPosition:(char)arg1 animated:(char)arg2 ;
-(void)_liftForDraggingAfterBounceAnimated:(char)arg1 ;
-(void)_liftDidEnd:(id)arg1 ;
-(void)_cleanupAfterPinDropAnimation;
-(id)_highlightedImage;
-(void)setPinColor:(unsigned long long)arg1 ;
-(unsigned long long)pinColor;
-(void)setAnimatesDrop:(char)arg1 ;
-(void)_jump;
@end
