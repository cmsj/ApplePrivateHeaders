/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SODownloadDisplayManager : NSObject {

	double _currentBytesPerSecondValue;
	double _timeRemainingAvergingWindow[7];

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(double)timeRemainingForActiveInstallations:(id)arg1 withTagPrefix:(id)arg2 ;
-(void)_appendAveragingTimeInterval:(double)arg1 ;
-(double)_averagedTimeInterval;
@end
