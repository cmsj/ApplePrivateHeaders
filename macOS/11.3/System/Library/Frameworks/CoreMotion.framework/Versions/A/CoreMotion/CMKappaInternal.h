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

@interface CMKappaInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	char fStartedUpdates;
	/*^block*/id fHandler;

}
-(void)dealloc;
-(id)init;
-(void)_teardown;
-(void)_startKappaUpdatesForItem:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_stopKappaUpdates;
@end
