/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibraryArtworkRequest, MPMediaLibraryArtworkDataSource;

@interface MPMediaChapter : NSObject {

	long long _chapterType;
	unsigned long long _indexInChaptersWithAnyType;
	unsigned long long _indexInChaptersWithSameType;
	double _playbackDuration;
	double _playbackTime;
	id _value;
	/*^block*/id _valueLoader;
	MPMediaLibraryArtworkRequest* _artworkRequest;
	MPMediaLibraryArtworkDataSource* _artworkDataSource;

}

@property (nonatomic,retain) id value;                                                                //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) id valueLoader;                                                            //@synthesize valueLoader=_valueLoader - In the implementation block
@property (assign,nonatomic) long long chapterType;                                                   //@synthesize chapterType=_chapterType - In the implementation block
@property (assign,nonatomic) double playbackTime;                                                     //@synthesize playbackTime=_playbackTime - In the implementation block
@property (assign,nonatomic) double playbackDuration;                                                 //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (assign,nonatomic) unsigned long long indexInChaptersWithSameType;                          //@synthesize indexInChaptersWithSameType=_indexInChaptersWithSameType - In the implementation block
@property (assign,nonatomic) unsigned long long indexInChaptersWithAnyType;                           //@synthesize indexInChaptersWithAnyType=_indexInChaptersWithAnyType - In the implementation block
@property (nonatomic,retain) MPMediaLibraryArtworkRequest * artworkRequest;                           //@synthesize artworkRequest=_artworkRequest - In the implementation block
@property (assign,nonatomic,__weak) MPMediaLibraryArtworkDataSource * artworkDataSource;              //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)duration;
-(id)title;
-(MPMediaLibraryArtworkDataSource *)artworkDataSource;
-(long long)chapterType;
-(id)artworkCatalog;
-(double)playbackDuration;
-(unsigned long long)indexInChaptersWithAnyType;
-(void)setIndexInChaptersWithAnyType:(unsigned long long)arg1 ;
-(unsigned long long)indexInChaptersWithSameType;
-(void)setIndexInChaptersWithSameType:(unsigned long long)arg1 ;
-(void)setChapterType:(long long)arg1 ;
-(void)setPlaybackDuration:(double)arg1 ;
-(double)playbackTime;
-(void)setPlaybackTime:(double)arg1 ;
-(id)valueLoader;
-(void)setValueLoader:(id)arg1 ;
-(MPMediaLibraryArtworkRequest *)artworkRequest;
-(void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg1 ;
-(void)setArtworkDataSource:(MPMediaLibraryArtworkDataSource *)arg1 ;
@end

