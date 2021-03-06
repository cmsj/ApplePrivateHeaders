/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCRemoteVideoManagerDelegate <NSObject>
@optional
-(void)remoteVideoServerDidDie;

@required
-(void)remoteVideoDidDegrade:(char)arg1 streamToken:(long long)arg2;
-(void)remoteVideoDidSuspend:(char)arg1 streamToken:(long long)arg2;
-(void)releaseQueueForStreamToken:(long long)arg1;
-(void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
-(void)remoteMediaDidStall:(char)arg1 streamToken:(long long)arg2;
-(void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
-(void)remoteVideoDidPause:(char)arg1 streamToken:(long long)arg2;

@end

