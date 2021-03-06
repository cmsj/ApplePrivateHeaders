/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@protocol MPSNNLossCallback;
@class MPSCNNLossDescriptor;

@interface MPSNNLossGradientNode : MPSNNGradientFilterNode {

	unsigned _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;
	MPSCNNLossDescriptor* _descriptor;
	char _isLabelsGradientFilter;
	id<MPSNNLossCallback> _propertyCallBack;
	char _reduceAcrossBatch;

}

@property (nonatomic,readonly) unsigned lossType;                                 //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                                 //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses;                //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (nonatomic,readonly) char reduceAcrossBatch;                            //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
@property (nonatomic,readonly) float weight;                                      //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) float labelSmoothing;                              //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (nonatomic,readonly) float epsilon;                                     //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) float delta;                                       //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) char isLabelsGradientFilter;                       //@synthesize isLabelsGradientFilter=_isLabelsGradientFilter - In the implementation block
@property (nonatomic,retain) id<MPSNNLossCallback> propertyCallBack;              //@synthesize propertyCallBack=_propertyCallBack - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 weights:(id)arg4 gradientState:(id)arg5 lossDescriptor:(id)arg6 isLabelsGradientFilter:(char)arg7 ;
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 gradientState:(id)arg4 lossDescriptor:(id)arg5 isLabelsGradientFilter:(char)arg6 ;
+(id)nodeWithSources:(id)arg1 gradientState:(id)arg2 lossDescriptor:(id)arg3 isLabelsGradientFilter:(char)arg4 ;
-(void)dealloc;
-(float)weight;
-(float)delta;
-(float)epsilon;
-(unsigned long long)numberOfClasses;
-(unsigned)lossType;
-(FilterGraphNode*)newFilterNode;
-(id)gradientFilterWithSources:(id)arg1 ;
-(int)reductionType;
-(float)labelSmoothing;
-(char)reduceAcrossBatch;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 weights:(id)arg4 gradientState:(id)arg5 lossDescriptor:(id)arg6 isLabelsGradientFilter:(char)arg7 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 gradientState:(id)arg4 lossDescriptor:(id)arg5 isLabelsGradientFilter:(char)arg6 ;
-(id<MPSNNLossCallback>)propertyCallBack;
-(void)setPropertyCallBack:(id<MPSNNLossCallback>)arg1 ;
-(id)initWithSources:(id)arg1 gradientState:(id)arg2 lossDescriptor:(id)arg3 isLabelsGradientFilter:(char)arg4 ;
-(char)isLabelsGradientFilter;
@end

