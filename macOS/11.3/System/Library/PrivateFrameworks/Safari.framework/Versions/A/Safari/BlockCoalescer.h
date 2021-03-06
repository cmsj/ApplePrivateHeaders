/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BlockCoalescer : NSObject {

	double _minimumTimeIntervalBeforeExecution;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}
-(void)scheduleBlock:(/*^block*/id)arg1 ;
-(id)initWithMinimumTimeIntervalBeforeExecution:(double)arg1 queue:(id)arg2 ;
@end

