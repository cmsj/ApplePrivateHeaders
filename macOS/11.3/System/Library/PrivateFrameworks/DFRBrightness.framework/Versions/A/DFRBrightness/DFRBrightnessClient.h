/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DFRBrightness.framework/Versions/A/DFRBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
#import <DFRBrightness/DFRBrightness-Structs.h>
@class NSObject, NSMutableDictionary, BrightnessSystemClientInternal;

@interface DFRBrightnessClient : NSObject {

	IOHIDEventSystemClientRef _hidClient;
	IOHIDServiceClientRef _DFRService;
	NSObject*<OS_os_log> _logHandle;
	NSMutableDictionary* _propertyCache;
	NSObject*<OS_dispatch_queue> _scheduledQueue;
	NSObject*<OS_dispatch_queue> _hidQueue;
	/*^block*/id _clientCallbackBlockDisplayState;
	/*^block*/id _clientCallbackBlockHarmonyState;
	/*^block*/id _displayStateNotificationHandler;
	int _displayStateNotificationToken;
	/*^block*/id _coreBrightnessClientCallback;
	BrightnessSystemClientInternal* _coreBrightnessClient;
	long long _displayState;
	long long _harmonyState;

}

@property (readonly) long long displayState;              //@synthesize displayState=_displayState - In the implementation block
@property (readonly) long long harmonyState;              //@synthesize harmonyState=_harmonyState - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleWithDispatchQueue:(id)arg1 ;
-(BOOL)addDFRService:(IOHIDServiceClientRef)arg1 ;
-(void)flushPropertyCache;
-(long long)displayState;
-(BOOL)turnOn;
-(BOOL)turnOnWithPeriod:(float)arg1 ;
-(BOOL)turnOff;
-(BOOL)turnOffWithPeriod:(float)arg1 ;
-(BOOL)dimToStep:(long long)arg1 ;
-(BOOL)dimToStep:(long long)arg1 withPeriod:(float)arg2 andCoefficient:(float)arg3 ;
-(long long)getDimmingStep;
-(BOOL)getBurninCounterValue:(unsigned long long*)arg1 ;
-(BOOL)setBurninCounterValue:(unsigned long long)arg1 ;
-(BOOL)registerDisplayStateUpdateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)unregisterDisplayStateUpdateCallback;
-(BOOL)initializeHID;
-(BOOL)updateState:(int)arg1 withPeriod:(float)arg2 ;
-(BOOL)_dimToStep:(id)arg1 withPeriod:(id)arg2 andCoefficient:(id)arg3 ;
-(BOOL)setServiceProperty:(id)arg1 forKey:(id)arg2 ;
-(long long)harmonyState;
-(BOOL)dimToStep:(long long)arg1 withPeriod:(float)arg2 ;
-(BOOL)dimToStep:(long long)arg1 withCoefficient:(float)arg2 ;
-(int)getDFRDisplayID;
-(BOOL)registerHarmonyStateUpdateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)unregisterHarmonyStateUpdateCallback;
@end

