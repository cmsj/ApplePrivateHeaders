/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKCurveNoiseModifier : GKNoiseModifier {

	double* _parameters;
	double* _controlPoints;
	int _count;

}
-(void)dealloc;
-(id)init;
-(double)valueAt:;
-(id)initWithControlPoints:(id)arg1 ;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

