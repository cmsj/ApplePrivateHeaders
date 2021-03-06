/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <ViewBridge/NSVB_TargetedProxy.h>

@protocol NSVBXPCConnectionClient;
@class NSMutableArray;

@interface NSVB_QueueingProxy : NSVB_TargetedProxy {

	unsigned _wantsResume : 1;
	os_unfair_lock_s _lock;
	unsigned long long _suspensionCount;
	NSMutableArray* _queuedInvocations;
	/*^block*/id _shouldSuspendInvocationBlock;
	id<NSVBXPCConnectionClient> _connectionClient;

}
+(id)proxyWithTarget:(id)arg1 connectionClient:(id)arg2 shouldSuspendInvocationBlock:(/*^block*/id)arg3 ;
+(id)proxyWithTarget:(id)arg1 ;
-(void)ifWantsResume:(/*^block*/id)arg1 ;
-(void)setWantsResume:(char)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(void)forwardInvocation:(id)arg1 ;
-(char)isValid;
-(void)resume;
-(void)suspend;
-(void)_dispatchSuspendedMessages;
-(void)removeAllEnqueuedInvocations;
@end

