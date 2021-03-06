/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class MPModelPlaylist, MPModelSong, MPModelTVEpisode, MPModelMovie, MPModelSocialPerson, MPArtworkCatalog;

@interface MPModelPlaylistEntry : MPModelObject

@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (assign,nonatomic) long long position; 
@property (nonatomic,retain) MPModelSong * song; 
@property (nonatomic,retain) MPModelTVEpisode * tvEpisode; 
@property (nonatomic,retain) MPModelMovie * movie; 
@property (nonatomic,retain) MPModelSocialPerson * socialContributor; 
@property (nonatomic,retain) MPArtworkCatalog * _artworkCatalog; 
+(id)__playlist_KEY;
+(id)__song_KEY;
+(id)__tvEpisode_KEY;
+(id)__movie_KEY;
+(id)kindWithKinds:(id)arg1 ;
+(id)__position_KEY;
+(id)__socialContributor_KEY;
+(id)___artworkCatalog_KEY;
-(long long)type;
-(id)anyObject;
-(id)humanDescription;
-(id)mediaItemPropertyValues;
@end

