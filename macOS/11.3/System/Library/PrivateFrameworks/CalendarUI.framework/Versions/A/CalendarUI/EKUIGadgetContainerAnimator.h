/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKViewController, NSMapTable;

@interface EKUIGadgetContainerAnimator : NSObject {

	char _isAnimating;
	char _runningAnimations;
	EKViewController* _viewController;
	NSMapTable* _animations;

}

@property (assign) char isAnimating;                               //@synthesize isAnimating=_isAnimating - In the implementation block
@property (__weak) EKViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSMapTable * animations;                        //@synthesize animations=_animations - In the implementation block
@property (assign) char runningAnimations;                         //@synthesize runningAnimations=_runningAnimations - In the implementation block
+(id)animatorForEventViewController:(id)arg1 ;
-(id)init;
-(void)setAnimations:(NSMapTable *)arg1 ;
-(char)isAnimating;
-(NSMapTable *)animations;
-(void)setViewController:(EKViewController *)arg1 ;
-(EKViewController *)viewController;
-(char)runningAnimations;
-(void)setRunningAnimations:(char)arg1 ;
-(double)_animationLength;
-(char)addExpandCollapseAnimationForGadgetContainer:(id)arg1 isExpanding:(char)arg2 ;
-(char)containsAnimationForGadgetContainer:(id)arg1 ;
-(void)runAnimationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)hasAnimations;
-(id)_rangeForContainer:(id)arg1 withOriginOffset:(double)arg2 heightDifference:(double)arg3 ;
-(void)setIsAnimating:(char)arg1 ;
@end

