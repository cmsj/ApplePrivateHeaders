/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSDetachedTabDraggingImageToWindowTransitionControllerDelegate;
#import <AppKit/AppKit-Structs.h>
@class NSWindow, NSScreen;

@interface NSDetachedTabDraggingImageToWindowTransitionController : NSObject {

	id<NSDetachedTabDraggingImageToWindowTransitionControllerDelegate> _delegate;
	NSWindow* _sourceMiniWindow;
	CGPoint _dropLocation;
	NSScreen* _destinationScreen;
	NSWindow* _destinationWindow;
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
-(void)_startFullScreenAnimation;
-(void)_startNonFullScreenAnimation;
@end

