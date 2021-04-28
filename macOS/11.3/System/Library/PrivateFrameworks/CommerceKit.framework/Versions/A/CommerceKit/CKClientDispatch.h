/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSLock;

@interface CKClientDispatch : NSObject {

	NSObject*<OS_xpc_object> serviceXPCConnection;
	NSLock* serviceConnectionLock;
	NSObject*<OS_xpc_object> agentXPCConnection;
	NSLock* agentConnectionLock;
	NSObject*<OS_dispatch_queue> mQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_sendMessage:(id)arg1 replyQueue:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(id)_sendMessage:(id)arg1 callbackQueue:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)invokeSelector:(id)arg1 ofClass:(id)arg2 ;
-(void)invokeSelector:(id)arg1 ofClass:(id)arg2 withObject:(id)arg3 ;
-(void)invokeSelector:(id)arg1 ofClass:(id)arg2 replyQueue:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)invokeSelector:(id)arg1 ofClass:(id)arg2 withObject:(id)arg3 replyQueue:(id)arg4 replyBlock:(/*^block*/id)arg5 ;
-(id)invokeSelector:(id)arg1 ofClass:(id)arg2 withObject:(id)arg3 callbackQueue:(id)arg4 callbackBlock:(/*^block*/id)arg5 ;
-(id)_syncInvokeSelector:(id)arg1 ofClass:(id)arg2 withObject:(id)arg3 ;
-(void)cancelCallback:(id)arg1 ;
@end
