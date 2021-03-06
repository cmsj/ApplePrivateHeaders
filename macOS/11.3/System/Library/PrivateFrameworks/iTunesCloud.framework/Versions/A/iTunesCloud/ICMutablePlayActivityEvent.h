/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICPlayActivityEvent.h>

@class NSArray, NSString, ICPlayActivityEventContainerIDs, ICPlayActivityEnqueuerProperties, NSDate, NSTimeZone, ICPlayActivityEventItemIDs, NSNumber, NSData, ICPlayActivityAudioQualityProperties;

@interface ICMutablePlayActivityEvent : ICPlayActivityEvent

@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) long long version; 
@property (assign,nonatomic) unsigned long long autoPlayMode; 
@property (nonatomic,copy) NSArray * buildFeatures; 
@property (nonatomic,copy) NSString * buildVersion; 
@property (nonatomic,copy) ICPlayActivityEventContainerIDs * containerIDs; 
@property (assign,nonatomic) unsigned long long containerType; 
@property (nonatomic,copy) NSString * deviceName; 
@property (assign,nonatomic) unsigned long long endReasonType; 
@property (nonatomic,copy) ICPlayActivityEnqueuerProperties * enqueuerProperties; 
@property (nonatomic,copy) NSDate * eventDate; 
@property (nonatomic,copy) NSTimeZone * eventTimeZone; 
@property (assign,nonatomic) unsigned long long eventType; 
@property (nonatomic,copy) NSString * featureName; 
@property (nonatomic,copy) NSString * householdID; 
@property (nonatomic,copy) ICPlayActivityEventItemIDs * itemIDs; 
@property (assign,nonatomic) double itemDuration; 
@property (assign,nonatomic) double itemEndTime; 
@property (assign,nonatomic) double itemStartTime; 
@property (assign,nonatomic) unsigned long long itemType; 
@property (assign,nonatomic) unsigned long long mediaType; 
@property (assign,getter=isOffline,nonatomic) char offline; 
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled; 
@property (assign,nonatomic) unsigned long long reasonHintType; 
@property (nonatomic,copy) NSData * recommendationData; 
@property (assign,nonatomic) unsigned long long repeatPlayMode; 
@property (nonatomic,copy) NSString * requestingBundleIdentifier; 
@property (nonatomic,copy) NSString * requestingBundleVersion; 
@property (assign,getter=isSBEnabled,nonatomic) char SBEnabled; 
@property (assign,nonatomic) unsigned long long shufflePlayMode; 
@property (getter=isSiriInitiated,nonatomic,copy) NSNumber * siriInitiated; 
@property (assign,nonatomic) unsigned long long sourceType; 
@property (assign,nonatomic) unsigned long long storeAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
@property (assign,nonatomic) long long systemReleaseType; 
@property (nonatomic,copy) NSData * timedMetadata; 
@property (nonatomic,copy) NSData * trackInfo; 
@property (assign,nonatomic) unsigned long long displayType; 
@property (assign,nonatomic) unsigned long long lyricsDisplayedCharacterCount; 
@property (nonatomic,copy) NSString * lyricsLanguage; 
@property (assign,nonatomic) unsigned long long audioQualityPreference; 
@property (assign,nonatomic) unsigned long long playbackFormatPreference; 
@property (nonatomic,copy) ICPlayActivityAudioQualityProperties * targetedAudioQuality; 
@property (nonatomic,copy) ICPlayActivityAudioQualityProperties * providedAudioQuality; 
@property (nonatomic,copy) NSString * containerID; 
@property (nonatomic,copy) NSString * externalID; 
@property (assign,getter=isInternalBuild,nonatomic) char internalBuild; 
@property (nonatomic,copy) NSString * personalizedContainerID; 
@property (nonatomic,copy) NSString * storeID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setContainerIDs:(ICPlayActivityEventContainerIDs *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)setEventDate:(NSDate *)arg1 ;
-(void)setMediaType:(unsigned long long)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setOffline:(char)arg1 ;
-(void)setSourceType:(unsigned long long)arg1 ;
-(void)setItemType:(unsigned long long)arg1 ;
-(void)setEventTimeZone:(NSTimeZone *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(void)setRepeatPlayMode:(unsigned long long)arg1 ;
-(void)setShufflePlayMode:(unsigned long long)arg1 ;
-(void)setAutoPlayMode:(unsigned long long)arg1 ;
-(Class)_mutableCopyClass;
-(void)setBuildFeatures:(NSArray *)arg1 ;
-(void)setContainerType:(unsigned long long)arg1 ;
-(void)setEndReasonType:(unsigned long long)arg1 ;
-(void)setEnqueuerProperties:(ICPlayActivityEnqueuerProperties *)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setHouseholdID:(NSString *)arg1 ;
-(void)setInternalBuild:(char)arg1 ;
-(void)setItemIDs:(ICPlayActivityEventItemIDs *)arg1 ;
-(void)setItemDuration:(double)arg1 ;
-(void)setItemEndTime:(double)arg1 ;
-(void)setItemStartTime:(double)arg1 ;
-(void)setLyricsDisplayedCharacterCount:(unsigned long long)arg1 ;
-(void)setLyricsLanguage:(NSString *)arg1 ;
-(void)setPersonalizedContainerID:(NSString *)arg1 ;
-(void)setReasonHintType:(unsigned long long)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setSBEnabled:(char)arg1 ;
-(void)setSiriInitiated:(NSNumber *)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setSystemReleaseType:(long long)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setAudioQualityPreference:(unsigned long long)arg1 ;
-(void)setPlaybackFormatPreference:(unsigned long long)arg1 ;
-(void)setTargetedAudioQuality:(ICPlayActivityAudioQualityProperties *)arg1 ;
-(void)setProvidedAudioQuality:(ICPlayActivityAudioQualityProperties *)arg1 ;
@end

