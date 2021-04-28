/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetClimateSettingsInCarIntentExport.h>

@class NSNumber, NSMeasurement, INSpeakableString, NSString;

@interface INSetClimateSettingsInCarIntent : INIntent <INSetClimateSettingsInCarIntentExport>

@property (copy,readonly) NSNumber * enableFan; 
@property (copy,readonly) NSNumber * enableAirConditioner; 
@property (copy,readonly) NSNumber * enableClimateControl; 
@property (copy,readonly) NSNumber * enableAutoMode; 
@property (readonly) long long airCirculationMode; 
@property (copy,readonly) NSNumber * fanSpeedIndex; 
@property (copy,readonly) NSNumber * fanSpeedPercentage; 
@property (readonly) long long relativeFanSpeedSetting; 
@property (copy,readonly) NSMeasurement * temperature; 
@property (readonly) long long relativeTemperatureSetting; 
@property (readonly) long long climateZone; 
@property (copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSMeasurement *)temperature;
-(void)setTemperature:(NSMeasurement *)arg1 ;
-(INSpeakableString *)carName;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11 ;
-(long long)airCirculationMode;
-(void)setAirCirculationMode:(long long)arg1 ;
-(long long)climateZone;
-(void)setClimateZone:(long long)arg1 ;
-(NSNumber *)enableAirConditioner;
-(void)setEnableAirConditioner:(NSNumber *)arg1 ;
-(NSNumber *)enableAutoMode;
-(void)setEnableAutoMode:(NSNumber *)arg1 ;
-(NSNumber *)enableClimateControl;
-(void)setEnableClimateControl:(NSNumber *)arg1 ;
-(NSNumber *)enableFan;
-(void)setEnableFan:(NSNumber *)arg1 ;
-(NSNumber *)fanSpeedIndex;
-(void)setFanSpeedIndex:(NSNumber *)arg1 ;
-(NSNumber *)fanSpeedPercentage;
-(void)setFanSpeedPercentage:(NSNumber *)arg1 ;
-(long long)relativeFanSpeedSetting;
-(void)setRelativeFanSpeedSetting:(long long)arg1 ;
-(long long)relativeTemperatureSetting;
-(void)setRelativeTemperatureSetting:(long long)arg1 ;
-(id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11 carName:(id)arg12 ;
@end
