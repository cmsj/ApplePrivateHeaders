/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVRMSNowPlayingInfo : NSObject {

	char _canSkipNext;
	char _canSkipPrevious;
	char _canWishlist;
	char _hasChapterData;
	char _likeable;
	int _revisionNumber;
	unsigned long long _itemID;
	unsigned long long _databaseID;
	NSString* _trackName;
	NSString* _artistName;
	NSString* _albumName;
	double _timestamp;
	double _timeRemaining;
	double _totalDuration;
	long long _mediaKind;
	long long _playbackState;
	long long _likedState;
	long long _scrubbableState;

}

@property (assign,nonatomic) unsigned long long itemID;                    //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,retain) NSString * trackName;                         //@synthesize trackName=_trackName - In the implementation block
@property (nonatomic,retain) NSString * artistName;                        //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSString * albumName;                         //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) double timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double timeRemaining;                         //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign,nonatomic) double totalDuration;                         //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) int revisionNumber;                           //@synthesize revisionNumber=_revisionNumber - In the implementation block
@property (assign,nonatomic) long long mediaKind;                          //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign,nonatomic) long long playbackState;                      //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) long long likedState;                         //@synthesize likedState=_likedState - In the implementation block
@property (assign,nonatomic) long long scrubbableState;                    //@synthesize scrubbableState=_scrubbableState - In the implementation block
@property (assign,nonatomic) char canSkipNext;                             //@synthesize canSkipNext=_canSkipNext - In the implementation block
@property (assign,nonatomic) char canSkipPrevious;                         //@synthesize canSkipPrevious=_canSkipPrevious - In the implementation block
@property (assign,nonatomic) char canWishlist;                             //@synthesize canWishlist=_canWishlist - In the implementation block
@property (assign,nonatomic) char hasChapterData;                          //@synthesize hasChapterData=_hasChapterData - In the implementation block
@property (assign,getter=isLikeable,nonatomic) char likeable;              //@synthesize likeable=_likeable - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) char playing; 
@property (nonatomic,readonly) NSString * artworkIdentifier; 
-(id)description;
-(unsigned long long)itemID;
-(NSString *)artistName;
-(double)timestamp;
-(char)isPlaying;
-(void)setTimestamp:(double)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(id)protobuf;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(double)totalDuration;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(long long)playbackState;
-(NSString *)artworkIdentifier;
-(void)setPlaybackState:(long long)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(long long)mediaKind;
-(long long)likedState;
-(char)hasChapterData;
-(void)setLikedState:(long long)arg1 ;
-(void)setHasChapterData:(char)arg1 ;
-(void)setMediaKind:(long long)arg1 ;
-(void)setTrackName:(NSString *)arg1 ;
-(void)setRevisionNumber:(int)arg1 ;
-(void)setScrubbableState:(long long)arg1 ;
-(void)setCanSkipNext:(char)arg1 ;
-(void)setCanSkipPrevious:(char)arg1 ;
-(void)setLikeable:(char)arg1 ;
-(void)setCanWishlist:(char)arg1 ;
-(NSString *)trackName;
-(int)revisionNumber;
-(long long)scrubbableState;
-(char)canSkipNext;
-(char)canSkipPrevious;
-(char)canWishlist;
-(char)isLikeable;
@end

