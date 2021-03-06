/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol HAP2AccessoryPrivate <HAP2Accessory>
@property (nonatomic,retain) NSNumber * internalSleepIntervalMs; 
@required
-(NSNumber *)internalSleepIntervalMs;
-(void)setInternalSleepIntervalMs:(id)arg1;
-(void)updateConnectionState:(unsigned long long)arg1;
-(char)updateDiscoveredServices:(id)arg1;
-(void)characteristicValueChanged:(id)arg1;

@end

