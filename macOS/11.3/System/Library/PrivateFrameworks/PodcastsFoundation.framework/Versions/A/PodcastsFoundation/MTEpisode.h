/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSAttributedString, NSSet, MTPodcast, MTSyncInfo, NSData;

@interface MTEpisode : NSManagedObject

@property (nonatomic,retain) NSString * assetURL; 
@property (assign,nonatomic) char audio; 
@property (nonatomic,retain) NSString * author; 
@property (assign,nonatomic) long long byteSize; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * cleanedTitle; 
@property (assign,nonatomic) double downloadDate; 
@property (nonatomic,retain) NSString * downloadPath; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) NSString * enclosureURL; 
@property (assign,nonatomic) long long episodeLevel; 
@property (assign,nonatomic) char explicit; 
@property (assign,nonatomic) char externalType; 
@property (assign,nonatomic) char feedDeleted; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) char isFromITunesSync; 
@property (nonatomic,retain) NSString * guid; 
@property (assign,nonatomic) int importSource; 
@property (assign,nonatomic) double importDate; 
@property (assign,nonatomic) char isNew; 
@property (nonatomic,retain) NSString * itemDescription; 
@property (assign,nonatomic) char itemDescriptionHasHTML; 
@property (nonatomic,retain) NSAttributedString * itemDescriptionWithHTML; 
@property (nonatomic,retain) NSString * itemDescriptionWithoutHTML; 
@property (assign,nonatomic) double lastDatePlayed; 
@property (assign,nonatomic) double lastUserMarkedAsPlayedDate; 
@property (nonatomic,retain) NSString * metadataIdentifier; 
@property (assign,nonatomic) double metadataTimestamp; 
@property (assign,nonatomic) char metadataFirstSyncEligible; 
@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) float playhead; 
@property (assign,nonatomic) char backCatalog; 
@property (nonatomic,readonly) long long playState; 
@property (nonatomic,readonly) long long playStateSource; 
@property (nonatomic,readonly) char playStateManuallySet; 
@property (assign,nonatomic) double playStateLastModifiedDate; 
@property (nonatomic,retain) NSString * podcastUuid; 
@property (assign,nonatomic) double pubDate; 
@property (assign,nonatomic) char sentNotification; 
@property (assign,nonatomic) long long storeTrackId; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long trackNum; 
@property (assign,nonatomic) char unplayedTab; 
@property (nonatomic,retain) NSString * uti; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) char video; 
@property (nonatomic,retain) NSSet * playlists; 
@property (nonatomic,retain) MTPodcast * podcast; 
@property (nonatomic,retain) NSSet * settings; 
@property (nonatomic,retain) MTSyncInfo * syncInfo; 
@property (assign,nonatomic) char userEpisode; 
@property (assign,nonatomic) char listenNowEpisode; 
@property (nonatomic,retain) NSString * itunesTitle; 
@property (nonatomic,retain) NSString * itunesSubtitle; 
@property (assign,nonatomic) long long seasonNumber; 
@property (assign,nonatomic) long long episodeNumber; 
@property (nonatomic,retain) NSString * episodeType; 
@property (nonatomic,retain) NSString * webpageURL; 
@property (nonatomic,retain) NSData * securityScopedAssetData; 
@property (nonatomic,retain) NSString * contentType; 
@property (assign,nonatomic) char visible; 
@property (assign,nonatomic) char userDeleted; 
@property (assign,nonatomic) char manuallyAdded; 
@property (assign,nonatomic) char hasBeenPlayed; 
@property (assign,nonatomic) char saved; 
@property (assign,nonatomic) char suppressAutoDownload; 
@property (assign,nonatomic) char isBookmarked; 
@property (assign,nonatomic) double lastBookmarkedDate; 
@property (assign,nonatomic) char isBookmarksMigrationRecoveredEpisode; 
@property (assign,nonatomic) long long downloadBehavior; 
+(id)sortDescriptorsForLastDatePlayedAscending:(char)arg1 ;
+(id)sortDescriptorsForPubDateAscending:(char)arg1 ;
+(id)sortDescriptorsForLastBookmarkedDateAscending:(char)arg1 ;
+(id)sortDescriptorsForDownloadedDateAscending:(char)arg1 ;
+(id)sortDescriptorsForRecentlyPlayed;
+(id)sortDescriptorsForTitle;
+(id)sortDescriptorsForListenNow;
+(id)sortDescriptorsForListenNowLatestEpisodes;
+(id)sortDescriptorsForSeasonsWithOldestEpisodesFirst:(char)arg1 ;
+(id)predicateForEpisodesOnUnplayedTab;
+(id)predicateForIsCurrentlySyncable:(char)arg1 ;
+(id)propertiesToFetchIsBackCatalogItem;
+(id)propertiesToFetchIsPlayed;
+(id)propertiesToFetchIsPlayheadPartiallyPlayed;
+(double)endOfTrackForDuration:(double)arg1 ;
+(char)isPlayhead:(double)arg1 resumableForDuration:(double)arg2 ;
+(id)propertyPathForPodcastProperty:(id)arg1 ;
+(id)propertiesToFetchBestTitle;
+(id)propertiesToFetchIsPartiallyPlayed;
+(id)propertiesToFetchIsVisuallyPlayed;
+(id)propertiesToFetchIsPartiallyPlayedBackCatalogItem;
+(id)propertiesToFetchPlaybackProgress;
+(id)propertiesToFetchTimeRemaining;
+(id)propertiesToFetchAssetURL;
+(id)propertiesToFetchIsExplicit;
+(id)relationshipKeyPathsForPrefetchingIsExplicit;
+(id)userDefaultPropertiesAffectingPredicates;
+(id)predicateForLimittedEpisodesOnPodcastUuid:(id)arg1 determinedByLimit:(long long)arg2 deletePlayedEpisodes:(char)arg3 ;
+(id)predicateForEpisodesDeterminedByLimitSettings:(long long)arg1 ;
+(id)predicateForPlayed:(char)arg1 ;
+(id)predicateForPlayStateManuallySet:(char)arg1 ;
+(id)predicateForAllEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForAudio:(char)arg1 ;
+(id)predicateForBacklog:(char)arg1 ;
+(id)predicateForIsBackCatalogItem;
+(id)predicateForHasBeenPlayed;
+(id)predicateForPodcastIsHidden:(char)arg1 ;
+(id)predicateForPreviouslyPlayed;
+(id)predicateForHidingFuturePlayedTimestamps;
+(id)predicateForUnplayedTabFlag:(char)arg1 ;
+(id)predicateForUserEpisode:(char)arg1 ;
+(id)predicateForBookmarkedEpisodes;
+(id)predicateForDownloaded:(char)arg1 ;
+(id)predicateForPodcastIsSubscribed:(char)arg1 ;
+(id)predicateForAllBookmarkedEpisodes;
+(id)predicateForAllUnbookmarkedEpisodes;
+(id)predicateForAllBookmarksMigrationRecoveredEpisodes;
+(id)predicateForBookmarksMigrationRecoveredEpisodes;
+(id)predicateForUnbookmarkedEpisodes;
+(id)predicateForBookmarksMigrationRecoveredEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForFeedDeleted:(char)arg1 ;
+(id)predicateForEpisodesPublishedThisWeek;
+(id)predicateForEpisodesPublishedLastTwoWeeks;
+(id)predicateForEpisodesPublishedThisMonth;
+(id)predicateForEpisodeType:(long long)arg1 ;
+(id)predicateForIsFromiTunesSync:(char)arg1 ;
+(id)predicateForRecentlyPlayed;
+(id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(char)arg2 ;
+(id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(char)arg3 ;
+(id)predicateForOtherEpisodesOnPodcastUuid:(id)arg1 baseEpisodesPredicate:(id)arg2 deletePlayedEpisodes:(char)arg3 ;
+(id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(char)arg3 ;
+(id)predicateForEpisodesOnSavedTabForPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodesPublishedOnDate:(id)arg1 ;
+(id)predicateForEpisodesPublishedAfterOffset:(id)arg1 fromDate:(id)arg2 ;
+(id)predicateForEpisodesPublishedThisWeekWithTodayDate:(id)arg1 ;
+(id)predicateForEpisodesPublishedLastTwoWeeksWithTodayDate:(id)arg1 ;
+(id)predicateForEpisodesPublishedThisMonthWithTodayDate:(id)arg1 ;
+(id)predicateForIsNew:(char)arg1 ;
+(id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(char)arg2 ;
+(id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)predicateForEpisodeStoreTrackId:(long long)arg1 ;
+(id)predicateForHasSeasonNumber;
+(id)predicateForIsTopLevel;
+(id)_predicateForContentType:(long long)arg1 excluding:(char)arg2 ;
+(id)predicateForEpisodesOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(char)arg2 ;
+(id)predicateForBookmarkedEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForDownloadedEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForAllEpisodesOnPodcastUuid:(id)arg1 includeNonAudioEpisodes:(char)arg2 ;
+(id)predicateForDownloadBehavior:(long long)arg1 ;
+(id)predicateForSaved:(char)arg1 ;
+(id)predicateForSuppressAutoDownload:(char)arg1 ;
+(id)predicateForSentNotification:(char)arg1 ;
+(id)predicateForExplicit:(char)arg1 ;
+(id)predicateForVisuallyPlayed:(char)arg1 ;
+(id)predicateForPreviouslyPlayedHidingFutureTimestamps;
+(id)predicateForUserEpisodes;
+(id)predicateForEpisodesInSearchResults;
+(id)predicateForBookmarksMigrationRecoveredNotBookmarkedEpisodes;
+(id)predicateForBookmarksMigrationRecoveredNotBookmarkedEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForBookmarksMigrationRecoveredAndBookmarkedEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForListenNow;
+(id)predicateForListenNowForPodcastUuid:(id)arg1 ;
+(id)predicateForListenNowLatestEpisodes;
+(id)predicateForPubDateLimit:(long long)arg1 ;
+(id)predicateForHLSDownloaded;
+(id)predicateForVideo:(char)arg1 ;
+(id)predicateForMetadataFirstSyncEligible:(char)arg1 ;
+(id)predicateForExternalType:(char)arg1 ;
+(id)predicateForEpisodeUuid:(id)arg1 ;
+(id)predicateForEpisodeUuids:(id)arg1 ;
+(id)predicateForEpisodeGuid:(id)arg1 ;
+(id)predicateForEpisodeGuids:(id)arg1 ;
+(id)predicateForFeedURL:(id)arg1 ;
+(id)predicateForFeedURLs:(id)arg1 ;
+(id)predicateForPersistentId:(id)arg1 ;
+(id)predicateForPersistentIds:(id)arg1 ;
+(id)predicateForHasValidPersistentId:(char)arg1 ;
+(id)predicateForEpisodeTitle:(id)arg1 ;
+(id)predicateForEpisodesImportedAfterDate:(id)arg1 ;
+(id)predicateForEpisodeTypeFilter:(long long)arg1 ;
+(id)predicateForRecentlyPlayedEpisodesToBeDeletedOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(char)arg2 ;
+(id)predicateForEpisodesIsFromiTunesSyncOnPodcastUuid:(id)arg1 ;
+(id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(char)arg2 ;
+(id)predicateForEpisodesInFeedForPodcastUuid:(id)arg1 ;
+(id)predicateForPlaylistEpisodes;
+(id)predicateForEpisodesPublishedToday;
+(id)predicateForEpisodesPublishedAfterDate:(id)arg1 ;
+(id)predicateForEpisodesPublishedBeforeDate:(id)arg1 ;
+(id)predicateForNewEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodesInStationShow:(id)arg1 ;
+(id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)predicateForStoreIdentifier:(id)arg1 ;
+(id)predicateForEpisodeStoreTrackIds:(id)arg1 ;
+(id)predicateForEpisodeGuid:(id)arg1 onFeedURL:(id)arg2 ;
+(id)predicateForEpisodeGuid:(id)arg1 onPodcastUuid:(id)arg2 ;
+(id)predicateForEpisodeTitle:(id)arg1 onPodcastUuid:(id)arg2 ;
+(id)predicateForSeasonNumber:(long long)arg1 ;
+(id)predicateForEpisodesWithSeasonNumbersOnPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodesWithEpisodeNumbersGreaterThan:(long long)arg1 ;
+(id)predicateForBookmarkedEpisodesExcludingUUIDs:(id)arg1 ;
+(id)predicateForUserSetTopLevelEpisodes;
+(id)predicateForNotContentType:(long long)arg1 ;
+(id)predicateForContentType:(long long)arg1 ;
-(void)setWebpageURL:(NSString *)arg1 ;
-(char)isShareable;
-(void)setDuration:(double)arg1 ;
-(char)isExplicit;
-(char)isDownloaded;
-(NSString *)assetURL;
-(void)setAssetURL:(NSString *)arg1 ;
-(void)setIsNew:(char)arg1 ;
-(void)setExplicit:(char)arg1 ;
-(void)setEpisodeNumber:(long long)arg1 ;
-(void)setSeasonNumber:(long long)arg1 ;
-(double)timeRemaining;
-(id)playURL;
-(char)isVideo;
-(id)displayURL;
-(double)playbackProgress;
-(void)setEpisodeType:(NSString *)arg1 ;
-(char)isPlayed;
-(void)setByteSize:(long long)arg1 ;
-(void)setPubDate:(double)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(char)isAudio;
-(void)setImportDate:(double)arg1 ;
-(long long)mt_syncID;
-(id)bestTitle;
-(char)isBackCatalogItem;
-(char)isPlayheadPartiallyPlayed;
-(void)_setAssetUrl:(id)arg1 ;
-(long long)episodeTypeResolvedValue;
-(char)isExternalType;
-(void)setFeedDeleted:(char)arg1 ;
-(void)setCleanedTitle:(NSString *)arg1 ;
-(void)setEnclosureURL:(NSString *)arg1 ;
-(void)setPodcastUuid:(NSString *)arg1 ;
-(void)setEpisodeLevel:(long long)arg1 ;
-(void)setItunesTitle:(NSString *)arg1 ;
-(void)setTrackNum:(long long)arg1 ;
-(id)numberedTitle;
-(id)bestSummary;
-(char)isPartiallyPlayed;
-(char)isUnplayed;
-(char)isVisuallyPlayed;
-(char)isPartiallyPlayedBackCatalogItem;
-(double)playbackProgressSanitized;
-(double)endOfTrack;
-(char)isPlayheadResumable;
-(id)bestUrl;
-(char)isBonus;
-(char)isTrailer;
-(char)isMedia;
-(char)isTopLevel;
-(void)setIsTopLevel:(char)arg1 ;
-(void)markAsBookmarkedOnTimestamp:(double)arg1 ;
-(void)markAsBookmarked;
-(void)markAsUnbookmarked;
@end

