/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNUnaryReductionNode : MPSNNFilterNode {

	SCD_Struct_MP4 _clipRectSource;

}

@property (assign,nonatomic) SCD_Struct_MP4 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
+(id)nodeWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(id)gradientFilterWithSource:(id)arg1 ;
-(SCD_Struct_MP4)clipRectSource;
-(void)setClipRectSource:(SCD_Struct_MP4)arg1 ;
@end

