/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OBAnimationAppearanceChangeDelegate.h>

@class CAPackage, CAStateController, OBAnimationView, NSArray, OBAnimationState, NSString;

@interface OBAnimationController : NSObject <OBAnimationAppearanceChangeDelegate> {

	char _canceled;
	CAPackage* _package;
	CAStateController* _stateController;
	OBAnimationView* _animationView;
	NSArray* _animatedStates;
	unsigned long long _stateIndex;
	OBAnimationState* _firstState;

}

@property (nonatomic,retain) CAPackage * package;                              //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) OBAnimationView * animationView;                  //@synthesize animationView=_animationView - In the implementation block
@property (nonatomic,retain) NSArray * animatedStates;                         //@synthesize animatedStates=_animatedStates - In the implementation block
@property (assign,nonatomic) char canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) unsigned long long stateIndex;                    //@synthesize stateIndex=_stateIndex - In the implementation block
@property (nonatomic,retain) OBAnimationState * firstState;                    //@synthesize firstState=_firstState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)packageForURL:(id)arg1 ;
-(CAPackage *)package;
-(id)view;
-(void)setPackage:(CAPackage *)arg1 ;
-(void)startAnimation;
-(void)stopAnimation;
-(char)canceled;
-(void)setCanceled:(char)arg1 ;
-(CAStateController *)stateController;
-(OBAnimationView *)animationView;
-(void)setAnimationView:(OBAnimationView *)arg1 ;
-(id)initWithUrlToPackage:(id)arg1 animationView:(id)arg2 sizingTransformScale:(double)arg3 animatedStates:(id)arg4 startAtFirstState:(id)arg5 ;
-(void)_initializeStartingStateForStopAnimation:(char)arg1 ;
-(id)initWithUrlToPackage:(id)arg1 animationView:(id)arg2 animatedStates:(id)arg3 startAtFirstState:(id)arg4 ;
-(void)_startAnimationForLayer:(id)arg1 ;
-(void)setStateIndex:(unsigned long long)arg1 ;
-(id)_caStateForAnimationState:(id)arg1 ;
-(void)_stepAnimationStatesForLayer:(id)arg1 ;
-(unsigned long long)stateIndex;
-(NSArray *)animatedStates;
-(void)updateAnimationForAppearanceChange;
-(id)initWithUrlToPackage:(id)arg1 animatedStates:(id)arg2 startAtFirstState:(id)arg3 ;
-(id)initWithUrlToPackage:(id)arg1 sizingTransformScale:(double)arg2 animatedStates:(id)arg3 startAtFirstState:(id)arg4 ;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setAnimatedStates:(NSArray *)arg1 ;
-(OBAnimationState *)firstState;
-(void)setFirstState:(OBAnimationState *)arg1 ;
@end

