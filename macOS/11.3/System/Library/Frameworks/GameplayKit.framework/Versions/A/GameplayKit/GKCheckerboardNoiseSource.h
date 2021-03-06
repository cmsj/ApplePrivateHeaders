/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCheckerboardNoiseSource : GKNoiseSource {

	double _squareSize;

}

@property (assign,nonatomic) double squareSize;              //@synthesize squareSize=_squareSize - In the implementation block
+(id)checkerboardNoiseWithSquareSize:(double)arg1 ;
-(id)init;
-(double)valueAt:;
-(id)initWithSquareSize:(double)arg1 ;
-(id)cloneModule;
-(void)setSquareSize:(double)arg1 ;
-(double)squareSize;
@end

