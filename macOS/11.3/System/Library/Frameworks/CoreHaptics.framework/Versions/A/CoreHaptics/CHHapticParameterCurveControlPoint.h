/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CHHapticParameterCurveControlPoint : NSObject {

	float _value;
	double _time;

}

@property (assign) double relativeTime;              //@synthesize time=_time - In the implementation block
@property (assign) float value;                      //@synthesize value=_value - In the implementation block
-(id)init;
-(float)value;
-(void)setValue:(float)arg1 ;
-(double)relativeTime;
-(id)initWithRelativeTime:(double)arg1 value:(float)arg2 ;
-(void)setRelativeTime:(double)arg1 ;
@end
