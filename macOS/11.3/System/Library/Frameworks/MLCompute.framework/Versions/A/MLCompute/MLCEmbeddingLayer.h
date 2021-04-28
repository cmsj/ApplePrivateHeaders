/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class MLCEmbeddingDescriptor, MLCTensor, MLCTensorParameter;

@interface MLCEmbeddingLayer : MLCLayer {

	MLCEmbeddingDescriptor* _descriptor;
	MLCTensor* _weights;
	MLCTensorParameter* _weightsParameter;

}

@property (nonatomic,copy,readonly) MLCEmbeddingDescriptor * descriptor;                  //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * weights;                                //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * weightsParameter;              //@synthesize weightsParameter=_weightsParameter - In the implementation block
+(char)supportsDataType:(int)arg1 onDevice:(id)arg2 ;
+(id)layerWithDescriptor:(id)arg1 weights:(id)arg2 ;
-(id)description;
-(MLCEmbeddingDescriptor *)descriptor;
-(MLCTensor *)weights;
-(char)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(char)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(char)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(char)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(MLCTensorParameter *)weightsParameter;
-(void)allocateGradientsForParameters;
-(id)initWithDescriptor:(id)arg1 weight:(id)arg2 ;
@end
