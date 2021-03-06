/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioSession/AVAudioHardwareControl.h>

@class AVAudioUIntegerRange;

@interface AVAudioHardwareSliderControl : AVAudioHardwareControl

@property (nonatomic,readonly) unsigned long long value; 
@property (nonatomic,readonly) AVAudioUIntegerRange * range; 
-(unsigned long long)value;
-(AVAudioUIntegerRange *)range;
-(id)valueKeys;
-(char)setValue:(unsigned long long)arg1 controller:(id)arg2 error:(id*)arg3 ;
@end

