/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/iTunesLibrary.framework/Versions/A/iTunesLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface ITLibMediaItemData : NSObject {

	char _downloadable;
	NSURL* _URL;
	NSURL* _securityScopedURL;
	unsigned long long _playlistCount;

}

@property (nonatomic,retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSURL * securityScopedURL;                     //@synthesize securityScopedURL=_securityScopedURL - In the implementation block
@property (assign,nonatomic) unsigned long long playlistCount;              //@synthesize playlistCount=_playlistCount - In the implementation block
@property (assign,nonatomic) char downloadable;                             //@synthesize downloadable=_downloadable - In the implementation block
-(id)init;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)securityScopedURL;
-(char)downloadable;
-(void)setDownloadable:(char)arg1 ;
-(unsigned long long)playlistCount;
-(void)setSecurityScopedURL:(NSURL *)arg1 ;
-(void)setPlaylistCount:(unsigned long long)arg1 ;
@end

