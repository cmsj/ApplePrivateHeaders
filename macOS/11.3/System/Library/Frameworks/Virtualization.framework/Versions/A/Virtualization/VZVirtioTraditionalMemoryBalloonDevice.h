/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Virtualization/VZMemoryBalloonDevice.h>

@class VZVirtualMachine, VZVirtioTraditionalMemoryBalloonDeviceConfiguration;

@interface VZVirtioTraditionalMemoryBalloonDevice : VZMemoryBalloonDevice {

	VZVirtualMachine* _virtualMachine;
	VZVirtioTraditionalMemoryBalloonDeviceConfiguration* _configuration;
	unsigned long long _targetVirtualMachineMemorySize;
	unsigned long long _maxTargetVirtualMachineMemorySize;

}

@property (readonly) unsigned long long _maxTargetVirtualMachineMemorySize; 
@property (assign) unsigned long long targetVirtualMachineMemorySize; 
-(unsigned long long)_maxTargetVirtualMachineMemorySize;
-(void)setTargetVirtualMachineMemorySize:(unsigned long long)arg1 ;
-(unsigned long long)targetVirtualMachineMemorySize;
@end

