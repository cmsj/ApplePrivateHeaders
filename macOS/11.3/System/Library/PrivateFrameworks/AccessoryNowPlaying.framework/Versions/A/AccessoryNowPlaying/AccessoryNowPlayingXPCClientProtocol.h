/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNowPlaying.framework/Versions/A/AccessoryNowPlaying
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AccessoryNowPlayingXPCClientProtocol <NSObject>
@required
-(void)updateSubscriberList:(id)arg1 WithReply:(/*^block*/id)arg2;
-(void)triggerMediaItemAttributesUpdateWithReply:(/*^block*/id)arg1;
-(void)triggerMediaItemArtworkUpdateWithReply:(/*^block*/id)arg1;
-(void)triggerPlaybackAttributesUpdateWithReply:(/*^block*/id)arg1;
-(void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned)arg3 upToCount:(unsigned)arg4 infoMask:(unsigned)arg5;
-(void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2;
-(void)setPlaybackElapsedTime:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setPlaybackQueueIndex:(id)arg1 withReply:(/*^block*/id)arg2;

@end

