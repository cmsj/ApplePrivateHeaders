/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
@class NSObject;

@interface SUPowerSourceMonitor : NSObject {

	CFRunLoopSourceRef _powerRunLoopSource;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	/*^block*/id _notifyBlock;
	char _isAC;

}
+(char)isSafeToAutoInstallGivenCurrentPowerSources;
+(char)isRunningOnACPower;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)_handleChangeInPowerSource;
-(void)_startObservingPowerSource;
-(void)_stopObservingPowerSource;
-(id)initWithQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

