/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GCControllerButtonInput, GCControllerDirectionPad, GCController;

@interface GCMicroGamepad : GCPhysicalInputProfile <NSSecureCoding> {

	/*^block*/id _valueChangedHandler;
	long long _deviceType;
	char _reportsAbsoluteDpadValues;
	char _allowsRotation;
	GCControllerButtonInput* _button0;
	GCControllerButtonInput* _button1;
	GCControllerDirectionPad* _dpad;
	GCControllerButtonInput* _buttonMenu;

}

@property (nonatomic,__weak,readonly) GCController * controller; 
@property (nonatomic,copy) id valueChangedHandler;                                //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * dpad;                   //@synthesize dpad=_dpad - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonA;                 //@synthesize button0=_button0 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonX;                 //@synthesize button1=_button1 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonMenu;              //@synthesize buttonMenu=_buttonMenu - In the implementation block
@property (assign,nonatomic) char reportsAbsoluteDpadValues;                      //@synthesize reportsAbsoluteDpadValues=_reportsAbsoluteDpadValues - In the implementation block
@property (assign,nonatomic) char allowsRotation;                                 //@synthesize allowsRotation=_allowsRotation - In the implementation block
+(char)supportsSecureCoding;
+(id)_current;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(id)productCategory;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(GCControllerDirectionPad *)dpad;
-(GCControllerButtonInput *)buttonA;
-(GCControllerButtonInput *)buttonX;
-(char)supportsDpadTaps;
-(char)reportsAbsoluteDpadValues;
-(char)allowsRotation;
-(void)setAllowsRotation:(char)arg1 ;
-(GCControllerButtonInput *)buttonMenu;
-(id)buttonB;
-(void)setLastEventTimestamp:(double)arg1 ;
-(void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2 ;
-(id)button0;
-(id)button1;
-(id)saveSnapshot;
-(void)setReportsAbsoluteDpadValues:(char)arg1 ;
-(void)microControllerWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timestamp:(unsigned long long)arg3 touchDown:(char)arg4 ;
-(void)setStateFromMicroGamepad:(id)arg1 ;
@end

