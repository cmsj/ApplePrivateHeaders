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

@interface CMNatalimeterInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	char fStartedUpdates;
	/*^block*/id fHandler;

}
-(void)dealloc;
-(id)init;
-(void)_teardown;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopAbsoluteNatalimetryDataUpdates;
-(unsigned long long)_promptsNeeded;
@end

