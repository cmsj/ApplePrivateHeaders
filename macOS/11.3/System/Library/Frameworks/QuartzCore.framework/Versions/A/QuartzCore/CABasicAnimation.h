/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation

@property (assign) char roundsToInteger; 
@property (assign) double startAngle; 
@property (assign) double endAngle; 
@property (retain) id fromValue; 
@property (retain) id toValue; 
@property (retain) id byValue; 
+(id)CA_attributes;
-(void)NS_takeImpliedValuesFromPresentationObject:(id)arg1 modelObject:(id)arg2 ;
-(void)NS_transformValuesAtKeyPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(double)_timeFunction:(double)arg1 ;
-(char)roundsToInteger;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)fromValue;
-(id)toValue;
-(id)byValue;
-(void)setByValue:(id)arg1 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setRoundsToInteger:(char)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(double)endAngle;
-(void)setEndAngle:(double)arg1 ;
@end

