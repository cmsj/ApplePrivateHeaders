/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriUIMediaPauser : NSObject
+(void)setMediaPaused:(char)arg1 ;
+(void)setDuckAudio:(char)arg1 ;
+(void)setFanDuckingEnabled:(char)arg1 ;
+(char)duckAudio;
+(char)fanDuckingEnabled;
+(char)mediaPaused;
+(id)_fanDispatchQueue;
+(void)pauseWithClientLoop:(char)arg1 ;
+(id)pausedClients;
@end

