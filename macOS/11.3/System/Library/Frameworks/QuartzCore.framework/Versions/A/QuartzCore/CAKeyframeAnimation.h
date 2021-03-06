/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray * values; 
@property (assign) const CGPathRef path; 
@property (copy) NSArray * keyTimes; 
@property (copy) NSArray * timingFunctions; 
@property (copy) NSString * calculationMode; 
@property (copy) NSArray * tensionValues; 
@property (copy) NSArray * continuityValues; 
@property (copy) NSArray * biasValues; 
@property (copy) NSString * rotationMode; 
+(id)CA_attributes;
-(void)NS_transformValuesAtKeyPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(NSString *)rotationMode;
-(void)setRotationMode:(NSString *)arg1 ;
-(NSArray *)values;
-(const CGPathRef)path;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(void)setKeyTimes:(NSArray *)arg1 ;
-(void)setTimingFunctions:(NSArray *)arg1 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setCalculationMode:(NSString *)arg1 ;
-(NSArray *)keyTimes;
-(NSArray *)timingFunctions;
-(NSString *)calculationMode;
-(NSArray *)tensionValues;
-(NSArray *)continuityValues;
-(NSArray *)biasValues;
-(void)setContinuityValues:(NSArray *)arg1 ;
-(void)setTensionValues:(NSArray *)arg1 ;
-(void)setBiasValues:(NSArray *)arg1 ;
@end

