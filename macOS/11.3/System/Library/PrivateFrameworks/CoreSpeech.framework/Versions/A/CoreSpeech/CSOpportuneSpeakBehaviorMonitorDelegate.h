/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSOpportuneSpeakBehaviorMonitorDelegate <NSObject>
@required
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 option:(id)arg4;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 successfully:(char)arg4 option:(id)arg5;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;

@end

