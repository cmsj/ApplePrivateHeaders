/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNDArray.framework/Versions/A/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryBase.h>

@interface MPSNDArrayMultiaryGradientKernel : MPSNDArrayMultiaryBase {

	unsigned long long _sourceGradientIndex;

}
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 sourceGradientIndex:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg1 commandBuffer:(id)arg2 sourceArrays:(id)arg3 sourceGradient:(id)arg4 gradientState:(id)arg5 destinationArray:(id)arg6 kernelDAGObject:(id)arg7 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5 kernelDAGObject:(id)arg6 ;
@end
