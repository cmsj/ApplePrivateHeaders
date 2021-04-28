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

@interface CMHealthTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;

}
-(void)dealloc;
-(id)init;
-(void)_teardown;
-(void)_queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_queryVO2MaxInputsFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
