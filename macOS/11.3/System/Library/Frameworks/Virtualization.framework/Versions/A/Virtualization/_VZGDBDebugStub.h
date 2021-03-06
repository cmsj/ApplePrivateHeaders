/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Virtualization/Virtualization-Structs.h>
#import <Virtualization/_VZDebugStub.h>

@interface _VZGDBDebugStub : _VZDebugStub {

	FileDescriptor _serverSocketFileDescriptor;
	unsigned short _port;

}

@property (readonly) unsigned short port;              //@synthesize port=_port - In the implementation block
-(unsigned short)port;
-(expected<VzCore::VirtualMachineConfiguration::DebugStub, NSError *>)_debugStub;
@end

