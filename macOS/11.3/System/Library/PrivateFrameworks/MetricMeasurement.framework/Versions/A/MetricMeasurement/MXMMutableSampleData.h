/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/Versions/A/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMSampleData.h>

@interface MXMMutableSampleData : MXMSampleData
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)appendSet:(id)arg1 ;
-(id)appendUnsignedIntegerValue:(unsigned long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendUnsignedIntValue:(unsigned)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)dataMatchingFilter:(id)arg1 ;
-(void)appendAttribute:(id)arg1 ;
-(id)appendSample:(id)arg1 ;
-(id)appendDoubleValue:(double)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendIntValue:(int)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendIntegerValue:(long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(void)appendAttributes:(id)arg1 ;
-(id)appendFloatValue:(float)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
@end

