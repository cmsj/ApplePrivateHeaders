/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVOutputDeviceCommunicationChannelImpl;
@interface AVOutputDeviceCommunicationChannel : NSObject {

	id<AVOutputDeviceCommunicationChannelImpl> _impl;

}
-(void)dealloc;
-(void)close;
-(id)initWithOutputDeviceCommunicationChannelImpl:(id)arg1 ;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

