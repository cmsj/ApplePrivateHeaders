/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MOMSMonitoringProcessInfo : NSObject <NSSecureCoding> {

	double _cpuUsagePercentage;
	unsigned long long _memoryResidentBytes;
	unsigned long long _memoryAnonymousBytes;
	unsigned long long _memoryPurgeableBytes;

}

@property (assign) double cpuUsagePercentage;                            //@synthesize cpuUsagePercentage=_cpuUsagePercentage - In the implementation block
@property (assign) unsigned long long memoryResidentBytes;               //@synthesize memoryResidentBytes=_memoryResidentBytes - In the implementation block
@property (assign) unsigned long long memoryAnonymousBytes;              //@synthesize memoryAnonymousBytes=_memoryAnonymousBytes - In the implementation block
@property (assign) unsigned long long memoryPurgeableBytes;              //@synthesize memoryPurgeableBytes=_memoryPurgeableBytes - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)cpuUsagePercentage;
-(void)setCpuUsagePercentage:(double)arg1 ;
-(unsigned long long)memoryResidentBytes;
-(void)setMemoryResidentBytes:(unsigned long long)arg1 ;
-(unsigned long long)memoryAnonymousBytes;
-(void)setMemoryAnonymousBytes:(unsigned long long)arg1 ;
-(unsigned long long)memoryPurgeableBytes;
-(void)setMemoryPurgeableBytes:(unsigned long long)arg1 ;
@end

