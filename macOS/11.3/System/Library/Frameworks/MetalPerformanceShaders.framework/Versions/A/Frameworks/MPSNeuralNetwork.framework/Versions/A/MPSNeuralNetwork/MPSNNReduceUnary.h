/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNReduceUnary : MPSCNNKernel {

	SCD_Struct_MP4 _clipRectSource;
	int _reduceOp;
	float _weightValue;

}

@property (assign,nonatomic) SCD_Struct_MP4 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP4)clipRectSource;
-(void)setClipRectSource:(SCD_Struct_MP4)arg1 ;
-(void)setWeightValue:(float)arg1 ;
-(id)initWithDevice:(id)arg1 reduceOperation:(int)arg2 ;
@end

