/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Virtualization/Virtualization-Structs.h>
#import <Virtualization/_VZGraphicsDeviceConfiguration.h>

@interface _VZLinearFramebufferGraphicsDeviceConfiguration : _VZGraphicsDeviceConfiguration {

	CGSize _backingStoreSize;

}

@property (readonly) CGSize backingStoreSize;              //@synthesize backingStoreSize=_backingStoreSize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBackingStoreSize:(CGSize)arg1 ;
-(optional<std::__1::variant<VzCore::VirtualMachineConfiguration::GraphicsDevices::LinearFramebuffer, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio>>)_graphicsDevice;
-(id)makeGraphicsDeviceForVirtualMachine:(id)arg1 graphicsDeviceIndex:(unsigned long long)arg2 ;
-(CGSize)backingStoreSize;
@end

