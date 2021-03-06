/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSLog.framework/Versions/A/OSLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface OSLogPosition : NSObject {

	long long _precision;
	NSDate* _date;
	double _offset;

}

@property (nonatomic,readonly) long long precision;              //@synthesize precision=_precision - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) double offset;                    //@synthesize offset=_offset - In the implementation block
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(double)offset;
-(long long)precision;
-(id)initWithEventSource:(id)arg1 timeIntervalSinceEnd:(double)arg2 ;
-(id)initWithTimeIntervalSinceLatestBoot:(double)arg1 ;
@end

