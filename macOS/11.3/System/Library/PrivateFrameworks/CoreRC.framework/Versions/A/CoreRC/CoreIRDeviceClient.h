/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreIRDevice.h>

@interface CoreIRDeviceClient : CoreIRDevice
+(char)supportsSecureCoding;
-(Class)classForCoder;
-(char)sendCommand:(id)arg1 error:(id*)arg2 ;
-(char)setOSDName:(id)arg1 error:(id*)arg2 ;
-(id)startLearningSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)updateMappingWithSession:(id)arg1 error:(id*)arg2 ;
-(char)clearAllStoredCommands:(id*)arg1 ;
-(char)setCommand:(unsigned long long)arg1 target:(id)arg2 forButtonCombination:(id)arg3 delay:(double)arg4 error:(id*)arg5 ;
-(char)enableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(char)disableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(char)changeButtonCombination:(id)arg1 delay:(double)arg2 enabled:(char)arg3 error:(id*)arg4 ;
@end

