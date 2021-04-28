/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDAccessoryFirmwareUpdateConcurrencyLogEvent : HMDLogEvent {

	unsigned long long _peakConcurrentIPAccessoryUpdateStaging;
	unsigned long long _peakConcurrentIPAccessoryUpdateApply;
	unsigned long long _peakConcurrentBLEAccessoryUpdateStaging;
	unsigned long long _peakConcurrentBLEAccessoryUpdateApply;
	unsigned long long _peakConcurrentThreadAccessoryUpdateStaging;
	unsigned long long _peakConcurrentThreadAccessoryUpdateApply;

}

@property (nonatomic,readonly) unsigned long long peakConcurrentIPAccessoryUpdateStaging;                  //@synthesize peakConcurrentIPAccessoryUpdateStaging=_peakConcurrentIPAccessoryUpdateStaging - In the implementation block
@property (nonatomic,readonly) unsigned long long peakConcurrentIPAccessoryUpdateApply;                    //@synthesize peakConcurrentIPAccessoryUpdateApply=_peakConcurrentIPAccessoryUpdateApply - In the implementation block
@property (nonatomic,readonly) unsigned long long peakConcurrentBLEAccessoryUpdateStaging;                 //@synthesize peakConcurrentBLEAccessoryUpdateStaging=_peakConcurrentBLEAccessoryUpdateStaging - In the implementation block
@property (nonatomic,readonly) unsigned long long peakConcurrentBLEAccessoryUpdateApply;                   //@synthesize peakConcurrentBLEAccessoryUpdateApply=_peakConcurrentBLEAccessoryUpdateApply - In the implementation block
@property (nonatomic,readonly) unsigned long long peakConcurrentThreadAccessoryUpdateStaging;              //@synthesize peakConcurrentThreadAccessoryUpdateStaging=_peakConcurrentThreadAccessoryUpdateStaging - In the implementation block
@property (nonatomic,readonly) unsigned long long peakConcurrentThreadAccessoryUpdateApply;                //@synthesize peakConcurrentThreadAccessoryUpdateApply=_peakConcurrentThreadAccessoryUpdateApply - In the implementation block
-(id)initWithPeakConcurrentIPAccessoryUpdateStaging:(unsigned long long)arg1 peakConcurrentIPAccessoryUpdateApply:(unsigned long long)arg2 peakConcurrentBLEAccessoryUpdateStaging:(unsigned long long)arg3 peakConcurrentBLEAccessoryUpdateApply:(unsigned long long)arg4 peakConcurrentThreadAccessoryUpdateStaging:(unsigned long long)arg5 peakConcurrentThreadAccessoryUpdateApply:(unsigned long long)arg6 ;
-(unsigned long long)peakConcurrentIPAccessoryUpdateStaging;
-(unsigned long long)peakConcurrentIPAccessoryUpdateApply;
-(unsigned long long)peakConcurrentBLEAccessoryUpdateStaging;
-(unsigned long long)peakConcurrentBLEAccessoryUpdateApply;
-(unsigned long long)peakConcurrentThreadAccessoryUpdateStaging;
-(unsigned long long)peakConcurrentThreadAccessoryUpdateApply;
@end
