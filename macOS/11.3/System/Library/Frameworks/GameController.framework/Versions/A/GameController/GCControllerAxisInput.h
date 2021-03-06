/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement {

	float _minValue;
	float _maxValue;
	char _horizontal;
	float _value;
	/*^block*/id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;

}

@property (assign,nonatomic) float value;                                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * positive;               //@synthesize positive=_positive - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * negative;               //@synthesize negative=_negative - In the implementation block
@property (assign,getter=isHorizontal,nonatomic) char horizontal;              //@synthesize horizontal=_horizontal - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                             //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
-(id)description;
-(float)value;
-(id)initWithCollection:(id)arg1 ;
-(void)setValue:(float)arg1 ;
-(float)minValue;
-(float)maxValue;
-(void)setHorizontal:(char)arg1 ;
-(char)isHorizontal;
-(char)_setValue:(float)arg1 queue:(id)arg2 ;
-(id)valueChangedHandler;
-(id)initWithCollection:(id)arg1 horizontal:(char)arg2 ;
-(char)isAnalog;
-(int)getAndResetTimesPressed;
-(void)setMinValue:(float)arg1 andMaxValue:(float)arg2 ;
-(char)_setValue:(float)arg1 ;
-(void)setValueChangedHandler:(id)arg1 ;
-(GCControllerButtonInput *)positive;
-(void)setPositive:(GCControllerButtonInput *)arg1 ;
-(GCControllerButtonInput *)negative;
-(void)setNegative:(GCControllerButtonInput *)arg1 ;
@end

