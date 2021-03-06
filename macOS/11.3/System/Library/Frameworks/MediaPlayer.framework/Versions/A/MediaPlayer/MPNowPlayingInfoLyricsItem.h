/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPNowPlayingInfoLyricsItemToken, NSString;

@interface MPNowPlayingInfoLyricsItem : NSObject {

	void* _mediaRemoteLyricsItem;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsItem;                          //@synthesize mediaRemoteLyricsItem=_mediaRemoteLyricsItem - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoLyricsItemToken * token; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) char userProvided; 
-(void)dealloc;
-(MPNowPlayingInfoLyricsItemToken *)token;
-(NSString *)lyrics;
-(id)initWithLyrics:(id)arg1 userProvided:(char)arg2 ;
-(id)initWithLyrics:(id)arg1 userProvided:(char)arg2 token:(id)arg3 ;
-(id)initWithMediaRemoteLyricsItem:(void*)arg1 ;
-(char)userProvided;
-(void*)mediaRemoteLyricsItem;
@end

