/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/Versions/A/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <SampleAnalysis/SAThreadState.h>

@interface SAThreadStateMicrostackshot : SAThreadState {

	unsigned char _microstackshotFlags;
	unsigned short _cpuSpeed100Mhz;

}
+(id)stateWithMicrostackshot:(const micro_snapshot*)arg1 thread:(const thread_snapshot*)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 ;
-(char)isMicrostackshot;
-(char)isInterruptRecord;
-(char)isTimerArmingRecord;
-(char)isIORecord;
-(char)isUserMode;
-(char)isBatteryAndUserActivityValid;
-(unsigned)cpuSpeedMhz;
-(unsigned char)microstackshotFlags;
-(char)isUserActive;
-(char)isOnBattery;
@end

