/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DetachedTabDraggingImageToWindowTransitionControllerDelegate;
#import <Safari/Safari-Structs.h>
@class NSWindow, NSScreen;

@interface DetachedTabDraggingImageToWindowTransitionController : NSObject {

	id<DetachedTabDraggingImageToWindowTransitionControllerDelegate> _delegate;
	NSWindow* _sourceMiniWindow;
	NSWindow* _destinationWindow;
	CGPoint _dropLocation;
	NSScreen* _destinationScreen;
	CGRect _windowAnimationStartFrame;
	CGRect _windowAnimationEndFrame;
	CGAffineTransform _windowAnimationEndTransform;
	char _destinationWindowWillMoveToFullScreen;

}
+(void)detachTabAtPointOnScreen:(CGPoint)arg1 withDraggedMiniWindow:(id)arg2 ofWidth:(double)arg3 withDelegate:(id)arg4 ;
-(id)init;
-(void)_startAnimation;
-(id)_initWithMiniWindow:(id)arg1 ofWidth:(double)arg2 dropLocation:(CGPoint)arg3 delegate:(id)arg4 ;
-(char)_willDestinationWindowMoveToFullScreen;
-(void)_setUpWindowAnimationStartFrameWithMiniWindowWidth:(double)arg1 ;
-(void)_setUpWindowAnimationEndFrame;
-(void)_setUpWindow;
-(void)_updateAnimationWithProgress:(float)arg1 ;
@end

