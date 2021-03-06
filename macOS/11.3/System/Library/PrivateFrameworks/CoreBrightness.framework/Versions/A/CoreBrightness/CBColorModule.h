/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBContainer.h>
#import <libobjc.A.dylib/CBContainerProtocol.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>
#import <libobjc.A.dylib/NightShiftSupportProtocol.h>
#import <libobjc.A.dylib/CBStatusInfoProtocol.h>

@protocol OS_dispatch_source, SLSBrightnessControl;
@class NSMutableArray, NSObject, NSString, NSMutableDictionary, CBColorFilter;

@interface CBColorModule : CBContainer <CBContainerProtocol, CBContainerModuleProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol> {

	NSMutableArray* _relevantServices;
	void* _callbackContext;
	SCD_Struct_CB10 _colorSample;
	double _illuminance;
	BOOL _clamshell;
	NSObject*<OS_dispatch_source> _rampTimer;
	NSString* _userName;
	NSMutableDictionary* _properties;
	SCD_Struct_CB11* _colorStruct;
	BOOL _fadeInProgress;
	BOOL _endRamp;
	IOHIDServiceClientRef _dfr;
	SCD_Struct_CB12 _reportContext;
	char _displayOn;
	CBColorFilter* _colorFilter;
	NSMutableDictionary* _aggregatedConfig;
	unsigned long long _colorFilterModeOverride;
	NSMutableDictionary* _currentChromaticitySensitivity;
	id<SLSBrightnessControl> _brightnessControlProxy;
	unsigned long long _moduleType;

}

@property (readonly) unsigned long long moduleType;                 //@synthesize moduleType=_moduleType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(char)start;
-(void)updateAvailability;
-(void)stop;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(id)copyIdentifiers;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(id)initMainWithSKL:(id)arg1 ;
-(void)initColorStruct;
-(void)initializeAggregatedConfig;
-(void)activateColorAdaptation;
-(id)initDFRHarmonyWithSKL:(id)arg1 ;
-(void)reportInitialize;
-(void)updateColorFilterMode;
-(void)updateSensorPolicy;
-(void)reportResetTimerWithStop:(char)arg1 ;
-(void)displayBrightnessFactorUpdate:(float)arg1 ;
-(void)reportCommitWithStop:(char)arg1 ;
-(void)updateClamshellState:(BOOL)arg1 ;
-(void)BLRFactorUpdate:(float)arg1 ;
-(void)updateAggregatedConfigWithObject:(id)arg1 forKey:(id)arg2 ;
-(void)BLRFactorUpdate:(float)arg1 withPeriod:(float)arg2 ;
-(void)setPreferenceInternal:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(void)updateActivity;
-(char)isDFR;
-(void)CAStrengthUpdate:(float)arg1 withPeriod:(float)arg2 ;
-(char)parseAdaptationModeMappingDictionary:(id)arg1 strengths:(float*)arg2 strengthNum:(int)arg3 ;
-(id)newAdaptationModeMappingDictionary:(float*)arg1 strengthNum:(int)arg2 ;
-(id)newAdaptationModeMappingArray:(float*)arg1 strengthNum:(int)arg2 ;
-(void)inputAmbientColorSample:(SCD_Struct_CB13*)arg1 force:(char)arg2 trust:(char)arg3 ;
-(void)processColorSample:(id)arg1 ;
-(char)BLRFactorPropertyHandler:(id)arg1 ;
-(char)BLRCCTTargetPropertyHandler:(id)arg1 ;
-(char)CALabShiftPropertyHandler:(id)arg1 ;
-(char)CAEnabledPropertyHandler:(id)arg1 ;
-(char)CAStrengthPropertyHandler:(id)arg1 ;
-(char)CAWeakestColorAdaptationModePropertyHandler:(id)arg1 ;
-(char)CAWeakestColorAdaptationModeAnimatedPropertyHandler:(id)arg1 ;
-(char)CAModeMapping:(id)arg1 ;
-(char)CoreDisplayInitialisedPropertyHandler:(id)arg1 ;
-(BOOL)displayPresetHarmonyHandler:(id)arg1 ;
-(char)clamshellStatePropertyHandler:(id)arg1 ;
-(char)displayBrightnessFactorPropertyHandler:(id)arg1 ;
-(char)colorFilterModeHandler:(id)arg1 ;
-(char)userSwitchPropertyHandler:(id)arg1 ;
-(void)updateSensorSensitivity:(IOHIDServiceClientRef)arg1 forValue:(IOHIDEventRef)arg2 ;
-(float)absoluteDifferenceForCurrentColor:(SCD_Struct_CB4)arg1 andDeltaError:(SCD_Struct_CB4)arg2 ;
-(char)setColorSensitivity:(float)arg1 forALS:(IOHIDServiceClientRef)arg2 withIlluminance:(float)arg3 ;
-(BOOL)hasExternalALS;
-(void)handleHIDEventInternal:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(id)copyPreferenceInternalForKey:(id)arg1 user:(id)arg2 ;
-(void)switchToUserInternal:(id)arg1 ;
-(void)updateHarmonySupport;
-(char)startNewTimerWithFreq:(float)arg1 ;
-(char)parseAdaptationModeMappingArray:(id)arg1 strengths:(float*)arg2 strengthNum:(int)arg3 ;
-(void)timerRoutine:(id)arg1 ;
-(void)reportToAggd:(SCD_Struct_CB19*)arg1 ;
-(void)commitPowerLogReport:(SCD_Struct_CB19*)arg1 ;
-(id)newArrayFromDoubles:(double*)arg1 size:(int)arg2 ;
-(id)newArrayFromIntegers:(int*)arg1 size:(int)arg2 ;
-(id)newSerializedConfigFromAggregatedConfig:(id)arg1 ;
-(void)notifyAndStoreAggregatedConfig;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(id)initMain;
-(id)initDFRHarmony;
-(void)switchToUser:(id)arg1 ;
-(void)colorRampRoutine:(const SCD_Struct_CB20*)arg1 ;
-(id)newAggregatedConfigFromSerializedConfig:(id)arg1 ;
-(unsigned long long)moduleType;
@end

