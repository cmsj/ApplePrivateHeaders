/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCDeviceOps.h>

@class _MLCGPULayer, NSArray, MLCActivationDescriptor, NSMutableArray;

@interface MLCGPUDeviceOps : MLCDeviceOps {

	char _isMPSKernel;
	char _computeWeightsAndBiasOnly;
	char _countIncludesPadding;
	char _useSourceGradientDeviceMemoryForResultGradientTensor;
	char _useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
	char _recomputeResultTensor;
	int _metalKernelType;
	int _arithmeticOp;
	int _constantArithmeticSourcesFlags;
	int _scatterReduceType;
	float _gramMatrixScale;
	_MLCGPULayer* _layer;
	id _forwardKernel;
	id _gradientKernel;
	id _secondaryGradientKernel;
	id _lossInitialGradientKernel;
	id _combinedForwardAndGradientLossKernel;
	id _reduceLossKernel;
	id _gradientState;
	id _forwardStatisticsKernel;
	id _gradientStatisticsKernel;
	NSArray* _momentumVectors;
	NSArray* _velocityVectors;
	NSArray* _centerWeightVectors;
	id _exportableState;
	id _movingState;
	unsigned long long _totalElementsPerChannel;
	unsigned long long _paddingLeft;
	unsigned long long _paddingRight;
	unsigned long long _paddingTop;
	unsigned long long _paddingBottom;
	unsigned long long _kernelSizeInX;
	unsigned long long _kernelSizeInY;
	unsigned long long _strideInX;
	unsigned long long _strideInY;
	unsigned long long _dilationRateInX;
	unsigned long long _dilationRateInY;
	id _poolingIndicesBuffer;
	MLCActivationDescriptor* _neuronDescriptor;
	NSArray* _source0Shape;
	NSArray* _source1Shape;
	NSArray* _source2Shape;
	NSMutableArray* _transposeShape;
	NSMutableArray* _transposeGradientShape;
	NSArray* _begin;
	NSArray* _stride;
	NSArray* _end;
	unsigned long long _softmaxAxis;
	unsigned long long _scatterGatherDimension;
	unsigned long long _temporaryHeapIndex;

}

