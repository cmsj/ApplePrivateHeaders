/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/_MLCGPULayer.h>

@interface _MLCGPUMHAttention : _MLCGPULayer
+(char)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 desciptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(char)arg6 ;
+(char)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 dataForWeights:(id)arg3 dataForBias:(id)arg4 ;
+(char)setMHAOptimizerDataForDevice:(unsigned long long)arg1 deviceOps:(id)arg2 dataForWeights:(id)arg3 dataForBias:(id)arg4 momentumArray:(id)arg5 velocityArray:(id)arg6 centerWeightArray:(id)arg7 weightIndex:(unsigned long long)arg8 targetIndex:(unsigned long long)arg9 attnBias:(char)arg10 ;
-(id)initWithDevice:(id)arg1 desciptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(char)arg6 ;
@end

