/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNGramMatrixCallback;
@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode {

	float _alpha;
	id<MPSNNGramMatrixCallback> _propertyCallBack;

}

@property (nonatomic,readonly) float alpha;                                             //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) id<MPSNNGramMatrixCallback> propertyCallBack;              //@synthesize propertyCallBack=_propertyCallBack - In the implementation block
+(id)nodeWithSource:(id)arg1 ;
+(id)nodeWithSource:(id)arg1 alpha:(float)arg2 ;
-(void)dealloc;
-(id)initWithSource:(id)arg1 ;
-(float)alpha;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id<MPSNNGramMatrixCallback>)propertyCallBack;
-(void)setPropertyCallBack:(id<MPSNNGramMatrixCallback>)arg1 ;
-(id)initWithSource:(id)arg1 alpha:(float)arg2 ;
@end

