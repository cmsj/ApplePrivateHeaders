/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString, NSData;

@interface MIPMovie : PBCodable <NSCopying> {

	long long _rentalDuration;
	long long _rentalPlaybackDuration;
	long long _rentalPlaybackStartedDateTime;
	long long _rentalStartedDateTime;
	MIPArtist* _artist;
	int _audioLanguage;
	int _audioTrackId;
	int _audioTrackIndex;
	NSString* _extendedContentName;
	NSData* _flattenedChapterData;
	NSString* _movieInfo;
	int _subtitleLanguage;
	int _subtitleTrackIndex;
	int _videoQuality;
	char _hasAlternateAudio;
	char _hasChapterData;
	char _hasSubtitles;
	char _rental;
	SCD_Struct_MI12 _has;

}

@property (nonatomic,readonly) char hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                                   //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) char hasVideoQuality; 
@property (assign,nonatomic) int videoQuality;                                     //@synthesize videoQuality=_videoQuality - In the implementation block
@property (assign,nonatomic) char hasRental; 
@property (assign,nonatomic) char rental;                                          //@synthesize rental=_rental - In the implementation block
@property (assign,nonatomic) char hasHasChapterData; 
@property (assign,nonatomic) char hasChapterData;                                  //@synthesize hasChapterData=_hasChapterData - In the implementation block
@property (nonatomic,readonly) char hasExtendedContentName; 
@property (nonatomic,retain) NSString * extendedContentName;                       //@synthesize extendedContentName=_extendedContentName - In the implementation block
@property (nonatomic,readonly) char hasMovieInfo; 
@property (nonatomic,retain) NSString * movieInfo;                                 //@synthesize movieInfo=_movieInfo - In the implementation block
@property (assign,nonatomic) char hasHasAlternateAudio; 
@property (assign,nonatomic) char hasAlternateAudio;                               //@synthesize hasAlternateAudio=_hasAlternateAudio - In the implementation block
@property (assign,nonatomic) char hasHasSubtitles; 
@property (assign,nonatomic) char hasSubtitles;                                    //@synthesize hasSubtitles=_hasSubtitles - In the implementation block
@property (assign,nonatomic) char hasAudioLanguage; 
@property (assign,nonatomic) int audioLanguage;                                    //@synthesize audioLanguage=_audioLanguage - In the implementation block
@property (assign,nonatomic) char hasAudioTrackIndex; 
@property (assign,nonatomic) int audioTrackIndex;                                  //@synthesize audioTrackIndex=_audioTrackIndex - In the implementation block
@property (assign,nonatomic) char hasAudioTrackId; 
@property (assign,nonatomic) int audioTrackId;                                     //@synthesize audioTrackId=_audioTrackId - In the implementation block
@property (assign,nonatomic) char hasSubtitleLanguage; 
@property (assign,nonatomic) int subtitleLanguage;                                 //@synthesize subtitleLanguage=_subtitleLanguage - In the implementation block
@property (assign,nonatomic) char hasSubtitleTrackIndex; 
@property (assign,nonatomic) int subtitleTrackIndex;                               //@synthesize subtitleTrackIndex=_subtitleTrackIndex - In the implementation block
@property (assign,nonatomic) char hasRentalDuration; 
@property (assign,nonatomic) long long rentalDuration;                             //@synthesize rentalDuration=_rentalDuration - In the implementation block
@property (assign,nonatomic) char hasRentalPlaybackDuration; 
@property (assign,nonatomic) long long rentalPlaybackDuration;                     //@synthesize rentalPlaybackDuration=_rentalPlaybackDuration - In the implementation block
@property (assign,nonatomic) char hasRentalPlaybackStartedDateTime; 
@property (assign,nonatomic) long long rentalPlaybackStartedDateTime;              //@synthesize rentalPlaybackStartedDateTime=_rentalPlaybackStartedDateTime - In the implementation block
@property (assign,nonatomic) char hasRentalStartedDateTime; 
@property (assign,nonatomic) long long rentalStartedDateTime;                      //@synthesize rentalStartedDateTime=_rentalStartedDateTime - In the implementation block
@property (nonatomic,readonly) char hasFlattenedChapterData; 
@property (nonatomic,retain) NSData * flattenedChapterData;                        //@synthesize flattenedChapterData=_flattenedChapterData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(MIPArtist *)artist;
-(void)setArtist:(MIPArtist *)arg1 ;
-(long long)rentalDuration;
-(char)hasArtist;
-(void)setRentalDuration:(long long)arg1 ;
-(char)hasRentalDuration;
-(int)videoQuality;
-(void)setVideoQuality:(int)arg1 ;
-(void)setHasVideoQuality:(char)arg1 ;
-(char)hasVideoQuality;
-(char)rental;
-(char)hasChapterData;
-(char)hasAlternateAudio;
-(char)hasSubtitles;
-(int)audioLanguage;
-(int)audioTrackIndex;
-(int)audioTrackId;
-(int)subtitleLanguage;
-(int)subtitleTrackIndex;
-(long long)rentalPlaybackDuration;
-(long long)rentalPlaybackStartedDateTime;
-(long long)rentalStartedDateTime;
-(NSData *)flattenedChapterData;
-(char)hasRental;
-(char)hasHasChapterData;
-(char)hasExtendedContentName;
-(char)hasHasAlternateAudio;
-(char)hasHasSubtitles;
-(char)hasAudioLanguage;
-(char)hasAudioTrackIndex;
-(char)hasAudioTrackId;
-(char)hasSubtitleLanguage;
-(char)hasSubtitleTrackIndex;
-(char)hasRentalPlaybackDuration;
-(char)hasRentalPlaybackStartedDateTime;
-(char)hasRentalStartedDateTime;
-(char)hasFlattenedChapterData;
-(NSString *)extendedContentName;
-(NSString *)movieInfo;
-(void)setExtendedContentName:(NSString *)arg1 ;
-(void)setMovieInfo:(NSString *)arg1 ;
-(void)setFlattenedChapterData:(NSData *)arg1 ;
-(void)setRental:(char)arg1 ;
-(void)setHasRental:(char)arg1 ;
-(void)setHasChapterData:(char)arg1 ;
-(void)setHasHasChapterData:(char)arg1 ;
-(char)hasMovieInfo;
-(void)setHasAlternateAudio:(char)arg1 ;
-(void)setHasHasAlternateAudio:(char)arg1 ;
-(void)setHasSubtitles:(char)arg1 ;
-(void)setHasHasSubtitles:(char)arg1 ;
-(void)setAudioLanguage:(int)arg1 ;
-(void)setHasAudioLanguage:(char)arg1 ;
-(void)setAudioTrackIndex:(int)arg1 ;
-(void)setHasAudioTrackIndex:(char)arg1 ;
-(void)setAudioTrackId:(int)arg1 ;
-(void)setHasAudioTrackId:(char)arg1 ;
-(void)setSubtitleLanguage:(int)arg1 ;
-(void)setHasSubtitleLanguage:(char)arg1 ;
-(void)setSubtitleTrackIndex:(int)arg1 ;
-(void)setHasSubtitleTrackIndex:(char)arg1 ;
-(void)setHasRentalDuration:(char)arg1 ;
-(void)setRentalPlaybackDuration:(long long)arg1 ;
-(void)setHasRentalPlaybackDuration:(char)arg1 ;
-(void)setRentalPlaybackStartedDateTime:(long long)arg1 ;
-(void)setHasRentalPlaybackStartedDateTime:(char)arg1 ;
-(void)setRentalStartedDateTime:(long long)arg1 ;
-(void)setHasRentalStartedDateTime:(char)arg1 ;
@end
