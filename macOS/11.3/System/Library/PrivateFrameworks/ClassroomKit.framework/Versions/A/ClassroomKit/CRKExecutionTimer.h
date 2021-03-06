/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CRKExecutionTimer : NSObject {

	NSString* _timerDescription;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy,readonly) NSString * timerDescription;              //@synthesize timerDescription=_timerDescription - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
+(id)startedTimerWithDescription:(id)arg1 ;
-(void)start;
-(id)stop;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(NSString *)timerDescription;
@end

