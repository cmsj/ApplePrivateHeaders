/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString, NSArray;

@interface MPSetPlaybackSessionCommand : MPRemoteCommand {

	NSString* _currentPlaybackSessionIdentifier;
	NSString* _currentPlaybackSessionRevision;
	NSArray* _exportableSessionTypes;
	NSArray* _supportedSessionTypes;

}

@property (nonatomic,copy) NSString * currentPlaybackSessionIdentifier;              //@synthesize currentPlaybackSessionIdentifier=_currentPlaybackSessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currentPlaybackSessionRevision;                //@synthesize currentPlaybackSessionRevision=_currentPlaybackSessionRevision - In the implementation block
@property (nonatomic,copy) NSArray * exportableSessionTypes;                         //@synthesize exportableSessionTypes=_exportableSessionTypes - In the implementation block
@property (nonatomic,copy) NSArray * supportedSessionTypes;                          //@synthesize supportedSessionTypes=_supportedSessionTypes - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentPlaybackSessionIdentifier:(NSString *)arg1 ;
-(void)setExportableSessionTypes:(NSArray *)arg1 ;
-(void)setSupportedSessionTypes:(NSArray *)arg1 ;
-(NSString *)currentPlaybackSessionIdentifier;
-(NSString *)currentPlaybackSessionRevision;
-(void)setCurrentPlaybackSessionRevision:(NSString *)arg1 ;
-(NSArray *)exportableSessionTypes;
-(NSArray *)supportedSessionTypes;
@end

