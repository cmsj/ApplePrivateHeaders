/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Versions/A/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPSNNOptimizer, MLPNetwork;

@interface MLPOptimizer : NSObject {

	MPSNNOptimizer* _mpsOptimizer;
	MLPNetwork* _network;

}

@property (readonly) MPSNNOptimizer * mpsOptimizer;              //@synthesize mpsOptimizer=_mpsOptimizer - In the implementation block
@property (__weak,readonly) MLPNetwork * network;                //@synthesize network=_network - In the implementation block
+(id)optimizerWithNetwork:(id)arg1 momentum:(/*^block*/id)arg2 velocity:(/*^block*/id)arg3 ;
-(MLPNetwork *)network;
-(id)initWithNetwork:(id)arg1 mpsOptimizer:(id)arg2 ;
-(MPSNNOptimizer *)mpsOptimizer;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 ;
-(void)updateLearningRate:(float)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 ;
@end
