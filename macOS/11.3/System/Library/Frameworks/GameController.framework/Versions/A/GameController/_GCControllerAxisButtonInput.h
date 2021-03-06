/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCControllerButtonInput.h>

@class GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : GCControllerButtonInput {

	char _positive;
	GCControllerAxisInput* _axis;

}

@property (assign,nonatomic,__weak) GCControllerAxisInput * axis;              //@synthesize axis=_axis - In the implementation block
@property (getter=isPositive,nonatomic,readonly) char positive;                //@synthesize positive=_positive - In the implementation block
-(float)value;
-(id)collection;
-(GCControllerAxisInput *)axis;
-(void)setAxis:(GCControllerAxisInput *)arg1 ;
-(char)_setValue:(float)arg1 queue:(id)arg2 ;
-(id)initWithAxis:(id)arg1 positive:(char)arg2 ;
-(char)isAnalog;
-(char)_setValue:(float)arg1 ;
-(char)_setValueFromAxisButton:(float)arg1 queue:(id)arg2 ;
-(char)_commitPendingValueOnQueue:(id)arg1 ;
-(char)_setValueFromAxisButton:(float)arg1 ;
-(void)_setPendingValue:(float)arg1 ;
-(char)isPositive;
@end

