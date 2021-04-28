/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXTransitionController.h>

@class UXView;

@interface UXParallaxTransitionController : UXTransitionController {

	UXView* _dimmingView;

}
+(void)_addShadowToView:(id)arg1 withAlpha:(double)arg2 ;
-(void)animateTransition:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)updateInteractiveTransition:(double)arg1 inContext:(id)arg2 ;
-(char)navigationController:(id)arg1 shouldBeginInteractivePopFromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)_setupDimmingViewInContext:(id)arg1 withAlpha:(double)arg2 ;
@end
