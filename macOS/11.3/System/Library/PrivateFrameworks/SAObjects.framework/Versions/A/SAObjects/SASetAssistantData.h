/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSNumber, NSString, SAMediaContentRatingRestrictions, SAVoice, SAWatchData;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * abSources; 
@property (nonatomic,copy) NSNumber * allowUserGeneratedContent; 
@property (nonatomic,copy) NSString * anchor; 
@property (assign,nonatomic) char censorSpeech; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSNumber * debugFlags; 
@property (nonatomic,copy) NSArray * deviceCapabilities; 
@property (nonatomic,copy) NSString * deviceColor; 
@property (nonatomic,copy) NSString * deviceEnclosure; 
@property (nonatomic,copy) NSString * deviceVersion; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * fullStorefrontId; 
@property (assign,nonatomic) char handsFree; 
@property (nonatomic,copy) NSNumber * holdToTalkThresholdInMilliseconds; 
@property (assign,nonatomic) char inRetailStoreDemoMode; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSArray * meCards; 
@property (nonatomic,retain) SAMediaContentRatingRestrictions * mediaContentRatingRestrictions; 
@property (assign,nonatomic) char mediaPlayerExplicitContentDisallowed; 
@property (nonatomic,copy) NSString * osVersion; 
@property (nonatomic,copy) NSArray * parentalRestrictions; 
@property (nonatomic,copy) NSString * preferredLanguage; 
@property (nonatomic,copy) NSString * region; 
@property (nonatomic,copy) NSNumber * storefront; 
@property (nonatomic,copy) NSString * temperatureUnit; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,retain) SAVoice * ttsVoice; 
@property (nonatomic,copy) NSNumber * twentyFourHourTimeDisplay; 
@property (nonatomic,copy) NSNumber * uiScale; 
@property (nonatomic,copy) NSString * userInterfaceIdiom; 
@property (assign,nonatomic) char voiceOver; 
@property (nonatomic,copy) NSNumber * voiceTriggerEnabled; 
@property (nonatomic,retain) SAWatchData * watchData; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setAssistantData;
+(id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(NSNumber *)storefront;
-(id)groupIdentifier;
-(NSString *)firstName;
-(void)setRegion:(NSString *)arg1 ;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(NSString *)preferredLanguage;
-(NSString *)lastName;
-(NSString *)osVersion;
-(NSString *)region;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setStorefront:(NSNumber *)arg1 ;
-(NSString *)anchor;
-(NSString *)userInterfaceIdiom;
-(NSNumber *)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(SAMediaContentRatingRestrictions *)mediaContentRatingRestrictions;
-(SAWatchData *)watchData;
-(char)censorSpeech;
-(void)setCensorSpeech:(char)arg1 ;
-(char)handsFree;
-(void)setHandsFree:(char)arg1 ;
-(void)setUserInterfaceIdiom:(NSString *)arg1 ;
-(NSArray *)parentalRestrictions;
-(void)setParentalRestrictions:(NSArray *)arg1 ;
-(NSString *)temperatureUnit;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(SAVoice *)ttsVoice;
-(void)setTtsVoice:(SAVoice *)arg1 ;
-(NSNumber *)twentyFourHourTimeDisplay;
-(void)setTwentyFourHourTimeDisplay:(NSNumber *)arg1 ;
-(NSArray *)abSources;
-(void)setAbSources:(NSArray *)arg1 ;
-(NSNumber *)allowUserGeneratedContent;
-(void)setAllowUserGeneratedContent:(NSNumber *)arg1 ;
-(void)setAnchor:(NSString *)arg1 ;
-(NSNumber *)debugFlags;
-(void)setDebugFlags:(NSNumber *)arg1 ;
-(NSArray *)deviceCapabilities;
-(void)setDeviceCapabilities:(NSArray *)arg1 ;
-(void)setDeviceColor:(NSString *)arg1 ;
-(NSString *)deviceEnclosure;
-(void)setDeviceEnclosure:(NSString *)arg1 ;
-(NSString *)deviceVersion;
-(void)setDeviceVersion:(NSString *)arg1 ;
-(NSString *)fullStorefrontId;
-(void)setFullStorefrontId:(NSString *)arg1 ;
-(NSNumber *)holdToTalkThresholdInMilliseconds;
-(void)setHoldToTalkThresholdInMilliseconds:(NSNumber *)arg1 ;
-(char)inRetailStoreDemoMode;
-(void)setInRetailStoreDemoMode:(char)arg1 ;
-(NSArray *)meCards;
-(void)setMeCards:(NSArray *)arg1 ;
-(void)setMediaContentRatingRestrictions:(SAMediaContentRatingRestrictions *)arg1 ;
-(char)mediaPlayerExplicitContentDisallowed;
-(void)setMediaPlayerExplicitContentDisallowed:(char)arg1 ;
-(NSNumber *)uiScale;
-(void)setUiScale:(NSNumber *)arg1 ;
-(char)voiceOver;
-(void)setVoiceOver:(char)arg1 ;
-(void)setWatchData:(SAWatchData *)arg1 ;
@end

