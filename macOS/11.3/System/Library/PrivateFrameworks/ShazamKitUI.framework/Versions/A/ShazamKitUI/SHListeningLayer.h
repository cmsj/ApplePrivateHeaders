/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/Versions/A/ShazamKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/SHShazamButtonViewDelegate.h>

@protocol SHListeningLayerDelegate;
@class SHShazamButtonLayer, CALayer, SHTaggingViewInnerCirclesLayer, SHTaggingViewOuterCirclesLayer, SHTaggingViewAutoShadowLayer, SHInnerCircleMaskLayer;

@interface SHListeningLayer : CALayer <SHShazamButtonViewDelegate> {

	id<SHListeningLayerDelegate> _viewDelegate;
	long long _state;
	SHShazamButtonLayer* _shazamButtonLayer;
	CALayer* _autoShadowContainerLayer;
	CALayer* _innerCirclesContainerLayer;
	CALayer* _innerCirclesSecondaryContainerLayer;
	SHTaggingViewInnerCirclesLayer* _innerCirclesLayer;
	SHTaggingViewOuterCirclesLayer* _outerCirclesLayer;
	SHTaggingViewAutoShadowLayer* _autoShadowLayer;
	SHInnerCircleMaskLayer* _innerCircleToShazamButtonMaskLayer;
	SHInnerCircleMaskLayer* _innerCircleToAutoShadowMaskLayer;
	SHInnerCircleMaskLayer* _autoShadowToShazamButtonMaskLayer;

}

@property (__weak) id<SHListeningLayerDelegate> viewDelegate;                                //@synthesize viewDelegate=_viewDelegate - In the implementation block
@property (assign) long long state;                                                          //@synthesize state=_state - In the implementation block
@property (retain) SHShazamButtonLayer * shazamButtonLayer;                                  //@synthesize shazamButtonLayer=_shazamButtonLayer - In the implementation block
@property (retain) CALayer * autoShadowContainerLayer;                                       //@synthesize autoShadowContainerLayer=_autoShadowContainerLayer - In the implementation block
@property (retain) CALayer * innerCirclesContainerLayer;                                     //@synthesize innerCirclesContainerLayer=_innerCirclesContainerLayer - In the implementation block
@property (retain) CALayer * innerCirclesSecondaryContainerLayer;                            //@synthesize innerCirclesSecondaryContainerLayer=_innerCirclesSecondaryContainerLayer - In the implementation block
@property (retain) SHTaggingViewInnerCirclesLayer * innerCirclesLayer;                       //@synthesize innerCirclesLayer=_innerCirclesLayer - In the implementation block
@property (retain) SHTaggingViewOuterCirclesLayer * outerCirclesLayer;                       //@synthesize outerCirclesLayer=_outerCirclesLayer - In the implementation block
@property (retain) SHTaggingViewAutoShadowLayer * autoShadowLayer;                           //@synthesize autoShadowLayer=_autoShadowLayer - In the implementation block
@property (retain) SHInnerCircleMaskLayer * innerCircleToShazamButtonMaskLayer;              //@synthesize innerCircleToShazamButtonMaskLayer=_innerCircleToShazamButtonMaskLayer - In the implementation block
@property (retain) SHInnerCircleMaskLayer * innerCircleToAutoShadowMaskLayer;                //@synthesize innerCircleToAutoShadowMaskLayer=_innerCircleToAutoShadowMaskLayer - In the implementation block
@property (retain) SHInnerCircleMaskLayer * autoShadowToShazamButtonMaskLayer;               //@synthesize autoShadowToShazamButtonMaskLayer=_autoShadowToShazamButtonMaskLayer - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)layoutSublayers;
-(id<SHListeningLayerDelegate>)viewDelegate;
-(void)setViewDelegate:(id<SHListeningLayerDelegate>)arg1 ;
-(void)buildView;
-(void)buttonWillFinishDrawingShazamShape;
-(void)buttonDidFinishDrawingShazamShape;
-(SHShazamButtonLayer *)shazamButtonLayer;
-(void)setShazamButtonLayer:(SHShazamButtonLayer *)arg1 ;
-(CALayer *)autoShadowContainerLayer;
-(void)centerLayer:(id)arg1 inSuperLayer:(id)arg2 withRelativeSize:(double)arg3 ;
-(SHTaggingViewAutoShadowLayer *)autoShadowLayer;
-(CALayer *)innerCirclesContainerLayer;
-(CALayer *)innerCirclesSecondaryContainerLayer;
-(SHTaggingViewInnerCirclesLayer *)innerCirclesLayer;
-(SHTaggingViewOuterCirclesLayer *)outerCirclesLayer;
-(SHInnerCircleMaskLayer *)innerCircleToShazamButtonMaskLayer;
-(SHInnerCircleMaskLayer *)innerCircleToAutoShadowMaskLayer;
-(SHInnerCircleMaskLayer *)autoShadowToShazamButtonMaskLayer;
-(void)startManualTaggingAnimation;
-(void)startAutoTaggingAnimation;
-(void)removeAnimationLayers;
-(void)startIdleAnimation;
-(void)animateToIdleStateWithCompletion:(/*^block*/id)arg1 ;
-(void)processBassForInnerCircle:(double)arg1 ;
-(void)processBassForShazamButton:(double)arg1 ;
-(void)processTrebleForOuterCircles:(double)arg1 ;
-(void)addInnerCirclesLayer;
-(void)addOuterCirclesLayer;
-(void)addInnerCirclesToShazamButtonMaskLayer;
-(void)addAutoShadowLayer;
-(void)addInnerCircleToAutoShadowMaskLayer;
-(void)addAutoShadowToShazamButtonMaskLayer;
-(void)addAutoAnimationInitialShazamButtonPulse;
-(void)setInnerCirclesContainerLayer:(CALayer *)arg1 ;
-(void)setInnerCirclesSecondaryContainerLayer:(CALayer *)arg1 ;
-(void)setInnerCirclesLayer:(SHTaggingViewInnerCirclesLayer *)arg1 ;
-(void)setOuterCirclesLayer:(SHTaggingViewOuterCirclesLayer *)arg1 ;
-(void)setAutoShadowContainerLayer:(CALayer *)arg1 ;
-(void)setAutoShadowLayer:(SHTaggingViewAutoShadowLayer *)arg1 ;
-(void)setInnerCircleToShazamButtonMaskLayer:(SHInnerCircleMaskLayer *)arg1 ;
-(void)setInnerCircleToAutoShadowMaskLayer:(SHInnerCircleMaskLayer *)arg1 ;
-(void)setAutoShadowToShazamButtonMaskLayer:(SHInnerCircleMaskLayer *)arg1 ;
-(void)startActiveListeningAnimation;
-(void)startPassiveListeningAnimation;
-(void)stopListeningAnimations;
-(void)processBass:(double)arg1 treble:(double)arg2 ;
-(void)addTouchDownAnimation;
@end

