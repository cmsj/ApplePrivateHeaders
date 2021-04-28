/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Versions/A/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/Montreal-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@protocol MTLBuffer;
@class MPSCNNConvolutionDescriptor, NSString, MLPDeviceHandler, MPSCNNConvolutionWeightsAndBiasesState, MPSNNOptimizerAdam, MPSVector, NSData;

@interface MLPModelConvolutionDataSource : NSObject <MPSCNNConvolutionDataSource> {

	unsigned _seed;
	unsigned long long _outputFeatureChannels;
	unsigned long long _inputFeatureChannels;
	unsigned long long _kernelHeight;
	unsigned long long _kernelWidth;
	MPSCNNConvolutionDescriptor* _convDesc;
	NSString* _kernelParamsBinaryName;
	unsigned long long _sizeBias;
	unsigned long long _sizeWeights;
	id<MTLBuffer> _weightBuffer;
	id<MTLBuffer> _biasBuffer;
	MLPDeviceHandler* _deviceHandler;
	const void* _initialWeights;
	const void* _initialBias;
	MPSCNNConvolutionWeightsAndBiasesState* _state;
	MPSNNOptimizerAdam* _optimizer;
	MPSVector* _weightMomentumVector;
	MPSVector* _weightVelocityVector;
	MPSVector* _biasMomentumVector;
	MPSVector* _biasVelocityVector;
	MLPModelOptimizerOptions _optimizerOptions;

}

@property (nonatomic,readonly) MPSNNOptimizerAdam * optimizer;                              //@synthesize optimizer=_optimizer - In the implementation block
@property (nonatomic,readonly) MPSVector * weightMomentumVector;                            //@synthesize weightMomentumVector=_weightMomentumVector - In the implementation block
@property (nonatomic,readonly) MPSVector * weightVelocityVector;                            //@synthesize weightVelocityVector=_weightVelocityVector - In the implementation block
@property (nonatomic,readonly) MPSVector * biasMomentumVector;                              //@synthesize biasMomentumVector=_biasMomentumVector - In the implementation block
@property (nonatomic,readonly) MPSVector * biasVelocityVector;                              //@synthesize biasVelocityVector=_biasVelocityVector - In the implementation block
@property (readonly) unsigned long long outputFeatureChannels;                              //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (readonly) unsigned long long inputFeatureChannels;                               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (readonly) unsigned long long kernelHeight;                                       //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (readonly) unsigned long long kernelWidth;                                        //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (readonly) MPSCNNConvolutionDescriptor * convDesc;                                //@synthesize convDesc=_convDesc - In the implementation block
@property (readonly) NSString * kernelParamsBinaryName;                                     //@synthesize kernelParamsBinaryName=_kernelParamsBinaryName - In the implementation block
@property (readonly) unsigned long long sizeBias;                                           //@synthesize sizeBias=_sizeBias - In the implementation block
@property (readonly) unsigned long long sizeWeights;                                        //@synthesize sizeWeights=_sizeWeights - In the implementation block
@property (readonly) unsigned seed;                                                         //@synthesize seed=_seed - In the implementation block
@property (readonly) MLPModelOptimizerOptions optimizerOptions;                             //@synthesize optimizerOptions=_optimizerOptions - In the implementation block
@property (readonly) id<MTLBuffer> weightBuffer;                                            //@synthesize weightBuffer=_weightBuffer - In the implementation block
@property (readonly) id<MTLBuffer> biasBuffer;                                              //@synthesize biasBuffer=_biasBuffer - In the implementation block
@property (readonly) MLPDeviceHandler * deviceHandler;                                      //@synthesize deviceHandler=_deviceHandler - In the implementation block
@property (readonly) NSData * weightsInWHIOOrder; 
@property (assign) const void* initialWeights;                                              //@synthesize initialWeights=_initialWeights - In the implementation block
@property (assign) const void* initialBias;                                                 //@synthesize initialBias=_initialBias - In the implementation block
@property (nonatomic,readonly) MPSCNNConvolutionWeightsAndBiasesState * state;              //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)load;
-(MPSCNNConvolutionWeightsAndBiasesState *)state;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(MLPDeviceHandler *)deviceHandler;
-(void*)weights;
-(float*)biasTerms;
-(void)purge;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)weight_size;
-(unsigned long long)bias_size;
-(void)setInitialWeights:(const void*)arg1 ;
-(MPSNNOptimizerAdam *)optimizer;
-(const void*)initialWeights;
-(void)setInitialBias:(const void*)arg1 ;
-(const void*)initialBias;
-(id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 stride:(unsigned long long)arg5 kernelParamsBinaryName:(id)arg6 initialWeights:(const void*)arg7 initialBias:(const void*)arg8 deviceHandler:(id)arg9 optimizerOptions:(MLPModelOptimizerOptions)arg10 ;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 ;
-(NSData *)weightsInWHIOOrder;
-(unsigned long long)sizeWeights;
-(unsigned long long)sizeBias;
-(id<MTLBuffer>)biasBuffer;
-(void)bootstrapWeights:(id*)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 values:(const void*)arg5 ;
-(void)bootstrapBias:(id*)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 values:(const void*)arg5 ;
-(id<MTLBuffer>)weightBuffer;
-(void)bootstrapBuffer:(id)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 ;
-(void)checkpointWithCommandQueue:(id)arg1 ;
-(MPSVector *)weightMomentumVector;
-(MPSVector *)biasMomentumVector;
-(MPSVector *)weightVelocityVector;
-(MPSVector *)biasVelocityVector;
-(NSString *)kernelParamsBinaryName;
-(unsigned long long)outputFeatureChannels;
-(unsigned long long)inputFeatureChannels;
-(MPSCNNConvolutionDescriptor *)convDesc;
-(unsigned)seed;
-(MLPModelOptimizerOptions)optimizerOptions;
@end
