/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INPlayMediaIntentExport.h>

@class NSArray, INMediaItem, NSNumber, NSDate, NSString, INMediaSearch, INPrivatePlayMediaIntentData;

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>

@property (copy,readonly) NSArray * mediaItems; 
@property (copy,readonly) INMediaItem * mediaContainer; 
@property (copy,readonly) NSNumber * playShuffled; 
@property (readonly) long long playbackRepeatMode; 
@property (copy,readonly) NSNumber * resumePlayback; 
@property (readonly) long long playbackQueueLocation; 
@property (copy,readonly) NSNumber * playbackSpeed; 
@property (copy,readonly) INMediaSearch * mediaSearch; 
@property (copy) NSDate * expirationDate; 
@property (copy) NSArray * buckets; 
@property (copy) NSString * recoID; 
@property (copy) NSArray * hashedRouteUIDs; 
@property (copy) NSArray * audioSearchResults; 
@property (copy) NSArray * alternativeResults; 
@property (assign) long long parsecCategory; 
@property (copy) NSString * proxiedBundleIdentifier; 
@property (copy) INPrivatePlayMediaIntentData * privatePlayMediaIntentData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(id)domain;
-(id)_metadata;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSArray *)buckets;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)_spotlightContentType;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(SCD_Struct_IN4)_intents_preferredScaledImageSize;
-(id)_keyCodableAttributes;
-(NSArray *)alternativeResults;
-(void)setAlternativeResults:(NSArray *)arg1 ;
-(NSArray *)audioSearchResults;
-(void)setAudioSearchResults:(NSArray *)arg1 ;
-(void)setBuckets:(NSArray *)arg1 ;
-(INMediaItem *)mediaContainer;
-(void)setMediaContainer:(INMediaItem *)arg1 ;
-(INMediaSearch *)mediaSearch;
-(void)setMediaSearch:(INMediaSearch *)arg1 ;
-(long long)parsecCategory;
-(void)setParsecCategory:(long long)arg1 ;
-(NSNumber *)playShuffled;
-(void)setPlayShuffled:(NSNumber *)arg1 ;
-(long long)playbackQueueLocation;
-(void)setPlaybackQueueLocation:(long long)arg1 ;
-(long long)playbackRepeatMode;
-(void)setPlaybackRepeatMode:(long long)arg1 ;
-(NSNumber *)playbackSpeed;
-(void)setPlaybackSpeed:(NSNumber *)arg1 ;
-(INPrivatePlayMediaIntentData *)privatePlayMediaIntentData;
-(void)setPrivatePlayMediaIntentData:(INPrivatePlayMediaIntentData *)arg1 ;
-(NSString *)proxiedBundleIdentifier;
-(void)setProxiedBundleIdentifier:(NSString *)arg1 ;
-(NSString *)recoID;
-(void)setRecoID:(NSString *)arg1 ;
-(NSNumber *)resumePlayback;
-(void)setResumePlayback:(NSNumber *)arg1 ;
-(id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 playbackQueueLocation:(long long)arg6 playbackSpeed:(id)arg7 mediaSearch:(id)arg8 ;
-(char)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
@end

