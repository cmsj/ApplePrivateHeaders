/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CHHapticParameterCurve : NSObject {

	NSString* _param;
	double _time;
	NSArray* _controlPoints;

}

@property (readonly) NSString * parameterID;               //@synthesize param=_param - In the implementation block
@property (assign) double relativeTime;                    //@synthesize time=_time - In the implementation block
@property (readonly) NSArray * controlPoints; 
-(id)init;
-(NSArray *)controlPoints;
-(double)relativeTime;
-(NSString *)parameterID;
-(id)initWithParameterID:(id)arg1 controlPoints:(id)arg2 relativeTime:(double)arg3 ;
-(void)setRelativeTime:(double)arg1 ;
@end

