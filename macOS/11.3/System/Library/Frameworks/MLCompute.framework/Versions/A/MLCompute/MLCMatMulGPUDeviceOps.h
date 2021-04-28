/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSMutableArray, NSArray;

@interface MLCMatMulGPUDeviceOps : MLCGPUDeviceOps {

	id _matmulKernel;
	id _reduceSumKernel;
	NSMutableArray* _matrixDescs;
	NSMutableArray* _forwardMatricesOrNDArrays;
	NSMutableArray* _gradientMatricesOrNDArrays;
	NSArray* _shapes;
	NSArray* _transposeLeft;
	NSArray* _transposeRight;
	NSArray* _gradientLeftRightMatrixSelectionFlags;
	NSArray* _broadcastingFlags;
	NSMutableArray* _reductionShapes;

}

@property (nonatomic,retain) id matmulKernel;                                              //@synthesize matmulKernel=_matmulKernel - In the implementation block
@property (nonatomic,retain) id reduceSumKernel;                                           //@synthesize reduceSumKernel=_reduceSumKernel - In the implementation block
@property (nonatomic,retain) NSMutableArray * matrixDescs;                                 //@synthesize matrixDescs=_matrixDescs - In the implementation block
@property (nonatomic,retain) NSMutableArray * forwardMatricesOrNDArrays;                   //@synthesize forwardMatricesOrNDArrays=_forwardMatricesOrNDArrays - In the implementation block
@property (nonatomic,retain) NSMutableArray * gradientMatricesOrNDArrays;                  //@synthesize gradientMatricesOrNDArrays=_gradientMatricesOrNDArrays - In the implementation block
@property (nonatomic,retain) NSArray * shapes;                                             //@synthesize shapes=_shapes - In the implementation block
@property (nonatomic,retain) NSArray * transposeLeft;                                      //@synthesize transposeLeft=_transposeLeft - In the implementation block
@property (nonatomic,retain) NSArray * transposeRight;                                     //@synthesize transposeRight=_transposeRight - In the implementation block
@property (nonatomic,retain) NSArray * gradientLeftRightMatrixSelectionFlags;              //@synthesize gradientLeftRightMatrixSelectionFlags=_gradientLeftRightMatrixSelectionFlags - In the implementation block
@property (nonatomic,retain) NSArray * broadcastingFlags;                                  //@synthesize broadcastingFlags=_broadcastingFlags - In the implementation block
@property (nonatomic,retain) NSMutableArray * reductionShapes;                             //@synthesize reductionShapes=_reductionShapes - In the implementation block
+(id)deviceOps;
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 ;
-(void)setMatmulKernel:(id)arg1 ;
-(void)setReduceSumKernel:(id)arg1 ;
-(void)setTransposeLeft:(NSArray *)arg1 ;
-(void)setTransposeRight:(NSArray *)arg1 ;
-(void)setGradientLeftRightMatrixSelectionFlags:(NSArray *)arg1 ;
-(void)setMatrixDescs:(NSMutableArray *)arg1 ;
-(void)setShapes:(NSArray *)arg1 ;
-(void)setBroadcastingFlags:(NSArray *)arg1 ;
-(void)setReductionShapes:(NSMutableArray *)arg1 ;
-(id)matmulKernel;
-(NSArray *)shapes;
-(NSArray *)transposeLeft;
-(NSArray *)transposeRight;
-(NSMutableArray *)forwardMatricesOrNDArrays;
-(NSArray *)broadcastingFlags;
-(NSMutableArray *)matrixDescs;
-(NSArray *)gradientLeftRightMatrixSelectionFlags;
-(NSMutableArray *)gradientMatricesOrNDArrays;
-(NSMutableArray *)reductionShapes;
-(id)reduceSumKernel;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 ;
-(void)setForwardMatricesOrNDArrays:(NSMutableArray *)arg1 ;
-(void)setGradientMatricesOrNDArrays:(NSMutableArray *)arg1 ;
@end
