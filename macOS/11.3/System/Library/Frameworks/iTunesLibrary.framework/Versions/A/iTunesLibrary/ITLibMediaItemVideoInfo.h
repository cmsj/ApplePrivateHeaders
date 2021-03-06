/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/iTunesLibrary.framework/Versions/A/iTunesLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ITLibMediaItemVideoInfo : NSObject {

	NSString* _series;
	NSString* _sortSeries;
	unsigned long long _season;
	NSString* _episode;
	long long _episodeOrder;
	char _hd;
	unsigned long long _videoWidth;
	unsigned long long _videoHeight;

}

@property (nonatomic,copy) NSString * series;                             //@synthesize series=_series - In the implementation block
@property (nonatomic,copy) NSString * sortSeries;                         //@synthesize sortSeries=_sortSeries - In the implementation block
@property (assign,nonatomic) unsigned long long season;                   //@synthesize season=_season - In the implementation block
@property (nonatomic,copy) NSString * episode;                            //@synthesize episode=_episode - In the implementation block
@property (assign,nonatomic) long long episodeOrder;                      //@synthesize episodeOrder=_episodeOrder - In the implementation block
@property (assign,getter=isHD,nonatomic) char hd;                         //@synthesize hd=_hd - In the implementation block
@property (assign,nonatomic) unsigned long long videoWidth;               //@synthesize videoWidth=_videoWidth - In the implementation block
@property (assign,nonatomic) unsigned long long videoHeight;              //@synthesize videoHeight=_videoHeight - In the implementation block
-(NSString *)episode;
-(unsigned long long)season;
-(void)setSeason:(unsigned long long)arg1 ;
-(void)setSeries:(NSString *)arg1 ;
-(NSString *)series;
-(unsigned long long)videoWidth;
-(unsigned long long)videoHeight;
-(void)setVideoWidth:(unsigned long long)arg1 ;
-(void)setVideoHeight:(unsigned long long)arg1 ;
-(NSString *)sortSeries;
-(void)setSortSeries:(NSString *)arg1 ;
-(void)setEpisode:(NSString *)arg1 ;
-(long long)episodeOrder;
-(void)setEpisodeOrder:(long long)arg1 ;
-(char)isHD;
-(void)setHd:(char)arg1 ;
@end

