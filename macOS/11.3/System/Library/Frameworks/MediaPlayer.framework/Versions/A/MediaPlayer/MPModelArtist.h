/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelPerson.h>

@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson

@property (assign,nonatomic) char hasBiography; 
@property (assign,nonatomic) long long songCount; 
@property (assign,nonatomic) long long albumCount; 
@property (nonatomic,copy) MPModelGenre * genre; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
+(id)__genre_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__libraryAddedDate_KEY;
+(id)kindWithAlbumKind:(id)arg1 ;
+(id)__hasBiography_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__songCount_KEY;
+(id)__albumCount_KEY;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;
@end

