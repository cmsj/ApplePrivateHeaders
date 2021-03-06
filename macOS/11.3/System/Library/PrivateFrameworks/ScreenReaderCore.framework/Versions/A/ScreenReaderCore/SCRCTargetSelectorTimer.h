/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCTargetSelector.h>

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {

	CFRunLoopTimerRef _timer;
	id _key;
	char _isCanceled;
	char _isPending;
	id _object;
	NSLock* _lock;
	char _createdTimer;
	/*^block*/id _block;

}
+(void)initialize;
+(void)_runThread;
+(void)_assignThreadPriority;
-(void)dealloc;
-(void)invalidate;
-(void)cancel;
-(char)isCancelled;
-(char)isPending;
-(char)isCanceled;
-(char)_createdTimer;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3 ;
-(void)dispatchAfterDelay:(double)arg1 ;
-(void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2 ;
-(id)_initWithTarget:(id)arg1 selector:(SEL)arg2 threadKeyOrThread:(id)arg3 ;
-(void)_dispatchThreadHelper:(/*^block*/id)arg1 ;
-(void)_runTimerBlock:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 thread:(id)arg3 ;
-(void)dispatchAfterDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)threadKey;
-(void)_dispatch;
-(void)_dispatchMainThread;
-(void)_dispatchSCRCThread;
@end

