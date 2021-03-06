/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FPGracePeriodTimer : NSObject {

	/*^block*/id _action;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	double _delay;
	NSObject*<OS_dispatch_source> _timer;
	double _expectedFiringTimeSinceReferenceDate;

}
-(void)arm;
-(void)_createTimer;
-(id)prettyDescription;
-(void)suppress;
-(id)initWithAction:(/*^block*/id)arg1 callbackQueue:(id)arg2 delay:(double)arg3 ;
@end

