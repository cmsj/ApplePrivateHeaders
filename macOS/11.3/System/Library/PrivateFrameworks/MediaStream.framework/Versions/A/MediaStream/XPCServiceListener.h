/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Versions/A/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol XPCServiceListenerDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject, NSMutableSet;

@interface XPCServiceListener : NSObject {

	NSString* _serviceName;
	id<XPCServiceListenerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_xpc_object> _listener;
	NSMutableSet* _serviceConnections;
	unsigned long long _clientCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> listener;                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableSet * serviceConnections;                      //@synthesize serviceConnections=_serviceConnections - In the implementation block
@property (assign,nonatomic) unsigned long long clientCount;                         //@synthesize clientCount=_clientCount - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) id<XPCServiceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)debugDescription;
-(id<XPCServiceListenerDelegate>)delegate;
-(void)start;
-(NSObject*<OS_xpc_object>)listener;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)serviceName;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)clientCount;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)serviceConnectionDidDisconnect:(id)arg1 ;
-(void)_workQueueShutDownServiceConnections:(id)arg1 index:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)workQueueHandleIncomingConnection:(id)arg1 ;
-(NSMutableSet *)serviceConnections;
-(void)setServiceConnections:(NSMutableSet *)arg1 ;
-(void)setClientCount:(unsigned long long)arg1 ;
@end
