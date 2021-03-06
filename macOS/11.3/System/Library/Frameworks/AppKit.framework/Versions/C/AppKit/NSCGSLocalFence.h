/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSLock, NSObject;

@interface NSCGSLocalFence : NSObject {

	NSLock* _lock;
	char _armed;
	long long _pendingTransactions;
	long long _waitingTransactions;
	NSObject*<OS_dispatch_semaphore> _waitSem;

}
+(id)fence;
-(void)dealloc;
-(id)init;
-(void)set;
-(void)arm;
-(void)_signalWaiters;
@end

