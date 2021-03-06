/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Virtualization/Virtualization-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VZMACAddress, VZNetworkDeviceAttachment;

@interface VZNetworkDeviceConfiguration : NSObject <NSCopying> {

	VZMACAddress* _MACAddress;
	VZNetworkDeviceAttachment* _attachment;

}

@property (readonly) expected<VzCore::VirtualMachineConfiguration::NetworkDevice _networkDevice; 
@property (copy) VZMACAddress * MACAddress;                                                                   //@synthesize MACAddress=_MACAddress - In the implementation block
@property (retain) VZNetworkDeviceAttachment * attachment;                                                    //@synthesize attachment=_attachment - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(VZNetworkDeviceAttachment *)attachment;
-(void)setAttachment:(VZNetworkDeviceAttachment *)arg1 ;
-(VZMACAddress *)MACAddress;
-(expected<VzCore::VirtualMachineConfiguration::NetworkDevice)_networkDevice;
-(void)setMACAddress:(VZMACAddress *)arg1 ;
@end

