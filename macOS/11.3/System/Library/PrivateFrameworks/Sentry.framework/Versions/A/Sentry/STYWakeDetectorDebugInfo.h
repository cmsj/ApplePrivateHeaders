/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Versions/A/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sentry/Sentry-Structs.h>
@interface STYWakeDetectorDebugInfo : NSObject {

	unsigned long long _lastWakeTime;
	unsigned long long _physicalWakeAdjustment;
	unsigned long long _lastHIDWakeEvent;
	SCD_Struct_ST1 _state;

}

@property (assign,nonatomic) SCD_Struct_ST1 state;                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long lastWakeTime;                        //@synthesize lastWakeTime=_lastWakeTime - In the implementation block
@property (assign,nonatomic) unsigned long long physicalWakeAdjustment;              //@synthesize physicalWakeAdjustment=_physicalWakeAdjustment - In the implementation block
@property (assign,nonatomic) unsigned long long lastHIDWakeEvent;                    //@synthesize lastHIDWakeEvent=_lastHIDWakeEvent - In the implementation block
-(SCD_Struct_ST1)state;
-(void)setState:(SCD_Struct_ST1)arg1 ;
-(void)setLastWakeTime:(unsigned long long)arg1 ;
-(void)setPhysicalWakeAdjustment:(unsigned long long)arg1 ;
-(void)setLastHIDWakeEvent:(unsigned long long)arg1 ;
-(void)logDebugInfoInSignpost;
-(unsigned long long)lastWakeTime;
-(unsigned long long)physicalWakeAdjustment;
-(unsigned long long)lastHIDWakeEvent;
@end

