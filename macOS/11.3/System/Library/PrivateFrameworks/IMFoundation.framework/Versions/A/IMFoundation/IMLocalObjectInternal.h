/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class IMMessageContext, NSRecursiveLock, NSObject, NSString, NSProtocolChecker, NSArray, NSMutableArray;

@interface IMLocalObjectInternal : NSObject {

	IMMessageContext* _currentMessageContext;
	NSRecursiveLock* _lock;
	id _target;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _portName;
	NSString* _processName;
	NSProtocolChecker* _protocolChecker;
	NSArray* _whitelistedClasses;
	CFRunLoopSourceRef _runloopSource;
	NSRecursiveLock* _componentQueueProcessingLock;
	NSMutableArray* _componentQueue;
	os_unfair_lock_s _componentQueueLock;
	char _pendingComponentQueueProcessing;
	char _busyForwarding;
	char _offMainThread;
	char _wasInterrupted;

}
-(void)dealloc;
@end
