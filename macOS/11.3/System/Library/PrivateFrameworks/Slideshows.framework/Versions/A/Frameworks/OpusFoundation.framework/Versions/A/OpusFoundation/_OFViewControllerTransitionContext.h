/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <libobjc.A.dylib/OFViewControllerTransitioningContext.h>

@protocol OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning;
@class OFNSViewController, OFNSView, NSString;

@interface _OFViewControllerTransitionContext : NSObject <OFViewControllerTransitioningContext> {

	OFNSViewController* _fromViewController;
	OFNSViewController* _toViewController;
	OFNSView* _containerView;
	double _progress;
	double _progressSpeed;
	double _lastUpdateTimestamp;
	long long _state;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned isCurrentlyInteractive;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
	}  _flags;
	id<OFViewControllerAnimatedTransitioning> _animator;
	id<OFViewControllerInteractiveTransitioning> _interactor;
	/*^block*/id _interactiveUpdateHandler;
	/*^block*/id _willCompleteHandler;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) char isInFlight; 
@property (nonatomic,copy) id interactiveUpdateHandler;                                    //@synthesize interactiveUpdateHandler=_interactiveUpdateHandler - In the implementation block
@property (readonly) id<OFViewControllerAnimatedTransitioning> animator;                   //@synthesize animator=_animator - In the implementation block
@property (readonly) id<OFViewControllerInteractiveTransitioning> interactor;              //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,copy) id willCompleteHandler;                                         //@synthesize willCompleteHandler=_willCompleteHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)progress;
-(id<OFViewControllerAnimatedTransitioning>)animator;
-(id)containerView;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)toViewController;
-(id)fromViewController;
-(char)wasCancelled;
-(char)isInteractive;
-(char)isInFlight;
-(void)setIsInFlight:(char)arg1 ;
-(void)completeTransition:(char)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(id<OFViewControllerInteractiveTransitioning>)interactor;
-(char)initiallyInteractive;
-(char)isCompleting;
-(id)interactiveUpdateHandler;
-(void)setInteractiveUpdateHandler:(id)arg1 ;
-(id)willCompleteHandler;
-(void)setWillCompleteHandler:(id)arg1 ;
-(double)progressSpeed;
-(id)initWithContainerView:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animator:(id)arg4 interactor:(id)arg5 ;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1 ;
-(void)setIsCompleting:(char)arg1 ;
@end
