/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCInterface, NSMutableArray, NSObject;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject {

	NSXPCInterface* _interface;
	NSMutableArray* _pendingInvocations;
	id _target;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCInterface * interface;                       //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingInvocations;              //@synthesize pendingInvocations=_pendingInvocations - In the implementation block
@property (nonatomic,retain) id target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)failWithError:(id)arg1 ;
-(id)remoteObjectProxy;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCInterface *)interface;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(NSMutableArray *)pendingInvocations;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
-(void)_assertVoidReturnValueInInvocation:(id)arg1 ;
-(id)initWithInterface:(id)arg1 queue:(id)arg2 ;
-(void)fulfillWithRemoteObject:(id)arg1 ;
@end

