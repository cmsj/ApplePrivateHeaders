/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OITSUProgressObserver : NSObject {

	double mValueInterval;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mHandler;
	double mLastHandledValue;
	char mLastHandledIndeterminate;

}

@property (nonatomic,readonly) double valueInterval; 
-(void)dealloc;
-(id)init;
-(id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(char)arg3 ;
-(double)valueInterval;
@end

