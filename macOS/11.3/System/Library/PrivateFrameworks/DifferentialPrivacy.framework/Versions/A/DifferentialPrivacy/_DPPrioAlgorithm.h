/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
@class _DPBiasedCoin;

@interface _DPPrioAlgorithm : NSObject {

	double _epsilon;
	unsigned long long _dimension;
	SCD_Struct_DP1* _prioMemory;
	_DPBiasedCoin* _coin;

}

@property (nonatomic,readonly) double epsilon;                            //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) unsigned long long dimension;              //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) SCD_Struct_DP1* prioMemory;                //@synthesize prioMemory=_prioMemory - In the implementation block
@property (nonatomic,readonly) _DPBiasedCoin * coin;                      //@synthesize coin=_coin - In the implementation block
+(id)prioWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)dimension;
-(double)epsilon;
-(id)initWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 ;
-(_DPBiasedCoin *)coin;
-(SCD_Struct_DP1*)prioMemory;
-(id)privatizeDataWithBlock:(/*^block*/id)arg1 ;
@end
