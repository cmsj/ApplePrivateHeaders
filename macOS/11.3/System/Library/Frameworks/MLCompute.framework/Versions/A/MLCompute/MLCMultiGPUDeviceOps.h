/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSArray, NSMutableArray;

@interface MLCMultiGPUDeviceOps : MLCGPUDeviceOps {

	int _multiGPUReduction;
	NSArray* _localGradientMatrices;
	NSArray* _remoteGradientBuffers;
	NSArray* _receivedGradientMatrices;
	NSArray* _matrixSumKernels;
	NSMutableArray* _allReducedGradientMatrices;
	NSMutableArray* _rnnTrainableWeightGradients;

}

@property (assign,nonatomic) int multiGPUReduction;                                     //@synthesize multiGPUReduction=_multiGPUReduction - In the implementation block
@property (nonatomic,retain) NSArray * localGradientMatrices;                           //@synthesize localGradientMatrices=_localGradientMatrices - In the implementation block
@property (nonatomic,retain) NSArray * remoteGradientBuffers;                           //@synthesize remoteGradientBuffers=_remoteGradientBuffers - In the implementation block
@property (nonatomic,retain) NSArray * receivedGradientMatrices;                        //@synthesize receivedGradientMatrices=_receivedGradientMatrices - In the implementation block
@property (nonatomic,retain) NSArray * matrixSumKernels;                                //@synthesize matrixSumKernels=_matrixSumKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * allReducedGradientMatrices;               //@synthesize allReducedGradientMatrices=_allReducedGradientMatrices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnTrainableWeightGradients;              //@synthesize rnnTrainableWeightGradients=_rnnTrainableWeightGradients - In the implementation block
+(id)multiGPUDeviceOpsWithGPUDeviceOps:(id)arg1 ;
-(NSMutableArray *)rnnTrainableWeightGradients;
-(NSArray *)localGradientMatrices;
-(NSArray *)receivedGradientMatrices;
-(NSArray *)remoteGradientBuffers;
-(NSMutableArray *)allReducedGradientMatrices;
-(NSArray *)matrixSumKernels;
-(void)setRemoteGradientBuffers:(NSArray *)arg1 ;
-(void)setLocalGradientMatrices:(NSArray *)arg1 ;
-(void)setReceivedGradientMatrices:(NSArray *)arg1 ;
-(void)setMatrixSumKernels:(NSArray *)arg1 ;
-(void)setAllReducedGradientMatrices:(NSMutableArray *)arg1 ;
-(void)setMultiGPUReduction:(int)arg1 ;
-(void)setRnnTrainableWeightGradients:(NSMutableArray *)arg1 ;
-(id)initWithGPUDevicOps:(id)arg1 ;
-(int)multiGPUReduction;
@end

