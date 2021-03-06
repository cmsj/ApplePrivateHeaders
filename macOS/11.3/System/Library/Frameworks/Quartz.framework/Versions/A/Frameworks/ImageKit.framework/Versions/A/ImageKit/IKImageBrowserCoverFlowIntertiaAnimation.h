/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/IKAnimationGroup.h>

@class NSIndexSet;

@interface IKImageBrowserCoverFlowIntertiaAnimation : IKAnimationGroup {

	id _grid;
	double _scrollInitialTime;
	double _initialVelocity;
	double _initialPosition;
	double* _positions;
	int _positionsCount;
	NSIndexSet* _groupIndexes;

}

@property (assign) id grid; 
@property (assign) double initialVelocity;                 //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (assign) double initialPosition;                 //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign) double scrollInitialTime;               //@synthesize scrollInitialTime=_scrollInitialTime - In the implementation block
@property (retain) NSIndexSet * groupIndexes;              //@synthesize groupIndexes=_groupIndexes - In the implementation block
-(char)handleChannel:(id)arg1 ;
-(char)animationManager:(id)arg1 processStep:(id)arg2 ;
-(NSIndexSet *)groupIndexes;
-(void)setGroupIndexes:(NSIndexSet *)arg1 ;
-(double)scrollInitialTime;
-(void)setScrollInitialTime:(double)arg1 ;
-(void)dealloc;
-(double)scrollVelocity;
-(double)initialVelocity;
-(void)setInitialVelocity:(double)arg1 ;
-(void)setup;
-(id)grid;
-(double)initialPosition;
-(void)setInitialPosition:(double)arg1 ;
-(void)setGrid:(id)arg1 ;
@end

