/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCoherentNoiseSource : GKNoiseSource {

	int _seed;
	double _frequency;
	long long _octaveCount;
	double _lacunarity;

}

@property (assign,nonatomic) double frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long octaveCount;              //@synthesize octaveCount=_octaveCount - In the implementation block
@property (assign,nonatomic) double lacunarity;                  //@synthesize lacunarity=_lacunarity - In the implementation block
@property (assign,nonatomic) int seed;                           //@synthesize seed=_seed - In the implementation block
-(double)valueAt:;
-(int)seed;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setSeed:(int)arg1 ;
-(id)cloneModule;
-(void)setOctaveCount:(long long)arg1 ;
-(void)setLacunarity:(double)arg1 ;
-(long long)octaveCount;
-(double)lacunarity;
@end

