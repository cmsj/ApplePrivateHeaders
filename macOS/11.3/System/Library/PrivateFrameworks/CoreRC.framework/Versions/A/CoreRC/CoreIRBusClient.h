/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreIRBus.h>

@interface CoreIRBusClient : CoreIRBus
+(char)supportsSecureCoding;
-(Class)classForCoder;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 error:(id*)arg3 ;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 learningSession:(id)arg3 error:(id*)arg4 ;
-(char)deleteDevice:(id)arg1 error:(id*)arg2 ;
-(char)setPairState:(char)arg1 forAppleRemote:(id)arg2 error:(id*)arg3 ;
@end

