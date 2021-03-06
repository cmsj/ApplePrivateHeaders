/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/_MLCGPULayer.h>

@interface _MLCGPUInstanceNormalization : _MLCGPULayer
+(id)layerWithDevice:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8 ;
+(id)layerWithDevice:(id)arg1 fusedWithNeuronDescriptor:(id)arg2 numOfFeatureChannels:(unsigned long long)arg3 mean:(id)arg4 variance:(id)arg5 beta:(id)arg6 gamma:(id)arg7 varianceEpsilon:(float)arg8 momentum:(float)arg9 ;
-(id)initWithDevice:(id)arg1 fusedWithNeuronDescriptor:(id)arg2 numOfFeatureChannels:(unsigned long long)arg3 mean:(id)arg4 variance:(id)arg5 beta:(id)arg6 gamma:(id)arg7 varianceEpsilon:(float)arg8 momentum:(float)arg9 ;
@end

