/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSNNLabelsNode, MPSCNNYOLOLossDescriptor;

@interface MPSCNNYOLOLossNode : MPSNNFilterNode {

	MPSNNLabelsNode* _labels;
	MPSCNNYOLOLossDescriptor* _descriptor;

}

@property (nonatomic,retain,readonly) MPSNNLabelsNode * inputLabels;              //@synthesize labels=_labels - In the implementation block
+(id)nodeWithSource:(id)arg1 lossDescriptor:(id)arg2 ;
-(void)dealloc;
-(FilterGraphNode*)newFilterNode;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)initWithSource:(id)arg1 lossDescriptor:(id)arg2 ;
-(id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(/*^block*/id)arg2 ;
-(MPSNNLabelsNode *)inputLabels;
@end

