/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMStepCounterProxy : NSObject {

	CLConnectionClient* fLocationdConnection;
	char fStartedUpdates;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	long long fStepCountFromStart;
	long long fPrevStepCount;

}
-(void)dealloc;
-(id)init;
-(void)_teardown;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_queryStepCountStartingFromInternal:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
@end

