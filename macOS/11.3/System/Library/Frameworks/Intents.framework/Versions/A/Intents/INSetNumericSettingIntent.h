/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetNumericSettingIntentExport.h>

@class INSettingMetadata, INNumericSettingValue, INTemporalEventTrigger, NSString;

@interface INSetNumericSettingIntent : INIntent <INSetNumericSettingIntentExport>

@property (copy,readonly) INSettingMetadata * settingMetadata; 
@property (copy,readonly) INNumericSettingValue * numericValue; 
@property (readonly) long long boundedValue; 
@property (readonly) long long action; 
@property (copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INSettingMetadata *)settingMetadata;
-(INNumericSettingValue *)numericValue;
-(long long)boundedValue;
-(void)setBoundedValue:(long long)arg1 ;
-(void)setNumericValue:(INNumericSettingValue *)arg1 ;
-(void)setSettingMetadata:(INSettingMetadata *)arg1 ;
-(id)initWithSettingMetadata:(id)arg1 numericValue:(id)arg2 boundedValue:(long long)arg3 action:(long long)arg4 temporalEventTrigger:(id)arg5 ;
@end

