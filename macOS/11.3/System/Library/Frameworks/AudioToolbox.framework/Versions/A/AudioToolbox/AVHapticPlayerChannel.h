/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class AVHapticClient;

@interface AVHapticPlayerChannel : NSObject {

	unsigned long long _chanID;
	unsigned long long _behavior;
	AVHapticClient* _client;

}

@property (assign) unsigned long long chanID;                     //@synthesize chanID=_chanID - In the implementation block
@property (__weak) AVHapticClient * client;                       //@synthesize client=_client - In the implementation block
@property (assign) unsigned long long eventBehavior; 
-(id)initWithChannelID:(id)arg1 client:(id)arg2 ;
-(char)startEvent:(unsigned long long)arg1 atTime:(double)arg2 token:(unsigned long long*)arg3 error:(id*)arg4 ;
-(char)startEvent:(unsigned long long)arg1 atTime:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 token:(unsigned long long*)arg5 error:(id*)arg6 ;
-(char)stopEvent:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(char)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 error:(id*)arg4 ;
-(unsigned long long)chanID;
-(void)setChanID:(unsigned long long)arg1 ;
-(void)invalidate;
-(AVHapticClient *)client;
-(void)setClient:(AVHapticClient *)arg1 ;
-(char)setParameter:(unsigned long long)arg1 value:(float)arg2 atTime:(double)arg3 error:(id*)arg4 ;
-(char)resetAtTime:(double)arg1 error:(id*)arg2 ;
-(char)sendEvents:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(char)clearEvents:(double)arg1 error:(id*)arg2 ;
-(unsigned long long)eventBehavior;
-(void)setEventBehavior:(unsigned long long)arg1 ;
@end

