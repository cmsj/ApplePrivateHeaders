/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/Versions/A/BookCoverUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;
@class NSObject, NSHashTable, CARenderer;

@interface BCULayerRenderer : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSHashTable* _operations;
	CARenderer* _renderer;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	char _suspended;

}
-(id)init;
-(void)resume;
-(void)suspend;
-(void)_startOperation:(id)arg1 ;
-(id)initWithSuspended:(char)arg1 ;
-(void)_processOperations;
-(void)_disconnectLayer:(id)arg1 ;
-(id)newOperationWithPriority:(float)arg1 waitForCPUSynchronization:(char)arg2 renderLayer:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)newOperationWithPriority:(float)arg1 renderLayer:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

