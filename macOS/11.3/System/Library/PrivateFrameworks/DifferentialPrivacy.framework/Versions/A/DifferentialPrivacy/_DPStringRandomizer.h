/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DPStringRandomizer;
@interface _DPStringRandomizer : NSObject {

	id<_DPStringRandomizer> _randomizer;
	unsigned long long _algorithm;

}

@property (nonatomic,readonly) unsigned long long algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) id<_DPStringRandomizer> randomizer;              //@synthesize randomizer=_randomizer - In the implementation block
+(id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 huffmanTableClass:(id)arg5 ;
+(id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 ;
-(id)description;
-(id)init;
-(unsigned long long)algorithm;
-(id<_DPStringRandomizer>)randomizer;
-(id)initWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 huffmanTableClass:(id)arg5 ;
@end