@property (nonatomic,retain) _MLCGPULayer * layer;                                                            //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) char isMPSKernel;                                                                //@synthesize isMPSKernel=_isMPSKernel - In the implementation block
@property (assign,nonatomic) int metalKernelType;                                                             //@synthesize metalKernelType=_metalKernelType - In the implementation block
@property (nonatomic,retain,readonly) id forwardKernel;                                                       //@synthesize forwardKernel=_forwardKernel - In the implementation block
@property (nonatomic,retain,readonly) id gradientKernel;                                                      //@synthesize gradientKernel=_gradientKernel - In the implementation block
@property (nonatomic,retain,readonly) id secondaryGradientKernel;                                             //@synthesize secondaryGradientKernel=_secondaryGradientKernel - In the implementation block
@property (nonatomic,retain) id lossInitialGradientKernel;                                                    //@synthesize lossInitialGradientKernel=_lossInitialGradientKernel - In the implementation block
@property (nonatomic,retain) id combinedForwardAndGradientLossKernel;                                         //@synthesize combinedForwardAndGradientLossKernel=_combinedForwardAndGradientLossKernel - In the implementation block
@property (nonatomic,retain) id reduceLossKernel;                                                             //@synthesize reduceLossKernel=_reduceLossKernel - In the implementation block
@property (nonatomic,retain) id gradientState;                                                                //@synthesize gradientState=_gradientState - In the implementation block
@property (nonatomic,retain) id forwardStatisticsKernel;                                                      //@synthesize forwardStatisticsKernel=_forwardStatisticsKernel - In the implementation block
@property (nonatomic,retain) id gradientStatisticsKernel;                                                     //@synthesize gradientStatisticsKernel=_gradientStatisticsKernel - In the implementation block
@property (nonatomic,retain) NSArray * momentumVectors;                                                       //@synthesize momentumVectors=_momentumVectors - In the implementation block
@property (nonatomic,retain) NSArray * velocityVectors;                                                       //@synthesize velocityVectors=_velocityVectors - In the implementation block
@property (nonatomic,retain) NSArray * centerWeightVectors;                                                   //@synthesize centerWeightVectors=_centerWeightVectors - In the implementation block
@property (nonatomic,retain) id exportableState;                                                              //@synthesize exportableState=_exportableState - In the implementation block
@property (nonatomic,retain) id movingState;                                                                  //@synthesize movingState=_movingState - In the implementation block
@property (assign,nonatomic) char computeWeightsAndBiasOnly;                                                  //@synthesize computeWeightsAndBiasOnly=_computeWeightsAndBiasOnly - In the implementation block
@property (assign,nonatomic) unsigned long long totalElementsPerChannel;                                      //@synthesize totalElementsPerChannel=_totalElementsPerChannel - In the implementation block
@property (assign,nonatomic) unsigned long long paddingLeft;                                                  //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (assign,nonatomic) unsigned long long paddingRight;                                                 //@synthesize paddingRight=_paddingRight - In the implementation block
@property (assign,nonatomic) unsigned long long paddingTop;                                                   //@synthesize paddingTop=_paddingTop - In the implementation block
@property (assign,nonatomic) unsigned long long paddingBottom;                                                //@synthesize paddingBottom=_paddingBottom - In the implementation block
@property (assign,nonatomic) char countIncludesPadding;                                                       //@synthesize countIncludesPadding=_countIncludesPadding - In the implementation block
@property (assign,nonatomic) unsigned long long kernelSizeInX;                                                //@synthesize kernelSizeInX=_kernelSizeInX - In the implementation block
@property (assign,nonatomic) unsigned long long kernelSizeInY;                                                //@synthesize kernelSizeInY=_kernelSizeInY - In the implementation block
@property (assign,nonatomic) unsigned long long strideInX;                                                    //@synthesize strideInX=_strideInX - In the implementation block
@property (assign,nonatomic) unsigned long long strideInY;                                                    //@synthesize strideInY=_strideInY - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateInX;                                              //@synthesize dilationRateInX=_dilationRateInX - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateInY;                                              //@synthesize dilationRateInY=_dilationRateInY - In the implementation block
@property (nonatomic,retain) id poolingIndicesBuffer;                                                         //@synthesize poolingIndicesBuffer=_poolingIndicesBuffer - In the implementation block
@property (assign,nonatomic) char useSourceGradientDeviceMemoryForResultGradientTensor;                       //@synthesize useSourceGradientDeviceMemoryForResultGradientTensor=_useSourceGradientDeviceMemoryForResultGradientTensor - In the implementation block
@property (assign,nonatomic) char useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;              //@synthesize useSourceGradientDeviceMemoryForSecondaryResultGradientTensor=_useSourceGradientDeviceMemoryForSecondaryResultGradientTensor - In the implementation block
@property (nonatomic,retain) MLCActivationDescriptor * neuronDescriptor;                                      //@synthesize neuronDescriptor=_neuronDescriptor - In the implementation block
@property (assign,nonatomic) int arithmeticOp;                                                                //@synthesize arithmeticOp=_arithmeticOp - In the implementation block
@property (nonatomic,copy) NSArray * source0Shape;                                                            //@synthesize source0Shape=_source0Shape - In the implementation block
@property (nonatomic,copy) NSArray * source1Shape;                                                            //@synthesize source1Shape=_source1Shape - In the implementation block
@property (nonatomic,copy) NSArray * source2Shape;                                                            //@synthesize source2Shape=_source2Shape - In the implementation block
@property (assign,nonatomic) int constantArithmeticSourcesFlags;                                              //@synthesize constantArithmeticSourcesFlags=_constantArithmeticSourcesFlags - In the implementation block
@property (nonatomic,retain) NSMutableArray * transposeShape;                                                 //@synthesize transposeShape=_transposeShape - In the implementation block
@property (nonatomic,retain) NSMutableArray * transposeGradientShape;                                         //@synthesize transposeGradientShape=_transposeGradientShape - In the implementation block
@property (nonatomic,copy) NSArray * begin;                                                                   //@synthesize begin=_begin - In the implementation block
@property (nonatomic,copy) NSArray * stride;                                                                  //@synthesize stride=_stride - In the implementation block
@property (nonatomic,copy) NSArray * end;                                                                     //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) unsigned long long softmaxAxis;                                                  //@synthesize softmaxAxis=_softmaxAxis - In the implementation block
@property (assign,nonatomic) unsigned long long scatterGatherDimension;                                       //@synthesize scatterGatherDimension=_scatterGatherDimension - In the implementation block
@property (assign,nonatomic) int scatterReduceType;                                                           //@synthesize scatterReduceType=_scatterReduceType - In the implementation block
@property (assign,nonatomic) float gramMatrixScale;                                                           //@synthesize gramMatrixScale=_gramMatrixScale - In the implementation block
@property (assign,nonatomic) char recomputeResultTensor;                                                      //@synthesize recomputeResultTensor=_recomputeResultTensor - In the implementation block
@property (assign,nonatomic) unsigned long long temporaryHeapIndex;                                           //@synthesize temporaryHeapIndex=_temporaryHeapIndex - In the implementation block
+(id)deviceOps;
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 ;
+(id)deviceOpsWithForwardKernel:(id)arg1 ;
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSArray *)stride;
-(NSArray *)end;
-(NSArray *)begin;
-(_MLCGPULayer *)layer;
-(void)setLayer:(_MLCGPULayer *)arg1 ;
-(void)setStride:(NSArray *)arg1 ;
-(id)forwardKernel;
-(id)secondaryGradientKernel;
-(unsigned long long)strideInX;
-(void)setStrideInX:(unsigned long long)arg1 ;
-(unsigned long long)strideInY;
-(void)setStrideInY:(unsigned long long)arg1 ;
-(id)gradientKernel;
-(NSArray *)momentumVectors;
-(NSArray *)velocityVectors;
-(NSArray *)centerWeightVectors;
-(void)setMomentumVectors:(NSArray *)arg1 ;
-(void)setVelocityVectors:(NSArray *)arg1 ;
-(void)setCenterWeightVectors:(NSArray *)arg1 ;
-(unsigned long long)dilationRateInX;
-(unsigned long long)dilationRateInY;
-(void)setLossInitialGradientKernel:(id)arg1 ;
-(void)setCombinedForwardAndGradientLossKernel:(id)arg1 ;
-(void)setReduceLossKernel:(id)arg1 ;
-(void)setIsMPSKernel:(char)arg1 ;
-(void)setMetalKernelType:(int)arg1 ;
-(void)setPaddingLeft:(unsigned long long)arg1 ;
-(void)setPaddingRight:(unsigned long long)arg1 ;
-(void)setPaddingTop:(unsigned long long)arg1 ;
-(void)setPaddingBottom:(unsigned long long)arg1 ;
-(void)setForwardStatisticsKernel:(id)arg1 ;
-(void)setNeuronDescriptor:(MLCActivationDescriptor *)arg1 ;
-(void)setSource0Shape:(NSArray *)arg1 ;
-(void)setSource1Shape:(NSArray *)arg1 ;
-(void)setArithmeticOp:(int)arg1 ;
-(void)setUseSourceGradientDeviceMemoryForResultGradientTensor:(char)arg1 ;
-(void)setDilationRateInX:(unsigned long long)arg1 ;
-(void)setDilationRateInY:(unsigned long long)arg1 ;
-(char)countIncludesPadding;
-(void)setScatterGatherDimension:(unsigned long long)arg1 ;
-(void)setScatterReduceType:(int)arg1 ;
-(unsigned long long)paddingLeft;
-(unsigned long long)paddingRight;
-(unsigned long long)paddingTop;
-(unsigned long long)paddingBottom;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5 ;
-(id)gradientState;
-(id)lossInitialGradientKernel;
-(id)forwardStatisticsKernel;
-(id)gradientStatisticsKernel;
-(char)isMPSKernel;
-(int)metalKernelType;
-(id)combinedForwardAndGradientLossKernel;
-(id)reduceLossKernel;
-(void)setGradientState:(id)arg1 ;
-(void)setGradientStatisticsKernel:(id)arg1 ;
-(id)exportableState;
-(void)setExportableState:(id)arg1 ;
-(id)movingState;
-(void)setMovingState:(id)arg1 ;
-(char)computeWeightsAndBiasOnly;
-(void)setComputeWeightsAndBiasOnly:(char)arg1 ;
-(unsigned long long)totalElementsPerChannel;
-(void)setTotalElementsPerChannel:(unsigned long long)arg1 ;
-(void)setCountIncludesPadding:(char)arg1 ;
-(unsigned long long)kernelSizeInX;
-(void)setKernelSizeInX:(unsigned long long)arg1 ;
-(unsigned long long)kernelSizeInY;
-(void)setKernelSizeInY:(unsigned long long)arg1 ;
-(id)poolingIndicesBuffer;
-(void)setPoolingIndicesBuffer:(id)arg1 ;
-(char)useSourceGradientDeviceMemoryForResultGradientTensor;
-(char)useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
-(void)setUseSourceGradientDeviceMemoryForSecondaryResultGradientTensor:(char)arg1 ;
-(MLCActivationDescriptor *)neuronDescriptor;
-(int)arithmeticOp;
-(NSArray *)source0Shape;
-(NSArray *)source1Shape;
-(NSArray *)source2Shape;
-(void)setSource2Shape:(NSArray *)arg1 ;
-(int)constantArithmeticSourcesFlags;
-(void)setConstantArithmeticSourcesFlags:(int)arg1 ;
-(NSMutableArray *)transposeShape;
-(void)setTransposeShape:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transposeGradientShape;
-(void)setTransposeGradientShape:(NSMutableArray *)arg1 ;
-(void)setBegin:(NSArray *)arg1 ;
-(void)setEnd:(NSArray *)arg1 ;
-(unsigned long long)softmaxAxis;
-(void)setSoftmaxAxis:(unsigned long long)arg1 ;
-(unsigned long long)scatterGatherDimension;
-(int)scatterReduceType;
-(float)gramMatrixScale;
-(void)setGramMatrixScale:(float)arg1 ;
-(char)recomputeResultTensor;
-(void)setRecomputeResultTensor:(char)arg1 ;
-(unsigned long long)temporaryHeapIndex;
-(void)setTemporaryHeapIndex:(unsigned long long)arg1 ;
@end

