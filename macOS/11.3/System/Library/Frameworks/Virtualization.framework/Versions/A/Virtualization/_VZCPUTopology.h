/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Virtualization/Virtualization-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _VZCPUTopology : NSObject <NSCopying> {

	CpuTopology _topology;

}

@property (readonly) unsigned long long CPUCount; 
+(id)optimalTopologyForCPUCount:(unsigned long long)arg1 ;
+(unsigned long long)minimumAllowedCPUCount;
+(unsigned long long)maximumAllowedCPUCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)CPUCount;
@end

