/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDStreamingManagerDelegate <NSObject>
@optional
-(void)streamingManagerDidStartRelay:(id)arg1;

@required
-(void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
-(void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
-(void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;
-(void)streamingManagerDidNetworkImprove:(id)arg1;
-(void)streamingManagerDidNetworkDeteriorate:(id)arg1;
-(void)streamingManagerDidUpdateConfiguration:(id)arg1;

@end

