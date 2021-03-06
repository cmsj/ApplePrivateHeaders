/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INRunVoiceCommandIntentResponseExport.h>

@class NSString, NSNumber, NSDictionary, INArchivedObject, NSArray;

@interface INRunVoiceCommandIntentResponse : INIntentResponse <INRunVoiceCommandIntentResponseExport>

@property (readonly) long long code; 
@property (copy) NSString * appBundleId; 
@property (assign) long long intentCategory; 
@property (copy) NSNumber * customResponsesDisabled; 
@property (copy) NSString * responseTemplate; 
@property (copy) NSDictionary * parameters; 
@property (copy) NSString * verb; 
@property (copy) INArchivedObject * underlyingIntent; 
@property (copy) NSString * localizedAppName; 
@property (copy) INArchivedObject * underlyingIntentResponse; 
@property (assign) long long toggleState; 
@property (copy) NSNumber * continueRunning; 
@property (copy) NSNumber * interstitialDisabled; 
@property (copy) NSString * underlyingIntentTitle; 
@property (copy) NSArray * steps; 
@property (copy) NSNumber * prefersExecutionOnCompanion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(char)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(char)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)verb;
-(id)propertiesByName;
-(id)_dictionaryRepresentation;
-(NSArray *)steps;
-(void)setSteps:(NSArray *)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(long long)intentCategory;
-(void)setIntentCategory:(long long)arg1 ;
-(NSNumber *)customResponsesDisabled;
-(void)setCustomResponsesDisabled:(NSNumber *)arg1 ;
-(NSString *)responseTemplate;
-(void)setResponseTemplate:(NSString *)arg1 ;
-(INArchivedObject *)underlyingIntent;
-(void)setUnderlyingIntent:(INArchivedObject *)arg1 ;
-(NSString *)localizedAppName;
-(void)setLocalizedAppName:(NSString *)arg1 ;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(INArchivedObject *)arg1 ;
-(long long)toggleState;
-(void)setToggleState:(long long)arg1 ;
-(NSNumber *)continueRunning;
-(void)setContinueRunning:(NSNumber *)arg1 ;
-(NSNumber *)interstitialDisabled;
-(void)setInterstitialDisabled:(NSNumber *)arg1 ;
-(NSString *)underlyingIntentTitle;
-(void)setUnderlyingIntentTitle:(NSString *)arg1 ;
-(NSNumber *)prefersExecutionOnCompanion;
-(void)setPrefersExecutionOnCompanion:(NSNumber *)arg1 ;
@end

