/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/Versions/A/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SATimestamp, SAFrame, SAWaitInfo, SATurnstileInfo, NSString, SADispatchQueue;

@interface SAThreadState : NSObject <SASerializable, NSCopying> {

	unsigned char _cpuNum;
	unsigned char _basePriority;
	unsigned char _scheduledPriority;
	unsigned _threadQos : 3;
	unsigned _threadRequestedQos : 3;
	unsigned _isSuspended : 1;
	unsigned _isIOPassive : 1;
	unsigned _startSampleIndex : 30;
	unsigned _isDarwinBG : 1;
	unsigned _isIdleWorkQueue : 1;
	unsigned _endSampleIndex : 30;
	unsigned _isRunning : 1;
	unsigned _filledName : 1;
	unsigned _filledDispatchQueue : 1;
	unsigned _filledUserStack : 1;
	unsigned _filledScheduling : 1;
	unsigned _filledCyclesInstructions : 1;
	unsigned _filledSnapshot : 1;
	unsigned _threadRequestedQosOverride : 3;
	unsigned _threadQosPromote : 3;
	unsigned _threadQosKEventOverride : 3;
	unsigned _threadQosWorkQueueOverride : 3;
	unsigned _threadQosWorkloopServicerOverride : 3;
	unsigned _isPromotedAboveTask : 1;
	unsigned char _ioTier;
	unsigned char _threadQosIpcOverride;
	unsigned char _threadQosSyncIpcOverride;
	unsigned _schedulerFlags;
	unsigned _state;
	SATimestamp* _startTimestamp;
	SATimestamp* _endTimestamp;
	SAFrame* _leafUserFrame;
	SAFrame* _leafKernelFrame;
	SAWaitInfo* _waitInfo;
	SATurnstileInfo* _turnstileInfo;
	NSString* _name;
	SADispatchQueue* _dispatchQueue;
	unsigned long long _voucherIdentifier;
	unsigned long long _userTimeInNs;
	unsigned long long _systemTimeInNs;
	unsigned long long _instructions;
	unsigned long long _cycles;
	SATimestamp* _timestampLastMadeRunnable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char filledName; 
@property (assign) char filledDispatchQueue; 
@property (assign) char filledUserStack; 
@property (assign) char filledScheduling; 
@property (assign) char filledCyclesInstructions; 
@property (assign) char filledSnapshot; 
@property (readonly) unsigned char microstackshotFlags; 
@property (readonly) SATimestamp * startTimestamp; 
@property (readonly) SATimestamp * endTimestamp; 
@property (readonly) unsigned long long startSampleIndex; 
@property (readonly) unsigned long long endSampleIndex; 
@property (readonly) SAFrame * leafUserFrame; 
@property (readonly) SAFrame * leafKernelFrame; 
@property (readonly) SAWaitInfo * waitInfo; 
@property (readonly) SATurnstileInfo * turnstileInfo; 
@property (readonly) NSString * name; 
@property (__weak,readonly) SADispatchQueue * dispatchQueue; 
@property (readonly) unsigned long long voucherIdentifier; 
@property (readonly) unsigned long long userTimeInNs; 
@property (readonly) unsigned long long systemTimeInNs; 
@property (readonly) unsigned long long cpuTimeNs; 
@property (readonly) unsigned long long instructions; 
@property (readonly) unsigned long long cycles; 
@property (readonly) int basePriority; 
@property (readonly) int scheduledPriority; 
@property (readonly) unsigned schedulerFlags; 
@property (readonly) SATimestamp * timestampLastMadeRunnable; 
@property (readonly) unsigned char threadQos; 
@property (readonly) unsigned char threadRequestedQos; 
@property (readonly) unsigned char threadRequestedQosOverride; 
@property (readonly) unsigned char threadQosPromote; 
@property (readonly) unsigned char threadQosKEventOverride; 
@property (readonly) unsigned char threadQosWorkQueueOverride; 
@property (readonly) unsigned char threadQosWorkloopServicerOverride; 
@property (readonly) char isPromotedAboveTask; 
@property (readonly) unsigned char ioTier; 
@property (readonly) char isIOPassive; 
@property (readonly) char isSuspended; 
@property (readonly) char isDarwinBG; 
@property (readonly) char isIdleWorkQueue; 
@property (readonly) char isRunning; 
@property (readonly) unsigned cpuNum; 
@property (readonly) char hasDispatchQueue; 
@property (readonly) char isWaiting; 
@property (readonly) char isStopped; 
@property (readonly) char isRunnable; 
@property (readonly) char isWaitingUninterruptibly; 
@property (readonly) char isHaltedAtTermination; 
@property (readonly) char isAbortingInterruptibleWaits; 
@property (readonly) char isAbortingInterruptibleWaitsAtSafePoints; 
@property (readonly) char isMicrostackshot; 
@property (readonly) char isUserMode; 
@property (readonly) char isInterruptRecord; 
@property (readonly) char isTimerArmingRecord; 
@property (readonly) char isIORecord; 
@property (readonly) char isBatteryAndUserActivityValid; 
@property (readonly) char isUserActive; 
@property (readonly) char isOnBattery; 
@property (readonly) unsigned cpuSpeedMhz; 
@property (readonly) unsigned char threadQosIpcOverride;                           //@synthesize threadQosIpcOverride=_threadQosIpcOverride - In the implementation block
@property (readonly) unsigned char threadQosSyncIpcOverride;                       //@synthesize threadQosSyncIpcOverride=_threadQosSyncIpcOverride - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(char)addSelfToBuffer:(SCD_Struct_SA17*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(char)hasDispatchQueue;
-(unsigned long long)endSampleIndex;
-(unsigned long long)startSampleIndex;
-(SAWaitInfo *)waitInfo;
-(SATurnstileInfo *)turnstileInfo;
-(unsigned long long)userTimeInNs;
-(unsigned long long)systemTimeInNs;
-(int)scheduledPriority;
-(unsigned)schedulerFlags;
-(unsigned long long)voucherIdentifier;
-(unsigned char)threadQos;
-(unsigned char)threadRequestedQos;
-(unsigned char)threadRequestedQosOverride;
-(unsigned char)ioTier;
-(char)isDarwinBG;
-(char)isIOPassive;
-(char)isIdleWorkQueue;
-(SAFrame *)leafUserFrame;
-(SAFrame *)leafKernelFrame;
-(SATimestamp *)timestampLastMadeRunnable;
-(unsigned long long)cpuTimeNs;
-(char)filledName;
-(void)setFilledName:(char)arg1 ;
-(char)filledDispatchQueue;
-(void)setFilledDispatchQueue:(char)arg1 ;
-(char)filledUserStack;
-(void)setFilledUserStack:(char)arg1 ;
-(char)filledScheduling;
-(void)setFilledScheduling:(char)arg1 ;
-(char)filledCyclesInstructions;
-(void)setFilledCyclesInstructions:(char)arg1 ;
-(char)filledSnapshot;
-(void)setFilledSnapshot:(char)arg1 ;
-(id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
-(id)initWithKCDataThreadV2:(const thread_snapshot_v2*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
-(id)initWithKCDataThreadV4:(const thread_snapshot_v4*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned)arg12 threadInstructionCycles:(const instrs_cycles_snapshot*)arg13 ;
-(id)initWithKCDataDeltaThreadV2:(const thread_delta_snapshot_v2*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
-(id)initWithKCDataDeltaThreadV3:(const thread_delta_snapshot_v3*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned)arg12 ;
-(id)initWithStackshotThreadV1:(const thread_snapshot*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 leafUserFrame:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(mach_timebase_info)arg8 ;
-(id)stackIgnoringKernelStackWithLeafFrame:(id)arg1 ;
-(unsigned)cpuNum;
-(unsigned char)threadQosPromote;
-(unsigned char)threadQosKEventOverride;
-(unsigned char)threadQosWorkQueueOverride;
-(unsigned char)threadQosWorkloopServicerOverride;
-(char)isPromotedAboveTask;
-(char)isRunnable;
-(char)isWaitingUninterruptibly;
-(char)isHaltedAtTermination;
-(char)isAbortingInterruptibleWaits;
-(char)isAbortingInterruptibleWaitsAtSafePoints;
-(char)isMicrostackshot;
-(char)isInterruptRecord;
-(char)isTimerArmingRecord;
-(char)isIORecord;
-(char)isUserMode;
-(char)isBatteryAndUserActivityValid;
-(unsigned)cpuSpeedMhz;
-(unsigned char)microstackshotFlags;
-(char)hasSameStackAs:(id)arg1 ;
-(unsigned char)threadQosIpcOverride;
-(unsigned char)threadQosSyncIpcOverride;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)name;
-(SADispatchQueue *)dispatchQueue;
-(char)isStopped;
-(char)isSuspended;
-(char)isRunning;
-(unsigned long long)instructions;
-(id)stack;
-(SATimestamp *)startTimestamp;
-(SATimestamp *)endTimestamp;
-(char)isUserActive;
-(char)isWaiting;
-(unsigned long long)cycles;
-(unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(int)basePriority;
-(char)isOnBattery;
@end

