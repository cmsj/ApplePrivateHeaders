/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMusicPlayerController.h>

@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {

	long long _shuffleMode;
	long long _repeatMode;
	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,readonly) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)serviceConnection;
-(long long)shuffleMode;
-(void)setShuffleMode:(long long)arg1 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)_clearConnection;
-(id)initWithClientIdentifier:(id)arg1 queue:(id)arg2 ;
-(void)setQueueWithDescriptor:(id)arg1 ;
-(void)beginGeneratingPlaybackNotifications;
-(void)endGeneratingPlaybackNotifications;
-(void)_establishConnectionIfNeeded;
-(void)performQueueTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onApplicationServerAsync:(/*^block*/id)arg1 ;
@end

