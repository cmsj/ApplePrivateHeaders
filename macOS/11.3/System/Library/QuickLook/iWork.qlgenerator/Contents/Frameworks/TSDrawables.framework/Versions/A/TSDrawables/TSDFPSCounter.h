/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSDFPSCounter : NSObject {

	NSMutableArray* _sampleArray;
	double _startTimeInterval;
	double _endTimeInterval;
	unsigned long long _frameCount;

}
-(id)init;
-(void)reset;
-(void)addSample:(id)arg1 ;
-(void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2 ;
-(id)p_fpsSummaryStringIncludingGraph:(char)arg1 ;
-(void)addFrame;
-(void)addFrameAtDrawTime:(double)arg1 ;
-(id)fpsSummaryString;
-(id)fpsGraphString;
-(id)p_fpsInfo;
-(id)p_modeFromArray:(id)arg1 ;
-(double)p_standardDeviationFromArray:(id)arg1 mean:(double)arg2 ;
-(id)formatInfoForLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 testName:(id)arg4 direction:(id)arg5 duration:(double)arg6 slide:(long long)arg7 ;
@end

