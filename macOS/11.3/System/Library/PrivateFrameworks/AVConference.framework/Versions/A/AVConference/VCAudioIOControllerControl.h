/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCAudioIOControllerControl <VCBasebandCodecNotifications>
@optional
-(void)refreshInputMetering;
-(void)refreshOutputMetering;
-(void)refreshRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2;

@required
-(void)startClient:(id)arg1;
-(void)stopClient:(id)arg1;
-(void)updateClient:(id)arg1;

@end
