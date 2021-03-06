/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSEventMonitorDelegate, OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSEventMonitor : NSObject {

	id<SSEventMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _eventConnection;

}

@property (assign) id<SSEventMonitorDelegate> delegate; 
-(void)dealloc;
-(id)init;
-(id<SSEventMonitorDelegate>)delegate;
-(void)setDelegate:(id<SSEventMonitorDelegate>)arg1 ;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_connectEventConnection;
@end

