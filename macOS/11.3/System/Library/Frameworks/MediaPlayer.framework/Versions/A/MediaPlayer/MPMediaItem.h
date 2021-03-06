/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaEntity.h>

@class NSArray, NSDate, NSString, MPMediaItemArtwork, NSURL;

@interface MPMediaItem : MPMediaEntity

@property (nonatomic,readonly) NSArray * chapters; 
@property (nonatomic,copy) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) char isRental; 
@property (nonatomic,readonly) char isITunesU; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double stopTime; 
@property (nonatomic,readonly) unsigned long long year; 
@property (assign,nonatomic) unsigned long long skipCountSinceSync; 
@property (assign,nonatomic) unsigned long long playCountSinceSync; 
@property (nonatomic,copy) NSDate * lastSkippedDate; 
@property (nonatomic,copy) NSDate * dateAccessed; 
@property (assign,nonatomic) char hasBeenPlayed; 
@property (nonatomic,readonly) char rememberBookmarkTime; 
@property (nonatomic,readonly) NSDate * dateDownloaded; 
@property (nonatomic,readonly) double effectiveStopTime; 
@property (nonatomic,readonly) NSString * effectiveAlbumArtist; 
@property (nonatomic,readonly) char isUsableAsRepresentativeItem; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * albumTitle; 
@property (nonatomic,readonly) unsigned long long albumPersistentID; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) unsigned long long artistPersistentID; 
@property (nonatomic,readonly) NSString * albumArtist; 
@property (nonatomic,readonly) unsigned long long albumArtistPersistentID; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) unsigned long long genrePersistentID; 
@property (nonatomic,readonly) NSString * composer; 
@property (nonatomic,readonly) unsigned long long composerPersistentID; 
@property (nonatomic,readonly) double playbackDuration; 
@property (nonatomic,readonly) unsigned long long albumTrackNumber; 
@property (nonatomic,readonly) unsigned long long albumTrackCount; 
@property (nonatomic,readonly) unsigned long long discNumber; 
@property (nonatomic,readonly) unsigned long long discCount; 
@property (nonatomic,readonly) MPMediaItemArtwork * artwork; 
@property (getter=isExplicitItem,nonatomic,readonly) char explicitItem; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (getter=isCompilation,nonatomic,readonly) char compilation; 
@property (nonatomic,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) unsigned long long beatsPerMinute; 
@property (nonatomic,readonly) NSString * comments; 
@property (nonatomic,readonly) NSURL * assetURL; 
@property (getter=isCloudItem,nonatomic,readonly) char cloudItem; 
@property (getter=hasProtectedAsset,nonatomic,readonly) char protectedAsset; 
@property (nonatomic,readonly) NSString * podcastTitle; 
@property (nonatomic,readonly) unsigned long long podcastPersistentID; 
@property (nonatomic,readonly) unsigned long long playCount; 
@property (nonatomic,readonly) unsigned long long skipCount; 
@property (nonatomic,readonly) unsigned long long rating; 
@property (nonatomic,readonly) NSString * userGrouping; 
@property (nonatomic,readonly) double bookmarkTime; 
@property (nonatomic,readonly) NSDate * dateAdded; 
@property (nonatomic,readonly) NSString * playbackStoreID; 
@property (getter=isPreorder,nonatomic,readonly) char preorder; 
+(char)supportsSecureCoding;
+(id)dynamicProperties;
+(id)artworkCatalogCacheProperties;
+(id)screenshotArtworkCatalogCacheProperties;
+(char)canFilterByProperty:(id)arg1 ;
+(void)_createFilterableDictionary;
+(char)_isValidItemProperty:(id)arg1 ;
+(id)itemFromModelObject:(id)arg1 ;
+(id)itemFromSong:(id)arg1 ;
+(id)persistentIDPropertyForGroupingType:(long long)arg1 ;
+(id)ULIDPropertyForGroupingType:(long long)arg1 ;
+(id)titlePropertyForGroupingType:(long long)arg1 ;
+(id)fallbackTitlePropertyForGroupingType:(long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)year;
-(NSString *)genre;
-(double)startTime;
-(NSString *)title;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)artist;
-(unsigned long long)mediaType;
-(NSURL *)assetURL;
-(NSString *)composer;
-(void)setRating:(unsigned long long)arg1 ;
-(unsigned long long)rating;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)playCount;
-(unsigned long long)albumPersistentID;
-(NSString *)comments;
-(MPMediaItemArtwork *)artwork;
-(NSDate *)dateAdded;
-(double)stopTime;
-(char)isCloudItem;
-(NSString *)lyrics;
-(NSDate *)releaseDate;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSString *)albumArtist;
-(char)isExplicitItem;
-(unsigned long long)discNumber;
-(void)didReceiveMemoryWarning;
-(void)incrementPlayCount;
-(NSString *)albumTitle;
-(unsigned long long)discCount;
-(char)isCompilation;
-(char)isPreorder;
-(unsigned long long)skipCount;
-(unsigned long long)beatsPerMinute;
-(id)artworkCatalog;
-(id)_artworkCatalogWithArtworkType:(long long)arg1 ;
-(id)screenshotArtworkCatalog;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(char)existsInLibrary;
-(id)representativeItem;
-(id)multiverseIdentifier;
-(id)valuesForProperties:(id)arg1 ;
-(char)didSkipWithPlayedToTime:(double)arg1 ;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(char)arg2 ;
-(void)incrementSkipCount;
-(void)incrementPlayCountForPlayingToEnd;
-(char)incrementPlayCountForStopTime:(double)arg1 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(id)_bestStoreURL;
-(void)populateLocationPropertiesWithPath:(id)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 ;
-(void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)clearLocationProperties;
-(NSArray *)chapters;
-(NSString *)effectiveAlbumArtist;
-(unsigned long long)albumArtistPersistentID;
-(unsigned long long)albumTrackCount;
-(unsigned long long)artistPersistentID;
-(double)bookmarkTime;
-(unsigned long long)composerPersistentID;
-(unsigned long long)genrePersistentID;
-(char)isRental;
-(char)isITunesU;
-(char)hasProtectedAsset;
-(double)playbackDuration;
-(double)effectiveStopTime;
-(NSString *)podcastTitle;
-(unsigned long long)podcastPersistentID;
-(id)predicateForProperty:(id)arg1 ;
-(unsigned long long)playCountSinceSync;
-(void)setPlayCountSinceSync:(unsigned long long)arg1 ;
-(NSDate *)dateAccessed;
-(void)setDateAccessed:(NSDate *)arg1 ;
-(void)setSkipCount:(unsigned long long)arg1 ;
-(unsigned long long)skipCountSinceSync;
-(void)setSkipCountSinceSync:(unsigned long long)arg1 ;
-(NSDate *)lastSkippedDate;
-(void)setLastSkippedDate:(NSDate *)arg1 ;
-(char)hasBeenPlayed;
-(void)setHasBeenPlayed:(char)arg1 ;
-(NSString *)playbackStoreID;
-(char)rememberBookmarkTime;
-(unsigned long long)albumTrackNumber;
-(NSString *)userGrouping;
-(id)chaptersOfType:(long long)arg1 ;
-(id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)chapterOfType:(long long)arg1 atTime:(double)arg2 ;
-(unsigned long long)countOfChaptersOfType:(long long)arg1 ;
-(void)gaplessHeuristicInfo:(unsigned*)arg1 durationInSamples:(unsigned long long*)arg2 lastPacketsResync:(unsigned long long*)arg3 encodingDelay:(unsigned*)arg4 encodingDrain:(unsigned*)arg5 ;
-(char)isUsableAsRepresentativeItem;
-(NSDate *)dateDownloaded;
-(id)_directStoreURL;
-(id)_libraryLinkArtist;
-(id)_libraryLinkKind;
-(id)_libraryLinkPlaylistName;
-(id)_libraryLinkURL;
@end

