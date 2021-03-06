/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@class NSMutableArray, NSString, CBABCurve, CBABRamp, CBDisplayModule;

@interface CBABModuleExternal : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {

	NSMutableArray* _ALSServices;
	NSString* _containerID;
	NSString* _uniqueID;
	NSString* _displayUUID;
	char _enabled;
	char _available;
	char _presetDisableAB;
	CBABCurve* _curve;
	CBABRamp* _ramp;
	char _updatesFrozen;
	char _suspendAutoBrightness;
	char _fastRamp;
	char _builtIn;
	CBDisplayModule* _displayModule;

}

@property (readonly) CBDisplayModule * displayModule;               //@synthesize displayModule=_displayModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)start;
-(void)updateAvailability;
-(void)stop;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2 ;
-(void)updateAutoBrightnessState:(char)arg1 ;
-(char)getAggregatedLux:(float*)arg1 ;
-(void)updateBrightnessForce:(char)arg1 periodOverride:(char)arg2 period:(float)arg3 ;
-(BOOL)newALSService:(IOHIDServiceClientRef)arg1 ;
-(void)updateBrightness;
-(void)storeCurveToPreferences;
-(void)userBrightnessChangingHandler;
-(void)userBrightnessCommitHandler;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)endFastRamp;
-(CBDisplayModule *)displayModule;
@end

