/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/AppleBluetoothHIDDevice.h>

@interface AppleBluetoothHIDTouchIDDevice : AppleBluetoothHIDDevice
-(id)initWithBluetoothDevice:(id)arg1 ;
-(id)initWithHIDDevice:(unsigned)arg1 ;
-(char)setPreferredSniffParamsForMesaHIDWithAudioStreaming:(char)arg1 withNumberOfConnectedHIDs:(unsigned char)arg2 ;
-(char)setPreferredSniffParamsForMesaHIDWithSCOSession:(char)arg1 connectedToThreeSlotIntervalSCODevice:(char)arg2 withNumberOfConnectedHIDs:(unsigned char)arg3 ;
-(char)setPreferredSniffInterval:(unsigned char)arg1 inAttempts:(unsigned char)arg2 withTimeout:(unsigned char)arg3 ;
@end

