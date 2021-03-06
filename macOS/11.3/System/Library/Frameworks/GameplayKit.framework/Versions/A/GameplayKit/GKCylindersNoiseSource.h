/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCylindersNoiseSource : GKNoiseSource {

	double _frequency;

}

@property (assign,nonatomic) double frequency;              //@synthesize frequency=_frequency - In the implementation block
+(id)cylindersNoiseWithFrequency:(double)arg1 ;
-(id)init;
-(double)valueAt:;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(id)initWithFrequency:(double)arg1 ;
-(id)cloneModule;
@end

