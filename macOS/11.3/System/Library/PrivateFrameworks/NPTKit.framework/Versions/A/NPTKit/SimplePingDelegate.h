/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/Versions/A/NPTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SimplePingDelegate <NSObject>
@optional
-(void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
-(void)simplePing:(id)arg1 didFailWithError:(id)arg2;
-(void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
-(void)simplePing:(id)arg1 didTimeOut:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
-(void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
-(void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
-(void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;

@end

