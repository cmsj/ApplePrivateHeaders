/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/Versions/A/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, AudioTier, NSObject;

@interface AudioTierHistogram : NSObject {

	NSMutableDictionary* histogram;
	AudioTier* currentTier;
	double startTime;
	NSObject*<OS_dispatch_queue> awdAudioTierQueue;

}
-(void)dealloc;
-(id)init;
-(void)end;
-(id)newReport;
-(void)newAudioTier:(unsigned)arg1 duplication:(unsigned)arg2 bundling:(unsigned)arg3 codecPayload:(unsigned)arg4 codecBitrate:(unsigned)arg5 mode:(unsigned)arg6 ;
-(void)accumulateTime:(double)arg1 forAudioTier:(id)arg2 ;
@end

