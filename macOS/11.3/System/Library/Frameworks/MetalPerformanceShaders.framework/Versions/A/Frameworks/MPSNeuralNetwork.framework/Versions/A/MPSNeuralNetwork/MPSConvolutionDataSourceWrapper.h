/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSObject, MPSNNNeuronDescriptor, NSString;

@interface MPSConvolutionDataSourceWrapper : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNConvolutionDataSource> _dataSource;
	MPSCNNConvolutionDescriptor* _convolution;
	NSObject* _batchNorm;
	MPSNNNeuronDescriptor* _neuron;
	atomic<long> _loadCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperForDataSource:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)debugDescription;
-(void)initialize;
-(char)load;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(id)initWithDataSource:(id)arg1 ;
-(void*)weights;
-(float*)biasTerms;
-(void)purge;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3 ;
-(char)updateWithGradientState:(id)arg1 sourceState:(id)arg2 ;
-(NeuronInfo)neuronInfo;
-(char)appendNeuron:(const NeuronInfo*)arg1 ;
-(char)appendBatchNorm:(id)arg1 ;
-(char)appendNeuronDescriptor:(id)arg1 ;
-(char)hasBatchNorm;
@end

