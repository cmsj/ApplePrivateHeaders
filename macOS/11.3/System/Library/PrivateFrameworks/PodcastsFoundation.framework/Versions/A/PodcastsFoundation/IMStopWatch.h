/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMStopWatch : NSObject {

	unsigned long long _startTime;
	NSString* _descriptionString;

}
+(void)initialize;
+(id)stopwatch;
+(id)stopwatchWithDescription:(id)arg1 ;
-(id)description;
-(id)init;
-(void)start;
-(void)reset;
-(double)time;
-(void)setDescription:(id)arg1 ;
-(void)report;
-(void)reportWithMarker:(id)arg1 ;
@end

