/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleLOM.framework/Versions/A/AppleLOM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LOMDeviceControllerRequestDelegate, OS_dispatch_queue, OS_nw_listener, OS_dispatch_group;
@class NSObject, NSDictionary, NSMutableSet;

@interface LOMControllerConnection : NSObject {

	char _suspended;
	id<LOMDeviceControllerRequestDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _attributes;
	NSObject*<OS_nw_listener> _listener;
	NSMutableSet* _connections;
	NSObject*<OS_dispatch_group> _connectionCancellationGroup;
	NSObject*<OS_dispatch_group> _listenerCancellationGroup;

}

@property (retain) NSDictionary * attributes;                                                     //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSObject*<OS_nw_listener> listener;                                            //@synthesize listener=_listener - In the implementation block
@property (retain) NSMutableSet * connections;                                                    //@synthesize connections=_connections - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> connectionCancellationGroup;                      //@synthesize connectionCancellationGroup=_connectionCancellationGroup - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> listenerCancellationGroup;                        //@synthesize listenerCancellationGroup=_listenerCancellationGroup - In the implementation block
@property (assign) char suspended;                                                                //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic,__weak) id<LOMDeviceControllerRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                            //@synthesize queue=_queue - In the implementation block
-(id)description;
-(id<LOMDeviceControllerRequestDelegate>)delegate;
-(void)setDelegate:(id<LOMDeviceControllerRequestDelegate>)arg1 ;
-(NSObject*<OS_nw_listener>)listener;
-(void)setListener:(NSObject*<OS_nw_listener>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)attributes;
-(void)cancel;
-(void)setSuspended:(char)arg1 ;
-(char)suspended;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(char)activate;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)connections;
-(void)setConnections:(NSMutableSet *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(id)serialize;
-(void)acceptConnection:(id)arg1 ;
-(void)setConnectionCancellationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setListenerCancellationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)connectionCancellationGroup;
-(NSObject*<OS_dispatch_group>)listenerCancellationGroup;
-(void)terminateListener;
-(void)setSecOptions:(id)arg1 ;
-(void)terminateConnections:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

