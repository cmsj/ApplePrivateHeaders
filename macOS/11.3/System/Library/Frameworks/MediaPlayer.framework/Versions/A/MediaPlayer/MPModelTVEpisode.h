/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelFileAsset, MPModelPlaybackPosition, MPModelStoreAsset, MPModelTVSeason, MPModelTVShow, NSDate;

@interface MPModelTVEpisode : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (assign,nonatomic) double duration; 
@property (assign,getter=isMusicShow,nonatomic) char musicShow; 
@property (assign,nonatomic) long long episodeNumber; 
@property (nonatomic,retain) MPModelFileAsset * localFileAsset; 
@property (nonatomic,retain) MPModelPlaybackPosition * playbackPosition; 
@property (nonatomic,retain) MPModelStoreAsset * storeAsset; 
@property (nonatomic,retain) MPModelTVSeason * season; 
@property (nonatomic,retain) MPModelTVShow * show; 
@property (assign,nonatomic) long long explicitRating; 
@property (assign,nonatomic) char hasCloudSyncSource; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (assign,nonatomic) long long episodeType; 
@property (nonatomic,copy) NSString * episodeTypeDisplayName; 
@property (assign,getter=isLibraryAdded,nonatomic) char libraryAdded; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (assign,getter=isLibraryAddEligible,nonatomic) char libraryAddEligible; 
@property (assign,nonatomic) long long keepLocalEnableState; 
@property (assign,nonatomic) long long keepLocalManagedStatus; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy,readonly) NSDate * downloadedDate; 
@property (nonatomic,copy,readonly) NSDate * lastDevicePlaybackDate; 
+(id)kindWithVariants:(unsigned long long)arg1 ;
+(id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
+(id)__title_KEY;
+(id)__duration_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__localFileAsset_KEY;
+(id)__keepLocalEnableState_KEY;
+(id)__keepLocalManagedStatus_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__lastDevicePlaybackDate_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__hasCloudSyncSource_KEY;
+(id)__storeAsset_KEY;
+(id)__playbackPosition_KEY;
+(id)__downloadedDate_KEY;
+(id)__descriptionText_KEY;
+(id)__musicShow_KEY;
+(id)__episodeNumber_KEY;
+(id)__explicitRating_KEY;
+(id)__season_KEY;
+(id)__show_KEY;
+(id)__releaseDate_KEY;
+(id)__episodeType_KEY;
+(id)__episodeTypeDisplayName_KEY;
-(id)humanDescription;
-(id)artworkCatalog;
-(id)mediaItemPropertyValues;
@end

