/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVPlayer.h>

@interface AppStoreKit.VideoPlayer : AVPlayer {

	 state;
	??? videoUrl;
	 videoObserver;
	 playerItem;
	??? failure;
	 failureCount;
	 playbackChecks;
	 shouldBePlaying;
	 shouldLoopPlayback;
	 lastPlaybackTimeGuard;
	 lastPlaybackTimeUnsynchronized;
	 delegate;

}
-(void)dealloc;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)play;
-(id)initWithPlayerItem:(id)arg1 ;
@end

