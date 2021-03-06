/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/Versions/A/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMProbe.h>

@class NSThread;

@interface MXMResourceProbe : MXMProbe {

	NSThread* _pollingThread;

}

@property (retain) NSThread * pollingThread;              //@synthesize pollingThread=_pollingThread - In the implementation block
+(int)_processIdentifierWithProcessName:(const char*)arg1 error:(id*)arg2 ;
+(id)probe;
-(id)init;
-(void)_beginUpdates;
-(void)_stopUpdates;
-(char)performPreIterationActions;
-(id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2 ;
-(id)_pollMainBody;
-(void)setPollingThread:(NSThread *)arg1 ;
-(NSThread *)pollingThread;
-(void)_pollProcessWithData:(id)arg1 pid:(int)arg2 ;
-(void)_pollAllProcesses:(id)arg1 ;
-(void)_pollProcessResourceUsageWithData:(id)arg1 pid:(int)arg2 ;
-(void)_pollTaskMachPortInformation:(id)arg1 task:(unsigned)arg2 ;
-(void)_pollProcessNetworkingStatsWithData:(id)arg1 pid:(int)arg2 task:(unsigned)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 pm_networking_stats:(SCD_Struct_MX1*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 rusage_v4:(rusage_info_v4*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 mach_space_basicinfo:(ipc_info_space_basic*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 taskinfo:(proc_taskinfo*)arg3 ;
-(void)_pollBasicTaskInformation:(id)arg1 pid:(int)arg2 ;
@end

