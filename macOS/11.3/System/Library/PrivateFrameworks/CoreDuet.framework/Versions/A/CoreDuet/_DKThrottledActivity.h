/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKSimpleKeyValueStore;
@class NSString;

@interface _DKThrottledActivity : NSObject {

	NSString* _namespace;
	id<_DKSimpleKeyValueStore> _store;

}

@property (nonatomic,readonly) id<_DKSimpleKeyValueStore> store; 
+(id)standardInstance;
-(id)description;
-(id<_DKSimpleKeyValueStore>)store;
-(id)initWithStore:(id)arg1 namespace:(id)arg2 ;
-(void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)clearHistoryForName:(id)arg1 ;
-(void)setDate:(id)arg1 forName:(id)arg2 ;
@end

