/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVFrameRateRange;

@interface AVCaptureSystemPressureStateInternal : NSObject {

	int _figLevel;
	unsigned long long _factors;
	AVFrameRateRange* _recommendedFrameRateRangeForPortrait;

}

@property (readonly) int figLevel; 
@property (readonly) unsigned long long factors; 
@property (readonly) AVFrameRateRange * recommendedFrameRateRangeForPortrait; 
-(void)dealloc;
-(id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3 ;
-(int)figLevel;
-(unsigned long long)factors;
-(AVFrameRateRange *)recommendedFrameRateRangeForPortrait;
@end
