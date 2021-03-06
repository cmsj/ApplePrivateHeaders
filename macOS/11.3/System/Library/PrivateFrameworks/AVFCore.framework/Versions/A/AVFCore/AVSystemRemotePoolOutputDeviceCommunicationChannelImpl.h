/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceCommunicationChannelImpl.h>

@class NSString, AVOutputContext;

@interface AVSystemRemotePoolOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {

	NSString* _deviceID;
	CFStringRef _commChannelUUID;
	AVOutputContext* _outputContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDeviceID:(id)arg1 channelUUID:(CFStringRef)arg2 outputContext:(id)arg3 ;
@end

