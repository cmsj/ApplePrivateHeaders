/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DTXConnectionServices.framework/Versions/A/DTXConnectionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DTXConnectionRemoteReceiveQueueCalls <DTXAllowedRPC>
@required
-(void)_notifyCompressionHint:(unsigned)arg1 forChannelCode:(unsigned)arg2;
-(void)_notifyOfPublishedCapabilities:(id)arg1;
-(void)_requestChannelWithCode:(unsigned)arg1 identifier:(id)arg2;
-(void)_setTracerState:(unsigned)arg1;
-(void)_channelCanceled:(unsigned)arg1;

@end

