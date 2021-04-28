/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IOBluetoothRFCOMMChannelDelegate
@optional
-(void)rfcommChannelData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3;
-(void)rfcommChannelOpenComplete:(id)arg1 status:(int)arg2;
-(void)rfcommChannelClosed:(id)arg1;
-(void)rfcommChannelControlSignalsChanged:(id)arg1;
-(void)rfcommChannelFlowControlChanged:(id)arg1;
-(void)rfcommChannelWriteComplete:(id)arg1 refcon:(void*)arg2 status:(int)arg3;
-(void)rfcommChannelQueueSpaceAvailable:(id)arg1;

@end
